using System;
using System.Windows;
using System.Windows.Controls;
using System.ComponentModel;

namespace WPFCounter2
{
    /// <summary>
    /// Interaction logic for ToolboxControl.xaml
    /// </summary>
    //<snippet04>
    [ProvideToolboxControl("General", true)]
    public partial class Counter : UserControl
    //</snippet04>
    {
        //<snippet05>
        private MyDataModel dm;
        public Counter()
        {
            this.DataContext = new MyDataModel();
            dm = (MyDataModel)DataContext;
            InitializeComponent();            
        }
        //</snippet05>

        //<snippet08>
        private void button1_Click(object sender, RoutedEventArgs e)
        {
            dm.Count = 0;
        }
        //</snippet08>

        //<snippet09>
        public Visibility ShowReset
        {
            get { return button1.Visibility; }
            set { button1.Visibility = value; }
        }
        //</snippet09>

        //<snippet06>
        public string Text
        {
            get { return dm.Text; }
            set { dm.Text = value; }
        }

        public int Count { get { return dm.Count; } }
        //</snippet06>

        //<snippet07>
        public event EventHandler Incremented;
        public void Increment()
        {
            dm.Count ++;
            if (Incremented != null)
            {
                Incremented(this, EventArgs.Empty);
            }
        }
        //</snippet07>
    }

    //<snippet01>
    public class MyDataModel : INotifyPropertyChanged
    //</snippet01>
    {
        //<snippet02>
        public event PropertyChangedEventHandler PropertyChanged;
        private void RaisePropertyChanged(string propertyName)
        {
            if (PropertyChanged != null)
            {
                PropertyChanged(this, 
                    new PropertyChangedEventArgs(propertyName));
            }
        }
        //</snippet02>

        //<snippet03>
        private string text = "Count:";
        public string Text
        {
            get { return this.text; }
            set
            {
                this.text = value;
                RaisePropertyChanged("Text");
            }
        }

        private int count = 0;
        public int Count
        {
            get { return this.count; }
            set
            {
                this.count = value;
                RaisePropertyChanged("Count");
            }
        }
        //</snippet03>
    }
}
