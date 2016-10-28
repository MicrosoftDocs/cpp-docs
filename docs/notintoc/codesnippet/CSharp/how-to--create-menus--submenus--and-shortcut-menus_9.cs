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