---
title: "Agile::Get Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::Get"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::Get"
ms.assetid: d6295e21-ddbe-4302-9158-3498da4d9669
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Agile::Get Method
Returns a handle to the object that is represented by the current Agile object.  
  
## Syntax  
  
```cpp  
  
   T^ Get() const  
;  
```  
  
## Return Value  
 A handle to the object that is represented by the current Agile object.  
  
 The type of the return value is actually an undisclosed internal type. A convenient way to hold the return value is to assign it to a variable that is declared with the **auto** type deduction keyword. For example, `auto x = myAgileTvariable->Get();`.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::Agile Class](../cppcx/platform-agile-class.md)