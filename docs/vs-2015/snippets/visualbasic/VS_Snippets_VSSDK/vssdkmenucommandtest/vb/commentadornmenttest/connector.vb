'<Snippet10>
Imports System.ComponentModel.Composition
Imports Microsoft.VisualStudio.Text.Editor
Imports Microsoft.VisualStudio.Utilities
'</Snippet10>

'<Snippet11>
<Export(GetType(IWpfTextViewCreationListener)), ContentType("text"), TextViewRole(PredefinedTextViewRoles.Document)>
Public NotInheritable Class Connector
    Implements IWpfTextViewCreationListener
    '</Snippet11>

    '<Snippet12>
    Public Sub TextViewCreated(ByVal textView As IWpfTextView) Implements IWpfTextViewCreationListener.TextViewCreated
        CommentAdornmentManager.Create(textView)
    End Sub
    '</Snippet12>

    '<Snippet13>
    Public Shared Sub Execute(ByVal host As IWpfTextViewHost)
        Dim view As IWpfTextView = host.TextView
        'Add a comment on the selected text.
        If Not view.Selection.IsEmpty Then
            'Get the provider for the comment adornments in the property bag of the view.
            Dim provider As CommentAdornmentProvider = view.Properties.GetProperty(Of CommentAdornmentProvider)(GetType(CommentAdornmentProvider))

            'Add some arbitrary author and comment text.
            Dim author As String = System.Security.Principal.WindowsIdentity.GetCurrent().Name
            Dim comment As String = "Four score...."

            'Add the comment adornment using the provider.
            provider.Add(view.Selection.SelectedSpans(0), author, comment)
        End If
    End Sub
    '</Snippet13>

    '<Snippet14>
    <Export(GetType(AdornmentLayerDefinition)), Name("CommentAdornmentLayer"), Order(After:=PredefinedAdornmentLayers.Selection, Before:=PredefinedAdornmentLayers.Text)>
    Public commentLayerDefinition As AdornmentLayerDefinition
    '</Snippet14>
End Class