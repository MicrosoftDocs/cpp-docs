---
title: "IRowsetNotifyImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.IRowsetNotifyImpl"
  - "ATL::IRowsetNotifyImpl"
  - "IRowsetNotifyImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetNotifyImpl class"
ms.assetid: fbfd0cb2-38ff-4b42-899a-8de902f834b8
caps.latest.revision: 8
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
# IRowsetNotifyImpl Class
Implements and registers [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx) on the consumer (also known as the "sink") so that it can handle notifications.  
  
## Syntax  
  
```  
class ATL_NO_VTABLE IRowsetNotifyImpl : public IRowsetNotify  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[OnFieldChange](../../data/oledb/irowsetnotifyimpl-onfieldchange.md)|Notifies the consumer of any change to the value of a column.|  
|[OnRowChange](../../data/oledb/irowsetnotifyimpl-onrowchange.md)|Notifies the consumer of the first change to a row or of any change that affects the entire row.|  
|[OnRowsetChange](../../data/oledb/irowsetnotifyimpl-onrowsetchange.md)|Notifies the consumer of any change affecting the entire rowset.|  
  
## Remarks  
 See [Receiving Notifications](../../data/oledb/receiving-notifications.md) about implementing the connection point interface on the consumer.  
  
 `IRowsetNotifyImpl` provides a dummy implementation for `IRowsetNotify`, with empty functions for the `IRowsetNotify` methods [OnFieldChange](https://msdn.microsoft.com/en-us/library/ms715961.aspx), [OnRowChange](https://msdn.microsoft.com/en-us/library/ms722694.aspx), and [OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx). If you inherit from this class when you implement an `IRowsetNotify` interface, you can implement only the methods you need. You also need to provide empty implementations for the other methods yourself.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx)   
 [IRowsetNotifyCP Class](../../data/oledb/irowsetnotifycp-class.md)