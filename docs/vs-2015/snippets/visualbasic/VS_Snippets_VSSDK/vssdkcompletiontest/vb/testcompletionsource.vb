'<Snippet1>
Imports System
Imports System.Collections.Generic
Imports System.Linq
Imports System.Text
Imports System.ComponentModel.Composition
Imports Microsoft.VisualStudio.Language.Intellisense
Imports Microsoft.VisualStudio.Text
Imports Microsoft.VisualStudio.Text.Operations
Imports Microsoft.VisualStudio.Utilities
'</Snippet1>

'<Snippet2>
Friend Class TestCompletionSource
    Implements ICompletionSource
    '</Snippet2>

    '<Snippet3>
    Private m_sourceProvider As TestCompletionSourceProvider
    Private m_textBuffer As ITextBuffer
    Private m_compList As List(Of Completion)
    '</Snippet3>

    '<Snippet4>
    Public Sub New(ByVal sourceProvider As TestCompletionSourceProvider, ByVal textBuffer As ITextBuffer)
        m_sourceProvider = sourceProvider
        m_textBuffer = textBuffer
    End Sub
    '</Snippet4>

    '<Snippet5>
    Private Sub AugmentCompletionSession(ByVal session As ICompletionSession, ByVal completionSets As IList(Of CompletionSet)) Implements ICompletionSource.AugmentCompletionSession
        Dim strList As New List(Of String)()
        strList.Add("addition")
        strList.Add("adaptation")
        strList.Add("subtraction")
        strList.Add("summation")

        m_compList = New List(Of Completion)()
        For Each str As String In strList
            m_compList.Add(New Completion(str, str, str, Nothing, Nothing))
        Next str

        completionSets.Add(New CompletionSet(
            "Tokens",
            "Tokens",
            FindTokenSpanAtPosition(session.GetTriggerPoint(m_textBuffer),
                session),
            m_compList,
            Nothing))
    End Sub
    '</Snippet5>

    '<Snippet6>
    Private Function FindTokenSpanAtPosition(ByVal point As ITrackingPoint, ByVal session As ICompletionSession) As ITrackingSpan
        Dim currentPoint As SnapshotPoint = (session.TextView.Caret.Position.BufferPosition) - 1
        Dim navigator As ITextStructureNavigator = m_sourceProvider.NavigatorService.GetTextStructureNavigator(m_textBuffer)
        Dim extent As TextExtent = navigator.GetExtentOfWord(currentPoint)
        Return currentPoint.Snapshot.CreateTrackingSpan(extent.Span, SpanTrackingMode.EdgeInclusive)
    End Function
    '</Snippet6>

    '<Snippet7>
    Private m_isDisposed As Boolean
    Public Sub Dispose() Implements IDisposable.Dispose
        If Not m_isDisposed Then
            GC.SuppressFinalize(Me)
            m_isDisposed = True
        End If
    End Sub
    '</Snippet7>
End Class

'<Snippet8>
<Export(GetType(ICompletionSourceProvider)), ContentType("plaintext"), Name("token completion")>
Friend Class TestCompletionSourceProvider
    Implements ICompletionSourceProvider
    '</Snippet8>

    '<Snippet9>
    <Import()>
    Friend Property NavigatorService() As ITextStructureNavigatorSelectorService
    '</Snippet9>

    '<Snippet10>
    Public Function TryCreateCompletionSource(ByVal textBuffer As ITextBuffer) As ICompletionSource Implements ICompletionSourceProvider.TryCreateCompletionSource
        Return New TestCompletionSource(Me, textBuffer)
    End Function
    '</Snippet10>
End Class