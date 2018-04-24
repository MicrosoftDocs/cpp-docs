//<Snippet1>
using System;
using System.Collections.Generic;
using System.ComponentModel.Composition;
using System.Collections.ObjectModel;
using System.Windows.Media;
using Microsoft.VisualStudio.Language.Intellisense;
using Microsoft.VisualStudio.Text;
using Microsoft.VisualStudio.Text.Editor;
using Microsoft.VisualStudio.Text.Operations;
using Microsoft.VisualStudio.Text.Tagging;
using Microsoft.VisualStudio.Utilities;
//</Snippet1>

//<Snippet2>
internal class TestSmartTag : SmartTag
//</Snippet2>
{
    //<Snippet3>
    public TestSmartTag(ReadOnlyCollection<SmartTagActionSet> actionSets) :
        base(SmartTagType.Factoid, actionSets) { }
    //</Snippet3>
}

//<Snippet4>
internal class TestSmartTagger : ITagger<TestSmartTag>, IDisposable
//</Snippet4>
{
    //<Snippet5>
    private ITextBuffer m_buffer;
    private ITextView m_view;
    private TestSmartTaggerProvider m_provider;
    private bool m_disposed;
    //</Snippet5>

    //<Snippet6>
    public TestSmartTagger(ITextBuffer buffer, ITextView view, TestSmartTaggerProvider provider)
    {
        m_buffer = buffer;
        m_view = view;
        m_provider = provider;
        m_view.LayoutChanged += OnLayoutChanged;
    }
    //</Snippet6>

    //<Snippet7>
    public IEnumerable<ITagSpan<TestSmartTag>> GetTags(NormalizedSnapshotSpanCollection spans)
    {
        ITextSnapshot snapshot = m_buffer.CurrentSnapshot;
        if (snapshot.Length == 0)
            yield break; //don't do anything if the buffer is empty

        //set up the navigator
        ITextStructureNavigator navigator = m_provider.NavigatorService.GetTextStructureNavigator(m_buffer);

        foreach (var span in spans)
        {
            ITextCaret caret = m_view.Caret;
            SnapshotPoint point;

            if (caret.Position.BufferPosition > 0)
                point = caret.Position.BufferPosition - 1;
            else
                yield break;

            TextExtent extent = navigator.GetExtentOfWord(point);
            //don't display the tag if the extent has whitespace
            if (extent.IsSignificant)
                yield return new TagSpan<TestSmartTag>(extent.Span, new TestSmartTag(GetSmartTagActions(extent.Span)));
            else yield break;
        }
    }
    //</Snippet7>

    //<Snippet8>
    private ReadOnlyCollection<SmartTagActionSet> GetSmartTagActions(SnapshotSpan span)
    {
        List<SmartTagActionSet> actionSetList = new List<SmartTagActionSet>();
        List<ISmartTagAction> actionList = new List<ISmartTagAction>();

        ITrackingSpan trackingSpan = span.Snapshot.CreateTrackingSpan(span, SpanTrackingMode.EdgeInclusive);
        actionList.Add(new UpperCaseSmartTagAction(trackingSpan));
        actionList.Add(new LowerCaseSmartTagAction(trackingSpan));
        SmartTagActionSet actionSet = new SmartTagActionSet(actionList.AsReadOnly());
        actionSetList.Add(actionSet);
        return actionSetList.AsReadOnly();
    }
    //</Snippet8>

    //<Snippet9>
    public event EventHandler<SnapshotSpanEventArgs> TagsChanged;
    //</Snippet9>

    //<Snippet10>
    private void OnLayoutChanged(object sender, TextViewLayoutChangedEventArgs e)
    {
        ITextSnapshot snapshot = e.NewSnapshot;
        //don't do anything if this is just a change in case
        if (!snapshot.GetText().ToLower().Equals(e.OldSnapshot.GetText().ToLower()))
        {
            SnapshotSpan span = new SnapshotSpan(snapshot, new Span(0, snapshot.Length));
            EventHandler<SnapshotSpanEventArgs> handler = this.TagsChanged;
            if (handler != null)
            {
                handler(this, new SnapshotSpanEventArgs(span));
            }
        }
    }
    //</Snippet10>

    //<Snippet11>
    public void Dispose()
    {
        Dispose(true);
        GC.SuppressFinalize(this);
    }

    private void Dispose(bool disposing)
    {
        if (!this.m_disposed)
        {
            if (disposing)
            {
                m_view.LayoutChanged -= OnLayoutChanged;
                m_view = null;
            }

            m_disposed = true;
        }
    }
    //</Snippet11>
}

//<Snippet12>
[Export(typeof(IViewTaggerProvider))]
[ContentType("text")]
[Order(Before = "default")]
[TagType(typeof(SmartTag))]
internal class TestSmartTaggerProvider : IViewTaggerProvider
//</Snippet12>
{
    //<Snippet13>
    [Import(typeof(ITextStructureNavigatorSelectorService))]
    internal ITextStructureNavigatorSelectorService NavigatorService { get; set; }
    //</Snippet13>

    //<Snippet14>
    public ITagger<T> CreateTagger<T>(ITextView textView, ITextBuffer buffer) where T : ITag
    {
        if (buffer == null || textView == null)
        {
            return null;
        }

        //make sure we are tagging only the top buffer
        if (buffer == textView.TextBuffer)
        {
            return new TestSmartTagger(buffer, textView, this) as ITagger<T>;
        }
        else return null;
    }
    //</Snippet14>
}

//<Snippet15>
internal class UpperCaseSmartTagAction : ISmartTagAction
//</Snippet15>
{
    //<Snippet17>
    private ITrackingSpan m_span;
    private string m_upper;
    private string m_display;
    private ITextSnapshot m_snapshot;
    //</Snippet17>

    //<Snippet18>
    public UpperCaseSmartTagAction(ITrackingSpan span)
    {
        m_span = span;
        m_snapshot = span.TextBuffer.CurrentSnapshot;
        m_upper = span.GetText(m_snapshot).ToUpper();
        m_display = "Convert to upper case";
    }
    //</Snippet18>

    //<Snippet19>
    public string DisplayText
    {
        get { return m_display; }
    }
    public ImageSource Icon
    {
        get { return null; }
    }
    public bool IsEnabled
    {
        get { return true; }
    }

    public ISmartTagSource Source
    {
        get;
        private set;
    }

    public ReadOnlyCollection<SmartTagActionSet> ActionSets
    {
        get { return null; }
    }
    //</Snippet19>

    //<Snippet20>
    public void Invoke()
    {
        m_span.TextBuffer.Replace(m_span.GetSpan(m_snapshot), m_upper);
    }
    //</Snippet20>
}

//<Snippet16>
internal class LowerCaseSmartTagAction : ISmartTagAction
//</Snippet16>
{
    private ITrackingSpan m_span;
    private string m_lower;
    private string m_display;
    private ITextSnapshot m_snapshot;

    public LowerCaseSmartTagAction(ITrackingSpan span)
    {
        m_span = span;
        m_snapshot = span.TextBuffer.CurrentSnapshot;
        m_lower = span.GetText(m_snapshot).ToLower();
        m_display = "Convert to lower case";
    }

    public string DisplayText
    {
        get { return m_display; }
    }
    public ImageSource Icon
    {
        get { return null; }
    }
    public bool IsEnabled
    {
        get { return true; }
    }

    public ISmartTagSource Source
    {
        get;
        private set;
    }

    public ReadOnlyCollection<SmartTagActionSet> ActionSets
    {
        get { return null; }
    }

    public void Invoke()
    {
        m_span.TextBuffer.Replace(m_span.GetSpan(m_snapshot), m_lower);
    }
}