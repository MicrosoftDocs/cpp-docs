---
title: "CDataSource Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CDataSource"
  - "ATL::CDataSource"
  - "CDataSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDataSource class"
ms.assetid: 99bf862c-9d5c-4117-9501-aa0e2672085c
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
# CDataSource Class
Corresponds to an OLE DB data source object, which represents a connection through a provider to a data source.  
  
## Syntax  
  
```  
class CDataSource  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Close](../../data/oledb/cdatasource-close.md)|Closes the connection.|  
|[GetInitializationString](../../data/oledb/cdatasource-getinitializationstring.md)|Retrieves the initialization string of the data source that is currently open.|  
|[GetProperties](../../data/oledb/cdatasource-getproperties.md)|Gets the values of properties currently set for the connected data source.|  
|[GetProperty](../../data/oledb/cdatasource-getproperty.md)|Gets the value of a single property currently set for the connected data source.|  
|[Open](../../data/oledb/cdatasource-open.md)|Creates a connection to a provider (data source) using either a **CLSID**, **ProgID**, or a `CEnumerator` moniker provided by the caller.|  
|[OpenFromFileName](../../data/oledb/cdatasource-openfromfilename.md)|Opens a data source from a file specified by the user-supplied file name.|  
|[OpenFromInitializationString](../../data/oledb/cdatasource-openfrominitializationstring.md)|Opens the data source specified by an initialization string.|  
|[OpenWithPromptFileName](../../data/oledb/cdatasource-openwithpromptfilename.md)|Allows the user to select a previously created data link file to open the corresponding data source.|  
|[OpenWithServiceComponents](../../data/oledb/cdatasource-openwithservicecomponents.md)|Opens a data source object using the Data Link dialog box.|  
  
## Remarks  
 One or more database sessions can be created for a single connection. These sessions are represented by `CSession`. You must call [CDataSource::Open](../../data/oledb/cdatasource-open.md) to open the connection before creating a session with `CSession::Open`.  
  
 For an example of how to use `CDataSource`, see the [CatDB](../../visual-cpp-samples.md) sample.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)