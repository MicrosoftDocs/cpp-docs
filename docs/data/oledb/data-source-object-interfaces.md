---
title: "Data Source Object Interfaces | Microsoft Docs"
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
  - "data source objects [C++], interfaces"
  - "data source objects [C++]"
  - "interfaces [C++], OLE DB"
  - "interfaces [C++], list of"
  - "OLE DB provider templates [C++], object interfaces"
  - "OLE DB [C++], interfaces"
ms.assetid: 929e100c-c08c-4b64-8437-d8d1357226f6
caps.latest.revision: 12
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
# Data Source Object Interfaces
The following table shows the mandatory and optional interfaces defined by OLE DB for a data source object.  
  
|Interface|Required?|Implemented by OLE DB templates?|  
|---------------|---------------|--------------------------------------|  
|`IDBCreateSession`|Mandatory|Yes|  
|`IDBInitialize`|Mandatory|Yes|  
|`IDBProperties`|Mandatory|Yes|  
|[IPersist](http://msdn.microsoft.com/library/windows/desktop/ms688695)|Mandatory|Yes|  
|[IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857)|Optional|No|  
|`IDBDataSourceAdmin`|Optional|No|  
|`IDBInfo`|Optional|No|  
|[IPersistFile](http://msdn.microsoft.com/library/windows/desktop/ms687223)|Optional|No|  
|`ISupportErrorInfo`|Optional|No|  
  
 The data source object implements the `IDBProperties`, `IDBInitialize`, and `IDBCreateSession` interfaces through inheritance. You can choose to support additional functionality by inheriting or not inheriting from one of these implementation classes. If you want to support the `IDBDataSourceAdmin` interface, you must inherit from the `IDBDataSourceAdminImpl` class.  
  
## See Also  
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)