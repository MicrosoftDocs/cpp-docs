---
title: "CDataSource::GetInitializationString | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CDataSource::GetInitializationString"
  - "CDataSource.GetInitializationString"
  - "GetInitializationString"
  - "CDataSource::GetInitializationString"
  - "ATL.CDataSource.GetInitializationString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetInitializationString method"
ms.assetid: 97134723-6e99-4004-a56d-ec57543dbf3b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataSource::GetInitializationString
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDataSource::GetInitializationString](https://docs.microsoft.com/cpp/data/oledb/cdatasource-getinitializationstring).  
  
  
Retrieves the initialization string of a data source that is currently open.  
  
## Syntax  
  
```  
  
      HRESULT GetInitializationString(   
   BSTR* pInitializationString,   
   bool bIncludePassword = false    
) throw( );  
```  
  
#### Parameters  
 *pInitializationString*  
 [out] A pointer to the initialization string.  
  
 *bIncludePassword*  
 [in] **true** if string includes a password; otherwise **false**.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 The resulting initialization string can be used to later reopen this data source connection.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataSource Class](../../data/oledb/cdatasource-class.md)

