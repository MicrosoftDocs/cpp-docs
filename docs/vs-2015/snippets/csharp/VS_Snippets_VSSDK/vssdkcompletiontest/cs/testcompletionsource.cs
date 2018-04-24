//<Snippet1>
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.ComponentModel.Composition;
using Microsoft.VisualStudio.Language.Intellisense;
using Microsoft.VisualStudio.Text;
using Microsoft.VisualStudio.Text.Operations;
using Microsoft.VisualStudio.Utilities;
//</Snippet1>

//<Snippet2>
internal class TestCompletionSource : ICompletionSource
//</Snippet2>
{
    //<Snippet3>
    private TestCompletionSourceProvider m_sourceProvider;
    private ITextBuffer m_textBuffer;
    private List<Completion> m_compList;
    //</Snippet3>

    //<Snippet4>
    public TestCompletionSource(TestCompletionSourceProvider sourceProvider, ITextBuffer textBuffer)
    {
        m_sourceProvider = sourceProvider;
        m_textBuffer = textBuffer;
    }
    //</Snippet4>

    //<Snippet5>
    void ICompletionSource.AugmentCompletionSession(ICompletionSession session, IList<CompletionSet> completionSets)
    {
        List<string> strList = new List<string>();
        strList.Add("addition");
        strList.Add("adaptation");
        strList.Add("subtraction");
        strList.Add("summation");
        m_compList = new List<Completion>();
        foreach (string str in strList)
            m_compList.Add(new Completion(str, str, str, null, null));

        completionSets.Add(new CompletionSet(
            "Tokens",    //the non-localized title of the tab
            "Tokens",    //the display title of the tab
            FindTokenSpanAtPosition(session.GetTriggerPoint(m_textBuffer),
                session),
            m_compList,
            null));
    }
    //</Snippet5>

    //<Snippet6>
    private ITrackingSpan FindTokenSpanAtPosition(ITrackingPoint point, ICompletionSession session)
    {
        SnapshotPoint currentPoint = (session.TextView.Caret.Position.BufferPosition) - 1;
        ITextStructureNavigator navigator = m_sourceProvider.NavigatorService.GetTextStructureNavigator(m_textBuffer);
        TextExtent extent = navigator.GetExtentOfWord(currentPoint);
        return currentPoint.Snapshot.CreateTrackingSpan(extent.Span, SpanTrackingMode.EdgeInclusive);
    }
    //</Snippet6>

    //<Snippet7>
    private bool m_isDisposed;
    public void Dispose()
    {
        if (!m_isDisposed)
        {
            GC.SuppressFinalize(this);
            m_isDisposed = true;
        }
    }
    //</Snippet7>
}

//<Snippet8>
[Export(typeof(ICompletionSourceProvider))]
[ContentType("plaintext")]
[Name("token completion")]
internal class TestCompletionSourceProvider : ICompletionSourceProvider
//</Snippet8>
{
    //<Snippet9>
    [Import]
    internal ITextStructureNavigatorSelectorService NavigatorService { get; set; }
    //</Snippet9>

    //<Snippet10>
    public ICompletionSource TryCreateCompletionSource(ITextBuffer textBuffer)
    {
        return new TestCompletionSource(this, textBuffer);
    }
    //</Snippet10>
}