---
title: "FtmBase::CreateGlobalInterfaceTable Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["ftm/Microsoft::WRL::FtmBase::CreateGlobalInterfaceTable"]
dev_langs: ["C++"]
helpviewer_keywords: ["CreateGlobalInterfaceTable method"]
ms.assetid: bb82a0c5-22b9-4844-9204-7922033d8b07
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# FtmBase::CreateGlobalInterfaceTable Method
Creates a global interface table (GIT).  
  
## Syntax  
  
```cpp  
static HRESULT CreateGlobalInterfaceTable(  
   __out IGlobalInterfaceTable **git  
);  
```  
  
### Parameters  
 *git*  
 When this operation completes, a pointer to a global interface table.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Remarks  
 For more information, see the `IGlobalInterfaceTable` topic in the **COM Interfaces** subtopic of the **COM Reference** topic in the MSDN Library.  
  
## Requirements  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [FtmBase Class](../windows/ftmbase-class.md)