Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidGetGlobalServicePkgString As String = "069df2db-f83c-4f28-8c62-55f983cd8459"
    Public Const guidGetGlobalServiceCmdSetString As String = "efa2ccf8-ca34-4742-a6a2-016386170382"

    Public Shared ReadOnly guidGetGlobalServiceCmdSet As New Guid(guidGetGlobalServiceCmdSetString)
End Class