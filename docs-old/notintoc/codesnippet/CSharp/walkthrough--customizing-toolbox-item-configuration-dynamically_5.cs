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