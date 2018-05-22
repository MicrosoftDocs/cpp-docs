'-----------------------------------------------------------------------------
' Copyright (c) Microsoft Corporation.  All rights reserved.
'-----------------------------------------------------------------------------
' Guids.vb
' MUST match guids.h

Namespace Microsoft.SolutionToolbar
	Friend NotInheritable Class GuidList
		Public Const guidSolutionToolbarPkgString As String = "67eeb039-3775-45ce-aeb5-b2f5c63ef529"
		Public Const guidSolutionToolbarCmdSetString As String = "fc29ba47-6498-4fb8-bea7-88c7092df977"

		Public Shared ReadOnly guidSolutionToolbarCmdSet As New Guid(guidSolutionToolbarCmdSetString)
	End Class
End Namespace