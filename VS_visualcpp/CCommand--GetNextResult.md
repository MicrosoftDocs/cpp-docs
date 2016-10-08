---
title: "CCommand::GetNextResult"
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
ms.assetid: 63df9b55-9490-45c4-934a-879c5c2725d8
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
# CCommand::GetNextResult
Fetches the next result set if one is available.  
  
## Syntax  
  
```  
  
      HRESULT GetNextResult(  
   DBROWCOUNT* pulRowsAffected,  
   bool bBind = true   
) throw( );  
```  
  
#### Parameters  
 *pulRowsAffected*  
 [in/out] A pointer to memory where the count of rows affected by a command is returned.  
  
 `bBind`  
 [in] Specifies whether to bind the command automatically after being executed. The default is **true**, which causes the command to be bound automatically. Setting `bBind` to **false** prevents the automatic binding of the command so that you can bind manually. (Manual binding is of particular interest to OLAP users.)  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 If a result set has been previously fetched, this function releases the previous result set and unbinds the columns. If `bBind` is **true**, it binds the new columns.  
  
 You should call this function only if you have specified multiple results by setting the `CCommand` template parameter *TMultiple*=`CMultipleResults`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../VS_visualcpp/CCommand-Class.md)