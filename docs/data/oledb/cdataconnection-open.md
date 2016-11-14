---
title: "CDataConnection::Open | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDataConnection.Open"
  - "ATL.CDataConnection.Open"
  - "CDataConnection::Open"
  - "ATL::CDataConnection::Open"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Open method"
ms.assetid: 2c6f0c01-4954-43ba-973e-861ac8e82892
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
# CDataConnection::Open
Opens a connection to a data source using an initialization string.  
  
## Syntax  
  
```  
  
      HRESULT Open(   
   LPCOLESTR szInitString    
) throw( );  
```  
  
#### Parameters  
 *szInitString*  
 [in] The initialization string for the data source.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../../data/oledb/cdataconnection-class.md)