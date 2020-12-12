---
description: "Learn more about: &lt;locale&gt; functions"
title: "&lt;locale&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["locale/std::has_facet", "locale/std::isalnum", "locale/std::isalpha", "locale/std::iscntrl", "locale/std::isdigit", "locale/std::isgraph", "locale/std::islower", "locale/std::isprint", "locale/std::ispunct", "locale/std::isspace", "locale/std::isupper", "locale/std::isxdigit", "locale/std::tolower", "locale/std::toupper", "locale/std::use_facet"]
ms.assetid: b06c1ceb-33a7-48d3-8d4b-2714bbb27f14
helpviewer_keywords: ["std::has_facet [C++]", "std::isalnum [C++]", "std::isalpha [C++]", "std::iscntrl [C++]", "std::isdigit [C++]", "std::isgraph [C++]", "std::islower [C++]", "std::isprint [C++]", "std::ispunct [C++]", "std::isspace [C++]", "std::isupper [C++]", "std::isxdigit [C++]", "std::tolower [C++]", "std::toupper [C++]", "std::use_facet [C++]"]
---
# &lt;locale&gt; functions

[has_facet](#has_facet)\
[isalnum](#isalnum)\
[isalpha](#isalpha)\
[iscntrl](#iscntrl)\
[isdigit](#isdigit)\
[isgraph](#isgraph)\
[islower](#islower)\
[isprint](#isprint)\
[ispunct](#ispunct)\
[isspace](#isspace)\
[isupper](#isupper)\
[isxdigit](#isxdigit)\
[tolower](#tolower)\
[toupper](#toupper)\
[use_facet](#use_facet)

## <a name="has_facet"></a> has_facet

Tests if a particular facet is stored in a specified locale.

```cpp
template <class Facet>
bool has_facet(const locale& Loc);
```

### Parameters

*Loc*\
The locale to be tested for the presence of a facet.

### Return Value

**`true`** if the locale has the facet tested for; **`false`** if it does not.

### Remarks

The template function is useful for checking whether nonmandatory facets are listed in a locale before `use_facet` is called to avoid the exception that would be thrown if it were not present.

### Example

```cpp
// locale_has_facet.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result = has_facet <ctype<char> > ( loc );
   cout << result << endl;
}
```

```Output
1
```

## <a name="isalnum"></a> isalnum

Tests whether an element in a locale is an alphabetic or a numeric character.

```cpp
template <class CharType>
bool isalnum(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The alphanumeric element to be tested.

*Loc*\
The locale containing the alphanumeric element to be tested.

### Return Value

**`true`** if the element tested is alphanumeric; **`false`** if it is not.

### Example

```cpp
// locale_isalnum.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isalnum ( 'L', loc);
   bool result2 = isalnum ( '@', loc);
   bool result3 = isalnum ( '3', loc);

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "alphanumeric." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not alphanumeric." << endl;

   if ( result2 )
      cout << "The character '@' in the locale is "
           << "alphanumeric." << endl;
   else
      cout << "The character '@' in the locale is "
           << " not alphanumeric." << endl;

   if ( result3 )
      cout << "The character '3' in the locale is "
           << "alphanumeric." << endl;
   else
      cout << "The character '3' in the locale is "
           << " not alphanumeric." << endl;
}
```

```Output
The character 'L' in the locale is alphanumeric.
The character '@' in the locale is  not alphanumeric.
The character '3' in the locale is alphanumeric.
```

## <a name="isalpha"></a> isalpha

Tests whether an element in a locale is an alphabetic character.

```cpp
template <class CharType>
bool isalpha(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The element to be tested.

*Loc*\
The locale containing the alphabetic element to be tested.

### Return Value

**`true`** if the element tested is alphabetic; **`false`** if it is not.

### Remarks

The template function returns [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **alpha**, `Ch`).

### Example

```cpp
// locale_isalpha.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isalpha ( 'L', loc);
   bool result2 = isalpha ( '@', loc);
   bool result3 = isalpha ( '3', loc);

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "alphabetic." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not alphabetic." << endl;

   if ( result2 )
      cout << "The character '@' in the locale is "
           << "alphabetic." << endl;
   else
      cout << "The character '@' in the locale is "
           << " not alphabetic." << endl;

   if ( result3 )
      cout << "The character '3' in the locale is "
           << "alphabetic." << endl;
   else
      cout << "The character '3' in the locale is "
           << " not alphabetic." << endl;
}
```

## <a name="iscntrl"></a> iscntrl

Tests whether an element in a locale is a control character.

```cpp
template <class CharType>
bool iscntrl(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The element to be tested.

*Loc*\
The locale containing the element to be tested.

### Return Value

**`true`** if the element tested is a control character; **`false`** if it is not.

### Remarks

The template function returns [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **cntrl**, `Ch`).

### Example

```cpp
// locale_iscntrl.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = iscntrl ( 'L', loc );
   bool result2 = iscntrl ( '\n', loc );
   bool result3 = iscntrl ( '\t', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a control character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a control character." << endl;

   if ( result2 )
      cout << "The character-set 'backslash-n' in the locale\n is "
           << "a control character." << endl;
   else
      cout << "The character-set 'backslash-n' in the locale\n is "
           << " not a control character." << endl;

   if ( result3 )
      cout << "The character-set 'backslash-t' in the locale\n is "
           << "a control character." << endl;
   else
      cout << "The character-set 'backslash-n' in the locale \n is "
           << " not a control character." << endl;
}
```

## <a name="isdigit"></a> isdigit

Tests whether an element in a locale is a numeric character.

```cpp
template <class CharType>
bool isdigit(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The element to be tested.

*Loc*\
The locale containing the element to be tested.

### Return Value

**`true`** if the element tested is a numeric character; **`false`** if it is not.

### Remarks

The template function returns [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **digit**, `Ch`).

### Example

```cpp
// locale_is_digit.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isdigit ( 'L', loc );
   bool result2 = isdigit ( '@', loc );
   bool result3 = isdigit ( '3', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a numeric character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a numeric character." << endl;

   if ( result2 )
      cout << "The character '@' in the locale is "
           << "a numeric character." << endl;
   else
      cout << "The character '@' in the locale is "
           << " not a numeric character." << endl;

   if ( result3 )
      cout << "The character '3' in the locale is "
           << "a numeric character." << endl;
   else
      cout << "The character '3' in the locale is "
           << " not a numeric character." << endl;
}
```

## <a name="isgraph"></a> isgraph

Tests whether an element in a locale is an alphanumeric or punctuation character.

```cpp
template <class CharType>
bool isgraph(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The element to be tested.

*Loc*\
The locale containing the element to be tested.

### Return Value

**`true`** if the element tested is an alphanumeric or a punctuation character; **`false`** if it is not.

### Remarks

The template function returns [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **graph**, `Ch`).

### Example

```cpp
// locale_is_graph.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isgraph ( 'L', loc );
   bool result2 = isgraph ( '\t', loc );
   bool result3 = isgraph ( '.', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is\n "
           << "an alphanumeric or punctuation character." << endl;
   else
      cout << "The character 'L' in the locale is\n "
           << " not an alphanumeric or punctuation character." << endl;

   if ( result2 )
      cout << "The character 'backslash-t' in the locale is\n "
           << "an alphanumeric or punctuation character." << endl;
   else
      cout << "The character 'backslash-t' in the locale is\n "
           << "not an alphanumeric or punctuation character." << endl;

   if ( result3 )
      cout << "The character '.' in the locale is\n "
           << "an alphanumeric or punctuation character." << endl;
   else
      cout << "The character '.' in the locale is\n "
           << " not an alphanumeric or punctuation character." << endl;
}
```

## <a name="islower"></a> islower

Tests whether an element in a locale is lower case.

```cpp
template <class CharType>
bool islower(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The element to be tested.

*Loc*\
The locale containing the element to be tested.

### Return Value

**`true`** if the element tested is a lowercase character; **`false`** if it is not.

### Remarks

The template function returns [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **lower**, `Ch`).

### Example

```cpp
// locale_islower.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = islower ( 'L', loc );
   bool result2 = islower ( 'n', loc );
   bool result3 = islower ( '3', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a lowercase character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a lowercase character." << endl;

   if ( result2 )
      cout << "The character 'n' in the locale is "
           << "a lowercase character." << endl;
   else
      cout << "The character 'n' in the locale is "
           << " not a lowercase character." << endl;

   if ( result3 )
      cout << "The character '3' in the locale is "
           << "a lowercase character." << endl;
   else
      cout << "The character '3' in the locale is "
           << " not a lowercase character." << endl;
}
```

## <a name="isprint"></a> isprint

Tests whether an element in a locale is a printable character.

```cpp
template <class CharType>
bool isprint(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The element to be tested.

*Loc*\
The locale containing the element to be tested.

### Return Value

**`true`** if the element tested is a printable; **`false`** if it is not.

### Remarks

The template function returns [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **print**, `Ch`).

### Example

```cpp
// locale_isprint.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );

   bool result1 = isprint ( 'L', loc );
   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a printable character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a printable character." << endl;

   bool result2 = isprint( '\t', loc );
   if ( result2 )
      cout << "The character 'backslash-t' in the locale is "
           << "a printable character." << endl;
   else
      cout << "The character 'backslash-t' in the locale is "
           << " not a printable character." << endl;

   bool result3 = isprint( '\n', loc );
   if ( result3 )
      cout << "The character 'backslash-n' in the locale is "
           << "a printable character." << endl;
   else
      cout << "The character 'backslash-n' in the locale is "
           << " not a printable character." << endl;
}
```

## <a name="ispunct"></a> ispunct

Tests whether an element in a locale is a punctuation character.

```cpp
template <class CharType>
bool ispunct(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The element to be tested.

*Loc*\
The locale containing the element to be tested.

### Return Value

**`true`** if the element tested is a punctuation character; **`false`** if it is not.

### Remarks

The template function returns [use_facet](../standard-library/locale-functions.md#use_facet)`<`[ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **punct**, `Ch`).

### Example

```cpp
// locale_ispunct.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = ispunct ( 'L', loc );
   bool result2 = ispunct ( ';', loc );
   bool result3 = ispunct ( '*', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a punctuation character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a punctuation character." << endl;

   if ( result2 )
      cout << "The character ';' in the locale is "
           << "a punctuation character." << endl;
   else
      cout << "The character ';' in the locale is "
           << " not a punctuation character." << endl;

   if ( result3 )
      cout << "The character '*' in the locale is "
           << "a punctuation character." << endl;
   else
      cout << "The character '*' in the locale is "
           << " not a punctuation character." << endl;
}
```

## <a name="isspace"></a> isspace

Tests whether an element in a locale is a whitespace character.

```cpp
template <class CharType>
bool isspace(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The element to be tested.

*Loc*\
The locale containing the element to be tested.

### Return Value

**`true`** if the element tested is a whitespace character; **`false`** if it is not.

### Remarks

The template function returns [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **space**, `Ch`).

### Example

```cpp
// locale_isspace.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isspace ( 'L', loc );
   bool result2 = isspace ( '\n', loc );
   bool result3 = isspace ( ' ', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a whitespace character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a whitespace character." << endl;

   if ( result2 )
      cout << "The character 'backslash-n' in the locale is "
           << "a whitespace character." << endl;
   else
      cout << "The character 'backslash-n' in the locale is "
           << " not a whitespace character." << endl;

   if ( result3 )
      cout << "The character ' ' in the locale is "
           << "a whitespace character." << endl;
   else
      cout << "The character ' ' in the locale is "
           << " not a whitespace character." << endl;
}
```

## <a name="isupper"></a> isupper

Tests whether an element in a locale is in upper case.

```cpp
template <class CharType>
bool isupper(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The element to be tested.

*Loc*\
The locale containing the element to be tested.

### Return Value

**`true`** if the element tested is an uppercase character; **`false`** if it is not.

### Remarks

The template function returns [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **upper**, `Ch`).

### Example

```cpp
// locale_isupper.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isupper ( 'L', loc );
   bool result2 = isupper ( 'n', loc );
   bool result3 = isupper ( '3', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a uppercase character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a uppercase character." << endl;

   if ( result2 )
      cout << "The character 'n' in the locale is "
           << "a uppercase character." << endl;
   else
      cout << "The character 'n' in the locale is "
           << " not a uppercase character." << endl;

   if ( result3 )
      cout << "The character '3' in the locale is "
           << "a uppercase character." << endl;
   else
      cout << "The character '3' in the locale is "
           << " not a uppercase character." << endl;
}
```

## <a name="isxdigit"></a> isxdigit

Tests whether an element in a locale is a character used to represent a hexadecimal number.

```cpp
template <class CharType>
bool isxdigit(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The element to be tested.

*Loc*\
The locale containing the element to be tested.

### Return Value

**`true`** if the element tested is a character used to represent a hexadecimal number; **`false`** if it is not.

### Remarks

The template function returns [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **xdigit**, `Ch`).

Hexadecimal digits use base 16 to represent numbers, using the numbers 0 through 9 plus case-insensitive letters A through F to represent the decimal numbers 0 through 15.

### Example

```cpp
// locale_isxdigit.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isxdigit ( '5', loc );
   bool result2 = isxdigit ( 'd', loc );
   bool result3 = isxdigit ( 'q', loc );

   if ( result1 )
      cout << "The character '5' in the locale is "
           << "a hexidecimal digit-character." << endl;
   else
      cout << "The character '5' in the locale is "
           << " not a hexidecimal digit-character." << endl;

   if ( result2 )
      cout << "The character 'd' in the locale is "
           << "a hexidecimal digit-character." << endl;
   else
      cout << "The character 'd' in the locale is "
           << " not a hexidecimal digit-character." << endl;

   if ( result3 )
      cout << "The character 'q' in the locale is "
           << "a hexidecimal digit-character." << endl;
   else
      cout << "The character 'q' in the locale is "
           << " not a hexidecimal digit-character." << endl;
}
```

## <a name="tolower"></a> tolower

Converts a character to lower case.

```cpp
template <class CharType>
CharType tolower(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The character to be converted to lower case.

*Loc*\
The locale containing the character to be converted.

### Return Value

The character converted to lower case.

### Remarks

The template function returns [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [tolower](../standard-library/ctype-class.md#tolower)( `Ch`).

### Example

```cpp
// locale_tolower.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   char result1 = tolower ( 'H', loc );
   cout << "The lower case of 'H' in the locale is: "
        << result1 << "." << endl;
   char result2 = tolower ( 'h', loc );
   cout << "The lower case of 'h' in the locale is: "
        << result2 << "." << endl;
   char result3 = tolower ( '$', loc );
   cout << "The lower case of '$' in the locale is: "
        << result3 << "." << endl;
}
```

## <a name="toupper"></a> toupper

Converts a character to upper case.

```cpp
template <class CharType>
CharType toupper(CharType Ch, const locale& Loc)
```

### Parameters

*Ch*\
The character to be converted to upper case.

*Loc*\
The locale containing the character to be converted.

### Return Value

The character converted to upper case.

### Remarks

The template function returns [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [toupper](../standard-library/ctype-class.md#toupper)( `Ch`).

### Example

```cpp
// locale_toupper.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   char result1 = toupper ( 'h', loc );
   cout << "The upper case of 'h' in the locale is: "
        << result1 << "." << endl;
   char result2 = toupper ( 'H', loc );
   cout << "The upper case of 'H' in the locale is: "
        << result2 << "." << endl;
   char result3 = toupper ( '$', loc );
   cout << "The upper case of '$' in the locale is: "
        << result3 << "." << endl;
}
```

## <a name="use_facet"></a> use_facet

Returns a reference to a facet of a specified type stored in a locale.

```cpp
template <class Facet>
const Facet& use_facet(const locale& Loc);
```

### Parameters

*Loc*\
The const locale containing the type of facet being referenced.

### Return Value

A reference to the facet of class `Facet` contained within the argument locale.

### Remarks

The reference to the facet returned by the template function remains valid as long as any copy of the containing locale exists. If no such facet object of class `Facet` is listed in the argument locale, the function throws a `bad_cast` exception.

### Example

```cpp
// locale_use_facet.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc1 ( "German_Germany" ), loc2 ( "English_Australia" );
   bool result1 = use_facet<ctype<char> > ( loc1 ).is(
   ctype_base::alpha, 'a'
);
   bool result2 = use_facet<ctype<char> > ( loc2 ).is( ctype_base::alpha, '!'
   );

   if ( result1 )
      cout << "The character 'a' in locale loc1 is alphabetic."
           << endl;
   else
      cout << "The character 'a' in locale loc1 is not alphabetic."
           << endl;

   if ( result2 )
      cout << "The character '!' in locale loc2 is alphabetic."
           << endl;
   else
      cout << "The character '!' in locale loc2 is not alphabetic."
           << endl;
}
```

```Output
The character 'a' in locale loc1 is alphabetic.
The character '!' in locale loc2 is not alphabetic.
```

## See also

[\<locale>](../standard-library/locale.md)
