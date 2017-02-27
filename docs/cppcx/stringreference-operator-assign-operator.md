---
title: "StringReference::operator= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::StringReference::operator="
dev_langs: 
  - "C++"
ms.assetid: 03a33467-d65f-4508-bcb4-17d7cc99398f
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# StringReference::operator= Operator
Assigns the specified object to the current `StringReference` object.  
  
## Syntax  
  
```cpp  
  
   StringReference& operator=(const StringReference& __fstrArg);  
  
StringReference& operator=(const ::default::char16* __strArg);  
  
```  
  
#### Parameters  
 `__fstrArg`  
 The address of a `StringReference` object that is used to initialize the current `StringReference` object.  
  
 `__strArg`  
 Pointer to an array of char16 values that is used to initialize the current `StringReference` object.  
  
## Return Value  
 A reference to an object of type `StringReference`.  
  
## Remarks  
 Because `StringReference` is a standard C++ class and not a ref class, it does not appear in the **Object Browser**.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::StringReference Class](../cppcx/platform-stringreference-class.md)