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