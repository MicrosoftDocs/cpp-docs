---
title: "CDataSource::OpenFromInitializationString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDataSource.OpenFromInitializationString"
  - "OpenFromInitializationString"
  - "CDataSource::OpenFromInitializationString"
  - "ATL::CDataSource::OpenFromInitializationString"
  - "ATL.CDataSource.OpenFromInitializationString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OpenFromInitializationString method"
ms.assetid: 5ef1f1fd-92a9-4e1c-ad80-d3601b094b8c
caps.latest.revision: 10
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
# CDataSource::OpenFromInitializationString
Opens a data source specified by the user-supplied initialization string.  
  
## Syntax  
  
```  
  
      HRESULT OpenFromInitializationString(   
   LPCOLESTR szInitializationString,   
   bool fPromptForInfo = false    
) throw( );  
```  
  
#### Parameters  
 *szInitializationString*  
 [in] The initialization string.  
  
 *fPromptForInfo*  
 [in] If this argument is set to **true**, then `OpenFromInitializationString` will set the **DBPROP_INIT_PROMPT** property to **DBPROMPT_COMPLETEREQUIRED**, which specifies that the user be prompted only if more information is needed. This is useful for situations in which the initialization string specifies a database that requires a password, but the string does not contain the password. The user will be prompted for a password (or any other missing information) when trying to connect to the database.  
  
 The default value is **false**, which specifies that the user never be prompted (sets **DBPROP_INIT_PROMPT** to **DBPROMPT_NOPROMPT**).  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method opens a data source object using the service components in oledb32.dll; this DLL contains the implementation of Service Components features such as Resource Pooling, Automatic Transaction Enlistment, and so on.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataSource Class](../../data/oledb/cdatasource-class.md)