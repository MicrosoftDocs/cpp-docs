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