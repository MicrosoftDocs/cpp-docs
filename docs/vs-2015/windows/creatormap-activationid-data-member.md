---
title: "CreatorMap::activationId Data Member | Microsoft Docs"
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
  - "module/Microsoft::WRL::Details::CreatorMap::activationId"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "activationId data member"
ms.assetid: 77518b76-6e6a-4b48-8e2e-a4c7c67769e0
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CreatorMap::activationId Data Member
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [CreatorMap::activationId Data Member](https://docs.microsoft.com/cpp/windows/creatormap-activationid-data-member).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
union {   
   const IID* clsid;  
   const wchar_t* (*getRuntimeName)();  
} activationId;  
```  
  
## Parameters  
 `clsid`  
 An interface ID.  
  
 `getRuntimeName`  
 A function that retrieves the Windows runtime name of an object.  
  
## Remarks  
 Represents an object ID that is identified either by a classic COM class ID or a Windows runtime name.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [CreatorMap Structure](../windows/creatormap-structure.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

