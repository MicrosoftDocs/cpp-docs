---
title: "RuntimeClassFlags Structure"
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
ms.assetid: 7098d605-bd14-4d51-82f4-3def8296a938
caps.latest.revision: 4
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
# RuntimeClassFlags Structure
Contains the type for an instance of a [RuntimeClass](../VS_visualcpp/RuntimeClass-Class.md).  
  
## Syntax  
  
```  
template <  
   unsigned int flags  
>  
struct RuntimeClassFlags;  
```  
  
#### Parameters  
 `flags`  
 A [RuntimeClassType Enumeration](../VS_visualcpp/RuntimeClassType-Enumeration.md) value.  
  
## Members  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[RuntimeClassFlags::value Constant](../VS_visualcpp/RuntimeClassFlags--value-Constant.md)|Contains a [RuntimeClassType Enumeration](../VS_visualcpp/RuntimeClassType-Enumeration.md) value.|  
  
## Inheritance Hierarchy  
 `RuntimeClassFlags`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../VS_visualcpp/Microsoft--WRL-Namespace.md)