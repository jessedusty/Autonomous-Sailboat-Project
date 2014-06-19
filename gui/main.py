#!/usr/bin/env python
import MainFrame, wx

#############################
###   The main wx App

class NatGeoApp(wx.App):
  '''Main National Geographic application class'''
  def __init__(self):
    '''Constructor.'''
    wx.App.__init__(self)


  def OnInit(self):
    '''Sets everything up'''
    # set up the main frame of the app
    self.SetAppName('National Geographic Desktop Background')
    self.mainframe = MainFrame.MainFrame()
    self.mainframe.dlg.Show()
    return True


#############################
###   Main startup code

app = NatGeoApp()
app.MainLoop()
