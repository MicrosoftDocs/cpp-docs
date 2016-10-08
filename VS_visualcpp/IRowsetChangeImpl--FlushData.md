---
title: "IRowsetChangeImpl::FlushData"
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
ms.assetid: fd4bc73b-bc25-4aab-90d5-0bed92670c88
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
# IRowsetChangeImpl::FlushData
Overidden by provider to commit data to its store.  
  
## Syntax  
  
```  
  
      HRESULT FlushData(  
   HROW hRowToFlush,  
   HACCESSOR hAccessorToFlush   
);  
```  
  
#### Parameters  
 *hRowToFlush*  
 [in] Handle to the rows for the data. The type of this row is determined from the *RowClass* template argument of the `IRowsetImpl` class (`CSimpleRow` by default).  
  
 *hAccessorToFlush*  
 [in] Handle to the accessor, which contains binding information and type information in its **PROVIDER_MAP** (see [IAccessorImpl](../VS_visualcpp/IAccessorImpl-Class.md)).  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetChangeImpl Class](../VS_visualcpp/IRowsetChangeImpl-Class.md)