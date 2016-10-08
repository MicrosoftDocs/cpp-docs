---
title: "CRowset::GetData"
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
ms.assetid: 1e0347b5-3e24-4ff8-a790-839616c1522f
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
# CRowset::GetData
Retrieves data from the rowset's copy of the row.  
  
## Syntax  
  
```  
  
      HRESULT GetData( ) throw( );   
HRESULT GetData(   
   int nAccessor    
) throw( );  
```  
  
#### Parameters  
 `nAccessor`  
 [in] The (zero-offset) index number of the accessor to use for accessing the data.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 If you specify an accessor that is not an autoaccessor in [BEGIN_ACCESSOR](../VS_visualcpp/BEGIN_ACCESSOR.md), use this method to explicitly get the data by passing the accessor number.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../VS_visualcpp/CRowset-Class.md)