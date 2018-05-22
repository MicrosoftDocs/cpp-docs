//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace CommonWords
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public ref class MainPage sealed
    {
    public:
        MainPage();

    protected:
        virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;

    // <snippet3>
    private:
        // Splits the provided text string into individual words.
        concurrency::task<std::vector<std::wstring>> MakeWordList(Platform::String^ text);

        // Finds the most common words that are at least the provided minimum length.
        concurrency::task<std::vector<std::pair<std::wstring, size_t>>> FindCommonWords(const std::vector<std::wstring>& words, size_t min_length, size_t count);

        // Shows the most common words on the UI.
        void ShowResults(const std::vector<std::pair<std::wstring, size_t>>& commonWords);
    // </snippet3>
    };
}
