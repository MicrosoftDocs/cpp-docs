---
title: "IRowsetUpdateImpl::GetOriginalData"
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
ms.assetid: 7477b3b7-6b1b-49a7-8167-b34323f0fdcc
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
# IRowsetUpdateImpl::GetOriginalData
Gets the data most recently transmitted to or obtained from the data source, ignoring pending changes.  
  
## Syntax  
  
```  
  
      STDMETHOD ( GetOriginalData )(  
   HROW hRow,  
   HACCESSOR hAccessor,  
   void* pData   
);  
```  
  
#### Parameters  
 See [IRowsetUpdate::GetOriginalData](https://msdn.microsoft.com/en-us/library/ms709947.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetUpdateImpl Class](../VS_visualcpp/IRowsetUpdateImpl-Class.md)