    Private Sub DisplayDesignerRegionInfo(ByVal statusBar As IVsStatusbar, ByVal insert As Boolean, ByVal line As Integer, ByVal column As Integer, ByVal character As Integer)
        ' Set insert/overstrike mode. 
        Dim mode As Object = If(insert, 0, 1)
        statusBar.SetInsMode(mode)

        ' Display Ln ## Col ## Ch ## information. 
        Dim ln As Object = line, col As Object = column, ch As Object = character
        statusBar.SetLineColChar(ln, col, ch)
    End Sub