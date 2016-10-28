---
title: "CEnumerator::Open"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 8
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CEnumerator::Open
Binds the moniker for the enumerator, if one is specified, then retrieves the rowset for the enumerator by calling [ISourcesRowset::GetSourcesRowset](https://msdn.microsoft.com/en-us/library/ms711200.aspx).  
  
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
 [CEnumerator Class](../data/cenumerator-class.md)