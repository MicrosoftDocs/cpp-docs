---
title: "CRowset::GetDataHere"
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
ms.assetid: 2fe2a987-1c4c-4299-876e-0591caf63af4
caps.latest.revision: 10
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
# CRowset::GetDataHere
Retrieves data from the current row and places it into the specified buffer.  
  
## Syntax  
  
```  
  
      HRESULT GetDataHere(   
   int nAccessor,   
   void* pBuffer    
) throw( );  
```  
  
#### Parameters  
 `nAccessor`  
 [in] The index number of the accessor to use for accessing the data.  
  
 `pBuffer`  
 [out] A buffer into which to place the data for the current record.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 For an example of how to use this function, see the [MultiRead sample](../VS_visualcpp/Visual-C---Samples.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../VS_visualcpp/CRowset-Class.md)   
 [CRowset::GetData](../VS_visualcpp/CRowset--GetData.md)