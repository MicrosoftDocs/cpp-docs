---
title: "ICommandImpl Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "ICommandImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ICommandImpl class"
ms.assetid: ef285fef-0d66-45e6-a762-b03357098e3b
caps.latest.revision: 9
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
|[CancelExecution](../data/icommandimpl--cancelexecution.md)|Cancels the current command execution.|  
|[Cancel](../data/icommandimpl--cancel.md)|Cancels the current command execution.|  
|[CreateRowset](../data/icommandimpl--createrowset.md)|Creates a rowset object.|  
|[Execute](../data/icommandimpl--execute.md)|Executes the command.|  
|[GetDBSession](../data/icommandimpl--getdbsession.md)|Returns an interface pointer to the session that created the command.|  
|[ICommandImpl](../data/icommandimpl--icommandimpl.md)|The constructor.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_bCancel](../data/icommandimpl--m_bcancel.md)|Indicates whether the command is to be canceled.|  
|[m_bCancelWhenExecuting](../data/icommandimpl--m_bcancelwhenexecuting.md)|Indicates whether the command is to be canceled when executing.|  
|[m_bIsExecuting](../data/icommandimpl--m_bisexecuting.md)|Indicates whether the command is currently executing.|  
  
## Remarks  
 A mandatory interface on the command object.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../data/ole-db-provider-templates--c---.md)   
 [OLE DB Provider Template Architecture](../data/ole-db-provider-template-architecture.md)