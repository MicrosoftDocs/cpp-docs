---
title: "FactoryCache::cookie Data Member | Microsoft Docs"
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
  - "module/Microsoft::WRL::Details::FactoryCache::cookie"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cookie data member"
ms.assetid: b1bc79af-a896-4e3b-8afa-64733022eddf
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# FactoryCache::cookie Data Member
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [FactoryCache::cookie Data Member](https://docs.microsoft.com/cpp/windows/factorycache-cookie-data-member).  
  
  
Supports the [!INCLUDE[cppwrl](../includes/cppwrl-md.md)] infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
union {   
   WINRT_REGISTRATION_COOKIE winrt;  
   DWORD com;   
} cookie;  
```  
  
## Remarks  
 Contains a value that identifies a registered [!INCLUDE[wrt](../includes/wrt-md.md)] or COM class object, and is later used to unregister the object.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [FactoryCache Structure](../windows/factorycache-structure.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

