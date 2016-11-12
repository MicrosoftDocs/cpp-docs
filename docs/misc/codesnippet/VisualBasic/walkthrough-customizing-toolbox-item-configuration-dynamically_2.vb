Imports System.Drawing.Design
Imports System.Globalization

' Set the display name and custom bitmap to use for Me item.
' The build action for the bitmap must be "Embedded Resource".
' Also declare a custom toolbox item implementation.
<DisplayName("ToolboxMember 2 VB")> _
<Description("Custom toolbox item from package ItemConfiguration.")> _
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

<Serializable()> _
Friend Class Control2_ToolboxItem
    Inherits ToolboxItem

    Public Sub New(ByVal toolType As Type)
        MyBase.New(toolType)
    End Sub

    Public Overrides Sub Initialize(ByVal toolType As Type)

        If Not toolType.Equals(GetType(Control2)) Then
            Throw New ArgumentException( _
                String.Format(CultureInfo.CurrentCulture, _
                    "The {0} constructor argument must be of type {1}.", _
                    Me.GetType().FullName, GetType(Control2).FullName))
        End If

        MyBase.Initialize(toolType)
    End Sub
End Class