---
title: "Agile::Release Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::Release"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::Release"
ms.assetid: aa825134-943f-425d-857e-449ec104765e
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Agile::Release Method
Discards the current Agile object's underlying object and context.  
  
## Syntax  
  
```cpp  
  
void Release() throw();  
  
```  
  
## Remarks  
 The current Agile object's underlying object and context are discarded, if they exist, and then the value of the Agile object is set to null.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::Agile Class](../cppcx/platform-agile-class.md)