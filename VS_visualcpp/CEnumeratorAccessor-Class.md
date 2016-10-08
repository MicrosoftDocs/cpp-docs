---
title: "CEnumeratorAccessor Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 21e8e7ea-3511-4afe-b33f-d520f4ff82bb
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CEnumeratorAccessor Class
Used by [CEnumerator](../VS_visualcpp/CEnumerator-Class.md) to access the data from the enumerator rowset.  
  
## Syntax  
  
```  
class CEnumeratorAccessor  
```  
  
## Members  
  
### Data Members  
  
|||  
|-|-|  
|[m_bIsParent](../VS_visualcpp/CEnumeratorAccessor--m_bIsParent.md)|A variable indicating whether the enumerator is a parent enumerator, if the row is an enumerator.|  
|[m_nType](../VS_visualcpp/CEnumeratorAccessor--m_nType.md)|A variable indicating whether the row describes a data source or an enumerator.|  
|[m_szDescription](../VS_visualcpp/CEnumeratorAccessor--m_szDescription.md)|The description of the data source or enumerator.|  
|[m_szName](../VS_visualcpp/CEnumeratorAccessor--m_szName.md)|The name of the data source or enumerator.|  
|[m_szParseName](../VS_visualcpp/CEnumeratorAccessor--m_szParseName.md)|String to pass to [IParseDisplayName](http://msdn.microsoft.com/library/windows/desktop/ms680604) to obtain a moniker for the data source or enumerator.|  
  
## Remarks  
 This rowset consists of the data sources and enumerators visible from the current enumerator.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)