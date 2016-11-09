// Displays the result of the provided HTTP request on the UI.
void MainPage::ProcessHttpRequest(task<wstring> httpRequest)
{
    // Enable only the Cancel button.
    GetButton->IsEnabled = false;
    PostButton->IsEnabled = false;
    CancelButton->IsEnabled = true;

    // Clear the previous response and start the progress ring.
    ResponseTextBlock->Text = "";
    ResponseProgressRing->IsActive = true;

    // Create a continuation that shows the results on the UI.
    // The UI must be updated on the ASTA thread. 
    // Therefore, schedule the continuation to run on the current context.
    httpRequest.then([this](task<wstring> previousTask)
    {
        try
        {
            //
            // Show the result on the UI.

            wstring response = previousTask.get();
            if (m_httpRequest.GetStatusCode() == 200)
            {
                // The request succeeded. Show the response.
                ResponseTextBlock->Text = ref new String(response.c_str());
            }
            else
            {
                // The request failed. Show the status code and reason.
                wstringstream ss;
                ss << L"The server returned "
                   << m_httpRequest.GetStatusCode()
                   << L" ("
                   << m_httpRequest.GetReasonPhrase()
                   << L')';
                ResponseTextBlock->Text = ref new String(ss.str().c_str());
            }
        }
        catch (const task_canceled&)
        {
            // Indicate that the operation was canceled.
            ResponseTextBlock->Text = "The operation was canceled";
        }
        catch (Exception^ e)
        {
            // Indicate that the operation failed.
            ResponseTextBlock->Text = "The operation failed";

            // TODO: Handle the error further.
            (void)e;
        }

        // Enable the Get and Post buttons.
        GetButton->IsEnabled = true;
        PostButton->IsEnabled = true;
        CancelButton->IsEnabled = false;

        // Stop the progress ring.
        ResponseProgressRing->IsActive = false;

    }, task_continuation_context::use_current());
}