    Public Function CreateTagger(Of T As ITag)(ByVal textView As ITextView, ByVal buffer As ITextBuffer) As ITagger(Of T) Implements IViewTaggerProvider.CreateTagger
        If buffer Is Nothing OrElse textView Is Nothing Then
            Return Nothing
        End If

        'make sure we are tagging only the top buffer
        If buffer Is textView.TextBuffer Then
            Return New TestSmartTagger(buffer, textView, Me)
        Else
            Return Nothing
        End If
    End Function