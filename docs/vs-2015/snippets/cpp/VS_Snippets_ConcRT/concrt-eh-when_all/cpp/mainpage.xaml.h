//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace eh_when_all
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
    private:
        // <snippet4>
        void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        concurrency::task<void> WriteFilesAsync(Windows::Storage::StorageFolder^ folder, const std::vector<std::pair<Platform::String^, Platform::String^>>& fileContents);
        // </snippet4>
    };
}
