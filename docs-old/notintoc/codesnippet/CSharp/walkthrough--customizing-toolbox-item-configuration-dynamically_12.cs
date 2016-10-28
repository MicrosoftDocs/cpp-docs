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