---
title: "HandleT::Close Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleT::Close"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Close method"
ms.assetid: 1b9d597c-abcf-4028-a068-0344560009f6
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HandleT::Close Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HandleT::Close Method](https://docs.microsoft.com/cpp/windows/handlet-close-method).  
  
  
Closes the current HandleT object.  
  
## Syntax  
  
```  
void Close();  
```  
  
## Remarks  
 The handle that underlies the current HandleT is closed, and the HandleT is set to the invalid state.  
  
 If the handle doesn't close properly, an exception is raised in the calling thread.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../windows/handlet-class.md)

