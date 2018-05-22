Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKDesignerStatusBarPkgString As String = "825da4a9-45b6-4cd2-a043-c6edddfb1c62"
    Public Const guidVSSDKDesignerStatusBarCmdSetString As String = "d0b75f09-854f-4892-867d-c7147572cabf"

    Public Shared ReadOnly guidVSSDKDesignerStatusBarCmdSet As New Guid(guidVSSDKDesignerStatusBarCmdSetString)
End Class