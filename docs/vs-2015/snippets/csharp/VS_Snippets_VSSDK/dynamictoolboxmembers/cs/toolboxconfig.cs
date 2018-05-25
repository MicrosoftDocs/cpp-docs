using System;

//<Snippet03>
using Microsoft.VisualStudio.Shell;
using System.Collections;
using System.ComponentModel;
using System.Drawing.Design;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Security.Permissions;
//</Snippet03>

namespace Company.ItemConfigurationCS
{
    //<Snippet04>
    [ProvideAssemblyFilter("ItemConfigurationCS, Version=*, Culture=*, PublicKeyToken=*")]
    [Guid("E6832593-BF07-4de1-AA0F-7F9B94887DB8")]
    public class ToolboxConfig : IConfigureToolboxItem
    //</Snippet04>
    {
        //<Snippet05>
        [PrincipalPermission(SecurityAction.Demand)]
        public void ConfigureToolboxItem(ToolboxItem item)
        {
            if (null == item) return;

            // Create a filter for the Toolbox.
            ToolboxItemFilterAttribute newFilter;
            if (typeof(Control1).ToString() == item.TypeName)
            {
                // For Control1, only show it when editing a UserControl.
                newFilter = new ToolboxItemFilterAttribute(
                    "System.Windows.Forms.UserControl",
                    ToolboxItemFilterType.Require);
            }
            else if (typeof(Control2).ToString() == item.TypeName)
            {
                // For Control2, only show it when not editing a UserControl.
                newFilter = new ToolboxItemFilterAttribute(
                    "System.Windows.Forms.UserControl",
                    ToolboxItemFilterType.Prevent);
            }
            else
            {
                // Don't apply a filter to other classes.
                return;
            }

            item.Filter = (ICollection)(new ToolboxItemFilterAttribute[] { newFilter });
        }
        //</Snippet05>
    }
}
