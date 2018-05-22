using System;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.InteropServices;
using System.ComponentModel.Design;
using Microsoft.Win32;
using Microsoft.VisualStudio;
using Microsoft.VisualStudio.Shell.Interop;
using Microsoft.VisualStudio.OLE.Interop;
using Microsoft.VisualStudio.Shell;
//<snippet23>
using System.Collections;
//</snippet23>

namespace Microsoft.TopLevelMenu
{
    /// <summary>
    /// This is the class that implements the package exposed by this assembly.
    ///
    /// The minimum requirement for a class to be considered a valid package for Visual Studio
    /// is to implement the IVsPackage interface and register itself with the shell.
    /// This package uses the helper classes defined inside the Managed Package Framework (MPF)
    /// to do it: it derives from the Package class that provides the implementation of the 
    /// IVsPackage interface and uses the registration attributes defined in the framework to 
    /// register itself and its components with the shell.
    /// </summary>
    // This attribute tells the PkgDef creation utility (CreatePkgDef.exe) that this class is
    // a package.
    [PackageRegistration(UseManagedResourcesOnly = true)]
    // This attribute is used to register the informations needed to show the this package
    // in the Help/About dialog of Visual Studio.
    [InstalledProductRegistration("#110", "#112", "1.0", IconResourceID = 400)]
    // This attribute is needed to let the shell know that this package exposes some menus.
    //<snippet222>
    [ProvideMenuResource("Menus.ctmenu", 1)]
    //</snippet222>
    [Guid(GuidList.guidTopLevelMenuPkgString)]
    public sealed class TopLevelMenuPackage : Package
    {
        /// <summary>
        /// Default constructor of the package.
        /// Inside this method you can place any initialization code that does not require 
        /// any Visual Studio service because at this point the package object is created but 
        /// not sited yet inside Visual Studio environment. The place to do all the other 
        /// initialization is the Initialize method.
        /// </summary>
        public TopLevelMenuPackage()
        {
            Trace.WriteLine(string.Format(CultureInfo.CurrentCulture, "Entering constructor for: {0}", this.ToString()));
        }
        //<snippet25>
        //<snippet29>
        private int numMRUItems = 4;
        private int baseMRUID = (int)PkgCmdIDList.cmdidMRUList;
        private ArrayList mruList;
        //</snippet29>

        private void InitializeMRUList()
        {
            if (null == this.mruList)
            {
                this.mruList = new ArrayList();
                if (null != this.mruList)
                {
                    for (int i = 0; i < this.numMRUItems; i++)
                    {
                        this.mruList.Add(string.Format(CultureInfo.CurrentCulture,
                                                       "Item {0}", i + 1));
                    }
                }
            }
        }
        //</snippet25>


        /////////////////////////////////////////////////////////////////////////////
        // Overriden Package Implementation
        #region Package Members

        /// <summary>
        /// Initialization of the package; this method is called right after the package is sited, so this is the place
        /// where you can put all the initilaization code that rely on services provided by VisualStudio.
        /// </summary>
        protected override void Initialize()
        {
            Trace.WriteLine (string.Format(CultureInfo.CurrentCulture, "Entering Initialize() of: {0}", this.ToString()));
            base.Initialize();

            // Add our command handlers for menu (commands must exist in the .vsct file)
            OleMenuCommandService mcs = GetService(typeof(IMenuCommandService)) as OleMenuCommandService;
            if ( null != mcs )
            {
                // Create the command for the menu item.
                CommandID menuCommandID = new CommandID(GuidList.guidTopLevelMenuCmdSet, (int)PkgCmdIDList.cmdidTestCommand);
                MenuCommand menuItem = new MenuCommand(MenuItemCallback, menuCommandID );
                mcs.AddCommand( menuItem );
                //<snippet24>
                this.InitMRUMenu(mcs);
                //</snippet24>
                //<snippet21>
                CommandID subCommandID = new CommandID(
    GuidList.guidTopLevelMenuCmdSet,
    (int)PkgCmdIDList.cmdidTestSubCmd);
                MenuCommand subItem = new MenuCommand(
                    new EventHandler(SubItemCallback), subCommandID);
                mcs.AddCommand(subItem);
                //</snippet21>
            }
        }
        #endregion

        /// <summary>
        /// This function is the callback used to execute a command when the a menu item is clicked.
        /// See the Initialize method to see how the menu item is associated to this function using
        /// the OleMenuCommandService service and the MenuCommand class.
        /// </summary>
        
        //<snippet26>
        private void InitMRUMenu(OleMenuCommandService mcs)
        {
            InitializeMRUList();
            for (int i = 0; i < this.numMRUItems; i++)
            {
                var cmdID = new CommandID(
                    GuidList.guidTopLevelMenuCmdSet, this.baseMRUID + i);
                var mc = new OleMenuCommand(
                    new EventHandler(OnMRUExec), cmdID);
                mc.BeforeQueryStatus += new EventHandler(OnMRUQueryStatus);
                mcs.AddCommand(mc);
            }
        }
        //</snippet26>
        
        //<snippet27>
        private void OnMRUQueryStatus(object sender, EventArgs e)
        {
            OleMenuCommand menuCommand = sender as OleMenuCommand;
            if (null != menuCommand)
            {
                int MRUItemIndex = menuCommand.CommandID.ID - this.baseMRUID;
                if (MRUItemIndex >= 0 && MRUItemIndex < this.mruList.Count)
                {
                    menuCommand.Text = this.mruList[MRUItemIndex] as string;
                }
            }
        }
        //</snippet27>

        //<snippet28>
        private void OnMRUExec(object sender, EventArgs e)
        {
            var menuCommand = sender as OleMenuCommand;
            if (null != menuCommand)
            {
                int MRUItemIndex = menuCommand.CommandID.ID - this.baseMRUID;
                if (MRUItemIndex >= 0 && MRUItemIndex < this.mruList.Count)
                {
                    string selection = this.mruList[MRUItemIndex] as string;
                    for (int i = MRUItemIndex; i > 0; i--)
                    {
                        this.mruList[i] = this.mruList[i - 1];
                    }
                    this.mruList[0] = selection;
                    System.Windows.Forms.MessageBox.Show(
                        string.Format(CultureInfo.CurrentCulture,
                                      "Selected {0}", selection));
                }
            }
        }
        //</snippet28>

        /*<snippet210>
        var menuCommand = sender as OleMenuCommand;
        menuCommand.Visible = false;
        </snippet210>*/

        private void MenuItemCallback(object sender, EventArgs e)
        {
            // Show a Message Box to prove we were here
            IVsUIShell uiShell = (IVsUIShell)GetService(typeof(SVsUIShell));
            Guid clsid = Guid.Empty;
            int result;
            Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure(uiShell.ShowMessageBox(
                       0,
                       ref clsid,
                       "TopLevelMenu",
                       string.Format(CultureInfo.CurrentCulture, "Inside {0}.MenuItemCallback()", this.ToString()),
                       string.Empty,
                       0,
                       OLEMSGBUTTON.OLEMSGBUTTON_OK,
                       OLEMSGDEFBUTTON.OLEMSGDEFBUTTON_FIRST,
                       OLEMSGICON.OLEMSGICON_INFO,
                       0,        // false
                       out result));
        }
        //<snippet22>
        private void SubItemCallback(object sender, EventArgs e)
        {
            IVsUIShell uiShell = (IVsUIShell)GetService(
                typeof(SVsUIShell));
            Guid clsid = Guid.Empty;
            int result;
            uiShell.ShowMessageBox(
                   0,
                   ref clsid,
                   "My Top Level Menu Package",
                   string.Format(CultureInfo.CurrentCulture,
                   "Inside {0}.SubItemCallback()",
                   this.ToString()),
                   string.Empty,
                   0,
                   OLEMSGBUTTON.OLEMSGBUTTON_OK,
                   OLEMSGDEFBUTTON.OLEMSGDEFBUTTON_FIRST,
                   OLEMSGICON.OLEMSGICON_INFO,
                   0,
                   out result);
        }
        //</snippet22>

    }
}