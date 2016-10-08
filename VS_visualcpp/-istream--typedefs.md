---
title: "&lt;istream&gt; typedefs"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 55bc1f84-53a7-46ca-a36f-ac6ef75d0374
caps.latest.revision: 9
---
# &lt;istream&gt; typedefs
||||  
|-|-|-|  
|[iostream](#iostream)|[istream](#istream)|[wiostream](#wiostream)|  
|[wistream](#wistream)|  
  
##  <a name="iostream"></a>  iostream  
 A type `basic_iostream` specialized on `char`.  
  
```  
typedef basic _ iostream<char, char _ traits<char> > iostream;  
  
```  
  
### Remarks  
 The type is a synonym for template class [basic_iostream](../VS_visualcpp/basic_iostream-Class.md), specialized for elements of type `char` with default character traits.  
  
##  <a name="istream"></a>  istream  
 A type `basic_istream` specialized on `char`.  
  
```  
typedef basic _ istream<char, char _ traits<char> > istream;  
  
```  
  
### Remarks  
 The type is a synonym for template class [basic_istream](../VS_visualcpp/basic_istream-Class.md), specialized for elements of type `char` with default character traits.  
  
##  <a name="wiostream"></a>  wiostream  
 A type `basic_iostream` specialized on `wchar_t`.  
  
```  
typedef basic _ iostream<wchar _ t, char _ traits<wchar _ t> > wiostream;  
  
```  
  
### Remarks  
 The type is a synonym for template class [basic_iostream](../VS_visualcpp/basic_iostream-Class.md), specialized for elements of type `wchar_t` with default character traits.  
  
##  <a name="wistream"></a>  wistream  
 A type `basic_istream` specialized on `wchar_t`.  
  
```  
typedef basic _ istream<wchar _ t, char _ traits<wchar _ t> > wistream;  
  
```  
  
### Remarks  
 The type is a synonym for template class [basic_istream](../VS_visualcpp/basic_istream-Class.md), specialized for elements of type `wchar_t` with default character traits.  
  
## See Also  
 [<istream\>](../VS_visualcpp/-istream-.md)