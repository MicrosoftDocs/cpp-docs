    // Set the display name and custom bitmap to use for this item.
    // The build action for the bitmap must be "Embedded Resource".
    // Also declare a custom toolbox item implementation.
    [DisplayName("ToolboxMember 2 CS")]
    [Description("Custom toolbox item from package LoadToolboxMembers.")]
    [ToolboxItem(typeof(Control2_ToolboxItem))]
    [ToolboxBitmap(typeof(Control2), "Control2.bmp")]
    public partial class Control2 : UserControl
    {
        public Control2()
        {
            InitializeComponent();

            button1.Text = this.Name + " Button";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hello world from " + this.ToString());
        }
    }