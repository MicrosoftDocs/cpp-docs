---
title: "CEnumerator::Open | Microsoft Docs"
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
  - "ATL.CEnumerator.Open"
  - "CEnumerator::Open"
  - "ATL::CEnumerator::Open"
  - "CEnumerator.Open"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Open method"
ms.assetid: b22821a0-257a-4543-ad0c-2649d4ac092e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CEnumerator::Open
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CEnumerator::Open](https://docs.microsoft.com/cpp/data/oledb/cenumerator-open).  
  
  
Binds the moniker for the enumerator, if one is specified, then retrieves the rowset for the enumerator by calling [ISourcesRowset::GetSourcesRowset](https://msdn.microsoft.com/library/ms711200.aspx).  
  
## Syntax  
  
```  
  
      HRESULT Open(   
   LPMONIKER pMoniker    
) throw( );  
HRESULT Open(   
   const CLSID* pClsid = & CLSID_OLEDB_ENUMERATOR    
) throw( );  
HRESULT Open(   
   const CEnumerator& enumerator    
) throw( );  
```  
  
#### Parameters  
 `pMoniker`  
 [in] A pointer to a moniker for an enumerator.  
  
 *pClsid*  
 [in] A pointer to the **CLSID** of an enumerator.  
  
 `enumerator`  
 [in] A reference to an enumerator.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CEnumerator Class](../../data/oledb/cenumerator-class.md)

