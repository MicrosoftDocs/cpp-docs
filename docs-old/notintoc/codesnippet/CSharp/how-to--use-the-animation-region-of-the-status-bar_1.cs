        void AnimationExample()
        {
            IVsStatusbar statusBar = 
                (IVsStatusbar)GetService(typeof(SVsStatusbar));
            object icon = 
                (short)Microsoft.VisualStudio.Shell.Interop.Constants.SBAI_General;

            // Display the animated Visual Studio icon in the Animation region.
            statusBar.Animation(1, ref icon);

            System.Windows.Forms.MessageBox.Show(
                "Click OK to end status bar animation.");

            statusBar.Animation(0, ref icon);
        }