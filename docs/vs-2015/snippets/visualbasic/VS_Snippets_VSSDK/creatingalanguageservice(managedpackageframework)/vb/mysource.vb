'Copyright (c) Microsoft Corporation. All rights reserved.
'<Snippet4>
Imports Microsoft.VisualStudio
Imports Microsoft.VisualStudio.Package
Imports Microsoft.VisualStudio.TextManager.Interop
Imports Microsoft.VisualStudio.OLE.Interop
'</Snippet4>

'<Snippet5>
Namespace MyLanguagePackage
	Friend Class MySource
		Inherits Source
        Public Sub New(ByVal service As LanguageService, ByVal textLines As IVsTextLines,
                       ByVal colorizer As Colorizer)
            MyBase.New(service, textLines, colorizer)
        End Sub
	End Class
End Namespace
'</Snippet5>