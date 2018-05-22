using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
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

namespace CS_Client
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
        }

        /// <summary>
        /// Invoked when this page is about to be displayed in a Frame.
        /// </summary>
        /// <param name="e">Event data that describes how this page was reached.  The Parameter
        /// property is typically used to configure the page.</param>
        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
        }

        //<snippet30>
        private void Button1_Click_1(object sender, RoutedEventArgs e)
        {
            // Create the object
            var nativeObject = new WinRT_CPP.Class1();

            // Call the synchronous method. val is an IList that
            // contains the results. 
            var val = nativeObject.ComputeResult(0);
            StringBuilder result = new StringBuilder();
            foreach (var v in val)
            {
                result.Append(v).Append(System.Environment.NewLine);
            }
            this.Result1.Text = result.ToString();
        }
        //</snippet30>

        //<snippet31>
        async private void PrimesOrderedButton_Click_1(object sender, RoutedEventArgs e)
        {
            var nativeObject = new WinRT_CPP.Class1();

            StringBuilder sb = new StringBuilder();
            sb.Append("Primes found (ordered): ");

            PrimesOrderedResult.Text = sb.ToString();

            // Call the asynchronous method
            var asyncOp = nativeObject.GetPrimesOrdered(2, 100000);

            // Before awaiting, provide a lambda or named method
            // to handle the Progress event that is fired at regular
            // intervals by the asyncOp object. This handler updates
            // the progress bar in the UI.
            asyncOp.Progress = (asyncInfo, progress) =>
                {
                    PrimesOrderedProgress.Value = progress;
                };

            // Wait for the operation to complete
            var asyncResult = await asyncOp;

            // Convert the results to strings
            foreach (var result in asyncResult)
            {
                sb.Append(result).Append(" ");
            }

            // Display the results
            PrimesOrderedResult.Text = sb.ToString();
        }
        //</snippet31>

        //<snippet32>
        private void PrimesUnOrderedButton_Click_1(object sender, RoutedEventArgs e)
        {
            var nativeObject = new WinRT_CPP.Class1();

            StringBuilder sb = new StringBuilder();
            sb.Append("Primes found (unordered): ");
            PrimesUnOrderedResult.Text = sb.ToString();

            // primeFoundEvent is a user-defined event in nativeObject
            // It passes the results back to this thread as they are produced
            // and the event handler that we define here immediately displays them.
            nativeObject.primeFoundEvent += (n) =>
            {
                sb.Append(n.ToString()).Append(" ");
                PrimesUnOrderedResult.Text = sb.ToString();
            };

            // Call the async method.
            var asyncResult = nativeObject.GetPrimesUnordered(2, 100000);

            // Provide a handler for the Progress event that the asyncResult
            // object fires at regular intervals. This handler updates the progress bar.
            asyncResult.Progress += (asyncInfo, progress) =>
                {
                    PrimesUnOrderedProgress.Value = progress;
                };
        }

        private void Clear_Button_Click(object sender, RoutedEventArgs e)
        {
            PrimesOrderedProgress.Value = 0;
            PrimesUnOrderedProgress.Value = 0;
            PrimesUnOrderedResult.Text = "";
            PrimesOrderedResult.Text = "";
            Result1.Text = "";
        }
        //</snippet32>
        
    }
}
