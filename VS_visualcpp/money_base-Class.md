---
title: "money_base Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 1a303c15-9272-4f26-ae16-dcf43a0fd38a
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
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
# money_base Class
The class describes an enumeration and a structure common to all specializations of template class [moneypunct](../VS_visualcpp/moneypunct-Class.md).  
  
## Syntax  
  
```  
struct money_base : public locale::facet  
{  
    enum  
    {  
        symbol = '$',  
        sign = '+',  
        space = ' ',  
        value = 'v',  
        none = 'x'  
    };  
    typedef int part;  
    struct pattern  
    {  
        char field[_PATTERN_FIELD_SIZE];  
    };  
    money_base(  
        size_t _Refs = 0  
    );  
    ~money_base();  
};  
```  
  
## Remarks  
 The enumeration **part** describes the possible values in elements of the array field in the structure pattern. The values of **part** are:  
  
-   **none** to match zero or more spaces or generate nothing.  
  
-   **sign** to match or generate a positive or negative sign.  
  
-   **space** to match zero or more spaces or generate a space.  
  
-   **symbol** to match or generate a currency symbol.  
  
-   **value** to match or generate a monetary value.  
  
## Requirements  
 **Header:** <locale\>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)