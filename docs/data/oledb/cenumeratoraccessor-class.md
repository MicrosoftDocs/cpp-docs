---
title: "CEnumeratorAccessor Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CEnumeratorAccessor"
  - "CEnumeratorAccessor"
  - "ATL.CEnumeratorAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CEnumeratorAccessor class"
ms.assetid: 21e8e7ea-3511-4afe-b33f-d520f4ff82bb
caps.latest.revision: 10
author: "mikeblome"
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
# CEnumeratorAccessor Class
Used by [CEnumerator](../../data/oledb/cenumerator-class.md) to access the data from the enumerator rowset.  
  
## Syntax  
  
```  
class CEnumeratorAccessor  
```  
  
## Members  
  
### Data Members  
  
|||  
|-|-|  
|[m_bIsParent](../../data/oledb/cenumeratoraccessor-m-bisparent.md)|A variable indicating whether the enumerator is a parent enumerator, if the row is an enumerator.|  
|[m_nType](../../data/oledb/cenumeratoraccessor-m-ntype.md)|A variable indicating whether the row describes a data source or an enumerator.|  
|[m_szDescription](../../data/oledb/cenumeratoraccessor-m-szdescription.md)|The description of the data source or enumerator.|  
|[m_szName](../../data/oledb/cenumeratoraccessor-m-szname.md)|The name of the data source or enumerator.|  
|[m_szParseName](../../data/oledb/cenumeratoraccessor-m-szparsename.md)|String to pass to [IParseDisplayName](http://msdn.microsoft.com/library/windows/desktop/ms680604) to obtain a moniker for the data source or enumerator.|  
  
## Remarks  
 This rowset consists of the data sources and enumerators visible from the current enumerator.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)