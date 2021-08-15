---
description: "Learn more about: &lt;regex&gt; functions"
title: "&lt;regex&gt; functions"
ms.date: "09/10/2018"
f1_keywords: ["regex/std::regex_match", "regex/std::regex_replace", "regex/std::regex_search", "regex/std::swap"]
ms.assetid: 91a8314b-6f7c-4e33-b7d6-d8583dd75585
helpviewer_keywords: ["std::regex_match [C++]", "std::regex_replace [C++]", "std::regex_search [C++]", "std::swap [C++]", "std::swap [C++]"]
---
# &lt;regex&gt; functions

|Name|Description|
|-|-|
|[regex_match](#regex_match)|Tests whether a regular expression matches the entire target string.|
|[regex_replace](#regex_replace)|Replaces matched regular expressions.|
|[regex_search](#regex_search)|Searches for a regular expression match.|
|[swap](#swap)|Swaps two `basic_regex` or `match_results` objects.|

## <a name="regex_match"></a> regex_match

Tests whether a regular expression matches the entire target string.

```cpp
// (1)
template <class BidIt, class Alloc, class Elem, class RXtraits, class Alloc2>
bool regex_match(
    BidIt first,
    Bidit last,
    match_results<BidIt, Alloc>& match,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

// (2)
template <class BidIt, class Elem, class RXtraits, class Alloc2>
bool regex_match(
    BidIt first,
    Bidit last,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

// (3)
template <class Elem, class Alloc, class RXtraits, class Alloc2>
bool regex_match(
    const Elem *ptr,
    match_results<const Elem*, Alloc>& match,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

// (4)
template <class Elem, class RXtraits, class Alloc2>
bool regex_match(
    const Elem *ptr,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

// (5)
template <class IOtraits, class IOalloc, class Alloc, class Elem, class RXtraits, class Alloc2>
bool regex_match(
    const basic_string<Elem, IOtraits, IOalloc>& str,
    match_results<typename basic_string<Elem, IOtraits, IOalloc>::const_iterator, Alloc>& match,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

// (6)
template <class IOtraits, class IOalloc, class Elem, class RXtraits, class Alloc2>
bool regex_match(
    const basic_string<Elem, IOtraits, IOalloc>& str,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);
```

### Parameters

*BidIt*\
The iterator type for submatches. For common cases this one of `string::const_iterator`, `wstring::const_iterator`, `const char*` or `const wchar_t*`.

*Alloc*\
The match results allocator class.

*Elem*\
The type of elements to match. For common cases this is `string`, `wstring`, `char*` or `wchar_t*`.

*RXtraits*\
Traits class for elements.

*Alloc2*\
The regular expression allocator class.

*IOtraits*\
The string traits class.

*IOalloc*\
The string allocator class.

*flags*\
Flags for matches.

*first*\
Beginning of sequence to match.

*last*\
End of sequence to match.

*match*\
The match results. Corresponds to Elem type: [smatch](../standard-library/regex-typedefs.md#smatch) for `string`, [wsmatch](../standard-library/regex-typedefs.md#wsmatch) for `wstring`, [cmatch](../standard-library/regex-typedefs.md#cmatch) for `char*` or [wcmatch](../standard-library/regex-typedefs.md#wcmatch) for `wchar_t*`.

*ptr*\
Pointer to beginning of sequence to match. If *ptr* is `char*`, then use `cmatch` and `regex`. If *ptr* is `wchar_t*` then use `wcmatch` and `wregex`.

*re*\
The regular expression to match. Type `regex` for `string` and `char*`, or `wregex` for `wstring` and `wchar_t*`.

*str*\
String to match. Corresponds to the type of *Elem*.

### Remarks

Each template function returns true only if the entire operand sequence *str* exactly matches the regular expression argument *re*. Use [regex_search](../standard-library/regex-functions.md#regex_search) to match a substring within a target sequence and `regex_iterator` to find multiple matches. The functions that take a `match_results` object set its members to reflect whether the match succeeded and if so what the various capture groups in the regular expression captured.

The functions that take a `match_results` object set its members to reflect whether the match succeeded and if so what the various capture groups in the regular expression captured.

### Example

```cpp
// std__regex__regex_match.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

using namespace std;

int main()
{
    // (1) with char*
    // Note how const char* requires cmatch and regex
    const char *first = "abc";
    const char *last = first + strlen(first);
    cmatch narrowMatch;
    regex rx("a(b)c");

    bool found = regex_match(first, last, narrowMatch, rx);
    if (found)
        wcout << L"Regex found in abc" << endl;

    // (2) with std::wstring
    // Note how wstring requires wsmatch and wregex.
    // Note use of const iterators cbegin() and cend().
    wstring target(L"Hello");
    wsmatch wideMatch;
    wregex wrx(L"He(l+)o");

    if (regex_match(target.cbegin(), target.cend(), wideMatch, wrx))
        wcout << L"The matching text is:" << wideMatch.str() << endl;

    // (3) with std::string
    string target2("Drizzle");
    regex rx2(R"(D\w+e)"); // no double backslashes with raw string literal

    found = regex_match(target2.cbegin(), target2.cend(), rx2);
    if (found)
        wcout << L"Regex found in Drizzle" << endl;

    // (4) with wchar_t*
    const wchar_t* target3 = L"2014-04-02";
    wcmatch wideMatch2;

    // LR"(...)" is a  raw wide-string literal. Open and close parens
    // are delimiters, not string elements.
    wregex wrx2(LR"(\d{4}(-|/)\d{2}(-|/)\d{2})");
    if (regex_match(target3, wideMatch2, wrx2))
    {
        wcout << L"Matching text: " << wideMatch2.str() << endl;
    }

     return 0;
}
```

```Output
Regex found in abc
The matching text is: Hello
Regex found in Drizzle
The matching text is: 2014-04-02
```

## <a name="regex_replace"></a> regex_replace

Replaces matched regular expressions.

```cpp
template <class OutIt, class BidIt, class RXtraits, class Alloc, class Elem>
OutIt regex_replace(
    OutIt out,
    BidIt first,
    BidIt last,
    const basic_regex<Elem, RXtraits, Alloc>& re,
    const basic_string<Elem>& fmt,
    match_flag_type flags = match_default);

template <class RXtraits, class Alloc, class Elem>
basic_string<Elem> regex_replace(
    const basic_string<Elem>& str,
    const basic_regex<Elem, RXtraits, Alloc>& re,
    const basic_string<Elem>& fmt,
    match_flag_type flags = match_default);
```

### Parameters

*OutIt*\
The iterator type for replacements.

*BidIt*\
The iterator type for submatches.

*RXtraits*\
Traits class for elements.

*Alloc*\
The regular expression allocator class.

*Elem*\
The type of elements to match.

*flags*\
Flags for matches.

*first*\
Beginning of sequence to match.

*fmt*\
The format for replacements.

*last*\
End of sequence to match.

*out*\
The output iterator.

*re*\
The regular expression to match.

*str*\
String to match.

### Remarks

The first function constructs a [regex_iterator Class](../standard-library/regex-iterator-class.md) object `iter(first, last, re, flags)` and uses it to split its input range `[first, last)` into a series of subsequences `T0 M0 T1 M1...TN-1 MN-1 TN`, where `Mn` is the nth match detected by the iterator. If no matches are found, `T0` is the entire input range and `N` is zero. If `(flags & format_first_only) != 0` only the first match is used, `T1` is all of the input text that follows the match, and `N` is 1. For each `i` in the range `[0, N)`, if `(flags & format_no_copy) == 0` it copies the text in the range `Ti` to the iterator *out*. It then calls `m.format(out, fmt, flags)`, where `m` is the `match_results` object returned by the iterator object `iter` for the subsequence `Mi`. Finally, if `(flags & format_no_copy) == 0` it copies the text in the range `TN` to the iterator *out*. The function returns *out*.

The second function constructs a local variable `result` of type `basic_string<charT>` and calls `regex_replace(back_inserter(result), str.begin(), str.end(), re, fmt, flags)`. It returns `result`.

### Example

```cpp
// std__regex__regex_replace.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

int main()
{
    char buf[20];
    const char *first = "axayaz";
    const char *last = first + strlen(first);
    std::regex rx("a");
    std::string fmt("A");
    std::regex_constants::match_flag_type fonly =
        std::regex_constants::format_first_only;

    *std::regex_replace(&buf[0], first, last, rx, fmt) = '\0';
    std::cout << "replacement == " << &buf[0] << std::endl;

    *std::regex_replace(&buf[0], first, last, rx, fmt, fonly) = '\0';
    std::cout << "replacement == " << &buf[0] << std::endl;

    std::string str("adaeaf");
    std::cout << "replacement == "
        << std::regex_replace(str, rx, fmt) << std::endl;

    std::cout << "replacement == "
        << std::regex_replace(str, rx, fmt, fonly) << std::endl;

    return (0);
}
```

```Output
replacement == AxAyAz
replacement == Axayaz
replacement == AdAeAf
replacement == Adaeaf
```

## <a name="regex_search"></a> regex_search

Searches for a regular expression match.

```cpp
template <class BidIt, class Alloc, class Elem, class RXtraits, class Alloc2>
bool regex_search(
    BidIt first,
    Bidit last,
    match_results<BidIt, Alloc>& match,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

template <class BidIt, class Elem, class RXtraits, class Alloc2>
bool regex_search(
    BidIt first,
    Bidit last,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

template <class Elem, class Alloc, class RXtraits, class Alloc2>
bool regex_search(
    const Elem* ptr,
    match_results<const Elem*, Alloc>& match,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

template <class Elem, class RXtraits, class Alloc2>
bool regex_search(
    const Elem* ptr,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

template <class IOtraits, class IOalloc, class Alloc, class Elem, class RXtraits, class Alloc2>
bool regex_search(
    const basic_string<Elem, IOtraits, IOalloc>& str,
    match_results<typename basic_string<Elem, IOtraits, IOalloc>::const_iterator, Alloc>& match,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

template <class IOtraits, class IOalloc, class Elem, class RXtraits, class Alloc2>
bool regex_search(
    const basic_string<Elem, IOtraits, IOalloc>& str,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);
```

### Parameters

*BidIt*\
The iterator type for submatches.

*Alloc*\
The match results allocator class.

*Elem*\
The type of elements to match.

*RXtraits*\
Traits class for elements.

*Alloc2*\
The regular expression allocator class.

*IOtraits*\
The string traits class.

*IOalloc*\
The string allocator class.

*flags*\
Flags for matches.

*first*\
Beginning of sequence to match.

*last*\
End of sequence to match.

*match*\
The match results.

*ptr*\
Pointer to beginning of sequence to match.

*re*\
The regular expression to match.

*str*\
String to match.

### Remarks

Each template function returns true only if a search for its regular expression argument *re* in its operand sequence succeeds. The functions that take a `match_results` object set its members to reflect whether the search succeeded and if so what the various capture groups in the regular expression captured.

### Example

```cpp
// std__regex__regex_search.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

int main()
{
    const char *first = "abcd";
    const char *last = first + strlen(first);
    std::cmatch mr;
    std::regex rx("abc");
    std::regex_constants::match_flag_type fl =
        std::regex_constants::match_default;

    std::cout << "search(f, f+1, \"abc\") == " << std::boolalpha
        << regex_search(first, first + 1, rx, fl) << std::endl;

    std::cout << "search(f, l, \"abc\") == " << std::boolalpha
        << regex_search(first, last, mr, rx) << std::endl;
    std::cout << "  matched: \"" << mr.str() << "\"" << std::endl;

    std::cout << "search(\"a\", \"abc\") == " << std::boolalpha
        << regex_search("a", rx) << std::endl;

    std::cout << "search(\"xabcd\", \"abc\") == " << std::boolalpha
        << regex_search("xabcd", mr, rx) << std::endl;
    std::cout << "  matched: \"" << mr.str() << "\"" << std::endl;

    std::cout << "search(string, \"abc\") == " << std::boolalpha
        << regex_search(std::string("a"), rx) << std::endl;

    std::string str("abcabc");
    std::match_results<std::string::const_iterator> mr2;
    std::cout << "search(string, \"abc\") == " << std::boolalpha
        << regex_search(str, mr2, rx) << std::endl;
    std::cout << "  matched: \"" << mr2.str() << "\"" << std::endl;

    return (0);
}
```

```Output
search(f, f+1, "abc") == false
search(f, l, "abc") == true
  matched: "abc"
search("a", "abc") == false
search("xabcd", "abc") == true
  matched: "abc"
search(string, "abc") == false
search(string, "abc") == true
  matched: "abc"
```

## <a name="swap"></a> swap

Swaps two `basic_regex` or `match_results` objects.

```cpp
template <class Elem, class RXtraits>
void swap(
    basic_regex<Elem, RXtraits, Alloc>& left,
    basic_regex<Elem, RXtraits>& right) noexcept;

template <class Elem, class IOtraits, class BidIt, class Alloc>
void swap(
    match_results<BidIt, Alloc>& left,
    match_results<BidIt, Alloc>& right) noexcept;
```

### Parameters

*Elem*\
The type of elements to match.

*RXtraits*\
Traits class for elements.

### Remarks

The template functions swap the contents of their respective arguments in constant time and do not throw exceptions.

### Example

```cpp
// std__regex__swap.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

int main()
{
    std::regex rx0("c(a*)|(b)");
    std::regex rx1;
    std::cmatch mr0;
    std::cmatch mr1;

    swap(rx0, rx1);
    std::regex_search("xcaaay", mr1, rx1);
    swap(mr0, mr1);

    std::csub_match sub = mr0[1];
    std::cout << "matched == " << std::boolalpha
        << sub.matched << std::endl;
    std::cout << "length == " << sub.length() << std::endl;
    std::cout << "string == " << sub << std::endl;

    return (0);
}
```

```Output
matched == true
length == 3
string == aaa
```

## See also

[\<regex>](../standard-library/regex.md)\
[regex_constants Class](../standard-library/regex-constants-class.md)\
[regex_error Class](../standard-library/regex-error-class.md)\
[regex_iterator Class](../standard-library/regex-iterator-class.md)\
[\<regex> operators](../standard-library/regex-operators.md)\
[regex_token_iterator Class](../standard-library/regex-token-iterator-class.md)\
[regex_traits Class](../standard-library/regex-traits-class.md)\
[\<regex> typedefs](../standard-library/regex-typedefs.md)
