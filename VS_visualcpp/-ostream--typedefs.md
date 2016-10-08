---
title: "&lt;ostream&gt; typedefs"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 2ec4dc52-a01f-4654-bd65-dd5288777c48
caps.latest.revision: 9
---
# &lt;ostream&gt; typedefs
|||  
|-|-|  
|[ostream](#ostream)|[wostream](#wostream)|  
  
##  <a name="ostream"></a>  ostream  
 Creates a type from basic_ostream that is specialized on `char` and `char_traits` specialized on `char`.  
  
```  
typedef basic _ ostream<char, char _ traits<char> > ostream;  
  
```  
  
### Remarks  
 The type is a synonym for template class [basic_ostream](../VS_visualcpp/basic_ostream-Class.md), specialized for elements of type `char` with default character traits.  
  
##  <a name="wostream"></a>  wostream  
 Creates a type from basic_ostream that is specialized on `wchar_t` and `char_traits` specialized on `wchar_t`.  
  
```  
typedef basic _ ostream<wchar _ t, char _ traits<wchar _ t> > wostream;  
  
```  
  
### Remarks  
 The type is a synonym for template class [basic_ostream](../VS_visualcpp/basic_ostream-Class.md), specialized for elements of type `wchar_t` with default character traits.  
  
## See Also  
 [<ostream\>](../VS_visualcpp/-ostream-.md)