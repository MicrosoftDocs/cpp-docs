Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKAnimationStatusBarPkgString As String = "2f649bd4-fa93-42f1-9b75-cc312a3ee8cd"
    Public Const guidVSSDKAnimationStatusBarCmdSetString As String = "827528d7-3ceb-4974-92b9-d26848bb3338"

    Public Shared ReadOnly guidVSSDKAnimationStatusBarCmdSet As New Guid(guidVSSDKAnimationStatusBarCmdSetString)
End Class