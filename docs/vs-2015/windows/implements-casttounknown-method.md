---
title: "Implements::CastToUnknown Method | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Implements::CastToUnknown"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CastToUnknown method"
ms.assetid: ca3324f7-4136-406b-8698-7389f4f3d3c7
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Implements::CastToUnknown Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Implements::CastToUnknown Method](https://docs.microsoft.com/cpp/windows/implements-casttounknown-method).  
  
  
Gets a pointer to the underlying IUnknown interface.  
  
## Syntax  
  
```  
__forceinline IUnknown* CastToUnknown();  
```  
  
## Return Value  
 This operation always succeeds and returns the IUnknown pointer.  
  
## Remarks  
 Internal helper function.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Implements Structure](../windows/implements-structure.md)

