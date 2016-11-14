---
title: "CUtlProps::OnInterfaceRequested | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CUtlProps"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OnInterfaceRequested method"
ms.assetid: a5e1a879-cff3-4e01-b902-2249a152984f
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
# CUtlProps::OnInterfaceRequested
Handles requests for an optional interface when a consumer calls a method on one of the object creation interfaces.  
  
## Syntax  
  
```  
  
      virtual HRESULT CUtlPropsBase::OnInterfaceRequested(  
   REFIID riid  
);  
```  
  
#### Parameters  
 `riid`  
 [in] The IID for the requested interface. For more details, see the description of the `riid` parameter of `ICommand::Execute` in the *OLE DB Programmer's Reference* (in the *MDAC SDK*).  
  
## Remarks  
 **OnInterfaceRequested** handles consumer requests for an optional interface when a consumer calls a method on one of the object creation interfaces (such as **IDBCreateSession**, **IDBCreateCommand**, `IOpenRowset`, or `ICommand`). It sets the corresponding OLE DB property for the requested interface. For example, if the consumer requests **IID_IRowsetLocate**, **OnInterfaceRequested** sets the **DBPROP_IRowsetLocate** interface. Doing so maintains the correct state during rowset creation.  
  
 This method is called when the consumer calls **IOpenRowset::OpenRowset** or `ICommand::Execute`.  
  
 If a consumer opens an object and requests an optional interface, the provider should set the property associated with that interface to `VARIANT_TRUE`. To allow property-specific processing, **OnInterfaceRequested** is called before the provider's **Execute** method is called. By default, **OnInterfaceRequested** handles the following interfaces:  
  
-   `IRowsetLocate`  
  
-   `IRowsetChange`  
  
-   `IRowsetUpdate`  
  
-   **IConnectionPointContainer**  
  
-   `IRowsetScroll`  
  
 If you wish to handle other interfaces, override this function in your data source, session, command, or rowset class to process functions. Your override should go through the normal set/get properties interfaces to ensure that setting properties also sets any chained properties (see [OnPropertyChanged](../../data/oledb/cutlprops-onpropertychanged.md)).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CUtlProps Class](../../data/oledb/cutlprops-class.md)