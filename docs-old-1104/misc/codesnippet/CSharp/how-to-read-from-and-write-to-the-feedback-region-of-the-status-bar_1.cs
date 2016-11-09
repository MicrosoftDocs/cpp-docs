        void FeedbackRegionExample()
        {
            IVsStatusbar statusBar =
                (IVsStatusbar)GetService(typeof(SVsStatusbar));
            int frozen;

            statusBar.IsFrozen(out frozen);

            if (frozen == 0)
            {
                // Set the status bar text and make its display static.
                statusBar.SetText("Here's some static text.");
                statusBar.FreezeOutput(1);

                // Retrieve the status bar text.
                string text;
                statusBar.GetText(out text);
                System.Windows.Forms.MessageBox.Show(text);

                // Clear the status bar text.
                statusBar.FreezeOutput(0);
                statusBar.Clear();
            }
        }