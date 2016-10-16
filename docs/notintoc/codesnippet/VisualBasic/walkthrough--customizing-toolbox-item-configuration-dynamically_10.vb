    ' Add new instances of all ToolboxItems to the toolbox item list.
    Private Sub OnRefreshToolbox(ByVal sender As Object, ByVal e As EventArgs) _
    Handles Me.ToolboxInitialized, Me.ToolboxUpgraded

        Dim service As IToolboxService = _
            TryCast(GetService(GetType(IToolboxService)), IToolboxService)
        Dim toolbox As IVsToolbox = _
             TryCast(GetService(GetType(IVsToolbox)), IVsToolbox)

        ' Remove target tab and all items under it.
        For Each item As ToolboxItem In service.GetToolboxItems(CategoryTab)
            service.RemoveToolboxItem(item)
        Next
        toolbox.RemoveTab(CategoryTab)

        ' Recreate the target tab with the items from the current list. 
        For Each item As ToolboxItem In ToolboxItemList
            service.AddToolboxItem(item, CategoryTab)
        Next
        service.SelectedCategory = CategoryTab

        service.Refresh()
    End Sub