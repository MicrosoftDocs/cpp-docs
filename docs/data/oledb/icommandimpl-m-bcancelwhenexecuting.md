---
title: "ICommandImpl::m_bCancelWhenExecuting | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ICommandImpl::m_bCancelWhenExecuting", "ICommandImpl.m_bCancelWhenExecuting", "ATL::ICommandImpl::m_bCancelWhenExecuting", "m_bCancelWhenExecuting", "ATL.ICommandImpl.m_bCancelWhenExecuting"]
dev_langs: ["C++"]
helpviewer_keywords: ["m_bCancelWhenExecuting"]
ms.assetid: d7d33e4c-a862-4e6d-a9a1-4400bfe45b88
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# ICommandImpl::m_bCancelWhenExecuting
Indicates whether the command can be canceled when executing.  
  
## Syntax  
  
```cpp
unsigned m_bCancelWhenExecuting:1;  
  
```  
  
## Remarks  
 Defaults to **true** (can be canceled).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandImpl Class](../../data/oledb/icommandimpl-class.md)   
 [ICommandImpl::m_bCancel](../../data/oledb/icommandimpl-m-bcancel.md)