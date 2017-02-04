---
title: "StringReference::StringReference Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::StringReference::StringReference"
dev_langs: 
  - "C++"
ms.assetid: 87dd9201-e638-4913-b37c-7091ae3f91ea
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# StringReference::StringReference Constructor
Initializes a new instance of the `StringReference` class.  
  
## Syntax  
  
```cpp  
  
    StringReference();  
  
   StringReference(const StringReference& __fstrArg)  
  
StringReference(const ::default::char16* __strArg)  
  
StringReference(const ::default::char16* __strArg, size_t __lenArg)  
```  
  
#### Parameters  
 `__fstrArg`  
 The `StringReference` whose data is used to initialize the new instance.  
  
 `__strArg`  
 Pointer to an array of char16 values that is used to initialize the new instance.  
  
 `__lenArg`  
 The number of elements in `__strArg`.  
  
## Remarks  
 The first version of this constructor is the default constructor. The second version initializes a new `StringReference` instance class from the object that's specified by the `__fstrArg` parameter. The third and fourth overloads initialize a new `StringReference` instance from an array of char16 values. char16 represents a 16-bit UNICODE text character.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::StringReference Class](../cppcx/platform-stringreference-class.md)