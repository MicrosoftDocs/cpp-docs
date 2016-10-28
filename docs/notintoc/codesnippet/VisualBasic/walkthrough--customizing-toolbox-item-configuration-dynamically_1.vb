' Set the display name and custom bitmap to use for this item.
' The build action for the bitmap must be "Embedded Resource".
<DisplayName("ToolboxMember 1 VB")> _
<Description("Custom toolbox item from package ItemConfiguration.")> _
<ToolboxItem(True)> _
<ToolboxBitmap(GetType(Control1), "Control1.bmp")> _
Public Class Control1

    Public Sub New()

        InitializeComponent()

        Button1.Text = Me.Name + " Button"
    End Sub

    Private Sub Button1_Click(ByVal sender As Object, ByVal e As EventArgs) _
        Handles Button1.Click

        MessageBox.Show("Hello world from " & Me.ToString())
    End Sub
End Class