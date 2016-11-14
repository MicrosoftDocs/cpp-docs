---
title: "CCommand::GetParameterInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetParameterInfo"
  - "CCommand.GetParameterInfo"
  - "CCommand::GetParameterInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetParameterInfo method"
ms.assetid: 9cd9277f-0161-4bd8-ad24-58e5e90b92a7
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
# CCommand::GetParameterInfo
Gets a list of the command's parameters, their names, and their types.  
  
## Syntax  
  
```  
  
      HRESULT CCommandBase::GetParameterInfo(  
   DB_UPARAMS* pParams,  
   DBPARAMINFO** ppParamInfo,  
   OLECHAR** ppNamesBuffer   
) throw ( );  
```  
  
#### Parameters  
 See [ICommandWithParameters::GetParameterInfo](https://msdn.microsoft.com/en-us/library/ms714917.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../../data/oledb/ccommand-class.md)