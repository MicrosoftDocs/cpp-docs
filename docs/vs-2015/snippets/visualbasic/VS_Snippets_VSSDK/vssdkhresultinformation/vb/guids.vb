Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKHRESULTInformationPkgString As String = "95a9efa7-bac5-42ad-bd07-c0081a5f1fe6"
    Public Const guidVSSDKHRESULTInformationCmdSetString As String = "c658e217-261d-4fa1-8917-78e18466db16"

    Public Shared ReadOnly guidVSSDKHRESULTInformationCmdSet As New Guid(guidVSSDKHRESULTInformationCmdSetString)
End Class