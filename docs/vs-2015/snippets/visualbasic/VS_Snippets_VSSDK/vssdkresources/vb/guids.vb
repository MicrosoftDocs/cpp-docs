Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKResourcesPkgString As String = "584f9f63-dc14-4e2b-b6a0-b49fbfe319ff"
    Public Const guidVSSDKResourcesCmdSetString As String = "14188a41-71cc-4be6-b11f-730202eacbc8"

    Public Shared ReadOnly guidVSSDKResourcesCmdSet As New Guid(guidVSSDKResourcesCmdSetString)
End Class