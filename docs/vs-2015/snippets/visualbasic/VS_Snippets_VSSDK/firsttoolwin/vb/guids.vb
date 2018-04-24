Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidFirstToolWinPkgString As String = "0898d1f8-1a52-4206-9922-883e660b4885"
    Public Const guidFirstToolWinCmdSetString As String = "c63cc5f6-c720-4530-9de0-cd8c6e00b6b5"
    Public Const guidToolWindowPersistanceString As String = "efc69a2c-90f6-4dc9-8b74-4f2e20abcd43"

    Public Shared ReadOnly guidFirstToolWinCmdSet As New Guid(guidFirstToolWinCmdSetString)
End Class