---
title: "BEGIN_ACCESSOR"
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
ms.assetid: 59d0ff3e-7cfd-4ce8-9a1c-d664c0892a52
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
# BEGIN_ACCESSOR
Marks the beginning of an accessor entry.  
  
## Syntax  
  
```  
  
BEGIN_ACCESSOR(  
num  
,   
bAuto  
 )  
  
```  
  
#### Parameters  
 *num*  
 [in] The zero-offset number for the accessor in this accessor map.  
  
 *bAuto*  
 [in] Specifies if this accessor is an auto accessor or a manual accessor. If **true**, the accessor is auto; if **false**, the accessor is manual. An auto accessor means data is fetched for you on move operations.  
  
## Remarks  
 In the case of multiple accessors on a rowset, you need to specify `BEGIN_ACCESSOR_MAP` and use the `BEGIN_ACCESSOR` macro for each individual accessor. The `BEGIN_ACCESSOR` macro is completed with the `END_ACCESSOR` macro. The `BEGIN_ACCESSOR_MAP` macro is completed with the `END_ACCESSOR_MAP` macro.  
  
## Example  
 See [BEGIN_ACCESSOR_MAP](../VS_visualcpp/BEGIN_ACCESSOR_MAP.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../VS_visualcpp/Macros-and-Global-Functions-for-OLE-DB-Consumer-Templates.md)   
 [BEGIN_ACCESSOR_MAP](../VS_visualcpp/BEGIN_ACCESSOR_MAP.md)   
 [END_ACCESSOR](../VS_visualcpp/END_ACCESSOR.md)   
 [END_ACCESSOR_MAP](../VS_visualcpp/END_ACCESSOR_MAP.md)