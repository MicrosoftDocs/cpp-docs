' Guids.cs
' MUST match guids.h

Namespace Microsoft.MyLanguagePackage
	Friend NotInheritable Class GuidList
		Public Const guidMyLanguagePackagePkgString As String = "a8a7fe2a-ab36-4340-9136-71618b1f0218"
		Public Const guidMyLanguagePackageCmdSetString As String = "13a7a8ba-1e4e-4097-9c01-2ba22a9f210c"

		Public Shared ReadOnly guidMyLanguagePackageCmdSet As New Guid(guidMyLanguagePackageCmdSetString)
	End Class
End Namespace