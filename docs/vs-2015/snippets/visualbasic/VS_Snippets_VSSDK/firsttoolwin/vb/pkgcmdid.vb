' PkgCmdID.vb
Imports System

Class PkgCmdIDList
    Private Sub New()
    End Sub

        Public Const cmdidWindowsMedia As UInteger = &H100
    Public Const cmdidWindowsMediaWin As UInteger = &H101

    '<snippet11>
    Public Const cmdidWindowsMediaOpen As Integer = &H132
    Public Const cmdidWindowsMediaFilename As Integer = &H133
    Public Const cmdidWindowsMediaFilenameGetList As Integer = &H134
    Public Const ToolbarID As Integer = &H1000
    '</snippet11>

    Public Const cmdidMyCommand As Integer = &H139

End Class