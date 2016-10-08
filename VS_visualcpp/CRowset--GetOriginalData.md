---
title: "CRowset::GetOriginalData"
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
ms.assetid: 5b69d30e-34f4-41a4-a82d-cd175be88d53
caps.latest.revision: 9
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
# CRowset::GetOriginalData
Calls **IRowsetUpdate::GetOriginalData** to retrieve the data most recently fetched from or transmitted to the data source.  
  
## Syntax  
  
```  
  
HRESULT GetOriginalData( ) throw( );  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method retrieves the data most recently fetched from or transmitted to the data source; it does not retrieve values based on pending changes.  
  
 This method requires the optional interface `IRowsetUpdate`, which might not be supported on all providers; if this is the case, the method returns **E_NOINTERFACE**. You must also set **DBPROP_IRowsetUpdate** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../VS_visualcpp/CRowset-Class.md)   
 [IRowsetUpdate::GetOriginalData](https://msdn.microsoft.com/en-us/library/ms709947.aspx)