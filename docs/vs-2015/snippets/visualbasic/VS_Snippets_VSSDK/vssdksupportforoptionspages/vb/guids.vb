Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKSupportForOptionsPagesPkgString As String = "cb163a0c-a6cd-4e3b-8c3a-f5aaf6ac564c"
    Public Const guidVSSDKSupportForOptionsPagesCmdSetString As String = "2701c6ee-8997-4358-b048-b9fad370204d"

    Public Shared ReadOnly guidVSSDKSupportForOptionsPagesCmdSet As New Guid(guidVSSDKSupportForOptionsPagesCmdSetString)
End Class