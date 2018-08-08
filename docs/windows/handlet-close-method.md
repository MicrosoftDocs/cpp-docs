---
title: "HandleT::Close Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleT::Close"]
dev_langs: ["C++"]
helpviewer_keywords: ["Close method"]
ms.assetid: 1b9d597c-abcf-4028-a068-0344560009f6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HandleT::Close Method
Closes the current **HandleT** object.  
  
## Syntax  
  
```cpp  
void Close();  
```  
  
## Remarks  
 The handle that underlies the current **HandleT** is closed, and the **HandleT** is set to the invalid state.  
  
 If the handle doesn't close properly, an exception is raised in the calling thread.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../windows/handlet-class.md)