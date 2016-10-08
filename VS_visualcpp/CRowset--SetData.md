---
title: "CRowset::SetData"
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
ms.assetid: 68125142-8510-4132-9393-e39efd39c784
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
# CRowset::SetData
Sets data values in one or more columns of a row.  
  
## Syntax  
  
```  
  
      HRESULT SetData( ) const throw( );   
HRESULT SetData(  
   int nAccessor   
) const throw( );  
```  
  
#### Parameters  
 `nAccessor`  
 [in] The number of the accessor to use for accessing the data.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 For the `SetData` form that accepts no arguments, all accessors are used for updating. You typically call **SetData** to set data values in columns in a row, then call [Update](../VS_visualcpp/CRowset--Update.md) to transmit those changes.  
  
 This method requires the optional interface `IRowsetChange`, which might not be supported on all providers; if this is the case, the method returns **E_NOINTERFACE**. You must also set **DBPROP_IRowsetChange** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
 The setting operation might fail if one or more columns is not writable. Modify your cursor map to correct this.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../VS_visualcpp/CRowset-Class.md)   
 [CRowset::Update](../VS_visualcpp/CRowset--Update.md)