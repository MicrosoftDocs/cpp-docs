    Private Sub FeedbackRegionExample()
        Dim statusBar As IVsStatusbar = CType(GetService(GetType(SVsStatusbar)), IVsStatusbar)
        Dim frozen As Integer

        statusBar.IsFrozen(frozen)

        If frozen = 0 Then
            ' Set the status bar text and make its display static.
            statusBar.SetText("Here's some static text.")
            statusBar.FreezeOutput(1)

            ' Retrieve the status bar text.
            Dim text As String
            statusBar.GetText(text)
            System.Windows.Forms.MessageBox.Show(text)

            ' Clear the status bar text.
            statusBar.FreezeOutput(0)
            statusBar.Clear()
        End If
    End Sub