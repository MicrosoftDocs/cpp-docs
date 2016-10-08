---
title: "CRowsetImpl::ValidateCommandID"
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
ms.assetid: cdde6088-41bc-4b8f-a32b-f36f7d9b5ec0
caps.latest.revision: 9
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
# CRowsetImpl::ValidateCommandID
Checks to see if either or both **DBID**s contain string values, and if so, copies them to its data members [m_strCommandText](../VS_visualcpp/CRowsetImpl--m_strCommandText.md) and [m_strIndexText](../VS_visualcpp/CRowsetImpl--m_strIndexText.md).  
  
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
 This method is called through a static upcast by `CRowsetImpl` to populate its data members [m_strCommandText](../VS_visualcpp/CRowsetImpl--m_strCommandText.md) and [m_strIndexText](../VS_visualcpp/CRowsetImpl--m_strIndexText.md). By default, this method checks to see if either or both **DBID**s contain string values, and if so, copies them to its data members. By placing a method with this signature in your `CRowsetImpl`-derived class, your method will be called instead of the base implementation.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CRowsetImpl Class](../VS_visualcpp/CRowsetImpl-Class.md)   
 [CRowsetImpl::SetCommandText](../VS_visualcpp/CRowsetImpl--SetCommandText.md)