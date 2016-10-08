---
title: "CSession Class"
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
ms.assetid: 83cd798f-b45d-4f11-a23c-29183390450c
caps.latest.revision: 13
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
|[Abort](../VS_visualcpp/CSession--Abort.md)|Cancels (terminates) the transaction.|  
|[Close](../VS_visualcpp/CSession--Close.md)|Closes the session.|  
|[Commit](../VS_visualcpp/CSession--Commit.md)|Commits the transaction.|  
|[GetTransactionInfo](../VS_visualcpp/CSession--GetTransactionInfo.md)|Returns information regarding a transaction.|  
|[Open](../VS_visualcpp/CSession--Open.md)|Opens a new session for the data source object.|  
|[StartTransaction](../VS_visualcpp/CSession--StartTransaction.md)|Begins a new transaction for this session.|  
  
## Remarks  
 One or more sessions can be associated with each provider connection (data source), which is represented by a [CDataSource](../VS_visualcpp/CDataSource-Class.md) object. To create a new `CSession` for a `CDataSource`, call [CSession::Open](../VS_visualcpp/CSession--Open.md). To begin a database transaction, `CSession` provides the `StartTransaction` method. Once a transaction is started, you can commit to it using the **Commit** method, or cancel it using the **Abort** method.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CatDB](../VS_visualcpp/Visual-C---Samples.md)   
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)