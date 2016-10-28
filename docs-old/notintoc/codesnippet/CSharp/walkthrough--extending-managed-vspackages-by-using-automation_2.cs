        private void MenuItemCallback(object sender, EventArgs e)
        {
            DTE dte;
            dte = (DTE)GetService(typeof(DTE));
            string myString =
              "Name is " + dte.Name + "\rVersion is " + dte.Version;

            Windows windows = dte.Windows;
            Window window =
            (Window)windows.Item("{34E76E81-EE4A-11D0-AE2E-00A0C90FFFC3}");
            window.Visible = true;

            OutputWindow outputWindow = (OutputWindow)window.Object;
            OutputWindowPane outputWindowPane =
            outputWindow.OutputWindowPanes.Add("Test");
            outputWindowPane.Activate();
            outputWindowPane.OutputString(myString);
        }