---
title: "ICommandImpl::m_bCancel | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ICommandImpl::m_bCancel", "ICommandImpl.m_bCancel", "m_bCancel", "ATL::ICommandImpl::m_bCancel", "ATL.ICommandImpl.m_bCancel"]
dev_langs: ["C++"]
helpviewer_keywords: ["m_bCancel"]
ms.assetid: f3b6fb60-4de4-4d81-a5d2-4052c41be0de
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# ICommandImpl::m_bCancel
Indicates whether the command is canceled.  
  
## Syntax  
  
```cpp
unsigned m_bCancel:1;  
  
```  
  
## Remarks  
 You can retrieve this variable in the **Execute** method of your command class and cancel as appropriate.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandImpl Class](../../data/oledb/icommandimpl-class.md)   
 [ICommandImpl::m_bCancelWhenExecuting](../../data/oledb/icommandimpl-m-bcancelwhenexecuting.md)