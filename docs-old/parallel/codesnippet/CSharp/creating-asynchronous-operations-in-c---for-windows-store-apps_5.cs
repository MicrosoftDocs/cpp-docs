        private PrimesLibrary.Primes primesLib = new PrimesLibrary.Primes();

        private async void computePrimes(object sender, RoutedEventArgs e)
        {
            b1.IsEnabled = false;
            tb1.Text = "Working...";

            var asyncAction = primesLib.ComputePrimesAsync(0, 100000);

            await asyncAction;

            tb1.Text = "Done";
            b1.IsEnabled = true;
        }

        private async void computePrimesWithProgress(object sender, RoutedEventArgs e)
        {
            b2.IsEnabled = false;
            tb2.Text = "Working...";

            var asyncAction = primesLib.ComputePrimesWithProgressAsync(0, 100000);
            asyncAction.Progress = new AsyncActionProgressHandler<double>((action, progress) =>
            {
                pb1.Value = progress;
            });

            await asyncAction;

            tb2.Text = "Done";
            b2.IsEnabled = true;
        }

        private async void getPrimes(object sender, RoutedEventArgs e)
        {
            b3.IsEnabled = false;
            tb3.Text = "Working...";

            var asyncOperation = primesLib.GetPrimesAsync(0, 100000);

            await asyncOperation;

            tb3.Text = "Found " + asyncOperation.GetResults().Count + " primes";
            b3.IsEnabled = true;
        }

        private async void getPrimesWithProgress(object sender, RoutedEventArgs e)
        {
            b4.IsEnabled = false;
            tb4.Text = "Working...";

            var asyncOperation = primesLib.GetPrimesWithProgressAsync(0, 100000);
            asyncOperation.Progress = new AsyncOperationProgressHandler<IList<int>, double>((operation, progress) =>
            {
                pb4.Value = progress;
            });

            await asyncOperation;

            tb4.Text = "Found " + asyncOperation.GetResults().Count + " primes";
            b4.IsEnabled = true;
        }

        private async void getPrimesHandleErrors(object sender, RoutedEventArgs e)
        {
            b5.IsEnabled = false;
            tb5.Text = "Working...";

            var asyncOperation = primesLib.GetPrimesWithProgressAsync(-1000, 100000);
            asyncOperation.Progress = new AsyncOperationProgressHandler<IList<int>, double>((operation, progress) =>
            {
                pb5.Value = progress;
            });

            try
            {
                await asyncOperation;
                tb5.Text = "Found " + asyncOperation.GetResults().Count + " primes";
            }
            catch (ArgumentException ex)
            {
                tb5.Text = "ERROR: " + ex.Message;
            }

            b5.IsEnabled = true;
        }

        private IAsyncOperationWithProgress<IList<int>, double> asyncCancelableOperation;

        private async void getPrimesCancellation(object sender, RoutedEventArgs e)
        {
            b6.IsEnabled = false;
            cancelButton.IsEnabled = true;
            tb6.Text = "Working...";

            asyncCancelableOperation = primesLib.GetPrimesWithProgressAsync(0, 200000);
            asyncCancelableOperation.Progress = new AsyncOperationProgressHandler<IList<int>, double>((operation, progress) =>
            {
                pb6.Value = progress;
            });

            try
            {
                await asyncCancelableOperation;
                tb6.Text = "Found " + asyncCancelableOperation.GetResults().Count + " primes";
            }
            catch (System.Threading.Tasks.TaskCanceledException)
            {
                tb6.Text = "Operation canceled";
            }

            b6.IsEnabled = true;
            cancelButton.IsEnabled = false;
        }

        private void cancelGetPrimes(object sender, RoutedEventArgs e)
        {
            cancelButton.IsEnabled = false;
            asyncCancelableOperation.Cancel();
        }