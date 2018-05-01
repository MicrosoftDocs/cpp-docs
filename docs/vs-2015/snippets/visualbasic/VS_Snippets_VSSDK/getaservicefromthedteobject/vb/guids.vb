Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidGetAServiceFromTheDTEObjectPkgString As String = "b1b27b2b-d212-41a7-8a95-ab1b841d7737"
    Public Const guidGetAServiceFromTheDTEObjectCmdSetString As String = "6afd72d5-3c0b-494b-88bf-fc50560987fa"

    Public Shared ReadOnly guidGetAServiceFromTheDTEObjectCmdSet As New Guid(guidGetAServiceFromTheDTEObjectCmdSetString)
End Class