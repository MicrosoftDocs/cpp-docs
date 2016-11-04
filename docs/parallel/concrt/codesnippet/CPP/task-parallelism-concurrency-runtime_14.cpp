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