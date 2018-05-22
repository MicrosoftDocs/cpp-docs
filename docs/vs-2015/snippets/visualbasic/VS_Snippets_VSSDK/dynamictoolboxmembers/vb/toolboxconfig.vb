'<Snippet03>
Imports Microsoft.VisualStudio.Shell
Imports System.Collections
Imports System.ComponentModel
Imports System.Drawing.Design
Imports System.Reflection
Imports System.Runtime.InteropServices
Imports System.Security.Permissions
'</Snippet03>

'<Snippet04>
<ProvideAssemblyFilter("ItemConfigurationVB, Version=*, Culture=*, PublicKeyToken=*")> _
<Guid("4DDC7895-442A-45e7-82E7-4E85F243C321")> _
Public Class ToolboxConfig
    Implements IConfigureToolboxItem
    '</Snippet04>

    '<Snippet05>
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
    '</Snippet05>

End Class
