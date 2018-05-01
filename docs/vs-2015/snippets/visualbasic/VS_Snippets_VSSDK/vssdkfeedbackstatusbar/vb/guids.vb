Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKFeedbackStatusBarPkgString As String = "ba5bd483-9f5e-48ef-ae2f-d457051fb502"
    Public Const guidVSSDKFeedbackStatusBarCmdSetString As String = "faffd251-7bc3-4017-991b-6b7d6b30b834"

    Public Shared ReadOnly guidVSSDKFeedbackStatusBarCmdSet As New Guid(guidVSSDKFeedbackStatusBarCmdSetString)
End Class