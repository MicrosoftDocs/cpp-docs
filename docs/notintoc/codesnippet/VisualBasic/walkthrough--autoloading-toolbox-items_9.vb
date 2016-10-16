    Protected Overrides Sub Initialize()
        Trace.WriteLine(String.Format(CultureInfo.CurrentCulture, _
            "Entering Initialize() of: {0}", Me.GetType().Name))
        MyBase.Initialize()

        ' Add our command handlers for menu (commands must exist in the .vsct file)
        Dim mcs As OleMenuCommandService = _
            TryCast(GetService(GetType(IMenuCommandService)), OleMenuCommandService)
        If Not mcs Is Nothing Then

            ' Create the command for the menu item.
            Dim menuCommandID As New CommandID( _
                GuidList.guidLoadToolboxMembersCmdSet, CInt(PkgCmdIDList.cmdidMyCommand))
            Dim menuItem As New MenuCommand( _
                New EventHandler(AddressOf MenuItemCallback), menuCommandID)
            mcs.AddCommand(menuItem)
        End If

        ' Use reflection to get the toolbox items provided in this assembly.
        ToolboxItemList = CreateItemList(Me.GetType().Assembly)
        If ToolboxItemList Is Nothing Then
            ' Unable to generate the list.
            ' Add error handling code here.
        End If
    End Sub