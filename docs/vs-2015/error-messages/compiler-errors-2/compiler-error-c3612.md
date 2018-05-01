---
title: "Compiler Error C3612 | Microsoft Docs"
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
  - "C3612"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3612"
ms.assetid: aa6e3a2b-4afa-481c-98c1-1b6d1f82f869
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3612
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3612](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3612).  
  
  
type': a sealed class cannot be abstract  
  
 Types defined with `value` (or [__value](../../misc/value.md)) are sealed by default and a class is abstract unless it implements all methods of its base. A sealed abstract class can neither be a base class nor can it be instantiated.  
  
 For more information, see [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md).  
  
 The following sample generates C3612:  
  
```  
// C3612.cpp  
// compile with: /clr /c  
value struct V: public System::ICloneable {};   // C3612  
  
// OK  
value struct V2: public System::ICloneable {  
   Object^ Clone();  
};  
```

