---
title: "IRowsetImpl::m_bCanFetchBack | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.IRowsetImpl.m_bCanFetchBack"
  - "ATL::IRowsetImpl::m_bCanFetchBack"
  - "IRowsetImpl.m_bCanFetchBack"
  - "IRowsetImpl::m_bCanFetchBack"
  - "m_bCanFetchBack"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_bCanFetchBack"
ms.assetid: cfa007b0-7ba5-48a3-9d05-9f1916305fb7
caps.latest.revision: 8
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
 [IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)   
 [IRowsetImpl::m_bCanScrollBack](../../data/oledb/irowsetimpl-m-bcanscrollback.md)