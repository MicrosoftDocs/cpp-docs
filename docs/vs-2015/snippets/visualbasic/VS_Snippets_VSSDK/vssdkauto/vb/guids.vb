Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKAutoPkgString As String = "50060515-f473-4298-a61a-97409968e379"
    Public Const guidVSSDKAutoCmdSetString As String = "c4aa6332-3b11-41da-bb05-4d3a7243e9c8"

    Public Shared ReadOnly guidVSSDKAutoCmdSet As New Guid(guidVSSDKAutoCmdSetString)
End Class