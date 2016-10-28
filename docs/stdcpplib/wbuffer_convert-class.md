---
title: "wbuffer_convert Class"
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
  - "stdext::cvt::wbuffer_convert"
  - "wbuffer_convert"
  - "stdext.cvt.wbuffer_convert"
  - "cvt.wbuffer_convert"
  - "cvt::wbuffer_convert"
  - "wbuffer/stdext::cvt::wbuffer_convert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "wbuffer_convert class"
ms.assetid: 4a56f9bf-4138-4612-b516-525fea401358
caps.latest.revision: 19
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
# wbuffer_convert Class
Describes a stream buffer that controls the transmission of elements to and from a byte stream buffer.  
  
## Syntax  
  
```
template<class Codecvt, class Elem = wchar_t, class Traits = std::char_traits<Elem>>
class wbuffer_convert
 : public std::basic_streambuf<Elem, Traits>
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Codecvt`|The [locale](../stdcpplib/locale-class.md) facet that represents the conversion object.|  
|`Elem`|The wide-character element type.|  
|`Traits`|The traits associated with *Elem*.|  
  
## Remarks  
 This template class describes a stream buffer that controls the transmission of elements of type `_Elem`, whose character traits are described by the class `Traits`, to and from a byte stream buffer of type `std::streambuf`.  
  
 Conversion between a sequence of `Elem` values and multibyte sequences is performed by an object of class `Codecvt<Elem, char, std::mbstate_t>`, which meets the requirements of the standard code-conversion facet `std::codecvt<Elem, char, std::mbstate_t>`.  
  
 An object of this template class stores:  
  
-   A pointer to its underlying byte stream buffer  
  
-   A pointer to the allocated conversion object (which is freed when the [wbuffer_convert](../stdcpplib/wbuffer_convert-class.md) object is destroyed)  
  
-   A conversion state object of type [state_type](#wbuffer_convert__state_type).  
  
### Constructors  
  
|||  
|-|-|  
|[wbuffer_convert](#wbuffer_convert__wbuffer_convert)|Constructs an object of type `wbuffer_convert`.|  
  
### Typedefs  
  
|||  
|-|-|  
|[state_type](#wbuffer_convert__state_type)|A type that represents the conversion state.|  
  
### Member Functions  
  
|||  
|-|-|  
|[rdbuf](#wbuffer_convert__rdbuf)|Returns the byte stream buffer.|  
|[state](#wbuffer_convert__state)|Returns an object representing the state of the conversion.|  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
##  <a name="wbuffer_convert__rdbuf"></a>  wbuffer_convert::rdbuf  
 Returns the byte stream buffer.  
  
```
std::streambuf *rdbuf() const;

std::streambuf *rdbuf(std::streambuf *_Bytebuf);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`*_Bytebuf`|The byte stream buffer to be stored in the object representing the byte stream buffer.|  
  
### Return Value  
 An object representing the underlying byte stream buffer.  
  
### Remarks  
 The second member function stores `_Bytebuf` in the object representing the byte stream buffer.  
  
##  <a name="wbuffer_convert__state"></a>  wbuffer_convert::state  
 Returns an object representing the state of the conversion.  
  
```
state_type state() const;
```  
  
### Return Value  
 An object that represents the state of the conversion.  
  
### Remarks  
  
##  <a name="wbuffer_convert__state_type"></a>  wbuffer_convert::state_type  
 A type that represents the conversion state.  
  
```
typedef typename Codecvt::state_type state_type;
```  
  
### Remarks  
 The type is a synonym for `Codecvt::state_type`.  
  
##  <a name="wbuffer_convert__wbuffer_convert"></a>  wbuffer_convert::wbuffer_convert  
 Constructs an object of type `wbuffer_convert`.  
  
```
wbuffer_convert(std::streambuf* _Bytebuf = 0,
    Codecvt* _Pcvt = new Codecvt,
    state_type _State = state_type());
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Bytebuf`|The byte-oriented stream buffer to store.|  
|`_Pcvt`|The object of type `Codecvt` to perform the conversion.|  
|`_State`|The object of type `cvtstate` representing the conversion state.|  
  
### Remarks  
 This constructor constructs a stream buffer object, initializes the object representing the underlying byte stream buffer to `_Bytebuf`, initializes                        the conversion object                        to `_Pcvt`, and initializes the conversion state object to `_State`.

