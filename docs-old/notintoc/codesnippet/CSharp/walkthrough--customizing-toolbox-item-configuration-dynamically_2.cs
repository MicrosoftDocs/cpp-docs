using System;
using System.ComponentModel;
using System.Drawing;
using System.Windows.Forms;

using System.Drawing.Design;
using System.Globalization;

namespace Company.ItemConfigurationCS
{
    // Set the display name and custom bitmap to use for this item.
    // The build action for the bitmap must be "Embedded Resource".
    // Also declare a custom toolbox item implementation.
    [DisplayName("ToolboxMember 2 CS")]
    [Description("Custom toolbox item from package ItemConfigurationPackage.")]
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

    [Serializable()]
    internal class Control2_ToolboxItem : ToolboxItem
    {
        public Control2_ToolboxItem(Type toolType)
            : base(toolType) { }

        public override void Initialize(Type toolType)
        {
            if (!toolType.Equals(typeof(Control2)))
            {
                throw new ArgumentException(
                    string.Format(CultureInfo.CurrentCulture,
                        "The {0} constructor argument must be of type {1}.",
                        this.GetType().FullName, typeof(Control2).FullName));
            }

            base.Initialize(toolType);
        }
    }
}