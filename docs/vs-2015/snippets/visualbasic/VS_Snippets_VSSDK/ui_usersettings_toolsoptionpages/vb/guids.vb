Imports System

Class GuidList
    Shared Sub New()
    End Sub
    Public Const guidPkgString As String = "2adbbde8-b10a-415f-9747-97559ef3c7cd"
    Public Const guidCmdSetString As String = "ffc4433e-7ebd-4a6b-ac74-0d9f33d0d572"

    Public ReadOnly guidCmdSet As New Guid(guidCmdSetString)
End Class
