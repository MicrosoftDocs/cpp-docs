        private void OnBeforeQueryStatus(object sender, EventArgs e)
        {
            var myCommand = sender as OleMenuCommand;
            if (null != myCommand)
            {
                myCommand.Text = "New Text";
            }
        }