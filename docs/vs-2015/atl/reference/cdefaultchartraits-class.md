---
title: "CDefaultCharTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDefaultCharTraits"
  - "ATL::CDefaultCharTraits<T>"
  - "ATL.CDefaultCharTraits"
  - "ATL.CDefaultCharTraits<T>"
  - "ATL::CDefaultCharTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDefaultCharTraits class"
ms.assetid: f94a3934-597f-401d-8513-ed6924ae069a
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDefaultCharTraits Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDefaultCharTraits Class](https://docs.microsoft.com/cpp/atl/reference/cdefaultchartraits-class).  
  
  
This class provides two static functions for converting characters between uppercase and lowercase.  
  
## Syntax  
  
```
template <typename T>  
class CDefaultCharTraits
```  
  
#### Parameters  
 `T`  
 The type of data to be stored in the collection.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDefaultCharTraits::CharToLower](#cdefaultchartraits__chartolower)|(Static) Call this function to convert a character to uppercase.|  
|[CDefaultCharTraits::CharToUpper](#cdefaultchartraits__chartoupper)|(Static) Call this function to convert a character to lowercase.|  
  
## Remarks  
 This class provides functions that are utilized by the class [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cdefaultchartraits__chartolower"></a>  CDefaultCharTraits::CharToLower  
 Call this function to convert a character to lowercase.  
  
```
static wchar_t CharToLower(wchar_t x);  
static char CharToLower(char x);
```  
  
### Parameters  
 *x*  
 The character to convert to lowercase.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#132](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Utilities/Cpp/NVC_ATL_Utilities.cpp#132)]  
  
##  <a name="cdefaultchartraits__chartoupper"></a>  CDefaultCharTraits::CharToUpper  
 Call this function to convert a character to uppercase.  
  
```
static wchar_t CharToUpper(wchar_t x);  
static char CharToUpper(char x);
```  
  
### Parameters  
 *x*  
 The character to convert to uppercase.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)








