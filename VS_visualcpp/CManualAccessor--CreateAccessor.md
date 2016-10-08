---
title: "CManualAccessor::CreateAccessor"
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
ms.assetid: 594c8d6d-b49a-4818-a9a5-81c8115d4e42
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
# CManualAccessor::CreateAccessor
Allocates memory for the column bind structures and initializes the column data members.  
  
## Syntax  
  
```  
  
      HRESULT CreateAccessor(   
   int nBindEntries,   
   void* pBuffer,   
   DBLENGTH nBufferSize    
) throw( );  
```  
  
#### Parameters  
 `nBindEntries`  
 [in] Number of columns. This number should match the number of calls to the [CManualAccessor::AddBindEntry](../VS_visualcpp/CManualAccessor--AddBindEntry.md) function.  
  
 `pBuffer`  
 [in] A pointer to the buffer where the output columns are stored.  
  
 `nBufferSize`  
 [in] The size of the buffer in bytes.  
  
## Return Value  
 One of the standard `HRESULT` values.  
  
## Remarks  
 Call this function before you call the `CManualAccessor::AddBindEntry` function.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CManualAccessor Class](../VS_visualcpp/CManualAccessor-Class.md)   
 [DBViewer sample](../VS_visualcpp/Visual-C---Samples.md)