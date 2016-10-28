// parallel-word-mining.cpp
// compile with: /EHsc /MD /DUNICODE /D_AFXDLL
#define _WIN32_WINNT 0x0501
#include <afxinet.h>
#include <ppl.h>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace concurrency;
using namespace std;

// Calls the provided work function and returns the number of milliseconds 
// that it takes to call that function.
template <class Function>
__int64 time_call(Function&& f)
{
   __int64 begin = GetTickCount();
   f();
   return GetTickCount() - begin;
}

// Downloads the file at the given URL.
CString get_http_file(CInternetSession& session, const CString& url);

// Adds each word in the provided string to the provided vector of strings.
void make_word_list(const wstring& text, vector<wstring>& words);

// Finds the most common words whose length are greater than or equal to the 
// provided minimum. 
vector<pair<wstring, size_t>> find_common_words(const vector<wstring>& words, 
   size_t min_length, size_t count);

// Finds the longest sequence of words that have the same first letter.
vector<wstring> find_longest_sequence(const vector<wstring>& words);

// Finds all pairs of palindromes that appear in the provided collection
// of words.
vector<pair<wstring, wstring>> find_palindromes(const vector<wstring>& words,
   size_t min_length);
 
int wmain()
{  
   // Manages the network connection.
   CInternetSession session(L"Microsoft Internet Browser");

   // Download 'The Iliad' from gutenberg.org.
   wcout << L"Downloading 'The Iliad'..." << endl;
   wstring file = get_http_file(session, L"http://www.gutenberg.org/files/6130/6130-0.txt");
   wcout << endl;

   // Convert the text to a list of individual words.
   vector<wstring> words;
   make_word_list(file, words);
   
   // Compare the time that it takes to perform several operations on the data
   // serially and in parallel.
   __int64 elapsed;

   vector<pair<wstring, size_t>> common_words;
   vector<wstring> longest_sequence;   
   vector<pair<wstring, wstring>> palindromes;

   wcout << L"Running serial version...";
   elapsed = time_call([&] {
      common_words = find_common_words(words, 5, 9);
      longest_sequence = find_longest_sequence(words);
      palindromes = find_palindromes(words, 5);
   });
   wcout << L" took " << elapsed << L" ms." << endl;

   wcout << L"Running parallel version...";
   elapsed = time_call([&] {
      parallel_invoke(         
         [&] { common_words = find_common_words(words, 5, 9); },
         [&] { longest_sequence = find_longest_sequence(words); },
         [&] { palindromes = find_palindromes(words, 5); }
      );
   });
   wcout << L" took " << elapsed << L" ms." << endl;
   wcout << endl;

   // Print results.

   wcout << L"The most common words that have five or more letters are:" 
         << endl;
   for_each(begin(common_words), end(common_words), 
      [](const pair<wstring, size_t>& p) {
         wcout << L"   " << p.first << L" (" << p.second << L")" << endl; 
      });

   wcout << L"The longest sequence of words that have the same first letter is:" 
         << endl << L"   ";
   for_each(begin(longest_sequence), end(longest_sequence), 
      [](const wstring& s) {
         wcout << s << L' '; 
      });
   wcout << endl;

   wcout << L"The following palindromes appear in the text:" << endl;
   for_each(begin(palindromes), end(palindromes), 
      [](const pair<wstring, wstring>& p) {
         wcout << L"   "  << p.first << L" " << p.second << endl;
      });
}

// Downloads the file at the given URL.
CString get_http_file(CInternetSession& session, const CString& url)
{
   CString result;

   // Reads data from an HTTP server.
   CHttpFile* http_file = NULL;

   try
   {
      // Open URL.
      http_file = reinterpret_cast<CHttpFile*>(session.OpenURL(url, 1));

      // Read the file.
      if(http_file != NULL)
      {           
         UINT bytes_read;
         do
         {
            char buffer[10000];
            bytes_read = http_file->Read(buffer, sizeof(buffer));
            result += buffer;
         }
         while (bytes_read > 0);
      }
    }
   catch (CInternetException)
   {
      // TODO: Handle exception
   }

   // Clean up and return.
   delete http_file;

   return result;
}

// Adds each word in the provided string to the provided vector of strings.
void make_word_list(const wstring& text, vector<wstring>& words)
{
   // Add continuous sequences of alphanumeric characters to the 
   // string vector. 
   wstring current_word;
   for_each(begin(text), end(text), [&](wchar_t ch) {
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
   });
}

// Finds the most common words whose length are greater than or equal to the 
// provided minimum. 
vector<pair<wstring, size_t>> find_common_words(const vector<wstring>& words, 
   size_t min_length, size_t count)
{
   typedef pair<wstring, size_t> pair;

   // Counts the occurrences of each word.
   map<wstring, size_t> counts;

   for_each(begin(words), end(words), [&](const wstring& word) {
      // Increment the count of words that are at least the minimum length.
      if (word.length() >= min_length)
      {
         auto find = counts.find(word);
         if (find != end(counts))
            find->second++;
         else
            counts.insert(make_pair(word, 1));
      }
   });

   // Copy the contents of the map to a vector and sort the vector by
   // the number of occurrences of each word.
   vector<pair> wordvector;
   copy(begin(counts), end(counts), back_inserter(wordvector));

   sort(begin(wordvector), end(wordvector), [](const pair& x, const pair& y) {
      return x.second > y.second;
   });

   size_t size = min(wordvector.size(), count);
   wordvector.erase(begin(wordvector) + size, end(wordvector));
   
   return wordvector;
}

// Finds the longest sequence of words that have the same first letter.
vector<wstring> find_longest_sequence(const vector<wstring>& words)
{
   // The current sequence of words that have the same first letter.
   vector<wstring> candidate_list;
   // The longest sequence of words that have the same first letter.
   vector<wstring> longest_run;

   for_each(begin(words), end(words), [&](const wstring& word) {
      // Initialize the candidate list if it is empty.
      if (candidate_list.size() == 0)
      {
         candidate_list.push_back(word);
      }
      // Add the word to the candidate sequence if the first letter
      // of the word is the same as each word in the sequence.
      else if (word[0] == candidate_list[0][0])
      {
         candidate_list.push_back(word);
      }
      // The initial letter has changed; reset the candidate list.
      else 
      {
         // Update the longest sequence if needed.
         if (candidate_list.size() > longest_run.size())
            longest_run = candidate_list;

         candidate_list.clear();
         candidate_list.push_back(word);         
      }
   });

   return longest_run;
}

// Finds all pairs of palindromes that appear in the provided collection
// of words.
vector<pair<wstring, wstring>> find_palindromes(const vector<wstring>& words, 
   size_t min_length)
{
   typedef pair<wstring, wstring> pair;
   vector<pair> result;

   // Copy the words to a new vector object and sort that vector.
   vector<wstring> wordvector;
   copy(begin(words), end(words), back_inserter(wordvector));
   sort(begin(wordvector), end(wordvector));

   // Add each word in the original collection to the result whose palindrome 
   // also exists in the collection. 
   for_each(begin(words), end(words), [&](const wstring& word) {
      if (word.length() >= min_length)
      {
         wstring rev = word;
         reverse(begin(rev), end(rev));

         if (rev != word && binary_search(begin(wordvector), end(wordvector), rev))
         {
            auto candidate1 = make_pair(word, rev);
            auto candidate2 = make_pair(rev, word);
            if (find(begin(result), end(result), candidate1) == end(result) &&
                find(begin(result), end(result), candidate2) == end(result))
               result.push_back(candidate1);
         }
      }
   });
   
   return result;
}