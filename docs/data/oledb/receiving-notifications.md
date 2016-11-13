---
title: "Receiving Notifications | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "notifications [C++], OLE DB consumers"
  - "receiving notifications in OLE DB"
  - "events [C++], notifications in OLE DB"
  - "notifications [C++], events"
  - "OLE DB consumers, notifications"
  - "rowsets, event notifications"
  - "OLE DB providers, notifications"
ms.assetid: 305a1103-0c87-40c8-94bc-7fbbdd52ae32
caps.latest.revision: 7
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
# Receiving Notifications
OLE DB provides interfaces for receiving notifications when events occur. These are described in [OLE DB Object Notifications](https://msdn.microsoft.com/en-us/library/ms725406.aspx) in the *OLE DB Programmer's Reference*. Setup of these events uses the standard COM connection-point mechanism. For example, an ATL object that wants to retrieve events through `IRowsetNotify` implements the `IRowsetNotify` interface by adding `IRowsetNotify` to the class-derived list and exposing it through a **COM_INTERFACE_ENTRY** macro.  
  
 `IRowsetNotify` has three methods, which can be called at various times. If you want to respond to only one of these methods, you can use the [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) class, which returns **E_NOTIMPL** for the methods you are not interested in.  
  
 When you create the rowset, you must tell the provider that you want the returned rowset object to support **IConnectionPointContainer**, which is needed to set up the notification.  
  
 The following code shows how to open the rowset from an ATL object and use the `AtlAdvise` function to set up the notification sink. `AtlAdvise` returns a cookie that is used when you call `AtlUnadvise`.  
  
```  
CDBPropSet propset(DBPROPSET_ROWSET);  
propset.AddProperty(DBPROP_IConnectionPointContainer, true);  
  
product.Open(session, _T("Products"), &propset);  
  
AtlAdvise(product.m_spRowset, GetUnknown(), IID_IRowsetNotify, &m_dwCookie);  
```  
  
## See Also  
 [Using Accessors](../../data/oledb/using-accessors.md)