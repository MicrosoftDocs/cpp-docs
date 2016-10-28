        private void MenuItemCallback(object sender, EventArgs e)
        {
            // Create the dialog instance without Help support.
            var d = new MyModalDialog();
            // Show the dialog.
            var m = d.ShowModal();
        }