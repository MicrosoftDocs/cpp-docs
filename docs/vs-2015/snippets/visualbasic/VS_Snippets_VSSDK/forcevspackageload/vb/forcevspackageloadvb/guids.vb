Imports System

Class GuidList
    Private Sub New()
    End Sub

    Public Const guidForceVSPackageLoadVBPkgString As String = "1f4802c0-1768-461b-91a0-bd0a83cb8e99"
    Public Const guidForceVSPackageLoadVBCmdSetString As String = "823a1c4b-c678-4ecb-8e7b-d5df7a52d0ed"

    Public Shared ReadOnly guidForceVSPackageLoadVBCmdSet As New Guid(guidForceVSPackageLoadVBCmdSetString)
End Class