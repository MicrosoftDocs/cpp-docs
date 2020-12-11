---
description: "Learn more about: ctype Class"
title: "ctype Class"
ms.date: "11/04/2016"
f1_keywords: ["xlocale/std::ctype", "xlocale/std::ctype::char_type", "xlocale/std::ctype::do_is", "xlocale/std::ctype::do_narrow", "xlocale/std::ctype::do_scan_is", "xlocale/std::ctype::do_scan_not", "xlocale/std::ctype::do_tolower", "xlocale/std::ctype::do_toupper", "xlocale/std::ctype::do_widen", "xlocale/std::ctype::is", "xlocale/std::ctype::narrow", "xlocale/std::ctype::scan_is", "xlocale/std::ctype::scan_not", "xlocale/std::ctype::tolower", "xlocale/std::ctype::toupper", "xlocale/std::ctype::widen"]
helpviewer_keywords: ["std::ctype [C++]", "std::ctype [C++], char_type", "std::ctype [C++], do_is", "std::ctype [C++], do_narrow", "std::ctype [C++], do_scan_is", "std::ctype [C++], do_scan_not", "std::ctype [C++], do_tolower", "std::ctype [C++], do_toupper", "std::ctype [C++], do_widen", "std::ctype [C++], is", "std::ctype [C++], narrow", "std::ctype [C++], scan_is", "std::ctype [C++], scan_not", "std::ctype [C++], tolower", "std::ctype [C++], toupper", "std::ctype [C++], widen"]
ms.assetid: 3627154c-49d9-47b5-b28f-5bbedee38e3b
---
# ctype Class

A class that provides a facet that is used to classify characters, convert from upper and lower cases, and convert between the native character set and that set used by the locale.

## Syntax

```cpp
template <class CharType>
class ctype : public ctype_base;
```

### Parameters

*CharType*\
The type used within a program to encode characters.

## Remarks

As with any locale facet, the static object ID has an initial stored value of zero. The first attempt to access its stored value stores a unique positive value in `id`. Classification criteria are provided a nested bitmask type in the base class ctype_base.

The C++ Standard Library defines two explicit specializations of this class template:

- `ctype<char>`, an explicit specialization whose differences are described separately. For more information, see [ctype&lt;char&gt; Class](../standard-library/ctype-char-class.md).

- `ctype<wchar_t>`, which treats elements as wide characters.

Other specializations of class template `ctype<CharType>`:

- Convert a value *ch* of type *CharType* to a value of type **`char`** with the expression `(char)ch`.

- Convert a value *byte* of type **`char`** to a value of type *CharType* with the expression `CharType(byte)`.

All other operations are performed on **`char`** values in the same way as for the explicit specialization `ctype<char>`.

### Constructors

|Constructor|Description|
|-|-|
|[ctype](#ctype)|Constructor for objects of class `ctype` that serve as locale facets for characters.|

### Typedefs

|Type name|Description|
|-|-|
|[char_type](#char_type)|A type that describes a character used by a locale.|

### Member functions

|Member function|Description|
|-|-|
|[do_is](#do_is)|A virtual function called to test whether a single character has a particular attribute, or classify the attributes of each character in a range and stores them in an array.|
|[do_narrow](#do_narrow)|A virtual function called to convert a character of type `CharType` used by a locale to the corresponding character of type **`char`** in the native character set.|
|[do_scan_is](#do_scan_is)|A virtual function called to locate the first character in a range that matches a specified mask.|
|[do_scan_not](#do_scan_not)|A virtual function called to locate the first character in a range that does not match a specified mask.|
|[do_tolower](#do_tolower)|A virtual function called to convert a character or a range of characters to their lower case.|
|[do_toupper](#do_toupper)|A virtual function called to convert a character or a range of characters to upper case.|
|[do_widen](#do_widen)|A virtual function called to converts a character of type **`char`** in the native character set to the corresponding character of type `CharType` used by a locale.|
|[is](#is)|Tests whether a single character has a particular attribute, or classifies the attributes of each character in a range and stores them in an array.|
|[narrow](#narrow)|Converts a character of type `CharType` used by a locale to the corresponding character of type char in the native character set.|
|[scan_is](#scan_is)|Locates the first character in a range that matches a specified mask.|
|[scan_not](#scan_not)|Locates the first character in a range that does not match a specified mask.|
|[tolower](#tolower)|Converts a character or a range of characters to lower case.|
|[toupper](#toupper)|Converts a character or a range of characters to upper case.|
|[widen](#widen)|Converts a character of type **`char`** in the native character set to the corresponding character of type `CharType` used by a locale.|

## Requirements

**Header:** \<locale>

**Namespace:** std

## <a name="char_type"></a> ctype::char_type

A type that describes a character used by a locale.

```cpp
typedef CharType char_type;
```

### Remarks

The type is a synonym for the template parameter *CharType*.

### Example

See the member function [widen](#widen) for an example that uses `char_type` as a return value.

## <a name="ctype"></a> ctype::ctype

Constructor for objects of class ctype that serve as locale facets for characters.

```cpp
explicit ctype(size_t _Refs = 0);
```

### Parameters

*_Refs*\
Integer value used to specify the type of memory management for the object.

### Remarks

The possible values for the *_Refs* parameter and their significance are:

- 0: The lifetime of the object is managed by the locales that contain it.

- 1: The lifetime of the object must be manually managed.

- \> 1: These values are not defined.

No direct examples are possible, because the destructor is protected.

The constructor initializes its `locale::facet` base object with **locale::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs`).

## <a name="do_is"></a> ctype::do_is

A virtual function called to test whether a single character has a particular attribute, or classify the attributes of each character in a range and stores them in an array.

```cpp
virtual bool do_is(
    mask maskVal,
    CharType ch) const;

virtual const CharType *do_is(
    const CharType* first,
    const CharType* last,
    mask* dest) const;
```

### Parameters

*maskVal*\
The mask value for which the character is to be tested.

*ch*\
The character whose attributes are to be tested.

*first*\
A pointer to the first character in the range whose attributes are to be classified.

*last*\
A pointer to the character immediately following the last character in the range whose attributes are to be classified.

*dest*\
A pointer to the beginning of the array where the mask values characterizing the attributes of each of the characters are to be stored.

### Return Value

The first member function returns a Boolean value that is **`true`** if the character tested has the attribute described by the mask value; **`false`** if it fails to have the attribute.

The second member function returns an array containing the mask values characterizing the attributes of each of the characters in the range.

### Remarks

The mask values classifying the attributes of the characters are provided by the class [ctype_base](../standard-library/ctype-base-class.md), from which ctype derives. The first member function can accept expressions for its first parameter referred to as bitmasks and formed from the combination of mask values by the logical bitwise operators (&#124; , & , ^ , ~).

### Example

See the example for [is](#is), which calls `do_is`.

## <a name="do_narrow"></a> ctype::do_narrow

A virtual function called to convert a character of type `CharType` used by a locale to the corresponding character of type **`char`** in the native character set.

```cpp
virtual char do_narrow(
    CharType ch,
    char default = '\0') const;

virtual const CharType* do_narrow(
    const CharType* first,
    const CharType* last,
    char default,
    char* dest) const;
```

### Parameters

*ch*\
The character of type `Chartype` used by the locale to be converted.

*default*\
The default value to be assigned by the member function to characters of type `CharType` that do not have counterpart characters of type **`char`**.

*first*\
A pointer to the first character in the range of characters to be converted.

*last*\
A pointer to the character immediately following the last character in the range of characters to be converted.

*dest*\
A const pointer to the first character of type **`char`** in the destination range that stores the converted range of characters.

### Return Value

The first protected member function returns the native character of type char that corresponds to the parameter character of type `CharType` or *default* if no counterpart is defined.

The second protected member function returns a pointer to the destination range of native characters converted from characters of type `CharType`.

### Remarks

The second protected member template function stores in `dest`[ `I`] the value `do_narrow`( `first` [ `I`], `default`), for `I` in the interval [0, `last` - `first`).

### Example

See the example for [narrow](#narrow), which calls `do_narrow`.

## <a name="do_scan_is"></a> ctype::do_scan_is

A virtual function called to locate the first character in a range that matches a specified mask.

```cpp
virtual const CharType *do_scan_is(
    mask maskVal,
    const CharType* first,
    const CharType* last) const;
```

### Parameters

*maskVal*\
The mask value to be matched by a character.

*first*\
A pointer to the first character in the range to be scanned.

*last*\
A pointer to the character immediately following the last character in the range to be scanned.

### Return Value

A pointer to the first character in a range that does match a specified mask. If no such value exists, the function returns *last*.

### Remarks

The protected member function returns the smallest pointer `ptr` in the range [ `first`, `last`) for which [do_is](#do_is)( `maskVal`, \* `ptr`) is true.

### Example

See the example for [scan_is](#scan_is), which calls `do_scan_is`.

## <a name="do_scan_not"></a> ctype::do_scan_not

A virtual function called to locate the first character in a range that does not match a specified mask.

```cpp
virtual const CharType *do_scan_not(
    mask maskVal,
    const CharType* first,
    const CharType* last) const;
```

### Parameters

*maskVal*\
The mask value not to be matched by a character.

*first*\
A pointer to the first character in the range to be scanned.

*last*\
A pointer to the character immediately following the last character in the range to be scanned.

### Return Value

A pointer to the first character in a range that doesn't match a specified mask. If no such value exists, the function returns *last*.

### Remarks

The protected member function returns the smallest pointer `ptr` in the range [ `first`, `last`) for which [do_is](#do_is)( `maskVal`, \* `ptr`) is false.

### Example

See the example for [scan_not](#scan_not), which calls `do_scan_not`.

## <a name="do_tolower"></a> ctype::do_tolower

A virtual function called to convert a character or a range of characters to lower case.

```cpp
virtual CharType do_tolower(CharType ch) const;

virtual const CharType *do_tolower(
    CharType* first,
    const CharType* last) const;
```

### Parameters

*ch*\
The character to be converted to lower case.

*first*\
A pointer to the first character in the range of characters whose cases are to be converted.

*last*\
A pointer to the character immediately following the last character in the range of characters whose cases are to be converted.

### Return Value

The first protected member function returns the lowercase form of the parameter *ch*. If no lowercase form exists, it returns *ch*. The second protected member function returns *last*.

### Remarks

The second protected member template function replaces each element `first` [ `I`], for `I` in the interval [0, `last` - `first`), with `do_tolower`( `first` [ `I`]).

### Example

See the example for [tolower](#tolower), which calls `do_tolower`.

## <a name="do_toupper"></a> ctype::do_toupper

A virtual function called to convert a character or a range of characters to upper case.

```cpp
virtual CharType do_toupper(CharType ch) const;

virtual const CharType *do_toupper(
    CharType* first,
    const CharType* last) const;
```

### Parameters

*ch*\
The character to be converted to upper case.

*first*\
A pointer to the first character in the range of characters whose cases are to be converted.

*last*\
A pointer to character immediately following the last character in the range of characters whose cases are to be converted.

### Return Value

The first protected member function returns the uppercase form of the parameter *ch*. If no uppercase form exists, it returns *ch*. The second protected member function returns *last*.

### Remarks

The second protected member template function replaces each element `first` [ `I`], for `I` in the interval [0, `last` - `first`), with `do_toupper`( `first` [ `I`]).

### Example

See the example for [toupper](#toupper), which calls `do_toupper`.

## <a name="do_widen"></a> ctype::do_widen

A virtual function called to converts a character of type **`char`** in the native character set to the corresponding character of type `CharType` used by a locale.

```cpp
virtual CharType do_widen(char byte) const;

virtual const char *do_widen(
    const char* first,
    const char* last,
    CharType* dest) const;
```

### Parameters

*byte*\
The character of type **`char`** in the native character set to be converted.

*first*\
A pointer to the first character in the range of characters to be converted.

*last*\
A pointer to the character immediately following the last character in the range of characters to be converted.

*dest*\
A pointer to the first character of type `CharType` in the destination range that stores the converted range of characters.

### Return Value

The first protected member function returns the character of type `CharType` that corresponds to the parameter character of native type **`char`**.

The second protected member function returns a pointer to the destination range of characters of type `CharType` used by a locale converted from native characters of type **`char`**.

### Remarks

The second protected member template function stores in `dest`[ `I`] the value `do_widen`( `first`[ `I`]), for `I` in the interval [0, `last` - `first`).

### Example

See the example for [widen](#widen), which calls `do_widen`.

## <a name="is"></a> ctype::is

Tests whether a single character has a particular attribute or classifies the attributes of each character in a range and stores them in an array.

```cpp
bool is(mask maskVal, CharType ch) const;

const CharType *is(
    const CharType* first,
    const CharType* last,
    mask* dest) const;
```

### Parameters

*maskVal*\
The mask value for which the character is to be tested.

*ch*\
The character whose attributes are to be tested.

*first*\
A pointer to the first character in the range whose attributes are to be classified.

*last*\
A pointer to the character immediately following the last character in the range whose attributes are to be classified.

*dest*\
A pointer to the beginning of the array where the mask values characterizing the attributes of each of the characters are to be stored.

### Return Value

The first member function returns **`true`** if the character tested has the attribute described by the mask value; **`false`** if it fails to have the attribute.

The second member function returns a pointer to the last character in the range whose attributes are to be classified.

### Remarks

The mask values classifying the attributes of the characters are provided by the class [ctype_base Class](../standard-library/ctype-base-class.md), from which ctype derives. The first member function can accept expressions for its first parameter referred to as bitmasks and formed from the combination of mask values by the logical bitwise operators (&#124; , & , ^ , ~).

### Example

```cpp
// ctype_is.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main() {
   locale loc1 ( "German_Germany" ), loc2 ( "English_Australia" );

   if (use_facet<ctype<char> > ( loc1 ).is( ctype_base::alpha, 'a' ))
      cout << "The character 'a' in locale loc1 is alphabetic."
           << endl;
   else
      cout << "The character 'a' in locale loc1 is not alphabetic."
           << endl;

   if (use_facet<ctype<char> > ( loc2 ).is( ctype_base::alpha, '!' ))
      cout << "The character '!' in locale loc2 is alphabetic."
           << endl;
   else
      cout << "The character '!' in locale loc2 is not alphabetic."
           << endl;

   char *string = "Hello, my name is John!";
   ctype<char>::mask maskarray[30];
   use_facet<ctype<char> > ( loc2 ).is(
      string, string + strlen(string), maskarray );
   for (unsigned int i = 0; i < strlen(string); i++) {
      cout << string[i] << ": "
           << (maskarray[i] & ctype_base::alpha  "alpha"
                                                : "not alpha")
           << endl;;
   };
}
```

## <a name="narrow"></a> ctype::narrow

Converts characters of type `CharType` used by a locale to the corresponding characters of type **`char`** in the native character set.

```cpp
char narrow(CharType ch, char default = '\0') const;

const CharType* narrow(
    const CharType* first,
    const CharType* last,
    char default,
    char* dest) const;
```

### Parameters

*ch*\
The character of type `Chartype` used by the locale to be converted.

*default*\
The default value to be assigned by the member function to characters of type `CharType` that do not have counterpart characters of type **`char`**.

*first*\
A pointer to the first character in the range of characters to be converted.

*last*\
A pointer to the character immediately following the last character in the range of characters to be converted.

*dest*\
A const pointer to the first character of type **`char`** in the destination range that stores the converted range of characters.

### Return Value

The first member function returns the native character of type **`char`** that corresponds to the parameter character of type `CharType default` if not counterpart is defined.

The second member function returns a pointer to the destination range of native characters converted from characters of type `CharType`.

### Remarks

The first member function returns [do_narrow](#do_narrow)(`ch`, `default`). The second member function returns [do_narrow](#do_narrow) (`first`, `last`, `default`, `dest`). Only the basic source characters are guaranteed to have a unique inverse image `CharType` under `narrow`. For these basic source characters, the following invariant holds: `narrow` ( [widen](#widen) ( **c** ), 0 ) == **c**.

### Example

```cpp
// ctype_narrow.cpp
// compile with: /EHsc /W3
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc1 ( "english" );
   wchar_t *str1 = L"\x0392fhello everyone";
   char str2 [16];
   bool result1 = (use_facet<ctype<wchar_t> > ( loc1 ).narrow
      ( str1, str1 + wcslen(str1), 'X', &str2[0] ) != 0);  // C4996
   str2[wcslen(str1)] = '\0';
   wcout << str1 << endl;
   cout << &str2[0] << endl;
}
```

```Output
Xhello everyone
```

## <a name="scan_is"></a> ctype::scan_is

Locates the first character in a range that matches a specified mask.

```cpp
const CharType *scan_is(
    mask maskVal,
    const CharType* first,
    const CharType* last) const;
```

### Parameters

*maskVal*\
The mask value to be matched by a character.

*first*\
A pointer to the first character in the range to be scanned.

*last*\
A pointer to the character immediately following the last character in the range to be scanned.

### Return Value

A pointer to the first character in a range that does match a specified mask. If no such value exists, the function returns *last*.

### Remarks

The member function returns [do_scan_is](#do_scan_is)(`maskVal`, `first`, `last`).

### Example

```cpp
// ctype_scan_is.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc1 ( "German_Germany" );

   char *string = "Hello, my name is John!";

   const char* i = use_facet<ctype<char> > ( loc1 ).scan_is
      ( ctype_base::punct, string, string + strlen(string) );
   cout << "The first punctuation is \"" << *i << "\" at position: "
      << i - string << endl;
}
```

```Output
The first punctuation is "," at position: 5
```

## <a name="scan_not"></a> ctype::scan_not

Locates the first character in a range that does not match a specified mask.

```cpp
const CharType *scan_not(
    mask maskVal,
    const CharType* first,
    const CharType* last) const;
```

### Parameters

*maskVal*\
The mask value not to be matched by a character.

*first*\
A pointer to the first character in the range to be scanned.

*last*\
A pointer to the character immediately following the last character in the range to be scanned.

### Return Value

A pointer to the first character in a range that does not match a specified mask. If no such value exists, the function returns *last*.

### Remarks

The member function returns [do_scan_not](#do_scan_not)(`maskVal`, `first`, `last`).

### Example

```cpp
// ctype_scan_not.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc1 ( "German_Germany" );

   char *string = "Hello, my name is John!";

   const char* i = use_facet<ctype<char> > ( loc1 ).scan_not
      ( ctype_base::alpha, string, string + strlen(string) );
   cout << "First nonalpha character is \"" << *i << "\" at position: "
      << i - string << endl;
}
```

```Output
First nonalpha character is "," at position: 5
```

## <a name="tolower"></a> ctype::tolower

Converts a character or a range of characters to lower case.

```cpp
CharType tolower(CharType ch) const;

const CharType *tolower(CharType* first, const CharType* last) const;
```

### Parameters

*ch*\
The character to be converted to lower case.

*first*\
A pointer to the first character in the range of characters whose cases are to be converted.

*last*\
A pointer to the character immediately following the last character in the range of characters whose cases are to be converted.

### Return Value

The first member function returns the lowercase form of the parameter *ch*. If no lowercase form exists, it returns *ch*.

The second member function returns *last*.

### Remarks

The first member function returns [do_tolower](#do_tolower)(`ch`). The second member function returns [do_tolower](#do_tolower)(`first`, `last`).

### Example

```cpp
// ctype_tolower.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc1 ( "German_Germany" );

   char string[] = "HELLO, MY NAME IS JOHN";

   use_facet<ctype<char> > ( loc1 ).tolower
      ( string, string + strlen(string) );
   cout << "The lowercase string is: " << string << endl;
}
```

```Output
The lowercase string is: hello, my name is john
```

## <a name="toupper"></a> ctype::toupper

Converts a character or a range of characters to upper case.

```cpp
CharType toupper(CharType ch) const;
const CharType *toupper(CharType* first, const CharType* last) const;
```

### Parameters

*ch*\
The character to be converted to uppercase.

*first*\
A pointer to the first character in the range of characters whose cases are to be converted.

*last*\
A pointer to the character immediately following the last character in the range of characters whose cases are to be converted.

### Return Value

The first member function returns the uppercase form of the parameter *ch*. If no uppercase form exists, it returns *ch*.

The second member function returns *last*.

### Remarks

The first member function returns [do_toupper](#do_toupper)(`ch`). The second member function returns [do_toupper](#do_toupper)( `first`, `last`).

### Example

```cpp
// ctype_toupper.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc1 ( "German_Germany" );

   char string[] = "Hello, my name is John";

   use_facet<ctype<char> > ( loc1 ).toupper
      ( string, string + strlen(string) );
   cout << "The uppercase string is: " << string << endl;
}
```

```Output
The uppercase string is: HELLO, MY NAME IS JOHN
```

## <a name="widen"></a> ctype::widen

Converts a character of type **`char`** in the native character set to the corresponding character of type `CharType` used by a locale.

```cpp
CharType widen(char byte) const;
const char *widen(const char* first, const char* last, CharType* dest) const;
```

### Parameters

*byte*\
The character of type char in the native character set to be converted.

*first*\
A pointer to the first character in the range of characters to be converted.

*last*\
A pointer to the character immediately following the last character in the range of characters to be converted.

*dest*\
A pointer to the first character of type `CharType` in the destination range that stores the converted range of characters.

### Return Value

The first member function returns the character of type `CharType` that corresponds to the parameter character of native type **`char`**.

The second member function returns a pointer to the destination range of characters of type `CharType` used by a locale converted from native characters of type **`char`**.

### Remarks

The first member function returns [do_widen](#do_widen)(`byte`). The second member function returns [do_widen](#do_widen)(`first`, `last`, `dest`).

### Example

```cpp
// ctype_widen.cpp
// compile with: /EHsc /W3
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc1 ( "English" );
   char *str1 = "Hello everyone!";
   wchar_t str2 [16];
   bool result1 = (use_facet<ctype<wchar_t> > ( loc1 ).widen
      ( str1, str1 + strlen(str1), &str2[0] ) != 0);  // C4996
   str2[strlen(str1)] = '\0';
   cout << str1 << endl;
   wcout << &str2[0] << endl;

   ctype<wchar_t>::char_type charT;
   charT = use_facet<ctype<char> > ( loc1 ).widen( 'a' );
}
```

```Output
Hello everyone!
Hello everyone!
```

## See also

[\<locale>](../standard-library/locale.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
