        void ProgressBarExample()
        {
            IVsStatusbar statusBar =
                (IVsStatusbar)GetService(typeof(SVsStatusbar));
            uint cookie = 0;
            string label = "Progress bar label...";

            // Initialize the progress bar.
            statusBar.Progress(ref cookie, 1, "", 0, 0);

            for (uint i = 0, total = 100; i <= total; i++)
            {
                // Display incremental progress.
                statusBar.Progress(ref cookie, 1, label, i, total);
                System.Threading.Thread.Sleep(1);
            }

            // Clear the progress bar.
            statusBar.Progress(ref cookie, 0, "", 0, 0);
        }