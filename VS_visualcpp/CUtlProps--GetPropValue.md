---
title: "CUtlProps::GetPropValue"
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
ms.assetid: 9a3fbadb-7814-48f7-96a4-b960fc4ecf2e
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
# CUtlProps::GetPropValue
Gets a property from a property set.  
  
## Syntax  
  
```  
  
      OUT_OF_LINE HRESULT GetPropValue(  
   const GUID* pguidPropSet,  
   DBPROPID dwPropId,  
   VARIANT* pvValue   
);  
```  
  
#### Parameters  
 `pguidPropSet`  
 [in] The GUID for the PropSet.  
  
 `dwPropId`  
 [in] The property index.  
  
 `pvValue`  
 [out] A pointer to a variant that contains the new property value.  
  
## Return Value  
 `Failure` on failure and `S_OK` if successful.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CUtlProps Class](../VS_visualcpp/CUtlProps-Class.md)