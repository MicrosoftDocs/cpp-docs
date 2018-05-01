Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidMenuCommandTestPkgString As String = "b39b4329-5d69-42fd-acb2-2fba117a4852"
    Public Const guidMenuCommandTestCmdSetString As String = "5e3b2b63-a999-419b-92f8-d2a7fec04159"

    Public Shared ReadOnly guidMenuCommandTestCmdSet As New Guid(guidMenuCommandTestCmdSetString)
End Class