---
description: "Learn more about: regex_token_iterator Class"
title: "regex_token_iterator Class"
ms.date: "09/10/2018"
f1_keywords: ["regex/std::regex_token_iterator", "regex/std::regex_token_iterator::regex_type", "regex/std::regex_token_iterator::value_type", "regex/std::regex_token_iterator::iterator_category", "regex/std::regex_token_iterator::difference_type", "regex/std::regex_token_iterator::pointer", "regex/std::regex_token_iterator::reference", "regex/std::regex_token_iterator::operator==", "regex/std::regex_token_iterator::operator!=", "regex/std::regex_token_iterator::operator*", "regex/std::regex_token_iterator::operator->", "regex/std::regex_token_iterator::operator++"]
helpviewer_keywords: ["std::regex_token_iterator [C++]", "std::regex_token_iterator [C++], regex_type", "std::regex_token_iterator [C++], value_type", "std::regex_token_iterator [C++], iterator_category", "std::regex_token_iterator [C++], difference_type", "std::regex_token_iterator [C++], pointer", "std::regex_token_iterator [C++], reference"]
ms.assetid: a213ba48-8e4e-4b6b-871a-2637acf05f15
---
# regex_token_iterator Class

Iterator class for submatches.

## Syntax

```cpp
template<class BidIt,
   class Elem = typename std::iterator_traits<BidIt>::value_type,
   class RxTraits = regex_traits<Elem> >
class regex_token_iterator
```

## Parameters

*BidIt*\
The iterator type for submatches.

*Elem*\
The type of elements to match.

*RXtraits*\
Traits class for elements.

## Remarks

The class template describes a constant forward iterator object. Conceptually, it holds a `regex_iterator` object that it uses to search for regular expression matches in a character sequence. It extracts objects of type `sub_match<BidIt>` representing the submatches identified by the index values in the stored vector `subs` for each regular expression match.

An index value of -1 designates the character sequence beginning immediately after the end of the previous regular expression match, or beginning at the start of the character sequence if there was no previous regular expression match, and extending to but not including the first character of the current regular expression match, or to the end of the character sequence if there is no current match. Any other index value `idx` designates the contents of the capture group held in `it.match[idx]`.

### Members

|Member|Default Value|
|-|-|
|`private regex_iterator<BidIt, Elem, RXtraits> it`||
|`private vector<int> subs`||
|`private int pos`||

### Constructors

|Constructor|Description|
|-|-|
|[regex_token_iterator](#regex_token_iterator)|Constructs the iterator.|

### Typedefs

|Type name|Description|
|-|-|
|[difference_type](#difference_type)|The type of an iterator difference.|
|[iterator_category](#iterator_category)|The type of the iterator category.|
|[pointer](#pointer)|The type of a pointer to a match.|
|[reference](#reference)|The type of a reference to a submatch.|
|[regex_type](#regex_type)|The type of the regular expression to match.|
|[value_type](#value_type)|The type of a submatch.|

### Operators

|Operator|Description|
|-|-|
|[operator!=](#op_neq)|Compares iterators for inequality.|
|[operator*](#op_star)|Accesses the designated submatch.|
|[operator++](#op_add_add)|Increments the iterator.|
|[operator==](#op_eq_eq)|Compares iterators for equality.|
|[operator->](#op_arrow)|Accesses the designated submatch.|

## Requirements

**Header:** \<regex>

**Namespace:** std

## Example

```cpp
#include <regex>
#include <iostream>

typedef std::regex_token_iterator<const char *> Myiter;
int main()
    {
    const char *pat = "aaxaayaaz";
    Myiter::regex_type rx("(a)a");
    Myiter next(pat, pat + strlen(pat), rx);
    Myiter end;

// show whole match
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// show prefix before match
    next = Myiter(pat, pat + strlen(pat), rx, -1);
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// show (a) submatch only
    next = Myiter(pat, pat + strlen(pat), rx, 1);
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// show prefixes and submatches
    std::vector<int> vec;
    vec.push_back(-1);
    vec.push_back(1);
    next = Myiter(pat, pat + strlen(pat), rx, vec);
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// show prefixes and whole matches
    int arr[] = {-1, 0};
    next = Myiter(pat, pat + strlen(pat), rx, arr);
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// other members
    Myiter it1(pat, pat + strlen(pat), rx);
    Myiter it2(it1);
    next = it1;

    Myiter::iterator_category cat = std::forward_iterator_tag();
    Myiter::difference_type dif = -3;
    Myiter::value_type mr = *it1;
    Myiter::reference ref = mr;
    Myiter::pointer ptr = &ref;

    dif = dif; // to quiet "unused" warnings
    ptr = ptr;

    return (0);
    }
```

```Output
match == aa
match == aa
match == aa

match ==
match == x
match == y
match == z

match == a
match == a
match == a

match ==
match == a
match == x
match == a
match == y
match == a
match == z

match ==
match == aa
match == x
match == aa
match == y
match == aa
match == z
```

## <a name="difference_type"></a> regex_token_iterator::difference_type

The type of an iterator difference.

```cpp
typedef std::ptrdiff_t difference_type;
```

### Remarks

The type is a synonym for `std::ptrdiff_t`.

## <a name="iterator_category"></a> regex_token_iterator::iterator_category

The type of the iterator category.

```cpp
typedef std::forward_iterator_tag iterator_category;
```

### Remarks

The type is a synonym for `std::forward_iterator_tag`.

## <a name="op_neq"></a> regex_token_iterator::operator!=

Compares iterators for inequality.

```cpp
bool operator!=(const regex_token_iterator& right);
```

### Parameters

*right*\
The iterator to compare to.

### Remarks

The member function returns `!(*this == right)`.

## <a name="op_star"></a> regex_token_iterator::operator*

Accesses the designated submatch.

```cpp
const sub_match<BidIt>& operator*();
```

### Remarks

The member function returns a `sub_match<BidIt>` object representing the capture group identified by the index value `subs[pos]`.

## <a name="op_add_add"></a> regex_token_iterator::operator++

Increments the iterator.

```cpp
regex_token_iterator& operator++();

regex_token_iterator& operator++(int);
```

### Remarks

If the stored iterator `it` is an end-of-sequence iterator the first operator sets the stored value `pos` to the value of `subs.size()` (thus making an end-of-sequence iterator). Otherwise the operator increments the stored value `pos`; if the result is equal to the value `subs.size()` it sets the stored value `pos` to zero and increments the stored iterator `it`. If incrementing the stored iterator leaves it unequal to an end-of-sequence iterator the operator does nothing further. Otherwise, if the end of the preceding match was at the end of the character sequence the operator sets the stored value of `pos` to `subs.size()`. Otherwise, the operator repeatedly increments the stored value `pos` until `pos == subs.size()` or `subs[pos] == -1` (thus ensuring that the next dereference of the iterator will return the tail of the character sequence if one of the index values is -1). In all cases the operator returns the object.

The second operator makes a copy of the object, increments the object, then returns the copy.

## <a name="op_eq_eq"></a> regex_token_iterator::operator==

Compares iterators for equality.

```cpp
bool operator==(const regex_token_iterator& right);
```

### Parameters

*right*\
The iterator to compare to.

### Remarks

The member function returns `it == right.it && subs == right.subs && pos == right.pos`.

## <a name="op_arrow"></a> regex_token_iterator::operator-&gt;

Accesses the designated submatch.

```cpp
const sub_match<BidIt> * operator->();
```

### Remarks

The member function returns a pointer to a `sub_match<BidIt>` object representing the capture group identified by the index value `subs[pos]`.

## <a name="pointer"></a> regex_token_iterator::pointer

The type of a pointer to a match.

```cpp
typedef sub_match<BidIt> *pointer;
```

### Remarks

The type is a synonym for `sub_match<BidIt>*`, where `BidIt` is the template parameter.

## <a name="reference"></a> regex_token_iterator::reference

The type of a reference to a submatch.

```cpp
typedef sub_match<BidIt>& reference;
```

### Remarks

The type is a synonym for `sub_match<BidIt>&`, where `BidIt` is the template parameter.

## <a name="regex_token_iterator"></a> regex_token_iterator::regex_token_iterator

Constructs the iterator.

```cpp
regex_token_iterator();

regex_token_iterator(BidIt first, BidIt last,
    const regex_type& re, int submatch = 0,
    regex_constants::match_flag_type f = regex_constants::match_default);

regex_token_iterator(BidIt first, BidIt last,
    const regex_type& re, const vector<int> submatches,
    regex_constants::match_flag_type f = regex_constants::match_default);

template <std::size_t N>
regex_token_iterator(BidIt first, BidIt last,
    const regex_type& re, const int (&submatches)[N],
    regex_constants::match_flag_type f = regex_constants::match_default);
```

### Parameters

*first*\
Beginning of sequence to match.

*last*\
End of sequence to match.

*re*\
Regular expression for matches.

*f*\
Flags for matches.

### Remarks

The first constructor constructs an end-of-sequence iterator.

The second constructor constructs an object whose stored iterator `it` is initialized to `regex_iterator<BidIt, Elem, RXtraits>(first, last, re, f)`, whose stored vector `subs` holds exactly one integer, with value `submatch`, and whose stored value `pos` is zero. Note: the resulting object extracts the submatch identified by the index value `submatch` for each successful regular expression match.

The third constructor constructs an object whose stored iterator `it` is initialized to `regex_iterator<BidIt, Elem, RXtraits>(first, last, re, f)`, whose stored vector `subs` holds a copy of the constructor argument `submatches`, and whose stored value `pos` is zero.

The fourth constructor constructs an object whose stored iterator `it` is initialized to `regex_iterator<BidIt, Elem, RXtraits>(first, last, re, f)`, whose stored vector `subs` holds the `N` values pointed to by the constructor argument `submatches`, and whose stored value `pos` is zero.

## <a name="regex_type"></a> regex_token_iterator::regex_type

The type of the regular expression to match.

```cpp
typedef basic_regex<Elem, RXtraits> regex_type;
```

### Remarks

The typedef is a synonym for `basic_regex<Elem, RXtraits>`.

## <a name="value_type"></a> regex_token_iterator::value_type

The type of a submatch.

```cpp
typedef sub_match<BidIt> value_type;
```

### Remarks

The type is a synonym for `sub_match<BidIt>`, where `BidIt` is the template parameter.

## See also

[\<regex>](../standard-library/regex.md)\
[regex_constants Class](../standard-library/regex-constants-class.md)\
[regex_error Class](../standard-library/regex-error-class.md)\
[\<regex> functions](../standard-library/regex-functions.md)\
[regex_iterator Class](../standard-library/regex-iterator-class.md)\
[\<regex> operators](../standard-library/regex-operators.md)\
[regex_traits Class](../standard-library/regex-traits-class.md)\
[\<regex> typedefs](../standard-library/regex-typedefs.md)
