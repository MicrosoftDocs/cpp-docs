---
title: "CRowsetImpl::ValidateCommandID"
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
  - "CRowsetImpl.ValidateCommandID"
  - "CRowsetImpl::ValidateCommandID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ValidateCommandID method"
ms.assetid: cdde6088-41bc-4b8f-a32b-f36f7d9b5ec0
caps.latest.revision: 9
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
# CRowsetImpl::ValidateCommandID
Checks to see if either or both **DBID**s contain string values, and if so, copies them to its data members [m_strCommandText](../data/crowsetimpl--m_strcommandtext.md) and [m_strIndexText](../data/crowsetimpl--m_strindextext.md).  
  
## Syntax  
  
```  
  
      HRESULT CRowsetBaseImpl::ValidateCommandID(  
   DBID* pTableID,  
   DBID* pIndexID   
);  
```  
  
#### Parameters  
 `pTableID`  
 [in] A pointer to the **DBID** representing the table ID.  
  
 `pIndexID`  
 [in] A pointer to the **DBID** representing the index ID.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method is called through a static upcast by `CRowsetImpl` to populate its data members [m_strCommandText](../data/crowsetimpl--m_strcommandtext.md) and [m_strIndexText](../data/crowsetimpl--m_strindextext.md). By default, this method checks to see if either or both **DBID**s contain string values, and if so, copies them to its data members. By placing a method with this signature in your `CRowsetImpl`-derived class, your method will be called instead of the base implementation.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CRowsetImpl Class](../data/crowsetimpl-class.md)   
 [CRowsetImpl::SetCommandText](../data/crowsetimpl--setcommandtext.md)