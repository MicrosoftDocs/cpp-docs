    Public Function GetTags(ByVal spans As NormalizedSnapshotSpanCollection) As IEnumerable(Of ITagSpan(Of TestSmartTag)) Implements ITagger(Of TestSmartTag).GetTags
        Dim snapshot As ITextSnapshot = m_buffer.CurrentSnapshot
        If snapshot.Length = 0 Then
            Return Nothing
            Exit Function
        End If

        'set up the navigator
        Dim navigator As ITextStructureNavigator = m_provider.NavigatorService.GetTextStructureNavigator(m_buffer)

        'set up a list to contain the tags
        Dim list As List(Of TagSpan(Of TestSmartTag))
        list = New List(Of TagSpan(Of TestSmartTag))()

        For Each span In spans
            Dim caret As ITextCaret = m_view.Caret
            Dim point As SnapshotPoint

            If CInt(caret.Position.BufferPosition) > 0 Then
                point = caret.Position.BufferPosition - 1
            Else
                Exit For
            End If

            Dim extent As TextExtent = navigator.GetExtentOfWord(point)
            'don't display the tag if the extent has whitespace
            If extent.IsSignificant Then
                list.Add(New TagSpan(Of TestSmartTag)(extent.Span, New TestSmartTag(GetSmartTagActions(extent.Span))))
            Else
                Exit For
            End If
        Next span

        Return list
    End Function