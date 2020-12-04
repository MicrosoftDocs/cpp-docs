---
description: "Learn more about: &lt;locale&gt;"
title: "&lt;locale&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<locale>", "locale/std::<locale>", "std::<locale>"]
helpviewer_keywords: ["locale header"]
ms.assetid: ca56f9d2-7128-44da-8df1-f4c78c17fbf2
---
# &lt;locale&gt;

Defines class templates and functions that C++ programs can use to encapsulate and manipulate different cultural conventions regarding the representation and formatting of numeric, monetary, and calendric data, including internationalization support for character classification and string collation.

## Syntax

```cpp
#include <locale>
```

### Functions

|Function|Description|
|-|-|
|[has_facet](../standard-library/locale-functions.md#has_facet)|Tests if a particular facet is stored in a specified locale.|
|[isalnum](../standard-library/locale-functions.md#isalnum)|Tests whether an element in a locale is an alphabetic or a numeric character.|
|[isalpha](../standard-library/locale-functions.md#isalpha)|Tests whether an element in a locale is alphabetic character.|
|[iscntrl](../standard-library/locale-functions.md#iscntrl)|Tests whether an element in a locale is a control character.|
|[isdigit](../standard-library/locale-functions.md#isdigit)|Tests whether an element in a locale is a numeric character.|
|[isgraph](../standard-library/locale-functions.md#isgraph)|Tests whether an element in a locale is an alphanumeric or punctuation character.|
|[islower](../standard-library/locale-functions.md#islower)|Tests whether an element in a locale is lower case.|
|[isprint](../standard-library/locale-functions.md#isprint)|Tests whether an element in a locale is a printable character.|
|[ispunct](../standard-library/locale-functions.md#ispunct)|Tests whether an element in a locale is a punctuation character.|
|[isspace](../standard-library/locale-functions.md#isspace)|Tests whether an element in a locale is a whitespace character.|
|[isupper](../standard-library/locale-functions.md#isupper)|Tests whether an element in a locale is upper case.|
|[isxdigit](../standard-library/locale-functions.md#isxdigit)|Tests whether an element in a locale is a character used to represent a hexadecimal number.|
|[tolower](../standard-library/locale-functions.md#tolower)|Converts a character to lower case.|
|[toupper](../standard-library/locale-functions.md#toupper)|Converts a character to upper case.|
|[use_facet](../standard-library/locale-functions.md#use_facet)|Returns a reference to a facet of a specified type stored in a locale.|

### Classes

|Class|Description|
|-|-|
|[codecvt](../standard-library/codecvt-class.md)|A class template that provides a facet used to convert between internal and external character encodings.|
|[codecvt_base](../standard-library/codecvt-base-class.md)|A base class for the codecvt class that is used to define an enumeration type referred to as `result`, used as the return type for the facet member functions to indicate the result of a conversion.|
|[codecvt_byname](../standard-library/codecvt-byname-class.md)|A derived class template that describes an object that can serve as a collate facet of a given locale, enabling the retrieval of information specific to a cultural area concerning conversions.|
|[collate](../standard-library/collate-class.md)|A collate class template that provides a facet that handles string sorting conventions.|
|[collate_byname](../standard-library/collate-byname-class.md)|A derived class template that describes an object that can serve as a collate facet of a given locale, enabling the retrieval of information specific to a cultural area concerning string sorting conventions.|
|[ctype](../standard-library/ctype-class.md)|A class template that provides a facet that is used to classify characters, convert from upper- and lowercase and between the native character set and that set used by the locale.|
|[ctype\<char>](../standard-library/ctype-char-class.md)|A class that is an explicit specialization of class template `ctype<CharType>` to type **`char`**, describing an object that can serve as a locale facet to characterize various properties of a character of type **`char`**.|
|[ctype_base](../standard-library/ctype-base-class.md)|A base class for the ctype class that is used to define enumeration types used to classify or test characters either individually or within entire ranges.|
|[ctype_byname](../standard-library/ctype-byname-class.md)|A derived class template that describes an object that can serve as a ctype facet of a given locale, enabling the classification of characters and conversion of characters between case and native and locale specified character sets.|
|[locale](../standard-library/locale-class.md)|A class that describes a locale object that encapsulates culture-specific information as a set of facets that collectively define a specific localized environment.|
|[messages](../standard-library/messages-class.md)|A class template that describes an object that can serve as a locale facet to retrieve localized messages from a catalog of internationalized messages for a given locale.|
|[messages_base](../standard-library/messages-base-class.md)|A base class that describes an **`int`** type for the catalog of messages.|
|[messages_byname](../standard-library/messages-byname-class.md)|A derived class template that describes an object that can serve as a message facet of a given locale, enabling the retrieval of localized messages.|
|[money_base](../standard-library/money-base-class.md)|A base class for the ctype class that is used to define enumeration types used to classify or test characters either individually or within entire ranges.|
|[money_get](../standard-library/money-get-class.md)|A class template that describes an object that can serve as a locale facet to control conversions of sequences of type **CharType** to monetary values.|
|[money_put](../standard-library/money-put-class.md)|A class template that describes an object that can serve as a locale facet to control conversions of monetary values to sequences of type **CharType**.|
|[moneypunct](../standard-library/moneypunct-class.md)|A class template that describes an object that can serve as a locale facet to describe the sequences of type **CharType** used to represent a monetary input field or a monetary output field.|
|[moneypunct_byname](../standard-library/moneypunct-byname-class.md)|A derived class template that describes an object that can serve as a moneypunct facet of a given locale enabling the formatting monetary input or output fields.|
|[num_get](../standard-library/num-get-class.md)|A class template that describes an object that can serve as a locale facet to control conversions of sequences of type **CharType** to numeric values.|
|[num_put](../standard-library/num-put-class.md)|A class template that describes an object that can serve as a locale facet to control conversions of numeric values to sequences of type **CharType**.|
|[numpunct](../standard-library/numpunct-class.md)|A class template that describes an object that can serve as a local facet to describe the sequences of type **CharType** used to represent information about the formatting and punctuation of numeric and Boolean expressions.|
|[numpunct_byname](../standard-library/numpunct-byname-class.md)|A derived class template that describes an object that can serve as a moneypunct facet of a given locale enabling the formatting and punctuation of numeric and Boolean expressions.|
|[time_base](../standard-library/time-base-class.md)|A class that serves as a base class for facets of class template time_get, defining just the enumerated type dateorder and several constants of this type.|
|[time_get](../standard-library/time-get-class.md)|A class template that describes an object that can serve as a locale facet to control conversions of sequences of type **CharType** to time values.|
|[time_get_byname](../standard-library/time-get-byname-class.md)|A derived class template that describes an object that can serve as a locale facet of type time_get\<**CharType**, **InputIterator**>.|
|[time_put](../standard-library/time-put-class.md)|A class template that describes an object that can serve as a locale facet to control conversions of time values to sequences of type **CharType**.|
|[time_put_byname](../standard-library/time-put-byname-class.md)|A derived class template that describes an object that can serve as a locale facet of type `time_put`\<**CharType**, **OutputIterator**>.|
|[wbuffer_convert Class](../standard-library/wbuffer-convert-class.md)|Describes a stream buffer that controls the transmission of elements to and from a byte stream buffer.|
|[wstring_convert Class](../standard-library/wstring-convert-class.md)|A class template that performs conversions between a wide string and a byte string.|

## See also

[Code Pages](../c-runtime-library/code-pages.md)\
[Locale Names, Languages, and Country/Region Strings](../c-runtime-library/locale-names-languages-and-country-region-strings.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
