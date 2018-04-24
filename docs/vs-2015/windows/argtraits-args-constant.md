---
title: "ArgTraits::args Constant | Microsoft Docs"
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
  - "event/Microsoft::WRL::Details::ArgTraits::args"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "args constant"
ms.assetid: a68100ab-254b-4571-a0bc-946f1633a46b
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ArgTraits::args Constant
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ArgTraits::args Constant](https://docs.microsoft.com/cpp/windows/argtraits-args-constant).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
static const int args = -1; ;  
```  
  
## Remarks  
 Keeps count of the number of parameters on the Invoke method of a delegate interface.  
  
## Remarks  
 When `args` equals -1 indicates there can be no match for the Invoke method signature.  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ArgTraits Structure](../windows/argtraits-structure.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

