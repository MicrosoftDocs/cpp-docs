---
title: "Compiler Warning (level 1) C4183 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4183"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4183"
ms.assetid: dc48312c-4b34-44dd-80ff-eb5f11d5ca47
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4183
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4183](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4183).  
  
  
identifier': missing return type; assumed to be a member function returning 'int'  
  
 The inline definition of a member function in a class or a structure does not have a return type. This member function is assumed to have a default return type of `int`.  
  
 The following sample generates C4183:  
  
```  
// C4183.cpp  
// compile with: /W1 /c  
#pragma warning(disable : 4430)  
class MyClass1;  
class MyClass2 {  
   MyClass1() {};   // C4183  
};  
```

