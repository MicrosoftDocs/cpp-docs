// VsPkg.cs : Implementation of ItemConfiguration
//

//<Snippet09>
using System;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.InteropServices;
using System.ComponentModel.Design;
using Microsoft.Win32;
using Microsoft.VisualStudio.Shell.Interop;
using Microsoft.VisualStudio.OLE.Interop;
using Microsoft.VisualStudio.Shell;

//<Snippet06>
using System.Collections;
using System.ComponentModel;
using System.Drawing.Design;
using System.Reflection;
//</Snippet06>

namespace Company.ItemConfigurationCS
{
    //<Snippet07>
    // ...
    [PackageRegistration(UseManagedResourcesOnly = true)]
    // ...
    [DefaultRegistryRoot("Software\\Microsoft\\VisualStudio\\9.0")]
    // ...
    [InstalledProductRegistration(false, "#110", "#112", "1.0", IconResourceID = 400)]
    // ...
    [ProvideLoadKey("Standard", "1.0", "Package Name", "Company", 1)]
    // ...
    [ProvideMenuResource(1000, 1)]
    [Guid(GuidList.guidItemConfigurationPkgString)]
    [ProvideToolboxItems(1)]
    [ProvideToolboxItemConfiguration(typeof(ToolboxConfig))]
    public sealed class DynamicToolboxMembersPackage : Package
    //</Snippet07>
    {
        //<Snippet08>
        private ArrayList ToolboxItemList;
        private static readonly string CategoryTab =
            "ItemConfiguration Walkthrough CS";
        //</Snippet08>

        // ...
        //</Snippet09>
        
        // ...
        public DynamicToolboxMembersPackage()
        {
            Trace.WriteLine(string.Format(CultureInfo.CurrentCulture,
                "Entering constructor for: {0}", this.ToString()));

            //<Snippet11>
            this.ToolboxInitialized += new EventHandler(OnRefreshToolbox);
            this.ToolboxUpgraded += new EventHandler(OnRefreshToolbox);
            //</Snippet11>
        }

        //<Snippet10>
        // Add new instances of all ToolboxItems to the toolbox item list.
        void OnRefreshToolbox(object sender, EventArgs e)
        {
            IToolboxService service =
                GetService(typeof(IToolboxService)) as IToolboxService;
            IVsToolbox toolbox =
                GetService(typeof(IVsToolbox)) as IVsToolbox;

            // Remove target tab and all items under it.
            foreach (ToolboxItem item in service.GetToolboxItems(CategoryTab))
            {
                service.RemoveToolboxItem(item);
            }
            toolbox.RemoveTab(CategoryTab);

            // Recreate the target tab with the items from the current list. 
            foreach (ToolboxItem item in ToolboxItemList)
            {
                service.AddToolboxItem(item, CategoryTab);
            }
            service.SelectedCategory = CategoryTab;

            service.Refresh();
        }
        //</Snippet10>

        /////////////////////////////////////////////////////////////////////////////
        // Overriden Package Implementation

        // ...
        protected override void Initialize()
        {
            Trace.WriteLine (string.Format(CultureInfo.CurrentCulture,
                "Entering Initialize() of: {0}", this.ToString()));
            base.Initialize();

            // Add our command handlers for menu (commands must exist in the .vsct file)
            OleMenuCommandService mcs =
                GetService(typeof(IMenuCommandService)) as OleMenuCommandService;
            if ( null != mcs )
            {
                // Create the command for the menu item.
                CommandID menuCommandID = new CommandID(
                    GuidList.guidItemConfigurationCmdSet,
                    (int)PkgCmdIDList.cmdidMyCommand);
                MenuCommand menuItem = new MenuCommand(MenuItemCallback, menuCommandID );
                mcs.AddCommand( menuItem );
            }

            //<Snippet12>
            // Use the toolbox service to get a list of all toolbox items in
            // this assembly.
            ToolboxItemList = new ArrayList(
                ToolboxService.GetToolboxItems(this.GetType().Assembly, ""));
            if (null == ToolboxItemList)
            {
                throw new ApplicationException(
                    "Unable to generate a toolbox item listing for " +
                    this.GetType().FullName);
            }

            // Update the display name of each toolbox item in the list.
            Assembly thisAssembly = this.GetType().Assembly;
            foreach (ToolboxItem item in ToolboxItemList)
            {
                Type underlyingType = thisAssembly.GetType(item.TypeName);
                AttributeCollection attribs =
                    TypeDescriptor.GetAttributes(underlyingType);
                DisplayNameAttribute displayName =
                    attribs[typeof(DisplayNameAttribute)] as DisplayNameAttribute;
                if (displayName != null && !displayName.IsDefaultAttribute())
                {
                    item.DisplayName = displayName.DisplayName;
                }
            }
            //</Snippet12>
        }

        // ...
        //<Snippet13>
        private void MenuItemCallback(object sender, EventArgs e)
        {
            IVsPackage pkg = GetService(typeof(Package)) as IVsPackage;
            pkg.ResetDefaults((uint)__VSPKGRESETFLAGS.PKGRF_TOOLBOXITEMS);
        }
        //</Snippet13>
    }
}