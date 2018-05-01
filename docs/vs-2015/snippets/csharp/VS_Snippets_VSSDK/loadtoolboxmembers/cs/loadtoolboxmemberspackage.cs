// VsPkg.cs : Implementation of LoadToolboxMembers
//

//<Snippet08>
using System;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.InteropServices;
using System.ComponentModel.Design;
using Microsoft.Win32;
using Microsoft.VisualStudio.Shell.Interop;
using Microsoft.VisualStudio.OLE.Interop;
using Microsoft.VisualStudio.Shell;

//<Snippet07>
using System.Collections;
using System.ComponentModel;
using System.Drawing.Design;
using System.Reflection;
//</Snippet07>

namespace Company.LoadToolboxMembersCS
{
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
    [Guid(GuidList.guidLoadToolboxMembersPkgString)]
    [ProvideToolboxItems(1)]
    public sealed class LoadToolboxMembersPackage : Package
    {
        // List for the toolbox items provided by this package.
        private ArrayList ToolboxItemList;

        // Name for the Toolbox category tab for the package's toolbox items.
        private string CategoryTab = "LoadToolboxMembers Walkthrough CS";

        // ...
        //</Snippet08>

        /// <summary>
        /// Default constructor of the package.
        /// Inside this method you can place any initialization code that does not require 
        /// any Visual Studio service because at this point the package object is created but 
        /// not sited yet inside Visual Studio environment. The place to do all the other 
        /// initialization is the Initialize method.
        /// </summary>
        public LoadToolboxMembersPackage()
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
        //<Snippet09>
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
                CommandID menuCommandID =
                    new CommandID(GuidList.guidLoadToolboxMembersCmdSet,
                        (int)PkgCmdIDList.cmdidMyCommand);
                MenuCommand menuItem =
                    new MenuCommand(MenuItemCallback, menuCommandID );
                mcs.AddCommand( menuItem );

                // Subscribe to the toolbox intitialized and upgraded events.
                ToolboxInitialized += new EventHandler(OnRefreshToolbox);
                ToolboxUpgraded += new EventHandler(OnRefreshToolbox);
            }

            // Use reflection to get the toolbox items provided in this assembly.
            ToolboxItemList = CreateItemList(this.GetType().Assembly);
            if (null == ToolboxItemList)
            {
                // Unable to generate the list.
                // Add error handling code here.
            }
        }
        //</Snippet09>
        #endregion

        //<Snippet10>
        // Scan for toolbox items in the assembly and return the list of
        // toolbox items.
        private ArrayList CreateItemList(Assembly assembly)
        {
            ArrayList list = new ArrayList();
            foreach (Type possibleItem in assembly.GetTypes())
            {
                ToolboxItem item = CreateToolboxItem(possibleItem);
                if (item != null)
                {
                    list.Add(item);
                }
            }
            return list;
        }

        // If the type represents a toolbox item, return an instance of the type;
        // otherwise, return null.
        private ToolboxItem CreateToolboxItem(Type possibleItem)
        {
            // A toolbox item must implement IComponent and must not be abstract.
            if (!typeof(IComponent).IsAssignableFrom(possibleItem) ||
                possibleItem.IsAbstract)
            {
                return null;
            }

            // A toolbox item must have a constructor that takes a parameter of
            // type Type or a constructor that takes no parameters.
            if (null == possibleItem.GetConstructor(new Type[] { typeof(Type) }) &&
                null == possibleItem.GetConstructor(new Type[0]))
            {
                return null;
            }

            ToolboxItem item = null;

            // Check the custom attributes of the candidate type and attempt to
            // create an instance of the toolbox item type.
            AttributeCollection attribs =
                TypeDescriptor.GetAttributes(possibleItem);
            ToolboxItemAttribute tba =
                attribs[typeof(ToolboxItemAttribute)] as ToolboxItemAttribute;
            if (tba != null && !tba.Equals(ToolboxItemAttribute.None))
            {
                if (!tba.IsDefaultAttribute())
                {
                    // This type represents a custom toolbox item implementation.
                    Type itemType = tba.ToolboxItemType;
                    ConstructorInfo ctor =
                        itemType.GetConstructor(new Type[] { typeof(Type) });
                    if (ctor != null && itemType != null)
                    {
                        item = (ToolboxItem)ctor.Invoke(new object[] { possibleItem });
                    }
                    else
                    {
                        ctor = itemType.GetConstructor(new Type[0]);
                        if (ctor != null)
                        {
                            item = (ToolboxItem)ctor.Invoke(new object[0]);
                            item.Initialize(possibleItem);
                        }
                    }
                }
                else
                {
                    // This type represents a default toolbox item.
                    item = new ToolboxItem(possibleItem);
                }
            }
            if (item == null)
            {
                throw new ApplicationException("Unable to create a ToolboxItem " +
                    "object from " + possibleItem.FullName + ".");
            }

            // Update the display name of the toolbox item and add the item to
            // the list.
            DisplayNameAttribute displayName =
                attribs[typeof(DisplayNameAttribute)] as DisplayNameAttribute;
            if (displayName != null && !displayName.IsDefaultAttribute())
            {
                item.DisplayName = displayName.DisplayName;
            }

            return item;
        }
        //</Snippet10>

        //<Snippet11>
        void OnRefreshToolbox(object sender, EventArgs e)
        {
            // Add new instances of all ToolboxItems contained in ToolboxItemList.
            IToolboxService service =
                GetService(typeof(IToolboxService)) as IToolboxService;
            IVsToolbox toolbox = GetService(typeof(IVsToolbox)) as IVsToolbox;

            //Remove target tab and all controls under it.
            foreach (ToolboxItem oldItem in service.GetToolboxItems(CategoryTab))
            {
                service.RemoveToolboxItem(oldItem);
            }
            toolbox.RemoveTab(CategoryTab);

            foreach (ToolboxItem itemFromList in ToolboxItemList)
            {
                service.AddToolboxItem(itemFromList, CategoryTab);
            }
            service.SelectedCategory = CategoryTab;

            service.Refresh();
        }
        //</Snippet11>

        /// <summary>
        /// This function is the callback used to execute a command when the a menu item is clicked.
        /// See the Initialize method to see how the menu item is associated to this function using
        /// the OleMenuCommandService service and the MenuCommand class.
        /// </summary>
        //<Snippet12>
        private void MenuItemCallback(object sender, EventArgs e)
        {
            IVsPackage pkg = GetService(typeof(Package)) as Package;
            pkg.ResetDefaults((uint)__VSPKGRESETFLAGS.PKGRF_TOOLBOXITEMS);
        }
        //</Snippet12>

    }
}