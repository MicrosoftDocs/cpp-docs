//<Snippet1>
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel.Composition;
using Microsoft.VisualStudio.Language.Intellisense;
using Microsoft.VisualStudio.Text;
using Microsoft.VisualStudio.Text.Editor;
using Microsoft.VisualStudio.Text.Operations;
using Microsoft.VisualStudio.Text.Tagging;
using Microsoft.VisualStudio.Utilities;
//</Snippet1>

//<Snippet2>
internal class TestQuickInfoSource : IQuickInfoSource
//</Snippet2>
{
    //<Snippet3>
    private TestQuickInfoSourceProvider m_provider;
    private ITextBuffer m_subjectBuffer;
    private Dictionary<string, string> m_dictionary;
    //</Snippet3>

    //<Snippet4>
    public TestQuickInfoSource(TestQuickInfoSourceProvider provider, ITextBuffer subjectBuffer)
    {
        m_provider = provider;
        m_subjectBuffer = subjectBuffer;

        //these are the method names and their descriptions
        m_dictionary = new Dictionary<string, string>();
        m_dictionary.Add("add", "int add(int firstInt, int secondInt)\nAdds one integer to another.");
        m_dictionary.Add("subtract", "int subtract(int firstInt, int secondInt)\nSubtracts one integer from another.");
        m_dictionary.Add("multiply", "int multiply(int firstInt, int secondInt)\nMultiplies one integer by another.");
        m_dictionary.Add("divide", "int divide(int firstInt, int secondInt)\nDivides one integer by another.");
    }
    //</Snippet4>

    //<Snippet5>
    public void AugmentQuickInfoSession(IQuickInfoSession session, IList<object> qiContent, out ITrackingSpan applicableToSpan)
    {
        // Map the trigger point down to our buffer.
        SnapshotPoint? subjectTriggerPoint = session.GetTriggerPoint(m_subjectBuffer.CurrentSnapshot);
        if (!subjectTriggerPoint.HasValue)
        {
            applicableToSpan = null;
            return;
        }

        ITextSnapshot currentSnapshot = subjectTriggerPoint.Value.Snapshot;
        SnapshotSpan querySpan = new SnapshotSpan(subjectTriggerPoint.Value, 0);

        //look for occurrences of our QuickInfo words in the span
        ITextStructureNavigator navigator = m_provider.NavigatorService.GetTextStructureNavigator(m_subjectBuffer);
        TextExtent extent = navigator.GetExtentOfWord(subjectTriggerPoint.Value);
        string searchText = extent.Span.GetText();

        foreach (string key in m_dictionary.Keys)
        {
            int foundIndex = searchText.IndexOf(key, StringComparison.CurrentCultureIgnoreCase);
            if (foundIndex > -1)
            {
                applicableToSpan = currentSnapshot.CreateTrackingSpan
                    (
                    //querySpan.Start.Add(foundIndex).Position, 9, SpanTrackingMode.EdgeInclusive
                                            extent.Span.Start + foundIndex, key.Length, SpanTrackingMode.EdgeInclusive
                    );

                string value;
                m_dictionary.TryGetValue(key, out value);
                if (value != null)
                    qiContent.Add(value);
                else
                    qiContent.Add("");

                return;
            }
        }

        applicableToSpan = null;
    }
    //</Snippet5>

    //<Snippet6>
    private bool m_isDisposed;
    public void Dispose()
    {
        if (!m_isDisposed)
        {
            GC.SuppressFinalize(this);
            m_isDisposed = true;
        }
    }
    //</Snippet6>
}

//<Snippet7>
[Export(typeof(IQuickInfoSourceProvider))]
[Name("ToolTip QuickInfo Source")]
[Order(Before = "Default Quick Info Presenter")]
[ContentType("text")]
internal class TestQuickInfoSourceProvider : IQuickInfoSourceProvider
//</Snippet7>
{
    //<Snippet8>
    [Import]
    internal ITextStructureNavigatorSelectorService NavigatorService { get; set; }

    [Import]
    internal ITextBufferFactoryService TextBufferFactoryService { get; set; }
    //</Snippet8>

    //<Snippet9>
    public IQuickInfoSource TryCreateQuickInfoSource(ITextBuffer textBuffer)
    {
        return new TestQuickInfoSource(this, textBuffer);
    }
    //</Snippet9>
}

//<Snippet10>
internal class TestQuickInfoController : IIntellisenseController
//</Snippet10>
{
    //<Snippet11>
    private ITextView m_textView;
    private IList<ITextBuffer> m_subjectBuffers;
    private TestQuickInfoControllerProvider m_provider;
    private IQuickInfoSession m_session;
    //</Snippet11>

    //<Snippet12>
    internal TestQuickInfoController(ITextView textView, IList<ITextBuffer> subjectBuffers, TestQuickInfoControllerProvider provider)
    {
        m_textView = textView;
        m_subjectBuffers = subjectBuffers;
        m_provider = provider;

        m_textView.MouseHover += this.OnTextViewMouseHover;
    }
    //</Snippet12>

    //<Snippet13>
    private void OnTextViewMouseHover(object sender, MouseHoverEventArgs e)
    {
        //find the mouse position by mapping down to the subject buffer
        SnapshotPoint? point = m_textView.BufferGraph.MapDownToFirstMatch
             (new SnapshotPoint(m_textView.TextSnapshot, e.Position),
            PointTrackingMode.Positive,
            snapshot => m_subjectBuffers.Contains(snapshot.TextBuffer),
            PositionAffinity.Predecessor);

        if (point != null)
        {
            ITrackingPoint triggerPoint = point.Value.Snapshot.CreateTrackingPoint(point.Value.Position,
            PointTrackingMode.Positive);

            if (!m_provider.QuickInfoBroker.IsQuickInfoActive(m_textView))
            {
                m_session = m_provider.QuickInfoBroker.TriggerQuickInfo(m_textView, triggerPoint, true);
            }
        }
    }
    //</Snippet13>

    //<Snippet14>
    public void Detach(ITextView textView)
    {
        if (m_textView == textView)
        {
            m_textView.MouseHover -= this.OnTextViewMouseHover;
            m_textView = null;
        }
    }
    //</Snippet14>

    //<Snippet15>
    public void ConnectSubjectBuffer(ITextBuffer subjectBuffer)
    {
    }

    public void DisconnectSubjectBuffer(ITextBuffer subjectBuffer)
    {
    }
    //</Snippet15>
}

//<Snippet16>
[Export(typeof(IIntellisenseControllerProvider))]
[Name("ToolTip QuickInfo Controller")]
[ContentType("text")]
internal class TestQuickInfoControllerProvider : IIntellisenseControllerProvider
//</Snippet16>
{
    //<Snippet17>
    [Import]
    internal IQuickInfoBroker QuickInfoBroker { get; set; }
    //</Snippet17>

    //<Snippet18>
    public IIntellisenseController TryCreateIntellisenseController(ITextView textView, IList<ITextBuffer> subjectBuffers)
    {
        return new TestQuickInfoController(textView, subjectBuffers, this);
    }
    //</Snippet18>
}