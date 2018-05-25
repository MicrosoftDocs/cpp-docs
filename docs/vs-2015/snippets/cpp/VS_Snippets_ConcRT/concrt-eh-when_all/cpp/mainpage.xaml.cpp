//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace eh_when_all;

using namespace concurrency;
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

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

template<typename T>
task<T> task_from_result(const T& t)
{
    return create_task([t]() { return t; });
}

task<void> task_from_result()
{
    return create_task([] { return; });
}

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

using namespace std;
using namespace Windows::Foundation::Collections;
using namespace Windows::Storage;
using namespace Windows::Storage::Pickers;

// <snippet1>
// Observes all exceptions that occurred in all tasks in the given range.
template<class T, class InIt> 
void observe_all_exceptions(InIt first, InIt last) 
{
    std::for_each(first, last, [](concurrency::task<T> t)
    {
        t.then([](concurrency::task<T> previousTask)
        {
            try
            {
                previousTask.get();
            }
            // Although you could catch (...), this demonstrates how to catch specific exceptions. Your app
            // might handle different exception types in different ways.
            catch (Platform::Exception^)
            {
                // Swallow the exception.
            }
            catch (const std::exception&)
            {
                // Swallow the exception.
            }
        });
    });
}
// </snippet1>

// <snippet2>
// Writes content to files in the provided storage folder.
// The first element in each pair is the file name. The second element holds the file contents.
task<void> MainPage::WriteFilesAsync(StorageFolder^ folder, const vector<pair<String^, String^>>& fileContents)
{
    // For each file, create a task chain that creates the file and then writes content to it. Then add the task chain to a vector of tasks.
    vector<task<void>> tasks;
    for (auto fileContent : fileContents)
    {
        auto fileName = fileContent.first;
        auto content = fileContent.second;

        // Create the file. The CreationCollisionOption::FailIfExists flag specifies to fail if the file already exists.
        tasks.emplace_back(create_task(folder->CreateFileAsync(fileName, CreationCollisionOption::FailIfExists)).then([content](StorageFile^ file)
        {
            // Write its contents.
            return create_task(FileIO::WriteTextAsync(file, content));
        }));
    }

    // When all tasks finish, create a continuation task that observes any exceptions that occurred.
    return when_all(begin(tasks), end(tasks)).then([tasks](task<void> previousTask)
    {
        task_status status = completed;
        try
        {
            status = previousTask.wait();
        }
        catch (COMException^ e)
        {
            // We'll handle the specific errors below.
        }
        // TODO: If other exception types might happen, add catch handlers here.

        // Ensure that we observe all exceptions.
        observe_all_exceptions<void>(begin(tasks), end(tasks));

        // Cancel any continuations that occur after this task if any previous task was canceled.
        // Although cancellation is not part of this example, we recommend this pattern for cases that do.
        if (status == canceled)
        {
            cancel_current_task();
        }
    });
}
// </snippet2>

// <snippet5>
// A button click handler that demonstrates the scenario.
void MainPage::Button_Click(Object^ sender, RoutedEventArgs^ e)
{
    // In this example, the same file name is specified two times. WriteFilesAsync fails if one of the files already exists.
    vector<pair<String^, String^>> fileContents;
    fileContents.emplace_back(make_pair(ref new String(L"file1.txt"), ref new String(L"Contents of file 1")));
    fileContents.emplace_back(make_pair(ref new String(L"file2.txt"), ref new String(L"Contents of file 2")));
    fileContents.emplace_back(make_pair(ref new String(L"file1.txt"), ref new String(L"Contents of file 3")));

    Button1->IsEnabled = false; // Disable the button during the operation.
    WriteFilesAsync(ApplicationData::Current->TemporaryFolder, fileContents).then([this](task<void> previousTask)
    {
        try
        {
            previousTask.get();
        }
        // Although cancellation is not part of this example, we recommend this pattern for cases that do.
        catch (const task_canceled&)
        {
            // Your app might show a message to the user, or handle the error in some other way.
        }

        Button1->IsEnabled = true; // Enable the button.
    });
}
// </snippet5>
