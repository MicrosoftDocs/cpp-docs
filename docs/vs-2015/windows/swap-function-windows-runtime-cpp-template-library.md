---
title: "Swap Function (Windows Runtime C++ Template Library) | Microsoft Docs"
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
  - "internal/Microsoft::WRL::Details::Swap"
dev_langs: 
  - "C++"
ms.assetid: ed134a08-ceb7-4279-aa02-a183c3a426ea
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Swap Function (Windows Runtime C++ Template Library)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Swap Function (Windows Runtime C++ Template Library)](https://docs.microsoft.com/cpp/windows/swap-function-windows-runtime-cpp-template-library).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
WRL_NOTHROW inline void Swap(  
   _Inout_ T& left,  
   _Inout_ T& right  
);  
```  
  
#### Parameters  
 `left`  
 The first argument.  
  
 `right`  
 The second argument.  
  
## Return Value  
  
## Remarks  
 Exchanges the values of the two specified arguments.  
  
## Requirements  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

