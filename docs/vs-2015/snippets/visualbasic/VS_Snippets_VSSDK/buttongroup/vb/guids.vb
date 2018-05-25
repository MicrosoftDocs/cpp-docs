'-----------------------------------------------------------------------------
' Copyright (c) Microsoft Corporation.  All rights reserved.
'-----------------------------------------------------------------------------
' Guids.vb
' MUST match guids.h

Namespace Microsoft.Create_HandleCommands
	Friend NotInheritable Class GuidList
		Public Const guidCreate_HandleCommandsPkgString As String = "2813fc1f-3b2c-4bb5-a166-c35d38508171"
		Public Const guidCreate_HandleCommandsCmdSetString As String = "a355053a-8a80-4142-98bc-9a7b0e14eee2"

		Public Shared ReadOnly guidButtonGroupCmdSet As New Guid(guidCreate_HandleCommandsCmdSetString)
		Public Shared ReadOnly guidMenuTextCmdSet As New Guid(guidCreate_HandleCommandsCmdSetString)

	End Class
End Namespace