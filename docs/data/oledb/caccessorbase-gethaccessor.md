---
title: "CAccessorBase::GetHAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["GetHAccessor", "CAccessorBase::GetHAccessor", "CAccessorBase.GetHAccessor"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetHAccessor method"]
ms.assetid: 1bb98762-0752-4aae-a0b6-ba96bec03621
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CAccessorBase::GetHAccessor
Retrieves the accessor handle of a specified accessor.  
  
## Syntax  
  
```cpp
      HACCESSOR GetHAccessor(ULONG nAccessor) const;  
```  
  
#### Parameters  
 `nAccessor`  
 [in] The zero-offset number for the accessor.  
  
## Return Value  
 The accessor handle.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CAccessorBase Class](../../data/oledb/caccessorbase-class.md)