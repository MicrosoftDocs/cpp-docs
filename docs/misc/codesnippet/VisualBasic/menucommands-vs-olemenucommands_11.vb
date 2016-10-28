    Private Sub OnBeforeQueryStatus(ByVal sender As Object, ByVal e As EventArgs)
        Dim myCommand As OleMenuCommand = TryCast(sender, OleMenuCommand)
        If myCommand IsNot Nothing Then
            myCommand.Text = "New Text"
        End If
    End Sub