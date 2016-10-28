---
title: "CSession Class"
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
  - "CSession"
  - "ATL::CSession"
  - "ATL.CSession"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSession class"
ms.assetid: 83cd798f-b45d-4f11-a23c-29183390450c
caps.latest.revision: 13
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
# CSession Class
Represents a single database access session.  
  
## Syntax  
  
```  
class CSession  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Abort](../data/csession--abort.md)|Cancels (terminates) the transaction.|  
|[Close](../data/csession--close.md)|Closes the session.|  
|[Commit](../data/csession--commit.md)|Commits the transaction.|  
|[GetTransactionInfo](../data/csession--gettransactioninfo.md)|Returns information regarding a transaction.|  
|[Open](../data/csession--open.md)|Opens a new session for the data source object.|  
|[StartTransaction](../data/csession--starttransaction.md)|Begins a new transaction for this session.|  
  
## Remarks  
 One or more sessions can be associated with each provider connection (data source), which is represented by a [CDataSource](../data/cdatasource-class.md) object. To create a new `CSession` for a `CDataSource`, call [CSession::Open](../data/csession--open.md). To begin a database transaction, `CSession` provides the `StartTransaction` method. Once a transaction is started, you can commit to it using the **Commit** method, or cancel it using the **Abort** method.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CatDB](../top/visual-c---samples.md)   
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)