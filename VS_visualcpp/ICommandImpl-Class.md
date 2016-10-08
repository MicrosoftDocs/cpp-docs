---
title: "ICommandImpl Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ef285fef-0d66-45e6-a762-b03357098e3b
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
|[CancelExecution](../VS_visualcpp/ICommandImpl--CancelExecution.md)|Cancels the current command execution.|  
|[Cancel](../VS_visualcpp/ICommandImpl--Cancel.md)|Cancels the current command execution.|  
|[CreateRowset](../VS_visualcpp/ICommandImpl--CreateRowset.md)|Creates a rowset object.|  
|[Execute](../VS_visualcpp/ICommandImpl--Execute.md)|Executes the command.|  
|[GetDBSession](../VS_visualcpp/ICommandImpl--GetDBSession.md)|Returns an interface pointer to the session that created the command.|  
|[ICommandImpl](../VS_visualcpp/ICommandImpl--ICommandImpl.md)|The constructor.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_bCancel](../VS_visualcpp/ICommandImpl--m_bCancel.md)|Indicates whether the command is to be canceled.|  
|[m_bCancelWhenExecuting](../VS_visualcpp/ICommandImpl--m_bCancelWhenExecuting.md)|Indicates whether the command is to be canceled when executing.|  
|[m_bIsExecuting](../VS_visualcpp/ICommandImpl--m_bIsExecuting.md)|Indicates whether the command is currently executing.|  
  
## Remarks  
 A mandatory interface on the command object.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)