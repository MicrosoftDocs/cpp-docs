---
title: "&lt;codecvt&gt; functions"
ms.custom: ""
ms.date: "10/28/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: f974f410-c99b-4f96-ab29-15716205f4dd
caps.latest.revision: 10
manager: "ghogen"
---
# &lt;codecvt&gt; functions
||||  
|-|-|-|  
|[codecvt_mode](#codecvt_mode)|[codecvt_utf16](#codecvt_utf16)|[codecvt_utf8](#codecvt_utf8)|  
|[codecvt_utf8_utf16](#codecvt_utf8_utf16)|  
  
##  <a name="codecvt_mode"></a>  codecvt_mode  
 Specifies configuration information for [locale](../standard-library/locale-class.md) facets.  
  
```  
enum codecvt_mode {  
    consume_header = 4,  
    generate_header = 2,  
    little_endian = 1  
 };  
```  
  
### Remarks  
 The enumeration defines three constants that supply configuration information to the locale facets declared in [\<codecvt>](../standard-library/codecvt.md). The distinct values are:  
  
- `consume_header`, to consume an initial header sequence when reading a multibyte sequence and determine the endianness of the subsequent multibyte sequence to be read  
  
- `generate_header`, to generate an initial header sequence when writing a multibyte sequence to advertise the endianness of the subsequent multibyte sequence to be written  
  
- `little_endian`, to generate a multibyte sequence in little-endian order, as opposed to the default big-endian order  
  
 These constants can be ORed together in arbitrary combinations.  
  
##  <a name="codecvt_utf8"></a>  codecvt_utf8  
 Represents a [locale](../standard-library/locale-class.md) facet that converts between wide characters encoded as UCS-2 or UCS-4, and a byte stream encoded as UTF-8.  
  
```  
template <class Elem,  
    unsigned long Maxcode = 0x10ffff,  
    codecvt_mode Mode = (codecvt_mode)0>  
class codecvt_utf8 : public std::codecvt<Elem, char, StateType>  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Elem`|The wide-character element type.|  
|`Maxcode`|The maximum number of characters for the locale facet.|  
|`Mode`|Configuration information for the locale facet.|  
  
### Remarks  
 The byte stream can be written to either a binary file or a text file.  
  
##  <a name="codecvt_utf8_utf16"></a>  codecvt_utf8_utf16  
 Represents a [locale](../standard-library/locale-class.md) facet that converts between wide characters encoded as UTF-16 and a byte stream encoded as UTF-8.  
  
```  
template <class Elem,  
    unsigned long Maxcode = 0x10ffff,  
    codecvt_mode Mode = (codecvt_mode)0>  
class codecvt_utf8_utf16 : public _STD codecvt<Elem, char, StateType>  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Elem`|The wide-character element type.|  
|`Maxcode`|The maximum number of characters for the locale facet.|  
|`Mode`|Configuration information for the locale facet.|  
  
### Remarks  
 The byte stream can be written to either a binary file or a text file.  
  
##  <a name="codecvt_utf16"></a>  codecvt_utf16  
 Represents a [locale](../standard-library/locale-class.md) facet that converts between wide characters encoded as UCS-2 or UCS-4 and a byte stream encoded as UTF-16LE or UTF-16BE.  
  
```  
template <class Elem,  
    unsigned long Maxcode = 0x10ffff,  
    codecvt_mode Mode = (codecvt_mode)0>  
class codecvt_utf16 : public std::codecvt<Elem, char, StateType>  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Elem`|The wide-character element type.|  
|`Maxcode`|The maximum number of characters for the locale facet.|  
|`Mode`|Configuration information for the locale facet.|  
  
### Remarks  
 This template class converts between wide characters encoded as UCS-2 or UCS-4 and a byte stream encoded as UTF-16LE, if `Mode & little_endian`, or UTF-16BE otherwise.  
  
 The byte stream should be written to a binary file; it can be corrupted if written to a text file.  
  
## See Also  
 [\<codecvt>](../standard-library/codecvt.md)

