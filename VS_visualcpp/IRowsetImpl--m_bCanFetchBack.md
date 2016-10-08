---
title: "IRowsetImpl::m_bCanFetchBack"
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
ms.assetid: cfa007b0-7ba5-48a3-9d05-9f1916305fb7
caps.latest.revision: 8
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
# IRowsetImpl::m_bCanFetchBack
Indicates whether a provider supports backward fetching.  
  
## Syntax  
  
```  
  
unsigned m_bCanFetchBack:1;  
  
```  
  
## Remarks  
 Linked to the **DBPROP_CANFETCHBACKWARDS** property in the **DBPROPSET_ROWSET** group. The provider must support **DBPROP_CANFETCHBACKWARDS** for **m_bCanFetchBackwards** to be true.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../VS_visualcpp/IRowsetImpl-Class.md)   
 [IRowsetImpl::m_bCanScrollBack](../VS_visualcpp/IRowsetImpl--m_bCanScrollBack.md)