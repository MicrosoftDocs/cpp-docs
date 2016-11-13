---
title: "InterfaceListHelper Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::InterfaceListHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InterfaceListHelper structure"
ms.assetid: 4297e419-c96b-45df-8a00-7568062125ba
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# InterfaceListHelper Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename T0,  
   typename T1 = Nil,  
   typename T2 = Nil,  
   typename T3 = Nil,  
   typename T4 = Nil,  
   typename T5 = Nil,  
   typename T6 = Nil,  
   typename T7 = Nil,  
   typename T8 = Nil,  
   typename T9 = Nil  
>  
struct InterfaceListHelper;  
  
template <  
   typename T0  
>  
struct InterfaceListHelper<T0, Nil, Nil, Nil, Nil, Nil, Nil, Nil, Nil>;  
```  
  
#### Parameters  
 `T0`  
 Template parameter 0, which is required.  
  
 `T1`  
 Template parameter 1, which by default is unspecified.  
  
 `T2`  
 Template parameter 2, which by default is unspecified.The third template parameter.  
  
 `T3`  
 Template parameter 3, which by default is unspecified.  
  
 `T4`  
 Template parameter 4, which by default is unspecified.  
  
 `T5`  
 Template parameter 5, which by default is unspecified.  
  
 `T6`  
 Template parameter 6, which by default is unspecified.  
  
 `T7`  
 Template parameter 7, which by default is unspecified.  
  
 `T8`  
 Template parameter 8, which by default is unspecified.  
  
 `T9`  
 Template parameter 9, which by default is unspecified.  
  
## Remarks  
 Builds an InterfaceList type by recursively applying the specified template parameter arguments.  
  
 The InterfaceListHelper template uses template parameter `T0` to define the first data member in an InterfaceList structure, and then recursively applies the InterfaceListHelper template to any remaining template parameters. InterfaceListHelper stops when there are no remaining template parameters.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`TypeT`|A synonym for the InterfaceList type.|  
  
## Inheritance Hierarchy  
 `InterfaceListHelper`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)