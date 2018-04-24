---
title: "&lt;streambuf&gt; typedefs | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 2678e18f-f0f0-4995-bc53-f1bc7dfc4ec6
caps.latest.revision: 15
manager: "ghogen"
---
# &lt;streambuf&gt; typedefs
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [&lt;streambuf&gt; typedefs](https://docs.microsoft.com/cpp/standard-library/streambuf-typedefs).  
  
||||
|-|-|-|
|[streambuf](#streambuf)|[wstreambuf](#wstreambuf)|  
  
##  <a name="streambuf"></a>  streambuf  
 A specialization of `basic_streambuf` that uses `char` as the template parameters.  
  
```
typedef basic_streambuf<char, char_traits<char>> streambuf;
```  
  
### Remarks  
 The type is a synonym for the template class [basic_streambuf](../standard-library/basic-streambuf-class.md), specialized for elements of type `char` with default character traits.  
  
##  <a name="wstreambuf"></a>  wstreambuf  
 A specialization of `basic_streambuf` that uses `wchar_t` as the template parameters.  
  
```
typedef basic_streambuf<wchar_t, char_traits<wchar_t>> wstreambuf;
```  
  
### Remarks  
 The type is a synonym for the template class [basic_streambuf](../standard-library/basic-streambuf-class.md), specialized for elements of type `wchar_t` with default character traits.  
  
## See Also  
 [\<streambuf>](../standard-library/streambuf.md)







