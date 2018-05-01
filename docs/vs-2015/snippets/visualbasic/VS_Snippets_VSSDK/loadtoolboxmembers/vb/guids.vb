Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidLoadToolboxMembersPkgString As String = "4a155d1d-a91d-474c-9f63-764d414b943e"
    Public Const guidLoadToolboxMembersCmdSetString As String = "a5005df3-af56-44bf-8072-54b8c35cfe07"

    Public Shared ReadOnly guidLoadToolboxMembersCmdSet As New Guid(guidLoadToolboxMembersCmdSetString)
End Class