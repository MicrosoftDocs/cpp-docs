---
title: "ICommandImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ICommandImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ICommandImpl class"
ms.assetid: ef285fef-0d66-45e6-a762-b03357098e3b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# ICommandImpl Class
Provides implementation for the [ICommand](https://msdn.microsoft.com/en-us/library/ms709737.aspx) interface.  
  
## Syntax  
  
```  
template <class T, class CommandBase = ICommand>   
class ATL_NO_VTABLE ICommandImpl : public CommandBase  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `ICommandImpl`.  
  
 `CommandBase`  
 A command interface. The default is `ICommand`.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CancelExecution](../../data/oledb/icommandimpl-cancelexecution.md)|Cancels the current command execution.|  
|[Cancel](../../data/oledb/icommandimpl-cancel.md)|Cancels the current command execution.|  
|[CreateRowset](../../data/oledb/icommandimpl-createrowset.md)|Creates a rowset object.|  
|[Execute](../../data/oledb/icommandimpl-execute.md)|Executes the command.|  
|[GetDBSession](../../data/oledb/icommandimpl-getdbsession.md)|Returns an interface pointer to the session that created the command.|  
|[ICommandImpl](../../data/oledb/icommandimpl-icommandimpl.md)|The constructor.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_bCancel](../../data/oledb/icommandimpl-m-bcancel.md)|Indicates whether the command is to be canceled.|  
|[m_bCancelWhenExecuting](../../data/oledb/icommandimpl-m-bcancelwhenexecuting.md)|Indicates whether the command is to be canceled when executing.|  
|[m_bIsExecuting](../../data/oledb/icommandimpl-m-bisexecuting.md)|Indicates whether the command is currently executing.|  
  
## Remarks  
 A mandatory interface on the command object.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)