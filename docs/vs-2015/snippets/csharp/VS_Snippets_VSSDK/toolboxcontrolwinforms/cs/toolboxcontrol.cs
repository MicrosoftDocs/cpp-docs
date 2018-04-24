//<snippet06>
using System;
using System.Windows.Forms;

namespace Counter
{
    //<snippet07>
    [ProvideToolboxControl("General", false)]
    public partial class Counter : UserControl
    //</snippet07>
    {
        public Counter()
        {
            InitializeComponent();
        }

        //<snippet04>
        private void btnReset_Click(object sender, EventArgs e)
        {
            currentValue = 0;
            label1.Text = displayText + Value;
        }
        //</snippet04>

        //<snippet01>
        int currentValue;
        string displayText;
        //</snippet01>

        //<snippet03>
        public int Value {
            get { return currentValue; } 
            }

        public string Message {
            get { return displayText; }
            set { displayText = value; }
        }

        public bool ShowReset {
            get { return btnReset.Visible; }
            set { btnReset.Visible = value; }
        }
        //</snippet03>

        //<snippet08>
        private void ToolboxControl_Load(object sender, EventArgs e)
        {
            currentValue = 0;
            label1.Text = Message + Value;
        }
        //</snippet08>

        //<snippet02>
        public void Increment()
        {
            currentValue++;
            label1.Text = displayText + Value;
            Incremented(this, EventArgs.Empty);
        }
        //</snippet02>

        //<snippet05>
        public event EventHandler Incremented;
        //</snippet05>
    }
}
//</snippet06>