---
title: "ChainInterfaces::CanCastTo Method | Microsoft Docs"
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
  - "implements/Microsoft::WRL::ChainInterfaces::CanCastTo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanCastTo method"
ms.assetid: 8be44875-53ed-494b-91a0-0f8e399685bb
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ChainInterfaces::CanCastTo Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ChainInterfaces::CanCastTo Method](https://docs.microsoft.com/cpp/windows/chaininterfaces-cancastto-method).  
  
  
Indicates whether the specified interface ID can be cast to each of the specializations defined by the non-default template parameters.  
  
## Syntax  
  
```  
__forceinline bool CanCastTo(  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
```  
  
#### Parameters  
 `riid`  
 An interface ID.  
  
 `ppv`  
 A pointer to the last interface ID that was cast successfully.  
  
## Return Value  
 `true` if all the cast operations succeeded; otherwise, `false`.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ChainInterfaces Structure](../windows/chaininterfaces-structure.md)

