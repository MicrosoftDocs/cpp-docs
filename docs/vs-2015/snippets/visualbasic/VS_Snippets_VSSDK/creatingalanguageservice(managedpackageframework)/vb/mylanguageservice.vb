'Copyright (c) Microsoft Corporation. All rights reserved.
'<Snippet1>
Imports Microsoft.VisualStudio
Imports Microsoft.VisualStudio.Package
Imports Microsoft.VisualStudio.TextManager.Interop
Imports Microsoft.VisualStudio.OLE.Interop
'</Snippet1>

Namespace Microsoft.MyLanguagePackage
    '<Snippet2>
	Friend Class MyLanguageService
		Inherits LanguageService
        '</Snippet2>

		Public Overrides Function GetFormatFilterList() As String
			Throw New NotImplementedException()
		End Function

		Public Overrides Function GetLanguagePreferences() As LanguagePreferences
			Throw New NotImplementedException()
		End Function

		Public Overrides Function GetScanner(ByVal buffer As IVsTextLines) As IScanner
			Throw New NotImplementedException()
		End Function

		Public Overrides ReadOnly Property Name() As String
			Get
				Throw New NotImplementedException()
			End Get
		End Property

		Public Overrides Function ParseSource(ByVal req As ParseRequest) As AuthoringScope
			Throw New NotImplementedException()
		End Function
	End Class
End Namespace
