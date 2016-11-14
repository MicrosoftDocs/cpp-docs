---
title: "RemoveReference Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "internal/Microsoft::WRL::Details::RemoveReference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RemoveReference structure"
ms.assetid: 43ff91bb-815a-440e-b9fb-7dcbb7c863af
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
# RemoveReference Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template<  
   class T  
>  
struct RemoveReference;  
template<  
   class T  
>  
struct RemoveReference<T&>;  
template<  
   class T  
>  
struct RemoveReference<T&&>;  
```  
  
#### Parameters  
 `T`  
 A class.  
  
## Remarks  
 Strips the reference or rvalue-reference trait from the specified class template parameter.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`Type`|Synonym for the class template parameter.|  
  
## Inheritance Hierarchy  
 `RemoveReference`  
  
## Requirements  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)