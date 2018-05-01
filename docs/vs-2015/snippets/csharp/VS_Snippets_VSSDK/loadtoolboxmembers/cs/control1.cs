using System;
using System.ComponentModel;
using System.Drawing;
using System.Windows.Forms;

namespace Company.LoadToolboxMembersCS
{
    //<Snippet03>
    // Set the display name and custom bitmap to use for this item.
    // The build action for the bitmap must be "Embedded Resource".
    [DisplayName("ToolboxMember 1 CS")]
    [Description("Custom toolbox item from package LoadToolboxMembers.")]
    [ToolboxItem(true)]
    [ToolboxBitmap(typeof(Control1), "Control1.bmp")]
    public partial class Control1 : UserControl
    {
        //</Snippet03>

        //<Snippet02>
        public Control1()
        {
            InitializeComponent();

            button1.Text = this.Name + " Button";
        }
        //</Snippet02>

        //<Snippet01>
        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Hello world from " + this.ToString());
        }
        //</Snippet01>
    }
}
