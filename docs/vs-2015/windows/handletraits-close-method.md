---
title: "HANDLETraits::Close Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::Close"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Close method"
ms.assetid: 3c631a7c-ccce-472a-b1da-aab8fa815c13
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HANDLETraits::Close Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HANDLETraits::Close Method](https://docs.microsoft.com/cpp/windows/handletraits-close-method).  
  
  
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
 [HANDLETraits Structure](../windows/handletraits-structure.md)

