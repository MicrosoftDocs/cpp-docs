using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WpfApplication1
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        //<snippet22>
        public MainWindow()
        {
            InitializeComponent();
            counter1.Incremented += new EventHandler(counter1_Incremented);
        }

        void counter1_Incremented(object sender, EventArgs e)
        {
            button1.Opacity -= .2;
        }
        //</snippet22>

        //<snippet21>
        private void button1_Click(object sender, RoutedEventArgs e)
        {
            counter1.Increment();
        }
        //</snippet21>
    }
}
