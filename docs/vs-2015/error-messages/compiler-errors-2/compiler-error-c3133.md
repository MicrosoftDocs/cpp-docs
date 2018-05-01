---
title: "Compiler Error C3133 | Microsoft Docs"
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
  - "C3133"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3133"
ms.assetid: 4a709405-b67b-4061-8a2a-19fa5fb34a2a
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3133
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3133](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3133).  
  
  
Attributes cannot be applied to C++ varargs  
  
 An attribute was applied incorrectly. Attributes can not be applied to an ellipsis representing variable arguments.  
  
 For more information, see [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3133.  
  
```  
// C3133.cpp  
// compile with: /clr /c  
ref struct MyAttr: System::Attribute {};   
void Func([MyAttr]...);   // C3133  
void Func2([MyAttr] int i);   // OK  
```

