---
title: "&lt;locale&gt;"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "<locale>"
  - "std.<locale>"
  - "locale/std::<locale>"
  - "std::<locale>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "locale header"
ms.assetid: ca56f9d2-7128-44da-8df1-f4c78c17fbf2
caps.latest.revision: 18
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# &lt;locale&gt;
Defines template classes and functions that C++ programs can use to encapsulate and manipulate different cultural conventions regarding the representation and formatting of numeric, monetary, and calendric data, including internationalization support for character classification and string collation.  
  
## Syntax  
  
```  
#include <locale>  
  
```  
  
### Functions  
  
|||  
|-|-|  
|[has_facet](../stdcpplib/-locale--functions.md#has_facet)|Tests if a particular facet is stored in a specified locale.|  
|[isalnum](../stdcpplib/-locale--functions.md#isalnum)|Tests whether an element in a locale is an alphabetic or a numeric character.|  
|[isalpha](../stdcpplib/-locale--functions.md#isalpha)|Tests whether an element in a locale is alphabetic character.|  
|[iscntrl](../stdcpplib/-locale--functions.md#iscntrl)|Tests whether an element in a locale is a control character.|  
|[isdigit](../stdcpplib/-locale--functions.md#isdigit)|Tests whether an element in a locale is a numeric character.|  
|[isgraph](../stdcpplib/-locale--functions.md#isgraph)|Tests whether an element in a locale is an alphanumeric or punctuation character.|  
|[islower](../stdcpplib/-locale--functions.md#islower)|Tests whether an element in a locale is lower case.|  
|[isprint](../stdcpplib/-locale--functions.md#isprint)|Tests whether an element in a locale is a printable character.|  
|[ispunct](../stdcpplib/-locale--functions.md#ispunct)|Tests whether an element in a locale is a punctuation character.|  
|[isspace](../stdcpplib/-locale--functions.md#isspace)|Tests whether an element in a locale is a whitespace character.|  
|[isupper](../stdcpplib/-locale--functions.md#isupper)|Tests whether an element in a locale is upper case.|  
|[isxdigit](../stdcpplib/-locale--functions.md#isxdigit)|Tests whether an element in a locale is a character used to represent a hexadecimal number.|  
|[tolower](../stdcpplib/-locale--functions.md#tolower)|Converts a character to lower case.|  
|[toupper](../stdcpplib/-locale--functions.md#toupper)|Converts a character to upper case.|  
|[use_facet](../stdcpplib/-locale--functions.md#use_facet)|Returns a reference to a facet of a specified type stored in a locale.|  
  
### Classes  
  
|||  
|-|-|  
|[codecvt](../stdcpplib/codecvt-class.md)|A template class that provides a facet used to convert between internal and external character encodings.|  
|[codecvt_base](../stdcpplib/codecvt_base-class.md)|A base class for the codecvt class that is used to define an enumeration type referred to as **result**, used as the return type for the facet member functions to indicate the result of a conversion.|  
|[codecvt_byname](../stdcpplib/codecvt_byname-class.md)|A derived template class that describes an object that can serve as a collate facet of a given locale, enabling the retrieval of information specific to a cultural area concerning conversions.|  
|[collate](../stdcpplib/collate-class.md)|A collate template class that provides a facet that handles string sorting conventions.|  
|[collate_byname](../stdcpplib/collate_byname-class.md)|A derived template class that describes an object that can serve as a collate facet of a given locale, enabling the retrieval of information specific to a cultural area concerning string sorting conventions.|  
|[ctype](../stdcpplib/ctype-class.md)|A template class that provides a facet that is used to classify characters, convert from upper- and lowercase and between the native character set and that set used by the locale.|  
|[ctype\<char>](../stdcpplib/ctype-char--class.md)|A class that is an explicit specialization of template class **ctype\<CharType**> to type `char`, describing an object that can serve as a locale facet to characterize various properties of a character of type `char`.|  
|[ctype_base](../stdcpplib/ctype_base-class.md)|A base class for the ctype class that is used to define enumeration types used to classify or test characters either individually or within entire ranges.|  
|[ctype_byname](../stdcpplib/ctype_byname-class.md)|A derived template class that describes an object that can serve as a ctype facet of a given locale, enabling the classification of characters and conversion of characters between case and native and locale specified character sets.|  
|[locale](../stdcpplib/locale-class.md)|A class that describes a locale object that encapsulates culture-specific information as a set of facets that collectively define a specific localized environment.|  
|[messages](../stdcpplib/messages-class.md)|A template class that describes an object that can serve as a locale facet to retrieve localized messages from a catalog of internationalized messages for a given locale.|  
|[messages_base](../stdcpplib/messages_base-class.md)|A base class that describes an `int` type for the catalog of messages.|  
|[messages_byname](../stdcpplib/messages_byname-class.md)|A derived template class that describes an object that can serve as a message facet of a given locale, enabling the retrieval of localized messages.|  
|[money_base](../stdcpplib/money_base-class.md)|A base class for the ctype class that is used to define enumeration types used to classify or test characters either individually or within entire ranges.|  
|[money_get](../stdcpplib/money_get-class.md)|A template class that describes an object that can serve as a locale facet to control conversions of sequences of type **CharType** to monetary values.|  
|[money_put](../stdcpplib/money_put-class.md)|A template class that describes an object that can serve as a locale facet to control conversions of monetary values to sequences of type **CharType**.|  
|[moneypunct](../stdcpplib/moneypunct-class.md)|A template class that describes an object that can serve as a locale facet to describe the sequences of type **CharType** used to represent a monetary input field or a monetary output field.|  
|[moneypunct_byname](../stdcpplib/moneypunct_byname-class.md)|A derived template class that describes an object that can serve as a moneypunct facet of a given locale enabling the formatting monetary input or output fields.|  
|[num_get](../stdcpplib/num_get-class.md)|A template class that describes an object that can serve as a locale facet to control conversions of sequences of type **CharType** to numeric values.|  
|[num_put](../stdcpplib/num_put-class.md)|A template class that describes an object that can serve as a locale facet to control conversions of numeric values to sequences of type **CharType**.|  
|[numpunct](../stdcpplib/numpunct-class.md)|A template class that describes an object that can serve as a local facet to describe the sequences of type **CharType** used to represent information about the formatting and punctuation of numeric and Boolean expressions.|  
|[numpunct_byname](../stdcpplib/numpunct_byname-class.md)|A derived template class that describes an object that can serve as a moneypunct facet of a given locale enabling the formatting and punctuation of numeric and Boolean expressions.|  
|[time_base](../stdcpplib/time_base-class.md)|A class that serves as a base class for facets of template class time_get, defining just the enumerated type dateorder and several constants of this type.|  
|[time_get](../stdcpplib/time_get-class.md)|A template class that describes an object that can serve as a locale facet to control conversions of sequences of type **CharType** to time values.|  
|[time_get_byname](../stdcpplib/time_get_byname-class.md)|A derived template class that describes an object that can serve as a locale facet of type time_get\<**CharType**, **InputIterator**>.|  
|[time_put](../stdcpplib/time_put-class.md)|A template class that describes an object that can serve as a locale facet to control conversions of time values to sequences of type **CharType**.|  
|[time_put_byname](../stdcpplib/time_put_byname-class.md)|A derived template class that describes an object that can serve as a locale facet of type `time_put`\<**CharType**, **OutputIterator**>.|  
|[wbuffer_convert Class](../stdcpplib/wbuffer_convert-class.md)|Describes a stream buffer that controls the transmission of elements to and from a byte stream buffer.|  
|[wstring_convert Class](../stdcpplib/wstring_convert-class.md)|A template class that performs conversions between a wide string and a byte string.|  
  
## See Also  
 [Code Pages](../crt/code-pages.md)   
 [Locale Names, Languages, and Country/Region Strings](../crt/locale-names--languages--and-country-region-strings.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)

