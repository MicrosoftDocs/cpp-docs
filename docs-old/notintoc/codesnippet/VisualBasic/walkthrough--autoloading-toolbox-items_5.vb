' Set the display name and custom bitmap to use for Me item.
' The build action for the bitmap must be "Embedded Resource".
' Also declare a custom toolbox item implementation.
<DisplayName("ToolboxMember 2 VB")> _
<Description("Custom toolbox item from package LoadToolboxMembers.")> _
<ToolboxItem(GetType(Control2_ToolboxItem))> _
<ToolboxBitmap(GetType(Control2), "Control2.bmp")> _
Public Class Control2

    Public Sub New()
        InitializeComponent()

        Button1.Text = Me.Name + " Button"
    End Sub

    Private Sub Button1_Click(ByVal sender As Object, ByVal e As EventArgs) _
        Handles Button1.Click

        MessageBox.Show("Hello world from " & Me.ToString())
    End Sub
End Class