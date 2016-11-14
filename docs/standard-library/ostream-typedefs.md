---
title: "&lt;ostream&gt; typedefs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 2ec4dc52-a01f-4654-bd65-dd5288777c48
caps.latest.revision: 11
manager: "ghogen"
---
# &lt;ostream&gt; typedefs
|||  
|-|-|  
|[ostream](#ostream)|[wostream](#wostream)|  
  
##  <a name="ostream"></a>  ostream  
 Creates a type from basic_ostream that is specialized on `char` and `char_traits` specialized on `char`.  
  
```
typedef basic_ostream<char, char_traits<char>> ostream;
```  
  
### Remarks  
 The type is a synonym for template class [basic_ostream](../standard-library/basic-ostream-class.md), specialized for elements of type `char` with default character traits.  
  
##  <a name="wostream"></a>  wostream  
 Creates a type from basic_ostream that is specialized on `wchar_t` and `char_traits` specialized on `wchar_t`.  
  
```
typedef basic_ostream<wchar_t, char_traits<wchar_t>> wostream;
```  
  
### Remarks  
 The type is a synonym for template class [basic_ostream](../standard-library/basic-ostream-class.md), specialized for elements of type `wchar_t` with default character traits.  
  
## See Also  
 [\<ostream>](../standard-library/ostream.md)



