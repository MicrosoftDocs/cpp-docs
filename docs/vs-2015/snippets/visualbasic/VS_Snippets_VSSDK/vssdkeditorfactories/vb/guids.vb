Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKEditorFactoriesPkgString As String = "af4bbbf7-1cfd-46d2-9ee7-d1dc7777eff3"
    Public Const guidVSSDKEditorFactoriesCmdSetString As String = "2bb0d12a-25cf-406f-be1a-1a362703e4a4"
    Public Const guidEditorFactory As String = "2aa3e12a-262a-126d-c32f-2b453321f0d2"

    Public Shared ReadOnly guidVSSDKEditorFactoriesCmdSet As New Guid(guidVSSDKEditorFactoriesCmdSetString)
End Class