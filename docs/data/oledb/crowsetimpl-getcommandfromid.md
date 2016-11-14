---
title: "CRowsetImpl::GetCommandFromID | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowsetImpl::GetCommandFromID"
  - "GetCommandFromID"
  - "CRowsetImpl.GetCommandFromID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCommandFromID method"
ms.assetid: 9f39cb07-1c40-486f-ba5b-cb4a65fab8a7
caps.latest.revision: 9
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
# CRowsetImpl::GetCommandFromID
Checks to see if either or both parameters contain string values, and if so, copies the string values to the data members [m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) and [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).  
  
## Syntax  
  
```  
  
      HRESULT CRowsetBaseImpl::GetCommandFromID(  
   DBID* pTableID,  
   DBID* pIndexID   
);  
```  
  
#### Parameters  
 `pTableID`  
 [in] A pointer to the **DBID** representing the Table ID.  
  
 `pIndexID`  
 [in] A pointer to the **DBID** representing the Index ID.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method is called through a static upcast by `CRowsetImpl` to populate the data members [m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) and [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md). By default, this method checks to see if either or both parameters contain string values. If they contain string values, this method copies the string values to the data members. By placing a method with this signature in your `CRowsetImpl`-derived class, your method will be called instead of the base implementation.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CRowsetImpl Class](../../data/oledb/crowsetimpl-class.md)   
 [CRowsetImpl::SetCommandText](../../data/oledb/crowsetimpl-setcommandtext.md)