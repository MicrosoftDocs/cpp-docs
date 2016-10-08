---
title: "CRowset::Compare"
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
ms.assetid: a8117b40-7abd-4867-b0ba-eb9e9808204e
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
# CRowset::Compare
Compares two bookmarks using [IRowsetLocate::Compare](https://msdn.microsoft.com/en-us/library/ms709539.aspx).  
  
## Syntax  
  
```  
  
      HRESULT Compare(   
   const CBookmarkBase& bookmark1,   
   const CBookmarkBase& bookmark2,   
   DBCOMPARE* pComparison    
) const throw( );  
```  
  
#### Parameters  
 *Bookmark1*  
 [in] The first bookmark to compare.  
  
 *Bookmark2*  
 [in] The second bookmark to compare.  
  
 `pComparison`  
 [out] A pointer to the result of the comparison.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method requires the optional interface `IRowsetLocate`, which might not be supported on all providers; if this is the case, the method returns **E_NOINTERFACE**. You must also set **DBPROP_IRowsetLocate** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
 For information about using bookmarks in consumers, see [Using Bookmarks](../VS_visualcpp/Using-Bookmarks.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../VS_visualcpp/CRowset-Class.md)