---
title: "&lt;streambuf&gt; typedefs"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: 2678e18f-f0f0-4995-bc53-f1bc7dfc4ec6
caps.latest.revision: 10
---
# &lt;streambuf&gt; typedefs
|||  
|-|-|  
|[streambuf](#streambuf)|[wstreambuf](#wstreambuf)|  
  
##  <a name="streambuf"></a>  streambuf  
 A specialization of `basic_streambuf` that uses `char` as the template parameters.  
  
```
typedef basic_streambuf<char, char_traits<char>> streambuf;
```  
  
### Remarks  
 The type is a synonym for the template class [basic_streambuf](../stdcpplib/basic_streambuf-class.md), specialized for elements of type `char` with default character traits.  
  
##  <a name="wstreambuf"></a>  wstreambuf  
 A specialization of `basic_streambuf` that uses `wchar_t` as the template parameters.  
  
```
typedef basic_streambuf<wchar_t, char_traits<wchar_t>> wstreambuf;
```  
  
### Remarks  
 The type is a synonym for the template class [basic_streambuf](../stdcpplib/basic_streambuf-class.md), specialized for elements of type `wchar_t` with default character traits.  
  
## See Also  
 [\<streambuf>](../stdcpplib/-streambuf-.md)

