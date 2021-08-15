---
description: "Learn more about: sub_match Class"
title: "sub_match Class"
ms.date: "09/10/2018"
f1_keywords: ["regex/std::sub_match", "regex/std::sub_match::matched", "regex/std::sub_match::compare", "regex/std::sub_match::length", "regex/std::sub_match::str", "regex/std::sub_match::difference_type", "regex/std::sub_match::iterator", "regex/std::sub_match::value_type"]
helpviewer_keywords: ["std::sub_match [C++]", "std::sub_match [C++], matched", "std::sub_match [C++], compare", "std::sub_match [C++], length", "std::sub_match [C++], str", "std::sub_match [C++], difference_type", "std::sub_match [C++], iterator", "std::sub_match [C++], value_type"]
ms.assetid: 804e2b9e-d16a-4c4c-ac60-024e0b2dd0e8
---
# sub_match Class

Describes a submatch.

## Syntax

```cpp
template <class BidIt>
class sub_match
    : public std::pair<BidIt, BidIt>
```

## Parameters

*BidIt*\
The iterator type for submatches.

## Remarks

The class template describes an object that designates a sequence of characters that matched a capture group in a call to [regex_match](../standard-library/regex-functions.md#regex_match) or to [regex_search](../standard-library/regex-functions.md#regex_search). Objects of type [match_results Class](../standard-library/match-results-class.md) hold an array of these objects, one for each capture group in the regular expression that was used in the search.

If the capture group was not matched the object's data member `matched` holds false, and the two iterators `first` and `second` (inherited from the base `std::pair`) are equal. If the capture group was matched, `matched` holds true, the iterator `first` points to the first character in the target sequence that matched the capture group, and the iterator `second` points one position past the last character in the target sequence that matched the capture group. Note that for a zero-length match the member `matched` holds true, the two iterators will be equal, and both will point to the position of the match.

A zero-length match can occur when a capture group consists solely of an assertion, or of a repetition that allows zero repeats. For example:

"^" matches the target sequence "a"; the `sub_match` object corresponding to capture group 0 holds iterators that both point to the first character in the sequence.

"b(a*)b" matches the target sequence "bb"; the `sub_match` object corresponding to capture group 1 holds iterators that both point to the second character in the sequence.

### Typedefs

|Type name|Description|
|-|-|
|[difference_type](#difference_type)|The type of an iterator difference.|
|[iterator](#iterator)|The type of an iterator.|
|[value_type](#value_type)|The type of an element.|

### Member functions

|Member function|Description|
|-|-|
|[compare](#compare)|Compare submatch against a sequence.|
|[length](#length)|Returns the length of a submatch.|
|[matched](#matched)|Indicates if match succeeded.|
|[str](#str)|Converts submatch to a string.|

### Operators

|Operator|Description|
|-|-|
|[operator basic_string<value_type>](#op_basic_string_lt_value_type_gt)|Casts submatch to a string.|

## Example

```cpp
// std__regex__sub_match.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

int main()
    {
    std::regex rx("c(a*)|(b)");
    std::cmatch mr;

    std::regex_search("xcaaay", mr, rx);

    std::csub_match sub = mr[1];
    std::cout << "matched == " << std::boolalpha
        << sub.matched << std::endl;
    std::cout << "length == " << sub.length() << std::endl;

    std::csub_match::difference_type dif = std::distance(sub.first, sub.second);
    std::cout << "difference == " << dif << std::endl;

    std::csub_match::iterator first = sub.first;
    std::csub_match::iterator last = sub.second;
    std::cout << "range == " << std::string(first, last)
        << std::endl;
    std::cout << "string == " << sub << std::endl;

    std::csub_match::value_type const *ptr = "aab";
    std::cout << "compare(\"aab\") == "
        << sub.compare(ptr) << std::endl;
    std::cout << "compare(string) == "
        << sub.compare(std::string("AAA")) << std::endl;
    std::cout << "compare(sub) == "
        << sub.compare(sub) << std::endl;

    return (0);
    }
```

```Output
matched == true
length == 3
difference == 3
range == aaa
string == aaa
compare("aab") == -1
compare(string) == 1
compare(sub) == 0
```

## Requirements

**Header:** \<regex>

**Namespace:** std

## <a name="compare"></a> sub_match::compare

Compare submatch against a sequence.

```cpp
int compare(const sub_match& right) const;
int compare(const basic_string<value_type>& str) const;
int compare(const value_type *ptr) const;
```

### Parameters

*right*\
The submatch to compare to.

*str*\
The string to compare to.

*ptr*\
The null-terminated sequence to compare to.

### Remarks

The first member function compares the matched sequence `[first, second)` to the matched sequence `[right.first, right.second)`. The second member function compares the matched sequence `[first, second)` to the character sequence `[right.begin(), right.end())`. The third member function compares the matched sequence `[first, second)` to the character sequence `[right, right + std::char_traits<value_type>::length(right))`.

Each function returns:

a negative value if the first differing value in the matched sequence compares less than the corresponding element in the operand sequence (as determined by `std::char_traits<value_type>::compare`), or if the two have a common prefix but the target sequence is longer

zero if the two compare equal element by element and have the same length

a positive value otherwise

## <a name="difference_type"></a> sub_match::difference_type

The type of an iterator difference.

```cpp
typedef typename iterator_traits<BidIt>::difference_type difference_type;
```

### Remarks

The typedef is a synonym for `iterator_traits<BidIt>::difference_type`.

## <a name="iterator"></a> sub_match::iterator

The type of an iterator.

```cpp
typedef BidIt iterator;
```

### Remarks

The typedef is a synonym for the template type argument `Bidit`.

## <a name="length"></a> sub_match::length

Returns the length of a submatch.

```cpp
difference_type length() const;
```

### Remarks

The member function returns the length of the matched sequence, or zero if there was no matched sequence.

## <a name="matched"></a> sub_match::matched

Indicates if match succeeded.

```cpp
bool matched;
```

### Remarks

The member holds **`true`** only if the capture group associated with **`*this`** was part of the regular expression match.

## <a name="op_basic_string_lt_value_type_gt"></a> sub_match::operator basic_string&lt;value_type&gt;

Casts submatch to a string.

```cpp
operator basic_string<value_type>() const;
```

### Remarks

The member operator returns `str()`.

## <a name="str"></a> sub_match::str

Converts submatch to a string.

```cpp
basic_string<value_type> str() const;
```

### Remarks

The member function returns `basic_string<value_type>(first, second)`.

## <a name="value_type"></a> sub_match::value_type

The type of an element.

```cpp
typedef typename iterator_traits<BidIt>::value_type value_type;
```

### Remarks

The typedef is a synonym for `iterator_traits<BidIt>::value_type`.

## See also

[\<regex>](../standard-library/regex.md)\
[sub_match](../standard-library/sub-match-class.md)
