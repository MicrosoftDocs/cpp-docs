Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKSupportProjectConfigurationPropertiesPkgString As String = "dda07bce-3508-4b78-a2a9-1665a550346b"
    Public Const guidVSSDKSupportProjectConfigurationPropertiesCmdSetString As String = "bc96f4f3-12de-4647-b0e2-48f9cb8f81f6"

    Public Shared ReadOnly guidVSSDKSupportProjectConfigurationPropertiesCmdSet As New Guid(guidVSSDKSupportProjectConfigurationPropertiesCmdSetString)
End Class