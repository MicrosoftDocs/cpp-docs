---
title: "ArrayReference::ArrayReference Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::ArrayReference::ArrayReference"
dev_langs: 
  - "C++"
ms.assetid: 9fc7dfcf-47af-40ba-a697-da476fb90efc
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# ArrayReference::ArrayReference Constructor
Initializes a new instance of the [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) class.  
  
## Syntax  
  
```cpp  
ArrayReference(TArg* ataArg, unsigned int sizeArg, bool needsInitArg = false);  
ArrayReference(ArrayReference&& otherArg)  
  
```  
  
#### Parameters  
 `dataArg`  
 A pointer to the array data.  
  
 `sizeArg`  
 The number of elements in the source array.  
  
 `otherArg`  
 An `ArrayReference` object whose data will be moved to initialize the new instance.  
  
## Remarks  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::ArrayReference Class](../cppcx/platform-arrayreference-class.md)   
 [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)