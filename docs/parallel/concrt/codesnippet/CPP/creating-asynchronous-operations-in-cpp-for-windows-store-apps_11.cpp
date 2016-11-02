MainPage::MainPage()
{
    InitializeComponent();

    // To run this example, save the contents of http://www.gutenberg.org/files/6130/6130-0.txt to your Documents folder.
    // Name the file "The Iliad.txt" and save it under UTF-8 encoding.

    // Enable the progress ring.
    Progress->IsActive = true;

    // Find the most common words in the book "The Iliad".

    // Get the file.
    create_task(KnownFolders::DocumentsLibrary->GetFileAsync("The Iliad.txt")).then([](StorageFile^ file)
    {
        // Read the file text.
        return FileIO::ReadTextAsync(file, UnicodeEncoding::Utf8);

        // By default, all continuations from a Windows Runtime async operation run on the 
        // thread that calls task.then. Specify use_arbitrary to run this continuation 
        // on a background thread.
    }, task_continuation_context::use_arbitrary()).then([this](String^ file)
    {
        // Create a word list from the text.
        return MakeWordList(file);

        // By default, all continuations from a Windows Runtime async operation run on the 
        // thread that calls task.then. Specify use_arbitrary to run this continuation 
        // on a background thread.
    }, task_continuation_context::use_arbitrary()).then([this](vector<wstring> words)
    {
        // Find the most common words.
        return FindCommonWords(words, 5, 9);

        // By default, all continuations from a Windows Runtime async operation run on the 
        // thread that calls task.then. Specify use_arbitrary to run this continuation 
        // on a background thread.
    }, task_continuation_context::use_arbitrary()).then([this](vector<pair<wstring, size_t>> commonWords)
    {
        // Stop the progress ring.
        Progress->IsActive = false;

        // Show the results.
        ShowResults(commonWords);

        // We don't specify a continuation context here because we want the continuation 
        // to run on the STA thread.
    });
}