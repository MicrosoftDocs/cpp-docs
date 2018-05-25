using System;
using System.Collections;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Windows;
using System.Runtime.InteropServices;
using Microsoft.VisualStudio.Shell.Interop;
using Microsoft.VisualStudio.Shell;
//<snippet21>
using System.ComponentModel.Design;
//</snippet21>


namespace Company.FirstToolWin
{
    /// <summary>
    /// This class implements the tool window exposed by this package and hosts a user control.
    ///
    /// In Visual Studio tool windows are composed of a frame (implemented by the shell) and a pane, 
    /// usually implemented by the package implementer.
    ///
    /// This class derives from the ToolWindowPane class provided from the MPF in order to use its 
    /// implementation of the IVsUIElementPane interface.
    /// </summary>
    [Guid("26a8c5ea-ac69-4f4b-8408-22e16e0541a1")]
    public class MyToolWindow : ToolWindowPane
    {
        // This is the user control hosted by the tool window; it is exposed to the base class 
        // using the Content property. Note that, even if this class implements IDispose, we are
        // not calling Dispose on this object. This is because ToolWindowPane calls Dispose on 
        // the object returned by the Content property.
        //        private FrameworkElement control;
//<snippet24>
        private MyControl control;
        string comboValue = "";
//</snippet24>
        /// <summary>
        /// Standard constructor for the tool window.
        /// </summary>
        public MyToolWindow() :
            base(null)
        {
            // Set the window title reading it from the resources.
            this.Caption = Resources.ToolWindowTitle;
            // Set the image that will appear on the tab of the window frame
            // when docked with an other window
            // The resource ID correspond to the one defined in the resx file
            // while the Index is the offset in the bitmap strip. Each image in
            // the strip being 16x16.
            this.BitmapResourceID = 301;
            this.BitmapIndex = 1;
//<snippet22>
            // Create the toolbar.
            this.ToolBar = new CommandID(GuidList.guidFirstToolWinCmdSet,
                PkgCmdIDList.ToolbarID);
            this.ToolBarLocation = (int)VSTWT_LOCATION.VSTWT_TOP;

            // Create the handlers for the toolbar commands.
            var mcs = GetService(typeof(IMenuCommandService))
                as OleMenuCommandService;
            if (null != mcs)
            {
                var toolbarbtnCmdID = new CommandID(
                    GuidList.guidFirstToolWinCmdSet,
                    PkgCmdIDList.cmdidWindowsMediaOpen);
                var menuItem = new MenuCommand(new EventHandler(
                    ButtonHandler), toolbarbtnCmdID);
                mcs.AddCommand(menuItem);

                // Command for the combo itself
                var menuMyDynamicComboCommandID = new CommandID(
                    GuidList.guidFirstToolWinCmdSet,
                    (int)PkgCmdIDList.cmdidWindowsMediaFilename);
                var menuMyDynamicComboCommand = new OleMenuCommand(
                    new EventHandler(ComboHandler),
                    menuMyDynamicComboCommandID);
                mcs.AddCommand(menuMyDynamicComboCommand);

                // Command for the combo's list
                var comboListCmdID = new CommandID(
                    GuidList.guidFirstToolWinCmdSet,
                    PkgCmdIDList.cmdidWindowsMediaFilenameGetList);
                var comboMenuList = new OleMenuCommand(
                    new EventHandler(ComboListHandler), comboListCmdID);
                mcs.AddCommand(comboMenuList);
            } 
//</snippet22>
            control = new MyControl();
        }

        /// <summary>
        /// This property returns the control that should be hosted in the Tool Window.
        /// It can be either a FrameworkElement (for easy creation of toolwindows hosting WPF content), 
        /// or it can be an object implementing one of the IVsUIWPFElement or IVsUIWin32Element interfaces.
        /// </summary>
        override public object Content 
        {
            get
            {
                return this.control;
            }

            set
            {
                base.Content = value;
            }
        }
//<snippet23>
        private void ButtonHandler(object sender,
    EventArgs arguments)
        {
            if (comboValue != null && comboValue.Trim().Length != 0)
            {
                LoadFile(comboValue);
            }
        }

        private void ComboHandler(object sender, EventArgs arguments)
        {
            var eventArgs = arguments as OleMenuCmdEventArgs;
            if (eventArgs != null)
            {
                IntPtr output = eventArgs.OutValue;
                object input = eventArgs.InValue;
                if (input != null)
                {
                    comboValue = input.ToString();
                }
                else if (output != IntPtr.Zero)
                {
                    Marshal.GetNativeVariantForObject(comboValue,
                        output);
                }
            }
        }

        public void LoadFile(string comboValue)
        {
            control.MediaPlayer.Source = new System.Uri(comboValue);
        }

        private void ComboListHandler(object sender,
            EventArgs arguments)
        {
        }
//</snippet23>
//<snippet60>
        public override void OnToolWindowCreated()
        {
            base.OnToolWindowCreated();

            var handler = new ToolWindowEvents(
                (FirstToolWinPackage)this.Package);
            ((IVsWindowFrame)this.Frame).SetProperty(
                (int)__VSFPROPID.VSFPROPID_ViewHelper, handler);
        }
//</snippet60>
    }
}
