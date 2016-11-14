---
title: "ISessionPropertiesImpl::GetProperties | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ISessionPropertiesImpl::GetProperties"
  - "ISessionPropertiesImpl.GetProperties"
  - "GetProperties"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetProperties method"
ms.assetid: 48726c2a-9599-4fc5-9940-a932faef91ab
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
# ISessionPropertiesImpl::GetProperties
Returns the list of properties in the **DBPROPSET_SESSION** property group that are currently set on the session.  
  
## Syntax  
  
```  
  
      STDMETHOD(GetProperties)(   
   ULONG cPropertyIDSets,   
   const DBPROPIDSET rgPropertyIDSets[],   
   ULONG * pcPropertySets,   
   DBPROPSET ** prgPropertySets    
);  
```  
  
#### Parameters  
 See [ISessionProperties::GetProperties](https://msdn.microsoft.com/en-us/library/ms723643.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [ISessionPropertiesImpl Class](../../data/oledb/isessionpropertiesimpl-class.md)   
 [ISessionPropertiesImpl::SetProperties](../../data/oledb/isessionpropertiesimpl-setproperties.md)