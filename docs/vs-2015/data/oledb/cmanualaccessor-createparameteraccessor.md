---
title: "CManualAccessor::CreateParameterAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CManualAccessor::CreateParameterAccessor"
  - "ATL.CManualAccessor.CreateParameterAccessor"
  - "CManualAccessor.CreateParameterAccessor"
  - "CreateParameterAccessor"
  - "CManualAccessor::CreateParameterAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateParameterAccessor method"
ms.assetid: d0a2095b-b37c-4472-accc-45ef365a18c8
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CManualAccessor::CreateParameterAccessor
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CManualAccessor::CreateParameterAccessor](https://docs.microsoft.com/cpp/data/oledb/cmanualaccessor-createparameteraccessor).  
  
  
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
 You must call this function before calling [AddParameterEntry](../../data/oledb/cmanualaccessor-addparameterentry.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CManualAccessor Class](../../data/oledb/cmanualaccessor-class.md)   
 [CManualAccessor::CreateAccessor](../../data/oledb/cmanualaccessor-createaccessor.md)   
 [CManualAccessor::AddParameterEntry](../../data/oledb/cmanualaccessor-addparameterentry.md)

