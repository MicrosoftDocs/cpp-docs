// VsPkg.cs : Implementation of UIUserSettingsToolsOptionsPages
//

using System;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.InteropServices;
using System.ComponentModel.Design;
using Microsoft.Win32;
using Microsoft.VisualStudio.Shell.Interop;
using Microsoft.VisualStudio.OLE.Interop;
using Microsoft.VisualStudio.Shell;

using EnvDTE;
using System.Windows.Forms;


//<snippet04>
using Microsoft.VisualStudio;
//</snippet04>


namespace Company.UIUserSettingsToolsOptionsPages
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
    // This attribute tells the registration utility (regpkg.exe) that this class needs
    // to be registered as package.
    [PackageRegistration(UseManagedResourcesOnly = true)]
    // A Visual Studio component can be registered under different regitry roots; for instance
    // when you debug your package you want to register it in the experimental hive. This
    // attribute specifies the registry root to use if no one is provided to regpkg.exe with
    // the /root switch.
    [DefaultRegistryRoot("Software\\Microsoft\\VisualStudio\\9.0")]
    // This attribute is used to register the informations needed to show the this package
    // in the Help/About dialog of Visual Studio.
    [InstalledProductRegistration(false, "#110", "#112", "1.0", IconResourceID = 400)]
    // In order be loaded inside Visual Studio in a machine that has not the VS SDK installed, 
    // package needs to have a valid load key (it can be requested at 
    // http://msdn.microsoft.com/vstudio/extend/). This attributes tells the shell that this 
    // package has a load key embedded in its resources.
    [ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1)]
    // This attribute is needed to let the shell know that this package exposes some menus.
    [ProvideMenuResource(1000, 1)]
    [Guid(GuidList.guidPkgString)]
    //<snippet07>
    [ProvideOptionPage(typeof(HelloWorldOptions), 
        "Hello World Category", "Hello World Page", 
        1000, 1001, false)]
    //</snippet07>
    public sealed class UIUserSettingsToolsOptionsPagesPackage : Package
    {
        /// <summary>
        /// Default constructor of the package.
        /// Inside this method you can place any initialization code that does not require 
        /// any Visual Studio service because at this point the package object is created but 
        /// not sited yet inside Visual Studio environment. The place to do all the other 
        /// initialization is the Initialize method.
        /// </summary>
        public UIUserSettingsToolsOptionsPagesPackage()
        {
            Trace.WriteLine(string.Format(CultureInfo.CurrentCulture, "Entering constructor for: {0}", this.ToString()));
        }



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
                CommandID menuCommandID = new CommandID(GuidList.guidCmdSet, (int)PkgCmdIDList.cmdidGetTextEditorOptions);
                MenuCommand menuItem = new MenuCommand(MenuItemCallback, menuCommandID );
                mcs.AddCommand( menuItem );
                var HelloWorldID = new CommandID(GuidList.guidCmdSet, (int)PkgCmdIDList.cmdidHelloWorld);
                MenuCommand HWItem = new MenuCommand(ShowHelloWorld, HelloWorldID);
                mcs.AddCommand(HWItem);
            }
        }
        #endregion

        /// <summary>
        /// This function is the callback used to execute a command when the a menu item is clicked.
        /// See the Initialize method to see how the menu item is associated to this function using
        /// the OleMenuCommandService service and the MenuCommand class.
        /// </summary>
        private void MenuItemCallback(object sender, EventArgs e)
        {
            // The EnvDTE.dll assembly must be referenced for this to work.

            //<Snippet01>
            DTE vsEnvironment = (DTE)GetService(typeof(SDTE));
            //</Snippet01>

            //<Snippet02>
            Properties propertiesList = vsEnvironment.get_Properties("TextEditor", "Basic");
            if (null == propertiesList)
            {
                // The specified properties collection is not available.
                return;
            }
            //</Snippet02>

            //<Snippet03>
            Property tabSize = propertiesList.Item("TabSize");
            short oldSize = (short)tabSize.Value;

            string message;
            if (oldSize != 4)
            {
                tabSize.Value = 4;
                message = string.Format(CultureInfo.CurrentUICulture,
                    "For Basic, the Text Editor had a tab size of {0}" +
                    " and now has a tab size of {1}.", oldSize, tabSize.Value);
            }
            else
            {
                message = string.Format(CultureInfo.CurrentUICulture,
                    "For Basic, the Text Editor has a tab size of {0}.", tabSize.Value);
            }

            MessageBox.Show(message, "Text Editor, Basic, Tab Size:",
                MessageBoxButtons.OK, MessageBoxIcon.Information,
                MessageBoxDefaultButton.Button1, 0);
            //</Snippet03>
        }

        void ShowCustomOptionPage()
        {
            //<snippet5>
            Type optionsPageType = typeof(HelloWorldOptions);
            ShowOptionPage(optionsPageType);
            //</snippet5>
        }
        
        //<snippet08>
        private void ShowHelloWorld(object sender, EventArgs e)
        {
            var hw = GetDialogPage(typeof(HelloWorldOptions)) 
                as HelloWorldOptions;
            if (hw.HelloWorld == true)
            {
                MessageBox.Show("Hello World!");
            }
            else MessageBox.Show("Goodbye.");
        }
        //</snippet08>

        void ShowTextEditorGeneral()
        {
            //<snippet6>
            // GUID of Options>TextEditor>General
            string targetGUID = "734A5DE2-DEBA-11d0-A6D0-00C04FB67F6A";
            var command = new CommandID(
                VSConstants.GUID_VSStandardCommandSet97, 
                VSConstants.cmdidToolsOptions);
            var mcs = GetService(typeof(IMenuCommandService)) 
                as MenuCommandService;
            mcs.GlobalInvoke(command, targetGUID);
            //</snippet6>
        }
    }
}