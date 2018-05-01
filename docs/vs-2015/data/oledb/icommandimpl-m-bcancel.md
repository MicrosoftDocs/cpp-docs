---
title: "ICommandImpl::m_bCancel | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ICommandImpl::m_bCancel"
  - "ICommandImpl.m_bCancel"
  - "m_bCancel"
  - "ATL::ICommandImpl::m_bCancel"
  - "ATL.ICommandImpl.m_bCancel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_bCancel"
ms.assetid: f3b6fb60-4de4-4d81-a5d2-4052c41be0de
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ICommandImpl::m_bCancel
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ICommandImpl::m_bCancel](https://docs.microsoft.com/cpp/data/oledb/icommandimpl-m-bcancel).  
  
  
Indicates whether the command is canceled.  
  
## Syntax  
  
```  
  
unsigned m_bCancel:1;  
  
```  
  
## Remarks  
 You can retrieve this variable in the **Execute** method of your command class and cancel as appropriate.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandImpl Class](../../data/oledb/icommandimpl-class.md)   
 [ICommandImpl::m_bCancelWhenExecuting](../../data/oledb/icommandimpl-m-bcancelwhenexecuting.md)

