---
title: "ArrayReference::operator= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::ArrayReference::operator="
dev_langs: 
  - "C++"
ms.assetid: 131a4612-d66b-48e4-90af-c665ccc0cce4
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# ArrayReference::operator= Operator
Assigns the specified object to the current [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) object by using move semantics.  
  
## Syntax  
  
```cpp  
  
ArrayReference& operator=(ArrayReference&& __otherArg);  
  
```  
  
#### Parameters  
 `__ otherArg`  
 The object that is moved to the current `ArrayReference` object.  
  
## Return Value  
 A reference to an object of type `ArrayReference`.  
  
## Remarks  
 `Platform::ArrayReference` is a standard C++ class template, not a ref class.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::ArrayReference Class](../cppcx/platform-arrayreference-class.md)