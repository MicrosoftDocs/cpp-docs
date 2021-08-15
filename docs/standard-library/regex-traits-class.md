---
description: "Learn more about: regex_traits Class"
title: "regex_traits Class"
ms.date: "09/10/2018"
f1_keywords: ["regex/std::regex_traits", "regex/std::regex_traits::char_type", "regex/std::regex_traits::size_type", "regex/std::regex_traits::string_type", "regex/std::regex_traits::locale_type", "regex/std::regex_traits::char_class_type", "regex/std::regex_traits::length", "regex/std::regex_traits::translate", "regex/std::regex_traits::translate_nocase", "regex/std::regex_traits::transform", "regex/std::regex_traits::transform_primary", "regex/std::regex_traits::lookup_classname", "regex/std::regex_traits::lookup_collatename", "regex/std::regex_traits::isctype", "regex/std::regex_traits::value", "regex/std::regex_traits::imbue", "regex/std::regex_traits::getloc"]
helpviewer_keywords: ["std::regex_traits [C++]", "std::regex_traits [C++], char_type", "std::regex_traits [C++], size_type", "std::regex_traits [C++], string_type", "std::regex_traits [C++], locale_type", "std::regex_traits [C++], char_class_type", "std::regex_traits [C++], length", "std::regex_traits [C++], translate", "std::regex_traits [C++], translate_nocase", "std::regex_traits [C++], transform", "std::regex_traits [C++], transform_primary", "std::regex_traits [C++], lookup_classname", "std::regex_traits [C++], lookup_collatename", "std::regex_traits [C++], isctype", "std::regex_traits [C++], value", "std::regex_traits [C++], imbue", "std::regex_traits [C++], getloc"]
ms.assetid: bc5a5eed-32fc-4eb7-913d-71c42e729e81
---
# regex_traits Class

Describes characteristics of elements for matching.

## Syntax

```cpp
template<class Elem>
class regex_traits
```

## Parameters

*Elem*\
The character element type to describe.

## Remarks

The class template describes various regular expression traits for type *Elem*. The class template [basic_regex Class](../standard-library/basic-regex-class.md) uses this information to manipulate elements of type *Elem*.

Each `regex_traits` object holds an object of type `regex_traits::locale` which is used by some of its member functions. The default locale is a copy of `regex_traits::locale()`. The member function `imbue` replaces the locale object, and the member function `getloc` returns a copy of the locale object.

### Constructors

|Constructor|Description|
|-|-|
|[regex_traits](#regex_traits)|Constructs the object.|

### Typedefs

|Type name|Description|
|-|-|
|[char_class_type](#char_class_type)|The type of character class designators.|
|[char_type](#char_type)|The type of an element.|
|[locale_type](#locale_type)|The type of the stored locale object.|
|[size_type](#size_type)|The type of a sequence length.|
|[string_type](#string_type)|The type of a string of elements.|

### Member functions

|Member function|Description|
|-|-|
|[getloc](#getloc)|Returns the stored locale object.|
|[imbue](#imbue)|Alters the stored locale object.|
|[isctype](#isctype)|Tests for class membership.|
|[length](#length)|Returns the length of a null-terminated sequence.|
|[lookup_classname](#lookup_classname)|Maps a sequence to a character class.|
|[lookup_collatename](#lookup_collatename)|Maps a sequence to a collating element.|
|[transform](#transform)|Converts to equivalent ordered sequence.|
|[transform_primary](#transform_primary)|Converts to equivalent caseless ordered sequence.|
|[translate](#translate)|Converts to equivalent matching element.|
|[translate_nocase](#translate_nocase)|Converts to equivalent caseless matching element.|
|[value](#value)|Converts an element to a digit value.|

## Requirements

**Header:** \<regex>

**Namespace:** std

## Example

```cpp
// std__regex__regex_traits.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

typedef std::regex_traits<char> Mytr;
int main()
    {
    Mytr tr;

    Mytr::char_type ch = tr.translate('a');
    std::cout << "translate('a') == 'a' == " << std::boolalpha
        << (ch == 'a') << std::endl;

    std::cout << "nocase 'a' == 'A' == " << std::boolalpha
        << (tr.translate_nocase('a') == tr.translate_nocase('A'))
        << std::endl;

    const char *lbegin = "abc";
    const char *lend = lbegin + strlen(lbegin);
    Mytr::size_type size = tr.length(lbegin);
    std::cout << "length(\"abc\") == " << size <<std::endl;

    Mytr::string_type str = tr.transform(lbegin, lend);
    std::cout << "transform(\"abc\") < \"abc\" == " << std::boolalpha
        << (str < "abc") << std::endl;

    const char *ubegin = "ABC";
    const char *uend = ubegin + strlen(ubegin);
    std::cout << "primary \"ABC\" < \"abc\" == " << std::boolalpha
        << (tr.transform_primary(ubegin, uend) <
            tr.transform_primary(lbegin, lend))
        << std::endl;

    const char *dig = "digit";
    Mytr::char_class_type cl = tr.lookup_classname(dig, dig + 5);
    std::cout << "class digit == d == " << std::boolalpha
        << (cl == tr.lookup_classname(dig, dig + 1))
        << std::endl;

    std::cout << "'3' is digit == " <<std::boolalpha
        << tr.isctype('3', tr.lookup_classname(dig, dig + 5))
        << std::endl;

    std::cout << "hex C == " << tr.value('C', 16) << std::endl;

// other members
    str = tr.lookup_collatename(dig, dig + 5);

    Mytr::locale_type loc = tr.getloc();
    tr.imbue(loc);

    return (0);
    }
```

```Output
translate('a') == 'a' == true
nocase 'a' == 'A' == true
length("abc") == 3
transform("abc") < "abc" == false
primary "ABC" < "abc" == false
class digit == d == true
'3' is digit == true
hex C == 12
```

## <a name="char_class_type"></a> regex_traits::char_class_type

The type of character class designators.

```cpp
typedef T8 char_class_type;
```

### Remarks

The type is a synonym for an unspecified type that designates character classes. Values of this type can be combined using the `|` operator to designate character classes that are the union of the classes designated by the operands.

## <a name="char_type"></a> regex_traits::char_type

The type of an element.

```cpp
typedef Elem char_type;
```

### Remarks

The typedef is a synonym for the template argument `Elem`.

## <a name="getloc"></a> regex_traits::getloc

Returns the stored locale object.

```cpp
locale_type getloc() const;
```

### Remarks

The member function returns the stored `locale` object.

## <a name="imbue"></a> regex_traits::imbue

Alters the stored locale object.

```cpp
locale_type imbue(locale_type loc);
```

### Parameters

*loc*\
The locale object to store.

### Remarks

The member function copies *loc* to the stored `locale` object and returns a copy of the previous value of the stored `locale` object.

## <a name="isctype"></a> regex_traits::isctype

Tests for class membership.

```cpp
bool isctype(char_type ch, char_class_type cls) const;
```

### Parameters

*ch*\
The element to test.

*cls*\
The classes to test for.

### Remarks

The member function returns true only if the character *ch* is in the character class designated by *cls*.

## <a name="length"></a> regex_traits::length

Returns the length of a null-terminated sequence.

```cpp
static size_type length(const char_type *str);
```

### Parameters

*str*\
The null-terminated sequence.

### Remarks

The static member function returns `std::char_traits<char_type>::length(str)`.

## <a name="locale_type"></a> regex_traits::locale_type

The type of the stored locale object.

```cpp
typedef T7 locale_type;
```

### Remarks

The typedef is a synonym for a type that encapsulates locales. In the specializations `regex_traits<char>` and `regex_traits<wchar_t>` it is a synonym for `std::locale`.

## <a name="lookup_classname"></a> regex_traits::lookup_classname

Maps a sequence to a character class.

```cpp
template <class FwdIt>
char_class_type lookup_classname(FwdIt first, FwdIt last) const;
```

### Parameters

*first*\
Beginning of sequence to look up.

*last*\
End of sequence to look up.

### Remarks

The member function returns a value that designates the character class named by the character sequence pointed to by its arguments. The value does not depend on the case of the characters in the sequence.

The specialization `regex_traits<char>` recognizes the names `"d"`, `"s"`, `"w"`, `"alnum"`, `"alpha"`, `"blank"`, `"cntrl"`, `"digit"`, `"graph"`, `"lower"`, `"print"`, `"punct"`, `"space"`, `"upper"`, and `"xdigit"`, all without regard to case.

The specialization `regex_traits<wchar_t>` recognizes the names `L"d"`, `L"s"`, `L"w"`, `L"alnum"`, `L"alpha"`, `L"blank"`, `L"cntrl"`, `L"digit"`, `L"graph"`, `L"lower"`, `L"print"`, `L"punct"`, `L"space"`, `L"upper"`, and `L"xdigit"`, all without regard to case.

## <a name="lookup_collatename"></a> regex_traits::lookup_collatename

Maps a sequence to a collating element.

```cpp
template <class FwdIt>
string_type lookup_collatename(FwdIt first, FwdIt last) const;
```

### Parameters

*first*\
Beginning of sequence to look up.

*last*\
End of sequence to look up.

### Remarks

The member function returns a string object containing the collating element corresponding to the sequence `[first, last)`, or an empty string if the sequence is not a valid collating element.

## <a name="regex_traits"></a> regex_traits::regex_traits

Constructs the object.

```cpp
regex_traits();
```

### Remarks

The constructor constructs an object whose stored `locale` object is initialized to the default locale.

## <a name="size_type"></a> regex_traits::size_type

The type of a sequence length.

```cpp
typedef T6 size_type;
```

### Remarks

The typedef is a synonym for an unsigned integral type. In the specializations `regex_traits<char>` and `regex_traits<wchar_t>` it is a synonym for `std::size_t`.

The typedef is a synonym for `std::size_t`.

## <a name="string_type"></a> regex_traits::string_type

The type of a string of elements.

```cpp
typedef basic_string<Elem> string_type;
```

### Remarks

The typedef is a synonym for `basic_string<Elem>`.

## <a name="transform"></a> regex_traits::transform

Converts to equivalent ordered sequence.

```cpp
template <class FwdIt>
string_type transform(FwdIt first, FwdIt last) const;
```

### Parameters

*first*\
Beginning of sequence to transform.

*last*\
End of sequence to transform.

### Remarks

The member function returns a string that it generates by using a transformation rule that depends on the stored `locale` object. For two character sequences designated by the iterator ranges `[first1, last1)` and `[first2, last2)`, `transform(first1, last1) < transform(first2, last2)` if the character sequence designated by the iterator range `[first1, last1)` sorts before the character sequence designated by the iterator range `[first2, last2)`.

## <a name="transform_primary"></a> regex_traits::transform_primary

Converts to equivalent caseless ordered sequence.

```cpp
template <class FwdIt>
string_type transform_primary(FwdIt first, FwdIt last) const;
```

### Parameters

*first*\
Beginning of sequence to transform.

*last*\
End of sequence to transform.

### Remarks

The member function returns a string that it generates by using a transformation rule that depends on the stored `locale` object. For two character sequences designated by the iterator ranges `[first1, last1)` and `[first2, last2)`, `transform_primary(first1, last1) < transform_primary(first2, last2)` if the character sequence designated by the iterator range `[first1, last1)` sorts before the character sequence designated by the iterator range `[first2, last2)` without regard for case or accents.

## <a name="translate"></a> regex_traits::translate

Converts to equivalent matching element.

```cpp
char_type translate(char_type ch) const;
```

### Parameters

*ch*\
The element to convert.

### Remarks

The member function returns a character that it generates by using a transformation rule that depends on the stored `locale` object. For two `char_type` objects `ch1` and `ch2`, `translate(ch1) == translate(ch2)` only if `ch1` and `ch2` should match when one occurs in the regular expression definition and the other occurs at a corresponding position in the target sequence for a locale-sensitive match.

## <a name="translate_nocase"></a> regex_traits::translate_nocase

Converts to equivalent caseless matching element.

```cpp
char_type translate_nocase(char_type ch) const;
```

### Parameters

*ch*\
The element to convert.

### Remarks

The member function returns a character that it generates by using a transformation rule that depends on the stored `locale` object. For two `char_type` objects `ch1` and `ch2`, `translate_nocase(ch1) == translate_nocase(ch2)` only if `ch1` and `ch2` should match when one occurs in the regular expression definition and the other occurs at a corresponding position in the target sequence for a case-insensitive match.

## <a name="value"></a> regex_traits::value

Converts an element to a digit value.

```cpp
int value(Elem ch, int radix) const;
```

### Parameters

*ch*\
The element to convert.

*radix*\
The arithmetic base to use.

### Remarks

The member function returns the value represented by the character *ch* in the base *radix*, or -1 if *ch* is not a valid digit in the base *radix*. The function will only be called with a *radix* argument of 8, 10, or 16.

## See also

[\<regex>](../standard-library/regex.md)\
[regex_constants Class](../standard-library/regex-constants-class.md)\
[regex_error Class](../standard-library/regex-error-class.md)\
[\<regex> functions](../standard-library/regex-functions.md)\
[regex_iterator Class](../standard-library/regex-iterator-class.md)\
[\<regex> operators](../standard-library/regex-operators.md)\
[regex_token_iterator Class](../standard-library/regex-token-iterator-class.md)\
[\<regex> typedefs](../standard-library/regex-typedefs.md)\
[regex_traits\<char> Class](../standard-library/regex-traits-char-class.md)\
[regex_traits\<wchar_t> Class](../standard-library/regex-traits-wchar-t-class.md)
