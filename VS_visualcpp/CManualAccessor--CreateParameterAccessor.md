---
title: "CManualAccessor::CreateParameterAccessor"
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
ms.assetid: d0a2095b-b37c-4472-accc-45ef365a18c8
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
# CManualAccessor::CreateParameterAccessor
Allocates memory for the parameter bind structures and initializes the parameter data members.  
  
## Syntax  
  
```  
  
      HRESULT CreateParameterAccessor(   
   int nBindEntries,   
   void* pBuffer,   
   DBLENGTH nBufferSize    
) throw( );  
```  
  
#### Parameters  
 `nBindEntries`  
 [in] Number of columns.  
  
 `pBuffer`  
 [in] A pointer to the buffer where the input columns are stored.  
  
 `nBufferSize`  
 [in] The size of the buffer in bytes.  
  
## Return Value  
 One of the standard `HRESULT` values.  
  
## Remarks  
 You must call this function before calling [AddParameterEntry](../VS_visualcpp/CManualAccessor--AddParameterEntry.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CManualAccessor Class](../VS_visualcpp/CManualAccessor-Class.md)   
 [CManualAccessor::CreateAccessor](../VS_visualcpp/CManualAccessor--CreateAccessor.md)   
 [CManualAccessor::AddParameterEntry](../VS_visualcpp/CManualAccessor--AddParameterEntry.md)