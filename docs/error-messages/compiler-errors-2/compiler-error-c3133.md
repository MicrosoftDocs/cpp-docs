---
title: "Compiler Error C3133 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3133"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3133"]
ms.assetid: 4a709405-b67b-4061-8a2a-19fa5fb34a2a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3133
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