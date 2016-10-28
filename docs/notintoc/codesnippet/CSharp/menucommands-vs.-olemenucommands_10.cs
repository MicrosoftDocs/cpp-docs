                // Create the command for the menu item.
                CommandID menuCommandID = new CommandID(GuidList.guidMenuTextCmdSet, (int)PkgCmdIDList.cmdidMyCommand);
                OleMenuCommand menuItem = new OleMenuCommand(MenuItemCallback, menuCommandID );
                menuItem.BeforeQueryStatus +=
                    new EventHandler(OnBeforeQueryStatus);
                mcs.AddCommand(menuItem);