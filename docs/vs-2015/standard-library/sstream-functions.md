---
title: "&lt;sstream&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: bc9607e8-7c6b-44ef-949b-19e917b450ad
caps.latest.revision: 14
manager: "ghogen"
---
# &lt;sstream&gt; functions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [&lt;sstream&gt; functions](https://docs.microsoft.com/cpp/standard-library/sstream-functions).  
  
 
##  <a name="sstream_swap"></a> swap  
 Exchanges the values between two `sstream` objects.  
  
```  
template <class Elem, class Tr, class Alloc>  
void swap(
    basic_stringbuf<Elem, Tr, Alloc>& left,  
    basic_stringbuf<Elem, Tr, Alloc>& right);

template <class Elem, class Tr, class Alloc>  
void swap(
    basic_istringstream<Elem, Tr, Alloc>& left,  
    basic_istringstream<Elem, Tr, Alloc>& right);

template <class Elem, class Tr, class Alloc>  
void swap(
    basic_ostringstream<Elem, Tr, Alloc>& left,  
    basic_ostringstream<Elem, Tr, Alloc>& right);

template <class Elem, class Tr, class Alloc>  
void swap(
    basic_stringstream<Elem, Tr, Alloc>& left,  
    basic_stringstream<Elem, Tr, Alloc>& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|` left`|Reference to an `sstream` object.|  
|` right`|Reference to an `sstream` object.|  
  
### Remarks  
 The template function executes ` left``.swap(`` right``)`.  
  
## See Also  
 [\<sstream>](../standard-library/sstream.md)





