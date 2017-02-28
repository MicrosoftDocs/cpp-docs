---
title: "WriteOnlyArray::FastPass Property | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::WriteOnlyArray::FastPass"
dev_langs: 
  - "C++"
ms.assetid: f7a54ae0-afa0-4728-8736-c63933f789aa
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# WriteOnlyArray::FastPass Property
Indicates whether the internal FastPass optimization can be performed. Not intended for use by user code.  
  
## Syntax  
  
```cpp  
property bool FastPass{  
   bool get() const;  
}  
```  
  
## Return Value  
 Boolean value that indicates whether the array is FastPass.  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform::WriteOnlyArray Class](../cppcx/platform-writeonlyarray-class.md)