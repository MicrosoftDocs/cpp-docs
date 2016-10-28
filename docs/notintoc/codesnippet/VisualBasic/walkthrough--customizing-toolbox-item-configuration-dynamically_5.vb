    <PrincipalPermission(SecurityAction.Demand)> Public Sub _
        ConfigureToolboxItem(ByVal item As ToolboxItem) _
        Implements IConfigureToolboxItem.ConfigureToolboxItem

        If item Is Nothing Then Return

        ' Create a filter for the Toolbox.
        Dim newFilter As ToolboxItemFilterAttribute
        If GetType(Control1).ToString() = item.TypeName Then

            ' For Control1, only show it when editing a UserControl.
            newFilter = New ToolboxItemFilterAttribute( _
                "System.Windows.Forms.UserControl", _
                ToolboxItemFilterType.Require)

        ElseIf GetType(Control2).ToString() = item.TypeName Then

            ' For Control2, only show it when not editing a UserControl.
            newFilter = New ToolboxItemFilterAttribute( _
                "System.Windows.Forms.UserControl", _
                ToolboxItemFilterType.Prevent)

        Else

            ' Don't apply a filter to other classes.
            Return

        End If

        item.Filter = CType(New ToolboxItemFilterAttribute() {newFilter}, ICollection)
    End Sub