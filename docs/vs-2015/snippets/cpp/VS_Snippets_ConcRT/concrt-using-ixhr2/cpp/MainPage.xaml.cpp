//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace UsingIXHR2;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// <snippetA5>
using namespace concurrency;
using namespace std;
using namespace Web;
// </snippetA5>

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

MainPage::MainPage()
{
    InitializeComponent();
}

/// <summary>
/// Invoked when this page is about to be displayed in a Frame.
/// </summary>
/// <param name="e">Event data that describes how this page was reached.  The Parameter
/// property is typically used to configure the page.</param>
void MainPage::OnNavigatedTo(NavigationEventArgs^ e)
{
    (void) e;	// Unused parameter
}

// <snippetA7>
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
// </snippetA7>

// <snippetA6>
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
// </snippetA6>