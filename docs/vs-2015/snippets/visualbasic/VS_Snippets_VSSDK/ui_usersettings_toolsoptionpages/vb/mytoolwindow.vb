Imports System
Imports System.Collections
Imports System.ComponentModel
Imports System.Drawing
Imports System.Data
Imports System.Windows.Forms
Imports System.Runtime.InteropServices
Imports Microsoft.VisualStudio.Shell.Interop
Imports Microsoft.VisualStudio.Shell

''' <summary>
''' This class implements the tool window exposed by this package and hosts a user control.
'''
''' In Visual Studio tool windows are composed of a frame (implemented by the shell) and a pane, 
''' usually implemented by the package implementer.
'''
''' This class derives from the ToolWindowPane class provided from the MPF in order to use its 
''' implementation of the IVsWindowPane interface.
''' </summary>
<Guid("c40bb4fd-8f92-45a4-807b-3c4100074a38")> _
Public Class MyToolWindow
    Inherits ToolWindowPane
    ' This is the user control hosted by the tool window; it is exposed to the base class 
    ' using the Window property. Note that, even if this class implements IDispose, we are
    ' not calling Dispose on this object. This is because ToolWindowPane calls Dispose on 
    ' the object returned by the Window property.
    Private control As MyControl

    ''' <summary>
    ''' Standard constructor for the tool window.
    ''' </summary>
    Public Sub New()
        MyBase.New(Nothing)
        ' Set the window title reading it from the resources.
        Me.Caption = Resources.ToolWindowTitle
        ' Set the image that will appear on the tab of the window frame
        ' when docked with an other window
        ' The resource ID correspond to the one defined in the resx file
        ' while the Index is the offset in the bitmap strip. Each image in
        ' the strip being 16x16.
        Me.BitmapResourceID = 301
        Me.BitmapIndex = 1

        control = New MyControl()
    End Sub

    ''' <summary>
    ''' This property returns the handle to the user control that should
    ''' be hosted in the Tool Window.
    ''' </summary>
    Public Overrides ReadOnly Property Window() As IWin32Window
        Get
            Return CType(control, IWin32Window)
        End Get
    End Property

End Class