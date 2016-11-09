    Private Sub ProgressBarExample()
        Dim statusBar As IVsStatusbar = DirectCast(GetService(GetType(SVsStatusbar)), IVsStatusbar)
        Dim cookie As UInteger = 0
        Dim label As String = "Progress bar label..."

        ' Initialize the progress bar. 
        statusBar.Progress(cookie, 1, "", 0, 0)

        Dim i As UInteger = 0, total As UInteger = 100
        While i <= total
            ' Display incremental progress. 
            statusBar.Progress(cookie, 1, label, i, total)
            System.Threading.Thread.Sleep(1)
            i += 1
        End While

        ' Clear the progress bar. 
        statusBar.Progress(cookie, 0, "", 0, 0)
    End Sub