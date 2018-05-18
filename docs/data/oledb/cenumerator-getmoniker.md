---
title: "CEnumerator::GetMoniker | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["GetMoniker", "CEnumerator.GetMoniker", "CEnumerator::GetMoniker", "ATL.CEnumerator.GetMoniker", "ATL::CEnumerator::GetMoniker"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetMoniker method"]
ms.assetid: 69a5cf2d-4a94-41dc-812d-bc1661d516d2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CEnumerator::GetMoniker
Parses the display name to extract the component of the string that can be converted into a moniker.  
  
## Syntax  
  
```cpp
HRESULT GetMoniker(LPMONIKER* ppMoniker) const throw();  


HRESULT GetMoniker(LPMONIKER* ppMoniker,   
   LPCTSTR lpszDisplayName) const throw();  
```  
  
#### Parameters  
 *ppMoniker*  
 [out] The moniker parsed from the display name ([CEnumeratorAccessor::m_szParseName](../../data/oledb/cenumeratoraccessor-m-szparsename.md)) of the current row.  
  
 *lpszDisplayName*  
 [in] The display name to parse.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CEnumerator Class](../../data/oledb/cenumerator-class.md)