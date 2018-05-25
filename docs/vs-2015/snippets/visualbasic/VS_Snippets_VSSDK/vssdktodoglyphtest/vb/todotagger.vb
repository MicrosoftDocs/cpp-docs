'<Snippet7>
Imports System
Imports System.Collections.Generic
Imports System.ComponentModel.Composition
Imports Microsoft.VisualStudio.Text
Imports Microsoft.VisualStudio.Text.Tagging
Imports Microsoft.VisualStudio.Text.Editor
Imports Microsoft.VisualStudio.Text.Classification
Imports Microsoft.VisualStudio.Utilities
'</Snippet7>

'<Snippet8>
Friend Class TodoTag
    Implements IGlyphTag

    Public Sub New()
        MyBase.New()
    End Sub
End Class
'</Snippet8>

'<Snippet9>
Friend Class TodoTagger
    Implements ITagger(Of TodoTag)
    '</Snippet9>

    '<Snippet10>
    Private m_classifier As IClassifier
    Private Const m_searchText As String = "todo"
    '</Snippet10>

    '<Snippet11>
    Friend Sub New(ByVal classifier As IClassifier)
        m_classifier = classifier
    End Sub
    '</Snippet11>

    '<Snippet12>
    Private Function GetTags(ByVal spans As NormalizedSnapshotSpanCollection) As IEnumerable(Of ITagSpan(Of TodoTag)) Implements ITagger(Of TodoTag).GetTags
        Dim list As List(Of ITagSpan(Of TodoTag))
        list = New List(Of ITagSpan(Of TodoTag))()

        For Each span As SnapshotSpan In spans
            'look at each classification span \
            For Each classification As ClassificationSpan In m_classifier.GetClassificationSpans(span)
                'if the classification is a comment
                If classification.ClassificationType.Classification.ToLower().Contains("comment") Then
                    'if the word "todo" is in the comment,
                    'create a new TodoTag TagSpan
                    Dim index As Integer = classification.Span.GetText().ToLower().IndexOf(m_searchText)
                    If index <> -1 Then
                        list.Add(New TagSpan(Of TodoTag)(New SnapshotSpan(classification.Span.Start + index, m_searchText.Length), New TodoTag()))
                    End If
                End If
            Next classification
        Next span

        Return list
    End Function
    '</Snippet12>

    '<Snippet13>
    Public Event TagsChanged(ByVal sender As Object, ByVal e As Microsoft.VisualStudio.Text.SnapshotSpanEventArgs) Implements Microsoft.VisualStudio.Text.Tagging.ITagger(Of TodoTag).TagsChanged
    '</Snippet13>
End Class

'<Snippet14>
<Export(GetType(ITaggerProvider)), ContentType("code"), TagType(GetType(TodoTag))>
Friend Class TodoTaggerProvider
    Implements ITaggerProvider
    '</Snippet14>

    '<Snippet15>
    <Import()>
    Friend AggregatorService As IClassifierAggregatorService
    '</Snippet15>

    '<Snippet16>
    Public Function CreateTagger(Of T As Microsoft.VisualStudio.Text.Tagging.ITag)(ByVal buffer As Microsoft.VisualStudio.Text.ITextBuffer) As Microsoft.VisualStudio.Text.Tagging.ITagger(Of T) Implements Microsoft.VisualStudio.Text.Tagging.ITaggerProvider.CreateTagger
        If buffer Is Nothing Then
            Throw New ArgumentNullException("buffer")
        End If

        Return TryCast(New TodoTagger(AggregatorService.GetClassifier(buffer)), ITagger(Of T))
    End Function
    '</Snippet16>
End Class