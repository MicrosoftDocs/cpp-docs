
'<snippet52>
Imports System
Imports System.Collections.Generic
Imports System.Linq
Imports System.Text
Imports Microsoft.VisualStudio.Shell.Interop
Imports System.ComponentModel.Design
Imports System.Security.Permissions
'</snippet52>

'<snippet53>
Public NotInheritable Class ToolWindowEvents
    Implements IVsWindowFrameNotify3
'</snippet53>

    '<snippet56>
    Private package As FirstToolWinPackage
    Public Sub New(ByVal apackage As FirstToolWinPackage)
        package = apackage
    End Sub
    '</snippet56>

    Public Function OnClose(ByRef pgrfSaveOptions As UInteger) As Integer Implements VisualStudio.Shell.Interop.IVsWindowFrameNotify3.OnClose
        Return Microsoft.VisualStudio.VSConstants.S_OK
    End Function

    Public Function OnDockableChange(ByVal fDockable As Integer, ByVal x As Integer, ByVal y As Integer, ByVal w As Integer, ByVal h As Integer) As Integer Implements VisualStudio.Shell.Interop.IVsWindowFrameNotify3.OnDockableChange
        Return Microsoft.VisualStudio.VSConstants.S_OK
    End Function

    Public Function OnMove(ByVal x As Integer, ByVal y As Integer, ByVal w As Integer, ByVal h As Integer) As Integer Implements VisualStudio.Shell.Interop.IVsWindowFrameNotify3.OnMove
        Return Microsoft.VisualStudio.VSConstants.S_OK
    End Function

    '<snippet54>
    Public Function OnShow(ByVal fShow As Integer) As Integer Implements VisualStudio.Shell.Interop.IVsWindowFrameNotify3.OnShow
        If Not fShow = __FRAMESHOW.FRAMESHOW_WinHidden Then
            package.toolMenuItem1.visible = True
        End If
        Return Microsoft.VisualStudio.VSConstants.S_OK
    End Function
    '</snippet54>

    Public Function OnSize(ByVal x As Integer, ByVal y As Integer, ByVal w As Integer, ByVal h As Integer) As Integer Implements VisualStudio.Shell.Interop.IVsWindowFrameNotify3.OnSize
        '<snippet55>
        Return Microsoft.VisualStudio.VSConstants.S_OK
        '</snippet55>
    End Function
End Class
