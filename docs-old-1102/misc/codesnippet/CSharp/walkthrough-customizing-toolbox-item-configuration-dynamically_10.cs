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