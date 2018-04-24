<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class MyControl
    Inherits System.Windows.Forms.UserControl

    'UserControl overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        ' 
        ' button1
        ' 
        Me.Button1.Anchor = CType((((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Bottom) _
                Or System.Windows.Forms.AnchorStyles.Left) _
                Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.Button1.BackColor = System.Drawing.SystemColors.Control
        Me.Button1.Location = New System.Drawing.Point(40, 32)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(75, 80)
        Me.Button1.TabIndex = 0
        Me.Button1.Text = "&Click Me!"
        Me.Button1.UseVisualStyleBackColor = True
        ' 
        ' MyToolWindow
        ' 
        Me.BackColor = System.Drawing.SystemColors.Window
        Me.Controls.Add(Me.Button1)
        Me.Name = "MyToolWindow"
        Me.ResumeLayout(False)
    End Sub

    Friend WithEvents Button1 As System.Windows.Forms.Button
End Class