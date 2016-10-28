---
title: "CCommand::SetParameterInfo"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "SetParameterInfo"
  - "CCommand.SetParameterInfo"
  - "CCommand::SetParameterInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetParameterInfo method"
ms.assetid: a70e92f4-1e73-41d7-a5b7-c6ebb45a6477
caps.latest.revision: 8
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
# CCommand::SetParameterInfo
Specifies the native type of each command parameter.  
  
## Syntax  
  
```  
  
      HRESULT CCommandBase::SetParameterInfo(  
   DB_UPARAMS ulParams,  
   const DBORDINAL* pOrdinals,  
   const DBPARAMBINDINFO* pParamInfo   
) throw( );  
```  
  
#### Parameters  
 See [ICommandWithParameters::SetParameterInfo](https://msdn.microsoft.com/en-us/library/ms725393.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../data/ccommand-class.md)