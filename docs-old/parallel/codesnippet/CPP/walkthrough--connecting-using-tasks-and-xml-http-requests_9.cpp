void MainPage::GetButton_Click(Object^ sender, RoutedEventArgs^ e)
{
    // Create a new cancellation token source for the web request.
    m_cancelHttpRequestSource = cancellation_token_source();

    // Set up the GET request parameters.
    auto uri = ref new Uri(InputTextBox->Text);
    auto token = m_cancelHttpRequestSource.get_token();

    // Send the request and then update the UI.
    ProcessHttpRequest(m_httpRequest.GetAsync(uri, token));
}

void MainPage::PostButton_Click(Object^ sender, RoutedEventArgs^ e)
{
    // Create a new cancellation token source for the web request.
    m_cancelHttpRequestSource = cancellation_token_source();

    // Set up the POST request parameters.
    auto uri = ref new Uri(InputTextBox->Text);
    wstring postData(L"This is sample POST data.");
    auto token = m_cancelHttpRequestSource.get_token();

    // Send the request and then update the UI.
    ProcessHttpRequest(m_httpRequest.PostAsync(uri, postData, token));
}

void MainPage::CancelButton_Click(Object^ sender, RoutedEventArgs^ e)
{
    // Disable the Cancel button.
    // It will be re-enabled during the next web request.
    CancelButton->IsEnabled = false;

    // Initiate cancellation.
    m_cancelHttpRequestSource.cancel();
}