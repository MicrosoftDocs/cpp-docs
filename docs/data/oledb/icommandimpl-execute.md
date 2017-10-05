---
title: "ICommandImpl::Execute | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["ICommandImpl::Execute", "ICommandImpl.Execute"]
dev_langs: ["C++"]
helpviewer_keywords: ["Execute method"]
ms.assetid: 033e0d4e-256b-4eed-9215-70e0bebb768c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ICommandImpl::Execute
Executes the command.  
  
## Syntax  
  
```  
  
      HRESULT Execute(  
   IUnknown* pUnkOuter,  
   REFIID riid,  
   DBPARAMS* pParams,  
   DBROWCOUNT* pcRowsAffected,  
   IUnknown** ppRowset   
);  
```  
  
#### Parameters  
 See [ICommand::Execute](https://msdn.microsoft.com/en-us/library/ms718095.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 The outgoing interface requested will be an interface acquired from the rowset object that this function creates.  
  
 **Execute** calls [CreateRowset](../../data/oledb/icommandimpl-createrowset.md). Override the default implementation to create more than one rowset or to provide your own conditions for creating different rowsets.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ICommandImpl Class](../../data/oledb/icommandimpl-class.md)   
 [ICommandImpl::CancelExecution](../../data/oledb/icommandimpl-cancelexecution.md)