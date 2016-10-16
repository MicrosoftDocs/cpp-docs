---
title: "&lt;sstream&gt; functions"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: bc9607e8-7c6b-44ef-949b-19e917b450ad
caps.latest.revision: 9
---
# &lt;sstream&gt; functions
||  
|-|  
|[&lt;sstream&gt; swap](#sstream_swap)|  
  
##  <a name="sstream_swap"></a>  &lt;sstream&gt; swap  
 Exchanges the values between two `sstream` objects.  
  
```  
template<class Elem, class Tr, class Alloc>  
    void swap(  
        basic_stringbuf<Elem, Tr, Alloc>& _Left,  
        basic_stringbuf<Elem, Tr, Alloc>& _Right  
    );  
template<class Elem, class Tr, class Alloc>  
    void swap(  
        basic_istringstream<Elem, Tr, Alloc>& _Left,  
        basic_istringstream<Elem, Tr, Alloc>& _Right  
    );  
template<class Elem, class Tr, class Alloc>  
    void swap(  
        basic_ostringstream<Elem, Tr, Alloc>& _Left,  
        basic_ostringstream<Elem, Tr, Alloc>& _Right  
    );  
template<class Elem, class Tr, class Alloc>  
    void swap(  
        basic_stringstream<Elem, Tr, Alloc>& _Left,  
        basic_stringstream<Elem, Tr, Alloc>& _Right  
    );  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Left`|Reference to an `sstream` object.|  
|`_Right`|Reference to an `sstream` object.|  
  
### Remarks  
 The template function executes `_Left``.swap(``_Right``)`.  
  
## See Also  
 [\<sstream>](../stdcpplib/-sstream-.md)