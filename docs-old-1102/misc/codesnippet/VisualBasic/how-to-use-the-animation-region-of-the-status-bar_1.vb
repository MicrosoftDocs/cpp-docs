    Private Sub AnimationExample()
        Dim statusBar As IVsStatusbar = CType(GetService(GetType(SVsStatusbar)), IVsStatusbar)
        Dim icon As Object = CShort(Fix(Microsoft.VisualStudio.Shell.Interop.Constants.SBAI_General))

        ' Display the animated Visual Studio icon in the Animation region.
        statusBar.Animation(1, icon)

        System.Windows.Forms.MessageBox.Show("Click OK to end status bar animation.")

        statusBar.Animation(0, icon)
    End Sub