            Dim menuCommandID As CommandID = New CommandID(GuidList.guidMenuTextCmdSet, CInt(PkgCmdIDList.cmdidMyTextCommand))
            Dim menuItem As OleMenuCommand = New OleMenuCommand(New EventHandler(AddressOf MenuItemCallback), menuCommandID)
            AddHandler menuItem.BeforeQueryStatus, AddressOf OnBeforeQueryStatus
            mcs.AddCommand(menuItem)