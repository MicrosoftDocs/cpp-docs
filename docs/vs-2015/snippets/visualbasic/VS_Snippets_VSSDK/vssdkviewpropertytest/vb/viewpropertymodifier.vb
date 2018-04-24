'<Snippet1>
Imports System
Imports System.Collections
Imports System.Windows
Imports System.Windows.Media
Imports System.ComponentModel.Composition
Imports Microsoft.VisualStudio.Text.Classification
Imports Microsoft.VisualStudio.Text.Editor
Imports Microsoft.VisualStudio.Utilities
'</Snippet1>

'<Snippet2>
<Export(GetType(IWpfTextViewCreationListener)), ContentType("text"), TextViewRole(PredefinedTextViewRoles.Document)>
Friend Class TestViewCreationListener
    Implements IWpfTextViewCreationListener
    '</Snippet2>

    '<Snippet3>
    <Import()>
    Friend FormatMapService As IEditorFormatMapService = Nothing
    '</Snippet3>

    '<Snippet4>
    Public Sub TextViewCreated(ByVal textView As IWpfTextView) Implements IWpfTextViewCreationListener.TextViewCreated

        Dim formatMap As IEditorFormatMap = FormatMapService.GetEditorFormatMap(textView)

        Dim regularCaretProperties As ResourceDictionary = formatMap.GetProperties("Caret")
        Dim overwriteCaretProperties As ResourceDictionary = formatMap.GetProperties("Overwrite Caret")
        Dim indicatorMargin As ResourceDictionary = formatMap.GetProperties("Indicator Margin")
        Dim visibleWhitespace As ResourceDictionary = formatMap.GetProperties("Visible Whitespace")
        Dim selectedText As ResourceDictionary = formatMap.GetProperties("Selected Text")
        Dim inactiveSelectedText As ResourceDictionary = formatMap.GetProperties("Inactive Selected Text")

        formatMap.BeginBatchUpdate()

        regularCaretProperties(EditorFormatDefinition.ForegroundBrushId) = Brushes.Magenta
        formatMap.SetProperties("Caret", regularCaretProperties)

        overwriteCaretProperties(EditorFormatDefinition.ForegroundBrushId) = Brushes.Turquoise
        formatMap.SetProperties("Overwrite Caret", overwriteCaretProperties)

        indicatorMargin(EditorFormatDefinition.BackgroundColorId) = Colors.LightGreen
        formatMap.SetProperties("Indicator Margin", indicatorMargin)

        visibleWhitespace(EditorFormatDefinition.ForegroundColorId) = Colors.Red
        formatMap.SetProperties("Visible Whitespace", visibleWhitespace)

        selectedText(EditorFormatDefinition.BackgroundBrushId) = Brushes.LightPink
        formatMap.SetProperties("Selected Text", selectedText)

        inactiveSelectedText(EditorFormatDefinition.BackgroundBrushId) = Brushes.DeepPink
        formatMap.SetProperties("Inactive Selected Text", inactiveSelectedText)

        formatMap.EndBatchUpdate()
    End Sub
    '</Snippet4>
End Class