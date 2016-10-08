---
title: "file_status Class"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 9781840e-ad22-44dd-ad79-0fabaa94bac4
caps.latest.revision: 14
manager: ghogen
translation.priority.mt: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# file_status Class
Wraps a [file_type](../VS_visualcpp/file_type-Enumeration.md).  
  
## Syntax  
  
```  
class file_status;  
```  
  
## file_status::file_status  
  
```  
explicit file_status(file_type ftype = file_type::none,    perms mask = perms::unknown) noexcept;file_status(const file_status&) noexcept = default;file_status(file_status&&) noexcept = default;  
```  
  
## file_status::operator=  
  
```  
file_status& operator=(const file_status&) noexcept = default;  
file_status& operator=(file_status&&) nexcept = default;  
```  
  
 The defaulted member assignment operators behave as expected.  
  
## type  
  
```  
file_type type() const noexcept  
void type(file_type _Ftype) noexcept  
```  
  
 Gets or sets the file_type.  
  
## permissions  
  
```  
perms permissions() const noexcept  
void permissions(perms_Prms) noexcept   
```  
  
 Gets or sets the file permissions.  
  
 Use the setter to make a file readonly or remove the readonly attribute.  
  
## Requirements  
 **Header:** filesystem  
  
 **Namespace:** std::tr2::sys  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [path Class (C++ Standard Template Library)](../VS_visualcpp/path-Class--C---Standard-Template-Library-.md)   
 [<filesystem\>](../VS_visualcpp/-filesystem-.md)