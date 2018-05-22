Imports System
Imports System.Collections
Imports System.ComponentModel
Imports System.Drawing
Imports System.Data
Imports System.Windows
Imports System.Runtime.InteropServices
Imports Microsoft.VisualStudio.Shell.Interop
Imports Microsoft.VisualStudio.Shell
'<snippet21>
Imports System.ComponentModel.Design
'</snippet21>

''' <summary>
''' This class implements the tool window exposed by this package and hosts a user control.
'''
''' In Visual Studio tool windows are composed of a frame (implemented by the shell) and a pane, 
''' usually implemented by the package implementer.
'''
''' This class derives from the ToolWindowPane class provided from the MPF in order to use its 
''' implementation of the IVsUIElementPane interface.
''' </summary>
<Guid("efc69a2c-90f6-4dc9-8b74-4f2e20abcd43")> _
Public Class MyToolWindow
    Inherits ToolWindowPane

    '<snippet24>
    Dim control As MyControl
    Dim comboValue As String
    '</snippet24>

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

        'This is the user control hosted by the tool window; Note that, even if this class implements IDisposable,
        'we are not calling Dispose on this object. This is because ToolWindowPane calls Dispose on 
        'the object returned by the Content property.

        '<snippet22>
        ' Create the toolbar. 
        Me.ToolBar = New CommandID(GuidList.guidFirstToolWinCmdSet, PkgCmdIDList.cmdidWindowsMediaWin)
        Me.ToolBarLocation = CInt(VSTWT_LOCATION.VSTWT_TOP)

        ' Create the handlers for the toolbar commands. 
        Dim mcs As OleMenuCommandService = TryCast(GetService(GetType(IMenuCommandService)), OleMenuCommandService)
        If mcs IsNot Nothing Then
            Dim toolbarbtnCmdID As CommandID = New CommandID(GuidList.guidFirstToolWinCmdSet, PkgCmdIDList.cmdidMyCommand)
            Dim menuItem As MenuCommand = New MenuCommand(New EventHandler(AddressOf ButtonHandler), toolbarbtnCmdID)
            mcs.AddCommand(menuItem)

            ' Command for the combo itself 
            Dim menuMyDynamicComboCommandID As CommandID = New CommandID(GuidList.guidFirstToolWinCmdSet, CInt(PkgCmdIDList.cmdidMyCommand))
            Dim menuMyDynamicComboCommand As OleMenuCommand = New OleMenuCommand(New EventHandler(AddressOf ComboHandler), menuMyDynamicComboCommandID)
            mcs.AddCommand(menuMyDynamicComboCommand)

            ' Command for the combo's list 
            Dim comboListCmdID As CommandID = New CommandID(GuidList.guidFirstToolWinCmdSet, PkgCmdIDList.cmdidWindowsMediaWin)
            Dim comboMenuList As OleMenuCommand = New OleMenuCommand(New EventHandler(AddressOf ComboListHandler), comboListCmdID)
            mcs.AddCommand(comboMenuList)
        End If
        '</snippet22>

        Me.Content = New MyControl()
    End Sub

    '<snippet23>
    Private Sub ButtonHandler(ByVal sender As Object, ByVal arguments As EventArgs)
        If comboValue IsNot Nothing AndAlso comboValue.Trim().Length <> 0 Then
            LoadFile(comboValue)
        End If
    End Sub

    Private Sub ComboHandler(ByVal sender As Object, ByVal arguments As EventArgs)
        Dim eventArgs As OleMenuCmdEventArgs = TryCast(arguments, OleMenuCmdEventArgs)
        If eventArgs IsNot Nothing Then
            Dim output As IntPtr = eventArgs.OutValue
            Dim input As Object = eventArgs.InValue
            If input IsNot Nothing Then
                comboValue = input.ToString()
            ElseIf output <> IntPtr.Zero Then
                Marshal.GetNativeVariantForObject(comboValue, output)
            End If
        End If
    End Sub

    Public Sub LoadFile(ByVal comboValue As String)
        control.MediaPlayer.Source = New Uri(comboValue)
    End Sub

    Private Sub ComboListHandler(ByVal sender As Object, ByVal arguments As EventArgs)
    End Sub
    '</snippet23>

    '<snippet60>
    Public Overrides Sub OnToolWindowCreated()
        MyBase.OnToolWindowCreated()

        Dim handler As FirstToolWinPackage = CType( _
            Me.Package, FirstToolWinPackage)
        CType(Me.Frame, IVsWindowFrame).SetProperty( _
            CInt(__VSFPROPID.VSFPROPID_ViewHelper), handler)
    End Sub
    '</snippet60>

End Class
