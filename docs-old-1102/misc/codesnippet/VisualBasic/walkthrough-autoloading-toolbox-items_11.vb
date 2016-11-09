    Private Sub OnRefreshToolbox(ByVal sender As Object, ByVal e As EventArgs) _
        Handles Me.ToolboxInitialized, Me.ToolboxUpgraded

        ' Add new instances of all ToolboxItems contained in ToolboxItemList.
        Dim service As IToolboxService = TryCast( _
                GetService(GetType(IToolboxService)), IToolboxService)
        Dim toolbox As IVsToolbox = TryCast( _
            GetService(GetType(IVsToolbox)), IVsToolbox)

        'Remove target tab and all controls under it.
        For Each oldItem As ToolboxItem In service.GetToolboxItems(CategoryTab)
            service.RemoveToolboxItem(oldItem)
        Next
        toolbox.RemoveTab(CategoryTab)

        For Each itemFromList As ToolboxItem In ToolboxItemList
            service.AddToolboxItem(itemFromList, CategoryTab)
        Next
        service.SelectedCategory = CategoryTab

        service.Refresh()
    End Sub