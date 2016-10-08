---
title: "InspectableClass Macro"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: ff390b26-58cc-424f-87ac-1fe3cc692b59
caps.latest.revision: 4
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
# InspectableClass Macro
Sets the runtime class name and trust level.  
  
## Syntax  
  
```cpp  
  
InspectableClass(  
   runtimeClassName,   
   trustLevel)  
```  
  
#### Parameters  
 `runtimeClassName`  
 The full textual name of the runtime class.  
  
 `trustLevel`  
 One of the [TrustLevel](http://msdn.microsoft.com/library/br224625.aspx) enumerated values.  
  
## Remarks  
 The `InspectableClass` macro can be used only with Windows Runtime types.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [RuntimeClass Class](../VS_visualcpp/RuntimeClass-Class.md)