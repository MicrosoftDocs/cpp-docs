Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKRegisterServicePkgString As String = "659babd1-47e3-4e54-8cc4-63fa0b2054f3"
    Public Const guidVSSDKRegisterServiceCmdSetString As String = "24f6ff11-7fb8-498b-824e-67d958300ccc"

    Public Shared ReadOnly guidVSSDKRegisterServiceCmdSet As New Guid(guidVSSDKRegisterServiceCmdSetString)
End Class