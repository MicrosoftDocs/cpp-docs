---
title: "ArrayReference::operator() Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::ArrayReference::operatorArray^"
dev_langs: 
  - "C++"
ms.assetid: 48726344-82bb-4c1d-b246-ed74b895f99b
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# ArrayReference::operator() Operator
Converts the current [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) object back to a [Platform::Array](../cppcx/platform-array-class.md) class.  
  
## Syntax  
  
```cpp  
  
Array<__TArg>^ operator ();  
  
```  
  
## Return Value  
 A handle-to-object of type `Array<__TArg>^`  
  
## Remarks  
 [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) and [Platform::Array](../cppcx/platform-array-class.md) are standard C++ class templates, not ref classes.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::ArrayReference Class](../cppcx/platform-arrayreference-class.md)