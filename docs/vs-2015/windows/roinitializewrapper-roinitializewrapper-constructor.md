---
title: "RoInitializeWrapper::RoInitializeWrapper Constructor | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::RoInitializeWrapper"
dev_langs: 
  - "C++"
ms.assetid: c6f7fb07-14af-4574-9135-cea164607f30
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# RoInitializeWrapper::RoInitializeWrapper Constructor
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [RoInitializeWrapper::RoInitializeWrapper Constructor](https://docs.microsoft.com/cpp/windows/roinitializewrapper-roinitializewrapper-constructor).  
  
  
Initializes a new instance of the RoInitializeWrapper class.  
  
## Syntax  
  
```cpp  
RoInitializeWrapper(   RO_INIT_TYPE flags)  
```  
  
#### Parameters  
 `flags`  
 One of the RO_INIT_TYPE enumerations, which specifies the support provided by the [!INCLUDE[wrt](../includes/wrt-md.md)].  
  
## Remarks  
 The RoInitializeWrapper class invokes Windows::Foundation::Initialize(*flags*).  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../windows/handlet-class.md)

