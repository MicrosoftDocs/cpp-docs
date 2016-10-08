---
title: "HStringReference::HStringReference Constructor"
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
ms.topic: reference
ms.assetid: 29f5fe11-3928-4f60-9861-f0894247bfcb
caps.latest.revision: 2
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# HStringReference::HStringReference Constructor
Initializes a new instance of the HStringReference class.  
  
## Syntax  
  
```cpp  
  
    template<unsigned int sizeDest>  
    HStringReference(wchar_t const (&str)[ sizeDest]) throw();  
  
    template<unsigned int sizeDest>  
    HStringReference(wchar_t const (&str)[ sizeDest],   
unsigned int len)  
       throw();  
  
    HStringReference(HStringReference&& other) throw();  
  
```  
  
#### Parameters  
 `sizeDest`  
 A template parameter that specifies the size of the destination HStringReference buffer.  
  
 `str`  
 A reference to a wide-character string.  
  
 `len`  
 The maximum length of the `str` parameter buffer to use in this operation. If the `len` parameter isn't specified, the entire `str` parameter is used. If `len` is greater than `sizeDest`, `len` is set to `sizeDest`-1.  
  
 `other`  
 Another HStringReference object.  
  
## Remarks  
 The first constructor initializes a new HStringReference object that the same size as parameter `str`.  
  
 The second constructor initializes a new HStringReference object that the size specifeid by parameter `len`.  
  
 The third constructor initializes a new HStringReference object to the value of the `other`parameter, and then destroys the `other` parameter.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HStringReference Class](../VS_visualcpp/HStringReference-Class.md)