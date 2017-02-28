---
title: "Agile::GetAddressOfForInOut Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::GetAddressOfForInOut"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::GetAddressOfForInOut"
ms.assetid: 8bb27b4c-c325-49ee-91db-9adf87c530c4
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Agile::GetAddressOfForInOut Method
Returns the address of a handle to the object represented by the current Agile object.  
  
## Syntax  
  
```cpp  
  
T^* GetAddressOfForInOut()   
throw();  
  
```  
  
#### Parameters  
 `T`  
 A type specified by the template typename parameter.  
  
## Return Value  
 The address of a handle to the object represented by the current Agile object.  
  
## Remarks  
 This operation acquires the current threading context and then returns the address of a handle to the underlying the object.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::Agile Class](../cppcx/platform-agile-class.md)