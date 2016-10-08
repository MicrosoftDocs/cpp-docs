---
title: "CDataSource::GetInitializationString"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 97134723-6e99-4004-a56d-ec57543dbf3b
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CDataSource::GetInitializationString
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
 [CDataSource Class](../VS_visualcpp/CDataSource-Class.md)