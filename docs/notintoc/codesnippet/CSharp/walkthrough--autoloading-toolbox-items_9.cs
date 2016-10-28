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