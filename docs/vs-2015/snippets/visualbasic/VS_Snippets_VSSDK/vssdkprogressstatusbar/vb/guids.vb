Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKProgressStatusBarPkgString As String = "4483bd48-7110-4ce2-a3e7-f68b158fb22f"
    Public Const guidVSSDKProgressStatusBarCmdSetString As String = "e9641950-5084-4add-9a30-6359787753df"

    Public Shared ReadOnly guidVSSDKProgressStatusBarCmdSet As New Guid(guidVSSDKProgressStatusBarCmdSetString)
End Class