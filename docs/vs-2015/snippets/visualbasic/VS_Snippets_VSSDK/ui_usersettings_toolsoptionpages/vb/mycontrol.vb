Imports System.Security.Permissions
Imports System.Windows.Forms

'''<summary>
'''  Summary description for MyControl.
'''</summary>
Public Class MyControl
    Inherits UserControl

    '''<summary> 
    '''  Let this control process the mnemonics.
    '''</summary>
    <UIPermission(SecurityAction.LinkDemand, Window:= UIPermissionWindow.AllWindows)> _
    Protected Overrides Function ProcessDialogChar(ByVal charCode As Char) As Boolean
        ' If we're the top-level form or control, we need to do the mnemonic handling
        If charCode <> " "c And ProcessMnemonic(charCode) Then
            Return True
        End If
        Return MyBase.ProcessDialogChar(charCode)
    End Function

    '''<summary>
    ''' Enable the IME status handling for this control.
    '''</summary>
    Protected Overrides ReadOnly Property CanEnableIme() As Boolean
        Get
            Return True
        End Get
    End Property

    <System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Globalization", "CA1300:SpecifyMessageBoxOptions")> _
    Private Sub button1_Click(ByVal sender As Object, ByVal e As System.EventArgs) Handles Button1.Click
        MessageBox.Show(Me, _
                        String.Format(System.Globalization.CultureInfo.CurrentUICulture, "We are inside {0}.button1_Click()", Me.ToString()), _
                        "My Tool Window")
    End Sub
End Class