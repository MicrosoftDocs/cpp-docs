---
title: "CUtlProps::GetPropValue | Microsoft Docs"
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
  - "CUtlProps::GetPropValue"
  - "CUtlProps.GetPropValue"
  - "GetPropValue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetPropValue method"
ms.assetid: 9a3fbadb-7814-48f7-96a4-b960fc4ecf2e
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CUtlProps::GetPropValue
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CUtlProps::GetPropValue](https://docs.microsoft.com/cpp/data/oledb/cutlprops-getpropvalue).  
  
  
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
 [CUtlProps Class](../../data/oledb/cutlprops-class.md)

