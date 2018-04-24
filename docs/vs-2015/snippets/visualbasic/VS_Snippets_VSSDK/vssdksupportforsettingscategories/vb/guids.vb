Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidVSSDKSupportForSettingsCategoriesPkgString As String = "9f31b42d-2206-45c8-bb31-a16117dca29f"
    Public Const guidVSSDKSupportForSettingsCategoriesCmdSetString As String = "565d3359-29b9-4319-86c9-99574711e47d"

    Public Shared ReadOnly guidVSSDKSupportForSettingsCategoriesCmdSet As New Guid(guidVSSDKSupportForSettingsCategoriesCmdSetString)
End Class