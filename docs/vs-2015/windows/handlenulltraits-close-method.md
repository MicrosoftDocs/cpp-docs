---
title: "HANDLENullTraits::Close Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::Close"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Close method"
ms.assetid: 6fb2fa0d-df20-45dc-856f-f78497f8bdf9
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HANDLENullTraits::Close Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HANDLENullTraits::Close Method](https://docs.microsoft.com/cpp/windows/handlenulltraits-close-method).  
  
  
Closes the specified handle.  
  
## Syntax  
  
```  
inline static bool Close(  
   _In_ Type h  
);  
```  
  
#### Parameters  
 `h`  
 The handle to close.  
  
## Return Value  
 **true** if handle `h` closed successfully; otherwise, **false**.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [HANDLENullTraits Structure](../windows/handlenulltraits-structure.md)

