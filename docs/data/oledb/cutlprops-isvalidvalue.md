---
title: "CUtlProps::IsValidValue | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CUtlProps::IsValidValue", "CUtlProps.IsValidValue", "IsValidValue"]
dev_langs: ["C++"]
helpviewer_keywords: ["IsValidValue method"]
ms.assetid: 1164556e-8d98-429c-a396-fc9a699e0e97
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CUtlProps::IsValidValue
Used to validate a value before setting a property.  
  
## Syntax  
  
```cpp
      virtual HRESULT CUtlPropsBase::IsValidValue(ULONG /* iCurSet */,  
   DBPROP* pDBProp);  
```  
  
#### Parameters  
 `iCurSet`  
 The index into the property-set array; zero if there is only one property set.  
  
 `pDBProp`  
 The property ID and new value in a [DBPROP](https://msdn.microsoft.com/en-us/library/ms717970.aspx) structure.  
  
## Return Value  
 A standard `HRESULT`. The default return value is `S_OK`.  
  
## Remarks  
 If you have any validation routines you want to run on a value that you are about to use to set a property, you should override this function. For example, you could validate **DBPROP_AUTH_PASSWORD** against a password table to determine a valid value.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CUtlProps Class](../../data/oledb/cutlprops-class.md)