---
title: "WriteOnlyArray::Data Property | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::WriteOnlyArray::Data"
dev_langs: 
  - "C++"
ms.assetid: 6db4b513-eae8-4d82-b190-b90e16aeb202
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# WriteOnlyArray::Data Property
Pointer to the data buffer.  
  
## Syntax  
  
```cpp  
property T* Data{  
   T* get() const;  
}  
```  
  
## Return Value  
 A pointer to the raw array bytes.  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform::WriteOnlyArray Class](../cppcx/platform-writeonlyarray-class.md)