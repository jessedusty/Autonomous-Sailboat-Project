This is a very simple Spin to C/C++ converter. There still some of the
Spin language that it does not handle, but it can deal with most
objects and constructs that are commonly encountered. 

This version (1.05) includes some more functionality. A simple "Hello,
world" program that compiles and runs is given in the Demo directory,
as are some floating point samples in Demo/Float.

INSTALLATION
============
To install in Windows, just copy spin2cpp.exe to wherever your
propeller-elf-gcc.exe file is installed.

USAGE
=====
spin2cpp is a command line tool. To use it, just give the name of the
.spin file it should convert, e.g:

  spin2cpp test.spin

This will produce a header file test.h and some C++ code test.cpp. It
will also automatically translate any .spin files included as objects,
and produce .cpp and .h files for them as well.

If this is a top level spin object and you plan to compile it, you may
want spin2cpp to automatically compile the object and all
dependencies:

  spin2cpp --elf -O test.spin

This will create an a.out file that is ready to run with
propeller-load. You can also pass propgcc command line arguments
through to the C++ compiler, as long as you place them after
the --elf argument; for example:

  spin2cpp --elf -o test.elf -Os -DFOO=1 test.spin

creates the output file "test.elf" instead of "a.out", and uses
optimization level -Os instead of no optimization. It is strongly
recommended to pass some form of optimization to gcc.

If you just want to convert a top level object to C++ (or C), you may
want spin2cpp to automatically insert a main() function and a call to
the first method of the object. To do this, give spin2cpp the --main
option.


Examples
--------
spin2cpp is a command line tool, so the examples below are for a CLI
and assume that the appropriate C compilers are in your PATH.

(1) To compile the Count.spin demo with propeller-elf-gcc in
C++ mode, do:

spin2cpp --elf -O -o Count.elf Count.spin

This produces an executable file Count.elf which may be loaded with
propeller-load.

(2) To compile the Count.spin demo with Catalina, do:

spin2cpp --main --ccode --files Count.spin

spin2cpp will print:
Count.c
FullDuplexSerial.c

showing you the files that it produced. Now you can run catalina:

catalina Count.c FullDuplexSerial.c -lc -C NO_HMI

This produces Count.binary, which may be downloaded and run as usual.


(3) To just convert a .spin file into a .c file:

spin2cpp --ccode F32.spin

This produces .c and .h files which can be compiled together
with your other C code.

(4) To convert the PASM portion of a .spin file into a GAS .S file:

spin2cpp --dat --gas FullDuplexSerial.spin

This produces a file FullDuplexSerial.S which contains the GAS syntax
translation of the PASM portion of FullDuplexSerial.spin. Beware that
--gas support is still experimental, and the output may need some
manual tweaking to make it correct.

See Demo/Makefile for more examples.

OPTIONS
=======
Spin2cpp accepts the following options:

--ccode
  Output static C code instead of C++. Note that in C mode only a
  single instance of an object may be active at a time; that is, code
  like:
    OBJ
       a: "FullDuplexSerial"
       b: "FullDuplexSerial"
  will not work, because "a" and "b" will both be using the same
  variables. This restriction applies only to C code, C++ code is able
  to use multiple objects without a problem.
 
--dat
  Output a binary blob of the DAT section only, similar to the
  bstc -c option; or, if --gas is given, output GAS assembly for
  the DAT section.

--elf
  Run the compiler and output a linked executable ELF file. Note that
  this option imples --main. Also note that after --elf you may
  specify options to be passed to PropGCC, such as -Os or -mxmmc.

--files
  Print a list of the .cpp (or .c) files that were produced by
  spin2cpp. Useful for tracking object dependencies.

--gas
  Output inline GAS assembly code instead of binary constants. If
  given with the --dat option, produces a .S file containing the
  translation of the PASM code in the file. In other cases, causes
  the DAT section to be compiled into a separate GCC section
  containing inline GAS code. This option is still experimental and
  may not always work correctly.

--main
  Automatically add a C or C++ main() function that will invoke the default
  Spin method. Use this on top level objects only. 

--nopre
  Skip the preprocessor. Normally spin2cpp runs a very simple
  preprocessor on the input.  The pre-processor understands
  #define (of simple macros, no parameters), #undef, #ifdef, #ifndef,
  #else, #elseifdef, #elseifndef, #endif, #include, #error,
  and #warning. Use of the preprocessor should not normally
  cause any issues, but it is still experimental.

-Dname=val
  Define a symbol for the preprocessor.

LIMITATIONS
===========

There are a number of Spin features that are not supported yet,
including:

_CLKMODE
CLKSET
COGINIT on a Spin method (PASM works)
_FREE
SPR
_STACK
_XINFREQ

There are probably many other features not supported yet!

The lexer and parser are different from the Parallax ones, so they may
well report errors on code the Parallax compiler accepts.

Catalina Issues
---------------
The C code support in spin2cpp is still in very early stages, and so
there are some spin features which are not supported in Catalina (they
do work in PropGCC because the latter supports some C++ extensions
even in C mode).

(1) The LOOKUP and LOOKDOWN functions in Spin do not work in Catalina
unless all the arguments are constant.

(2) The reverse operator will not work in Catalina.

I'm still working on fixing these issues.

C INTEROPERATION
===============

Variable Names
--------------
Spin is a case-insensitive language, which means that the strings
"str", "Str", "STR", and "sTr" all refer to the same variable. C++, on
the other hand, is case sensitive; all of those strings would be
different variables in C++.

In order to handle this in a consistent way, and to avoid any
conflicts with C++ keywords or library identifiers, spin2cpp
normalizes all Spin identifiers (variable and method names) so that
the first letter is upper case and all others are lower case. Thus,
for example, the spin file:

  VAR
    x, yy;
  PUB start
    return 0

will create a C++ class with variables "X"  and "Yy" and a function "Start".

The name of the class is taken from the file name. If the base part of
the file name contains more than one capital letter, or has one
capital letter but it is not the first, it is used as the class
name. If the file name is all lower case letters, then the class name
is produced by appending "Spin" to the base of the file name.

Examples:

File name:             C++ Class name:
FooBar.spin	       class FooBar
someFile.spin	       class someFile
foo99.spin	       class foo99
foo.spin	       class fooSpin

In C mode, all the functions have the object name prepended. So
for example in a file named FooBar.spin the "start"
function will be named "FooBar_Start" in the C code.


Annotations and Inline C code
-----------------------------
spin2cpp recognizes special comments called "annotations". Annotations
are Spin comments that start with {++ and end with }. The text between
annotations is passed through to the C++ compiler. This provides a way
to give extra semantic information beyond that available in Spin.

Variable Annotations
--------------------
Annotations may appear after variable declarations to associate additional
type specifiers with those variables; for example:

VAR
  long {++volatile} x

makes "x" a volatile variable in C.

The generated DAT block may similarly have type specifiers associated
with it by placing those after the DAT statement:

DAT {++volatile}

declares the whole DAT section to be volatile.

Code Annotations
----------------
Whole blocks of C/C++ code may be embedded between {++ and }. Make
sure the '{' and '}' characters are balanced in such code! This
feature is useful for adding additional methods that appear only in C,
or for overriding Spin versions of methods. At present, it is not
possible to override individual Spin methods; one has to disable all
Spin methods with the {++!nospin} directive (see below) and then write
replacements for all of them in the code annotations.


Directives
----------
Annotations which begin with the character '!' are special
directives for spin2cpp. The following special directives are
recognized:
   {++!nospin}: do not output any Spin methods
   {++!ccode}:  output C rather than C++ code


DEVELOPER NOTES
===============
There is a test suite in Test/; to run it do "make test" (this also
builds and runs a simple test program for the lexer). Some of the
tests need to run on the propeller board, so make sure one is plugged
in to a serial port and works with propeller-load (and that
propeller-load is on the path).

Parsing is done via a yacc file (spin.y), but lexing is done with a
hand crafted parser rather than using lex/flex. This is done to make
state dependence a little easier.

Mostly the parser builds an Abstract Syntax Tree (AST) which we then
walk to compile the .cpp and .h files. Each AST node contains a "kind"
(telling what type of node it is), some immediate data (such as an
integer or string), and left and right pointers. The left and right
pointers are NULL for leaf nodes. Lists are generally represented by
a series of nodes with kind=AST_LISTHOLDER (or similar), with the data
pointed to by ast->left and the rest of the list pointed to by
ast->right.

