Imports System.Security.Permissions

'''<summary>
'''  Interaction logic for MyControl.xaml
'''</summary>
Partial Public Class MyControl
    Inherits System.Windows.Controls.UserControl

    <System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Globalization", "CA1300:SpecifyMessageBoxOptions")> _
    Private Sub button1_Click(ByVal sender As Object, ByVal e As System.EventArgs)

        System.Windows.MessageBox.Show(String.Format(System.Globalization.CultureInfo.CurrentUICulture, "We are inside {0}.button1_Click()", Me.ToString()), _
                        "Windows Media Player")
    End Sub

    '<snippet31>
    Public ReadOnly Property MediaPlayer() As System.Windows.Controls.MediaElement
        Get
            Return MediaElement1
        End Get
    End Property
    '</snippet31>

End Class