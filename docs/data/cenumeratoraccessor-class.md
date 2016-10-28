---
title: "CEnumeratorAccessor Class"
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
  - "ATL::CEnumeratorAccessor"
  - "CEnumeratorAccessor"
  - "ATL.CEnumeratorAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CEnumeratorAccessor class"
ms.assetid: 21e8e7ea-3511-4afe-b33f-d520f4ff82bb
caps.latest.revision: 10
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
Used by [CEnumerator](../data/cenumerator-class.md) to access the data from the enumerator rowset.  
  
## Syntax  
  
```  
class CEnumeratorAccessor  
```  
  
## Members  
  
### Data Members  
  
|||  
|-|-|  
|[m_bIsParent](../data/cenumeratoraccessor--m_bisparent.md)|A variable indicating whether the enumerator is a parent enumerator, if the row is an enumerator.|  
|[m_nType](../data/cenumeratoraccessor--m_ntype.md)|A variable indicating whether the row describes a data source or an enumerator.|  
|[m_szDescription](../data/cenumeratoraccessor--m_szdescription.md)|The description of the data source or enumerator.|  
|[m_szName](../data/cenumeratoraccessor--m_szname.md)|The name of the data source or enumerator.|  
|[m_szParseName](../data/cenumeratoraccessor--m_szparsename.md)|String to pass to [IParseDisplayName](http://msdn.microsoft.com/library/windows/desktop/ms680604) to obtain a moniker for the data source or enumerator.|  
  
## Remarks  
 This rowset consists of the data sources and enumerators visible from the current enumerator.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)