Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidItemConfigurationPkgString As String = "44e79ace-9ee5-493b-a9d2-fdc63c9878af"
    Public Const guidItemConfigurationCmdSetString As String = "b2e08590-2acf-4124-9580-d710d99aa896"

    Public Shared ReadOnly guidItemConfigurationCmdSet As New Guid(guidItemConfigurationCmdSetString)
End Class