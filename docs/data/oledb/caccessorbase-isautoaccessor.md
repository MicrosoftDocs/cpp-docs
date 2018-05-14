---
title: "CAccessorBase::IsAutoAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IsAutoAccessor", "CAccessorBase.IsAutoAccessor", "CAccessorBase::IsAutoAccessor"]
dev_langs: ["C++"]
helpviewer_keywords: ["IsAutoAccessor method"]
ms.assetid: c330da15-2947-4050-ad00-8f776adc58fb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CAccessorBase::IsAutoAccessor
Returns true if data is automatically retrieved for the accessor during a Move operation.  
  
## Syntax  
  
```cpp
      bool IsAutoAccessor(ULONG nAccessor) const;  
```  
  
#### Parameters  
 `nAccessor`  
 [in] The zero-offset number for the accessor.  
  
## Return Value  
 Returns **true** if the accessor is an autoaccessor. Otherwise, it returns **false**.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CAccessorBase Class](../../data/oledb/caccessorbase-class.md)