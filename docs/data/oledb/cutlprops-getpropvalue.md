---
title: "CUtlProps::GetPropValue | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CUtlProps::GetPropValue", "CUtlProps.GetPropValue", "GetPropValue"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetPropValue method"]
ms.assetid: 9a3fbadb-7814-48f7-96a4-b960fc4ecf2e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CUtlProps::GetPropValue
Gets a property from a property set.  
  
## Syntax  
  
```cpp
      OUT_OF_LINE HRESULT GetPropValue(const GUID* pguidPropSet,  
   DBPROPID dwPropId,  
   VARIANT* pvValue);  
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