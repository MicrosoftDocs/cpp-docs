'<Snippet1>
Imports System.ComponentModel.Composition
Imports System.Windows
Imports System.Windows.Shapes
Imports System.Windows.Media
Imports System.Windows.Controls
Imports Microsoft.VisualStudio.Text
Imports Microsoft.VisualStudio.Text.Editor
Imports Microsoft.VisualStudio.Text.Formatting
Imports Microsoft.VisualStudio.Text.Tagging
Imports Microsoft.VisualStudio.Utilities
'</Snippet1>

'<Snippet2>
Friend Class TodoGlyphFactory
    Implements IGlyphFactory
    '</Snippet2>

    '<Snippet3>
    Const m_glyphSize As Double = 16.0
    '</Snippet3>

    '<Snippet4>
    Public Function GenerateGlyph(ByVal line As IWpfTextViewLine, ByVal tag As IGlyphTag) As System.Windows.UIElement Implements IGlyphFactory.GenerateGlyph
        ' Ensure we can draw a glyph for this marker.
        If tag Is Nothing OrElse Not (TypeOf tag Is TodoTag) Then
            Return Nothing
        End If

        Dim ellipse As Ellipse = New Ellipse()
        ellipse.Fill = Brushes.LightBlue
        ellipse.StrokeThickness = 2
        ellipse.Stroke = Brushes.DarkBlue
        ellipse.Height = m_glyphSize
        ellipse.Width = m_glyphSize

        Return ellipse

    End Function
    '</Snippet4>

    '<Snippet5>
    <Export(GetType(IGlyphFactoryProvider)), Name("TodoGlyph"), Order(After:="VsTextMarker"), ContentType("code"), TagType(GetType(TodoTag))>
    Friend NotInheritable Class TodoGlyphFactoryProvider
        Implements IGlyphFactoryProvider
        '</Snippet5>

        '<Snippet6>
        Public Function GetGlyphFactory(ByVal view As IWpfTextView, ByVal margin As IWpfTextViewMargin) As IGlyphFactory Implements IGlyphFactoryProvider.GetGlyphFactory
            Return New TodoGlyphFactory()
        End Function
        '</Snippet6>
    End Class
End Class