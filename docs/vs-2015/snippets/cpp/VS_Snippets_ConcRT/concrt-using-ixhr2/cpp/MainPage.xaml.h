//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"
// <snippetA2>
#include "HttpRequest.h"
//  </snippetA2>

namespace UsingIXHR2
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class MainPage sealed
    {
    public:
        MainPage();

    protected:
        virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;

    private:
        // <snippetA3>
        // Produces HTTP requets.
        Web::HttpRequest m_httpRequest;
        // Enables us to cancel the active HTTP request.
        concurrency::cancellation_token_source m_cancelHttpRequestSource;
        // </snippetA3>

        // <snippetA4>
        // Displays the result of the provided HTTP request on the UI.
        void ProcessHttpRequest(concurrency::task<std::wstring> httpRequest);
        // </snippetA4>

        void GetButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void CancelButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void PostButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
    };
}
