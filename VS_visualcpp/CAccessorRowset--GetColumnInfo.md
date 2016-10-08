---
title: "CAccessorRowset::GetColumnInfo"
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
ms.assetid: 8ade2388-3c58-43cd-8ed6-499ee0531291
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
# CAccessorRowset::GetColumnInfo
Gets column information from the opened rowset.  
  
## Syntax  
  
```  
  
      HRESULT GetColumnInfo(  
   DBORDINAL* pulColumns,  
   DBCOLUMNINFO** ppColumnInfo,  
   LPOLESTR* ppStrings   
) const;  
HRESULT GetColumnInfo(  
   DBORDINAL* pColumns,  
   DBCOLUMNINFO** ppColumnInfo   
);  
```  
  
#### Parameters  
 See [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 The user must free the returned column information and string buffer. Use the second version of this method when you use [CDynamicAccessor](../VS_visualcpp/CDynamicAccessor-Class.md) and need to override the bindings.  
  
 For more information, see [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CAccessorRowset Class](../VS_visualcpp/CAccessorRowset-Class.md)