---
title: "CEnumerator::Find | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CEnumerator::Find", "ATL::CEnumerator::Find", "ATL.CEnumerator.Find", "CEnumerator.Find"]
dev_langs: ["C++"]
helpviewer_keywords: ["Find method"]
ms.assetid: 69a153af-d6c3-40fd-9018-27c7d2f344c6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CEnumerator::Find
Looks for a specified name among available providers.  
  
## Syntax  
  
```cpp
      bool Find(TCHAR* szSearchName) throw();  
```  
  
#### Parameters  
 *szSearchName*  
 [in] The name to search for.  
  
## Return Value  
 **true** if the name was found. Otherwise, **false**.  
  
## Remarks  
 This name maps to the **SOURCES_NAME** member of the [ISourcesRowset](https://msdn.microsoft.com/en-us/library/ms715969.aspx) interface.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CEnumerator Class](../../data/oledb/cenumerator-class.md)