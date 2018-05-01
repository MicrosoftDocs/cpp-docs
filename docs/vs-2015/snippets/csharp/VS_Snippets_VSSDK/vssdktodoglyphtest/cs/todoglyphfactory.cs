//<Snippet1>
using System.ComponentModel.Composition;
using System.Windows;
using System.Windows.Shapes;
using System.Windows.Media;
using System.Windows.Controls;
using Microsoft.VisualStudio.Text;
using Microsoft.VisualStudio.Text.Editor;
using Microsoft.VisualStudio.Text.Formatting;
using Microsoft.VisualStudio.Text.Tagging;
using Microsoft.VisualStudio.Utilities;
//</Snippet1>

//<Snippet2>
internal class TodoGlyphFactory : IGlyphFactory
//</Snippet2>
{
    //<Snippet3>
    const double m_glyphSize = 16.0;
    //</Snippet3>

    //<Snippet4>
    public UIElement GenerateGlyph(IWpfTextViewLine line, IGlyphTag tag)
    {
        // Ensure we can draw a glyph for this marker.
        if (tag == null || !(tag is TodoTag))
        {
            return null;
        }

        System.Windows.Shapes.Ellipse ellipse = new Ellipse();
        ellipse.Fill = Brushes.LightBlue;
        ellipse.StrokeThickness = 2;
        ellipse.Stroke = Brushes.DarkBlue;
        ellipse.Height = m_glyphSize;
        ellipse.Width = m_glyphSize;

        return ellipse;
    }
    //</Snippet4>
}

//<Snippet5>
[Export(typeof(IGlyphFactoryProvider))]
[Name("TodoGlyph")]
[Order(After = "VsTextMarker")]
[ContentType("code")]
[TagType(typeof(TodoTag))]
internal sealed class TodoGlyphFactoryProvider : IGlyphFactoryProvider
//</Snippet5>
{
    //<Snippet6>
    public IGlyphFactory GetGlyphFactory(IWpfTextView view, IWpfTextViewMargin margin)
    {
        return new TodoGlyphFactory();
    }
    //</Snippet6>
}