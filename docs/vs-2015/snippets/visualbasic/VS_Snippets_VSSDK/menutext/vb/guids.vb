Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidMenuTextPkgString As String = "092eefe9-d7de-4281-9965-db64580fb157"
    Public Const guidMenuTextCmdSetString As String = "c369d294-d41f-450e-bef7-7571532014a1"

    Public Shared ReadOnly guidMenuTextCmdSet As New Guid(guidMenuTextCmdSetString)
End Class