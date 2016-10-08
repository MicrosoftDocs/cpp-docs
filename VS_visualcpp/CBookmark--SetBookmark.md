---
title: "CBookmark::SetBookmark"
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
ms.assetid: bcd26831-6045-4e69-96d6-abf8037fc18d
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
# CBookmark::SetBookmark
Copies the bookmark value referenced by `pBuffer` to the `CBookmark` buffer and sets the buffer size to `nSize`.  
  
## Syntax  
  
```  
  
      HRESULT SetBookmark(  
   DBLENGTH nSize,  
   BYTE* pBuffer   
) throw( );  
```  
  
#### Parameters  
 *nSize*  
 [in] The size of the bookmark buffer.  
  
 `pBuffer`  
 [in] A pointer to the byte array containing the bookmark value.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This function is only available in **CBookmark<0>**.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CBookmark Class](../VS_visualcpp/CBookmark-Class.md)