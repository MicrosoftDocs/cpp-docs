    Private Sub MenuItemCallback(ByVal sender As Object, ByVal e As EventArgs)
        Dim dte As DTE
        dte = CType(GetService(GetType(DTE)), DTE)
        Dim myString As String = "Name is " & dte.Name + vbCrLf & "Version is " & dte.Version

        Dim windows As Windows = dte.Windows
        Dim window As Window = CType(windows.Item(EnvDTE.Constants.vsWindowKindOutput), Window)
        window.Visible = True

        Dim outputWindow As OutputWindow = CType(window.Object, OutputWindow)
        Dim outputWindowPane As OutputWindowPane = outputWindow.OutputWindowPanes.Add("Test")
        outputWindowPane.Activate()
        outputWindowPane.OutputString(myString)
    End Sub