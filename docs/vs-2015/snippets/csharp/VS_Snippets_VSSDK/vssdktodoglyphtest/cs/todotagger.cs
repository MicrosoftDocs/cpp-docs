//<Snippet7>
using System;
using System.Collections.Generic;
using System.ComponentModel.Composition;
using Microsoft.VisualStudio.Text;
using Microsoft.VisualStudio.Text.Tagging;
using Microsoft.VisualStudio.Text.Editor;
using Microsoft.VisualStudio.Text.Classification;
using Microsoft.VisualStudio.Utilities;
//</Snippet7>

//<Snippet8>
internal class TodoTag : IGlyphTag
//</Snippet8>
{
}


//<Snippet9>
internal class TodoTagger : ITagger<TodoTag>
//</Snippet9>
{
    //<Snippet10>
    private IClassifier m_classifier;
    private const string m_searchText = "todo";
    //</Snippet10>

    //<Snippet11>
    internal TodoTagger(IClassifier classifier)
    {
        m_classifier = classifier;
    }
    //</Snippet11>

    //<Snippet12>
    IEnumerable<ITagSpan<TodoTag>> ITagger<TodoTag>.GetTags(NormalizedSnapshotSpanCollection spans)
    {
        foreach (SnapshotSpan span in spans)
        {
            //look at each classification span \
            foreach (ClassificationSpan classification in m_classifier.GetClassificationSpans(span))
            {
                //if the classification is a comment
                if (classification.ClassificationType.Classification.ToLower().Contains("comment"))
                {
                    //if the word "todo" is in the comment,
                    //create a new TodoTag TagSpan
                    int index = classification.Span.GetText().ToLower().IndexOf(m_searchText);
                    if (index != -1)
                    {
                        yield return new TagSpan<TodoTag>(new SnapshotSpan(classification.Span.Start + index, m_searchText.Length), new TodoTag());
                    }
                }
            }
        }
    }
    //</Snippet12>

    //<Snippet13>
    public event EventHandler<SnapshotSpanEventArgs> TagsChanged;
    //</Snippet13>
}

//<Snippet14>
[Export(typeof(ITaggerProvider))]
[ContentType("code")]
[TagType(typeof(TodoTag))]
class TodoTaggerProvider : ITaggerProvider
//</Snippet14>
{
    //<Snippet15>
    [Import]
    internal IClassifierAggregatorService AggregatorService;
    //</Snippet15>

    //<Snippet16>
    public ITagger<T> CreateTagger<T>(ITextBuffer buffer) where T : ITag
    {
        if (buffer == null)
        {
            throw new ArgumentNullException("buffer");
        }

        return new TodoTagger(AggregatorService.GetClassifier(buffer)) as ITagger<T>;
    }
    //</Snippet16>
}