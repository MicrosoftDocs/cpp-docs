---
title: "CDefaultCharTraits Class"
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
ms.topic: reference
ms.assetid: f94a3934-597f-401d-8513-ed6924ae069a
caps.latest.revision: 13
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
# CDefaultCharTraits Class
This class provides two static functions for converting characters between uppercase and lowercase.  
  
## Syntax  
  
```  
template <  
    typename T>  
    class CDefaultCharTraits  
```  
  
#### Parameters  
 `T`  
 The type of data to be stored in the collection.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDefaultCharTraits::CharToLower](../Topic/CDefaultCharTraits::CharToLower.md)|(Static) Call this function to convert a character to uppercase.|  
|[CDefaultCharTraits::CharToUpper](../Topic/CDefaultCharTraits::CharToUpper.md)|(Static) Call this function to convert a character to lowercase.|  
  
## Remarks  
 This class provides functions that are utilized by the class [CStringElementTraitsI](../VS_visualcpp/CStringElementTraitsI-Class.md).  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cdefaultchartraits__chartolower"></a>  CDefaultCharTraits::CharToLower  
 Call this function to convert a character to lowercase.  
  
```  
static wchar_t CharToLower(  
    wchar_t x );  
  
    static char CharToLower(  
    char x );  
```  
  
### Parameters  
 *x*  
 The character to convert to lowercase.  
  
### Example  
 [!CODE [NVC_ATL_Utilities#132](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Utilities#132)]  
  
##  <a name="cdefaultchartraits__chartoupper"></a>  CDefaultCharTraits::CharToUpper  
 Call this function to convert a character to uppercase.  
  
```  
static wchar_t CharToUpper(  
    wchar_t x );  
  
    static char CharToUpper(  
    char x );  
```  
  
### Parameters  
 *x*  
 The character to convert to uppercase.  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)