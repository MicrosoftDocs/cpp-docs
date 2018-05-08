---
title: "CEnumeratorAccessor::m_szParseName | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CEnumeratorAccessor::m_szParseName", "ATL::CEnumeratorAccessor::m_szParseName", "m_szParseName", "CEnumeratorAccessor.m_szParseName", "ATL.CEnumeratorAccessor.m_szParseName"]
dev_langs: ["C++"]
helpviewer_keywords: ["m_szParseName"]
ms.assetid: 32e826b6-0890-4db4-aa92-fc1ea3f528b2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CEnumeratorAccessor::m_szParseName
String to pass to [IParseDisplayName](http://msdn.microsoft.com/library/windows/desktop/ms680604) to obtain a moniker for the data source or enumerator.  
  
## Syntax  
  
```cpp
WCHAR m_szParseName[129];  
  
```  
  
## Remarks  
 See [ISourcesRowset::GetSourcesRowset](https://msdn.microsoft.com/en-us/library/ms711200.aspx) in the *OLE DB Programmer's Reference* for more information.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CEnumeratorAccessor Class](../../data/oledb/cenumeratoraccessor-class.md)