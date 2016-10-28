        void DisplayDesignerRegionInfo(IVsStatusbar statusBar,
            bool insert, int line, int column, int character)
        {
            // Set insert/overstrike mode.
            object mode = insert ? 0 : 1;
            statusBar.SetInsMode(ref mode);

            // Display Ln ## Col ## Ch ## information.
            object ln = line, col = column, ch = character;
            statusBar.SetLineColChar(ref ln, ref col, ref ch);
        }