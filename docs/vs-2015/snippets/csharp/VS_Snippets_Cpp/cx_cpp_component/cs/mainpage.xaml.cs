using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

namespace cs_client_app
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
            //<snippet100>
            //Instantiation in C# (requires "Add reference > Project reference")
            var nativeObject = new CppComponent.SampleRefClass();
            //</snippet100>

            //<snippet101>
            //Call a method and display result in a XAML TextBlock
            var num = nativeObject.LogCalc(21.5);
            ResultText.Text = num.ToString();
            //</snippet101>
        }

        /// <summary>
        /// Invoked when this page is about to be displayed in a Frame.
        /// </summary>
        /// <param name="e">Event data that describes how this page was reached.  The Parameter
        /// property is typically used to configure the page.</param>
        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
        }

        //<snippet103>
        private void GetAndSetPlayerData()
        {
            // Create a ref class
            var player = new CppComponent.Player();

            // Create a variable of a value struct
            // type that is defined in C++
            CppComponent.PlayerData myPlayer;
            myPlayer.Name = "Babe Ruth";
            myPlayer.Number = 12;
            myPlayer.ScoringAverage = .398;

            // Set the property
            player.PlayerStats = myPlayer;

            // Get the property and store it in a new variable
            CppComponent.PlayerData myPlayer2 = player.PlayerStats;
            ResultText.Text += myPlayer.Name + " , " + myPlayer.Number.ToString() +
                " , " + myPlayer.ScoringAverage.ToString();
        }
        //</snippet103>


        //<snippet108>
        private void DateTimeExample()
        {
            // Pass a System.DateTime to a C++ method
            // that takes a Windows::Foundation::DateTime
            DateTime dt = DateTime.Now;
            var nativeObject = new CppComponent.MyDateClass();
            nativeObject.SetTime(dt);

            // Retrieve a Windows::Foundation::DateTime as a
            // System.DateTimeOffset
            DateTimeOffset myDate = nativeObject.TimeStamp;

            // Print the long-form date string
            ResultText.Text += myDate.ToString();
        }
        //</snippet108>

        //<snippet109>
        private void SortListItems()
        {
            IList<int> myList = new List<int>();
            myList.Add(5);
            myList.Add(9);
            myList.Add(17);
            myList.Add(2);

            var nativeObject = new CppComponent.CollectionExample();
            IList<int> mySortedList = nativeObject.SortVector(myList);

            foreach (var item in mySortedList)
            {
                ResultText.Text += " " + item.ToString();
            }
        }

        //</snippet109>

        //<snippet110>
        private void GetDictionary()
        {
            var nativeObject = new CppComponent.CollectionExample();
            IDictionary<int, string> d = nativeObject.GetMap();
            ResultText.Text += d[2].ToString();
        }
        //</snippet110>

        //<snippet111>
        private void GetAProperty()
        {
            // Get the value of the integer property
            // Instantiate the C++ object
            var obj = new CppComponent.PropertyExample();

            // Get an integer property
            var propValue = obj.PropertyA;
            ResultText.Text += propValue.ToString();

            // Set a string property
            obj.PropertyB = " What is the meaning of the universe?";
            ResultText.Text += obj.PropertyB;

        }
        //</snippet111>

        //<snippet112>
        //Subscribe to event and call method that causes it to be fired.
        private void TestMethod()
        {
            var objWithEvent = new CppComponent.PropertyExample();
            objWithEvent.PropertyChangedEvent += objWithEvent_PropertyChangedEvent;

            objWithEvent.PropertyA = 42;
        }

        //Event handler method
        private void objWithEvent_PropertyChangedEvent(object __param0, int __param1)
        {
            ResultText.Text = "the event was fired and the result is " +
                 __param1.ToString();
        }
        //</snippet112>

    }
    
}
