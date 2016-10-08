---
title: "HString::HString Constructor"
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
ms.assetid: 6da12785-ed01-4720-a004-667db60298f1
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
# HString::HString Constructor
Initializes a new instance of the HString class.  
  
## Syntax  
  
```cpp  
  
HString(HSTRING hstr = nullptr) throw();  
HString(HString&& other) throw();  
```  
  
#### Parameters  
 `hstr`  
 An HSTRING handle.  
  
 `other`  
 An existing HString object.  
  
## Remarks  
 The first constructor initializes a new HString object that is empty.  
  
 The second constructor initializes a new HString object to the value of the existing `other` parameter, and then destroys the `other` parameter.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HString Class](../VS_visualcpp/HString-Class.md)