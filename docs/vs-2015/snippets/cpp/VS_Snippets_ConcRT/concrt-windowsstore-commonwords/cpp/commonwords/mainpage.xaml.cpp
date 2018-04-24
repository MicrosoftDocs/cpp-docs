//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace CommonWords;

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

// <snippet4>
using namespace concurrency;
using namespace std;
using namespace Windows::Storage;
using namespace Windows::Storage::Streams;
// </snippet4>

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

// <snippet6>
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
// </snippet6>

/// <summary>
/// Invoked when this page is about to be displayed in a Frame.
/// </summary>
/// <param name="e">Event data that describes how this page was reached.  The Parameter
/// property is typically used to configure the page.</param>
void MainPage::OnNavigatedTo(NavigationEventArgs^ e)
{
    (void) e;	// Unused parameter
}

// <snippet5>
// Splits the provided text string into individual words.
task<vector<wstring>> MainPage::MakeWordList(String^ text)
{
    return create_task([text]() -> vector<wstring>
    {
        vector<wstring> words;

        // Add continuous sequences of alphanumeric characters to the string vector.
        wstring current_word;
        for (wchar_t ch : text)
        {
            if (!iswalnum(ch))
            {
                if (current_word.length() > 0)
                {
                    words.push_back(current_word);
                    current_word.clear();
                }
            }
            else
            {
                current_word += ch;
            }
        }

        return words;
    });
}

// Finds the most common words that are at least the provided minimum length.
task<vector<pair<wstring, size_t>>> MainPage::FindCommonWords(const vector<wstring>& words, size_t min_length, size_t count)
{
    return create_task([words, min_length, count]() -> vector<pair<wstring, size_t>>
    {
        typedef pair<wstring, size_t> pair;

        // Counts the occurrences of each word.
        concurrent_unordered_map<wstring, size_t> counts;

        parallel_for_each(begin(words), end(words), [&counts, min_length](const wstring& word)
        {
            // Increment the count of words that are at least the minimum length. 
            if (word.length() >= min_length)
            {
                // Increment the count.
                InterlockedIncrement(&counts[word]);
            }
        });

        // Copy the contents of the map to a vector and sort the vector by the number of occurrences of each word.
        vector<pair> wordvector;
        copy(begin(counts), end(counts), back_inserter(wordvector));

        sort(begin(wordvector), end(wordvector), [](const pair& x, const pair& y)
        {
            return x.second > y.second;
        });

        size_t size = min(wordvector.size(), count);
        wordvector.erase(begin(wordvector) + size, end(wordvector));

        return wordvector;
    });
}

// Shows the most common words on the UI. 
void MainPage::ShowResults(const vector<pair<wstring, size_t>>& commonWords)
{
    wstringstream ss;
    ss << "The most common words that have five or more letters are:";
    for (auto commonWord : commonWords)
    {
        ss << endl << commonWord.first << L" (" << commonWord.second << L')';
    }

    // Update the UI.
    Results->Text = ref new String(ss.str().c_str());
}
// </snippet5>