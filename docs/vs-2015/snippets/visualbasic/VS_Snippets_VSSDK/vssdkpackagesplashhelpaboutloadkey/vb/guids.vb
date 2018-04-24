Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKPackageSplashHelpAboutLoadKeyPkgString As String = "170e19fe-9cce-433d-b333-a0e29ee093ee"
    Public Const guidVSSDKPackageSplashHelpAboutLoadKeyCmdSetString As String = "285cea83-183a-460e-91c4-4b8e3b73c892"

    Public Shared ReadOnly guidVSSDKPackageSplashHelpAboutLoadKeyCmdSet As New Guid(guidVSSDKPackageSplashHelpAboutLoadKeyCmdSetString)
End Class