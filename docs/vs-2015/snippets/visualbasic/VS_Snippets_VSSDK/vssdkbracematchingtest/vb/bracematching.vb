'<Snippet1>
Imports System.ComponentModel.Composition
Imports Microsoft.VisualStudio.Text
Imports Microsoft.VisualStudio.Text.Editor
Imports Microsoft.VisualStudio.Text.Tagging
Imports Microsoft.VisualStudio.Utilities
'</Snippet1>

'<Snippet2>
Friend Class BraceMatchingTagger
    Implements ITagger(Of TextMarkerTag)
    '</Snippet2>

    '<Snippet3>
    Private _View As ITextView
    Private Property View() As ITextView
        Get
            Return _View
        End Get
        Set(ByVal value As ITextView)
            _View = value
        End Set
    End Property
    Private _SourceBuffer As ITextBuffer
    Private Property SourceBuffer() As ITextBuffer
        Get
            Return _SourceBuffer
        End Get
        Set(ByVal value As ITextBuffer)
            _SourceBuffer = value
        End Set
    End Property
    Private _CurrentChar As System.Nullable(Of SnapshotPoint)
    Private Property CurrentChar() As System.Nullable(Of SnapshotPoint)
        Get
            Return _CurrentChar
        End Get
        Set(ByVal value As System.Nullable(Of SnapshotPoint))
            _CurrentChar = value
        End Set
    End Property
    Private m_braceList As Dictionary(Of Char, Char)
    '</Snippet3>

    '<Snippet4>
    Friend Sub New(ByVal view As ITextView, ByVal sourceBuffer As ITextBuffer)
        'here the keys are the open braces, and the values are the close braces
        m_braceList = New Dictionary(Of Char, Char)()
        m_braceList.Add("{"c, "}"c)
        m_braceList.Add("["c, "]"c)
        m_braceList.Add("("c, ")"c)
        Me.View = view
        Me.SourceBuffer = sourceBuffer
        Me.CurrentChar = Nothing

        AddHandler Me.View.Caret.PositionChanged, AddressOf Me.CaretPositionChanged
        AddHandler Me.View.LayoutChanged, AddressOf Me.ViewLayoutChanged
    End Sub
    '</Snippet4>

    '<Snippet5>
    Public Event TagsChanged As EventHandler(Of SnapshotSpanEventArgs) _
        Implements ITagger(Of TextMarkerTag).TagsChanged
    '</Snippet5>

    '<Snippet6>
    Private Sub ViewLayoutChanged(ByVal sender As Object, ByVal e As TextViewLayoutChangedEventArgs)
        If e.NewSnapshot IsNot e.OldSnapshot Then
            'make sure that there has really been a change
            UpdateAtCaretPosition(View.Caret.Position)
        End If
    End Sub

    Private Sub CaretPositionChanged(ByVal sender As Object, ByVal e As CaretPositionChangedEventArgs)
        UpdateAtCaretPosition(e.NewPosition)
    End Sub

    Private Sub UpdateAtCaretPosition(ByVal caretPosition As CaretPosition)
        CurrentChar = caretPosition.Point.GetPoint(SourceBuffer, caretPosition.Affinity)

        If Not CurrentChar.HasValue Then
            Exit Sub
        End If

        RaiseEvent TagsChanged(Me, New SnapshotSpanEventArgs(New SnapshotSpan(SourceBuffer.CurrentSnapshot, 0, SourceBuffer.CurrentSnapshot.Length)))
    End Sub
    '</Snippet6>

    '<Snippet7>
    Public Function GetTags(ByVal spans As NormalizedSnapshotSpanCollection) As IEnumerable(Of ITagSpan(Of TextMarkerTag)) Implements ITagger(Of Microsoft.VisualStudio.Text.Tagging.TextMarkerTag).GetTags
        If spans.Count = 0 Then
            'there is no content in the buffer
            Exit Function
        End If

        'don't do anything if the current SnapshotPoint is not initialized or at the end of the buffer
        If Not CurrentChar.HasValue OrElse CurrentChar.Value.Position >= CurrentChar.Value.Snapshot.Length Then
            Exit Function
        End If

        'hold on to a snapshot of the current character
        Dim currentChar__1 As SnapshotPoint = CurrentChar.Value

        'if the requested snapshot isn't the same as the one the brace is on, translate our spans to the expected snapshot
        If spans(0).Snapshot IsNot currentChar__1.Snapshot Then
            currentChar__1 = currentChar__1.TranslateTo(spans(0).Snapshot, PointTrackingMode.Positive)
        End If

        'get the current char and the previous char
        Dim currentText As Char = currentChar__1.GetChar()
        Dim lastChar As SnapshotPoint = If(CInt(currentChar__1) = 0, currentChar__1, currentChar__1 - 1)
        'if currentChar is 0 (beginning of buffer), don't move it back
        Dim lastText As Char = lastChar.GetChar()
        Dim pairSpan As New SnapshotSpan()

        If m_braceList.ContainsKey(currentText) Then
            'the key is the open brace
            Dim closeChar As Char
            m_braceList.TryGetValue(currentText, closeChar)
            If BraceMatchingTagger.FindMatchingCloseChar(currentChar__1, currentText, closeChar, View.TextViewLines.Count, pairSpan) = True Then
                Exit Function
            End If
        ElseIf m_braceList.ContainsValue(lastText) Then
            'the value is the close brace, which is the *previous* character 
            Dim open = From n In m_braceList _
                Where n.Value.Equals(lastText) _
                Select n.Key
            If BraceMatchingTagger.FindMatchingOpenChar(lastChar, CChar(open.ElementAt(0)), lastText, View.TextViewLines.Count, pairSpan) = True Then
                Exit Function
            End If
        End If
    End Function
    '</Snippet7>

    '<Snippet8>
    Private Shared Function FindMatchingCloseChar(ByVal startPoint As SnapshotPoint, ByVal open As Char, ByVal close As Char, ByVal maxLines As Integer, ByRef pairSpan As SnapshotSpan) As Boolean
        pairSpan = New SnapshotSpan(startPoint.Snapshot, 1, 1)
        Dim line As ITextSnapshotLine = startPoint.GetContainingLine()
        Dim lineText As String = line.GetText()
        Dim lineNumber As Integer = line.LineNumber
        Dim offset As Integer = startPoint.Position - line.Start.Position + 1

        Dim stopLineNumber As Integer = startPoint.Snapshot.LineCount - 1
        If maxLines > 0 Then
            stopLineNumber = Math.Min(stopLineNumber, lineNumber + maxLines)
        End If

        Dim openCount As Integer = 0
        While True
            'walk the entire line
            While offset < line.Length
                Dim currentChar As Char = lineText(offset)
                If currentChar = close Then
                    'found the close character
                    If openCount > 0 Then
                        openCount -= 1
                    Else
                        'found the matching close
                        pairSpan = New SnapshotSpan(startPoint.Snapshot, line.Start + offset, 1)
                        Return True
                    End If
                ElseIf currentChar = open Then
                    ' this is another open
                    openCount += 1
                End If
                offset += 1
            End While

            'move on to the next line
            If System.Threading.Interlocked.Increment(lineNumber) > stopLineNumber Then
                Exit While
            End If

            line = line.Snapshot.GetLineFromLineNumber(lineNumber)
            lineText = line.GetText()
            offset = 0
        End While

        Return False
    End Function
    '</Snippet8>

    '<Snippet9>
    Private Shared Function FindMatchingOpenChar(ByVal startPoint As SnapshotPoint, ByVal open As Char, ByVal close As Char, ByVal maxLines As Integer, ByRef pairSpan As SnapshotSpan) As Boolean
        pairSpan = New SnapshotSpan(startPoint, startPoint)

        Dim line As ITextSnapshotLine = startPoint.GetContainingLine()

        Dim lineNumber As Integer = line.LineNumber
        Dim offset As Integer = startPoint - line.Start - 1
        'move the offset to the character before this one
        'if the offset is negative, move to the previous line
        If offset < 0 Then
            line = line.Snapshot.GetLineFromLineNumber(System.Threading.Interlocked.Decrement(lineNumber))
            offset = line.Length - 1
        End If

        Dim lineText As String = line.GetText()

        Dim stopLineNumber As Integer = 0
        If maxLines > 0 Then
            stopLineNumber = Math.Max(stopLineNumber, lineNumber - maxLines)
        End If

        Dim closeCount As Integer = 0

        While True
            ' Walk the entire line
            While offset >= 0
                Dim currentChar As Char = lineText(offset)

                If currentChar = open Then
                    If closeCount > 0 Then
                        closeCount -= 1
                    Else
                        ' We've found the open character
                        pairSpan = New SnapshotSpan(line.Start + offset, 1)
                        'we just want the character itself
                        Return True
                    End If
                ElseIf currentChar = close Then
                    closeCount += 1
                End If
                offset -= 1
            End While

            ' Move to the previous line
            If System.Threading.Interlocked.Decrement(lineNumber) < stopLineNumber Then
                Exit While
            End If

            line = line.Snapshot.GetLineFromLineNumber(lineNumber)
            lineText = line.GetText()
            offset = line.Length - 1
        End While
        Return False
    End Function
    '</Snippet9>
End Class

'<Snippet10>
<Export(GetType(IViewTaggerProvider))> _
<ContentType("text")> _
<TagType(GetType(TextMarkerTag))> _
Friend Class BraceMatchingTaggerProvider
    Implements IViewTaggerProvider
    '</Snippet10>

    '<Snippet11>
    Public Function CreateTagger(Of T As ITag)(ByVal textView As ITextView, ByVal buffer As ITextBuffer) As ITagger(Of T) Implements IViewTaggerProvider.CreateTagger
        If textView Is Nothing Then
            Return Nothing
        End If

        'provide highlighting only on the top-level buffer
        If textView.TextBuffer IsNot buffer Then
            Return Nothing
        End If

        Return TryCast(New BraceMatchingTagger(textView, buffer), ITagger(Of T))
    End Function
    '</Snippet11>
End Class
