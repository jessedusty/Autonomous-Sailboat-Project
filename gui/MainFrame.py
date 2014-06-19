#!/usr/bin/env python
import os, os.path, sys, wx
from wx import xrc

########################################
###   Figure out the app directory and
###   set up the dialogxrc global

APPDIR = sys.path[0]
if os.path.isfile(APPDIR):  #py2exe/py2app
  APPDIR = os.path.dirname(APPDIR)
dialogxrc = None


######################################
###   The main frame of the app

class MainFrame:
  def __init__(self):
    '''Constructor'''
    global dialogxrc
    # load the dialog
    dialogxrc = xrc.XmlResource(os.path.join(APPDIR, 'gui.xrc'))
    # note: sometimes doing the os.path.join with APPDIR seems to kill xrc.
    #       I have no idea why but try without it if you're having problems.
    self.dlg = dialogxrc.LoadDialog(None, 'main window')

    # # customize widgets
    # self.getControl('deleteyes').SetValue(True)
    # self.getControl('textwidth').SetValue('100')
    # self.getControl('size').SetSelection(0)

    # # events
    # self.dlg.Bind(wx.EVT_CLOSE, self.onClose)
    # self.dlg.Bind(wx.EVT_IDLE, self.onIdle)
    # self.getControl('closeButton').Bind(wx.EVT_BUTTON, self.onClose)
    # self.getControl('exitButton').Bind(wx.EVT_BUTTON, self.onExit)
    # self.getControl('refreshButton').Bind(wx.EVT_BUTTON, self.onRefresh)
    # self.getControl('savetoButton').Bind(wx.EVT_BUTTON, self.onSaveToButton)
    # # here's an example of a menu item, although we don't have any in this app
    # # self.dlg.Bind(wx.EVT_MENU, self.eventHandlerMethod, self.getControl('menuItemName'))

    self.getControl('TackButton').Bind(wx.EVT_BUTTON, self.tackNow)
    self.getControl('GybeButton').Bind(wx.EVT_BUTTON, self.gybeNow)


  def getControl(self, xmlid):
    '''Retrieves the given control (within a dialog) by its xmlid'''
    control = self.dlg.FindWindowById(xrc.XRCID(xmlid))
    if control == None and self.dlg.GetMenuBar() != None:  # see if on the menubar
      control = self.dlg.GetMenuBar().FindItemById(xrc.XRCID(xmlid))
    assert control != None, 'Programming error: a control with xml id ' + xmlid + ' was not found.'
    return control


  def onIdle(self, event):
    '''Responds to idle time in the system'''
    # when the timer says it's time, we do the actual downloading in the main thread (wx doesn't work well in secondary threads)

  def tackNow(self, event):
    print "Tacking..."

  def gybeNow(self, event):
    print "Gybing..."

  def onClose(self, event):
    '''Closes the application'''
    dlg = wx.MessageDialog(self.dlg, "Exit the program?", "Exit", wx.YES_NO | wx.ICON_QUESTION)
    if dlg.ShowModal() == wx.ID_YES:
      self.dlg.Destroy()  # frame
    dlg.Destroy()


  def onExit(self, event):
    '''Exit the app'''
    self.Close(True)


  def onSaveToButton(self, event):
    '''Responds to the 'Browse...' button'''
    # saveto = wx.DirSelector('Please select the directory to save to:', self.getControl('saveto').GetValue())
    # if saveto:
    #   self.getControl('saveto').SetValue(saveto)


  def onRefresh(self, event):
    '''Handles the refresh button'''
    # print "I should be refreshing the picture now, but the app logic is omitted in this tutorial"