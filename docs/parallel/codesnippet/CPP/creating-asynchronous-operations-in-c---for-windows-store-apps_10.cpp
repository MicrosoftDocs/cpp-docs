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