using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using System.Windows.Media;

//<snippet41>
using Microsoft.VisualStudio.Shell;
using System.ComponentModel.Design;
//</snippet41>

namespace Microsoft.TWShortcutMenu
{
    /// <summary>
    /// Interaction logic for MyControl.xaml
    /// </summary>
    public partial class MyControl : UserControl
    {
        //<snippet42>
        MyToolWindow _parent;
        public MyControl(MyToolWindow parent)
        {
            InitializeComponent();
            _parent = parent;

            OleMenuCommandService mcs = this._parent.mcs;
            if (null != mcs)
            {
                // Create an alias for the command set guid.
                Guid g = GuidList.guidTWShortcutMenuCmdSet;

                // Create the command IDs.
                var red = new CommandID(g, PkgCmdIDList.cmdidRed);
                var yellow = new CommandID(g, PkgCmdIDList.cmdidYellow);
                var blue = new CommandID(g, PkgCmdIDList.cmdidBlue);

                // Add a command for each command ID.
                mcs.AddCommand(new MenuCommand(ChangeColor, red));
                mcs.AddCommand(new MenuCommand(ChangeColor, yellow));
                mcs.AddCommand(new MenuCommand(ChangeColor, blue));
            }
        }
        //</snippet42>

        //<snippet44>
        private void ChangeColor(object sender, EventArgs e )
        {
            var mc = sender as MenuCommand;

            switch (mc.CommandID.ID)
	        {
                case PkgCmdIDList.cmdidRed:
                    MyToolWindow.Background = Brushes.Red;
                    break;
                case PkgCmdIDList.cmdidYellow:
                    MyToolWindow.Background = Brushes.Yellow;
                    break;
                case PkgCmdIDList.cmdidBlue:
                    MyToolWindow.Background = Brushes.Blue;
                    break;
            }
        }
        //</snippet44>

        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Globalization", "CA1300:SpecifyMessageBoxOptions")]
        private void button1_Click(object sender, RoutedEventArgs e)
        {
            MessageBox.Show(string.Format(System.Globalization.CultureInfo.CurrentUICulture, "We are inside {0}.button1_Click()", this.ToString()),
                            "Color Change Window");

        }

        //<snippet43>
        private void MyToolWindow_MouseRightButtonDown(object sender, MouseButtonEventArgs e)
        {
            OleMenuCommandService mcs = this._parent.mcs;
            if (null != mcs)
            {
                CommandID menuID = new CommandID(
                    GuidList.guidTWShortcutMenuCmdSet,
                    PkgCmdIDList.ColorMenu);
                Point p = this.PointToScreen(e.GetPosition(this));
                mcs.ShowContextMenu(menuID, (int)p.X, (int)p.Y);
            }
        }
        //</snippet43>
    }
}