---
title: "Compiler Error C3648 | Microsoft Docs"
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
  - "C3648"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3648"
ms.assetid: 5d042989-41cb-4cd0-aa50-976b70146aaf
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3648
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3648](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3648).  
  
  
this explicit override syntax requires /clr:oldSyntax  
  
 When compiling for the latest managed syntax, the compiler found explicit override syntax for previous versions.  
  
 For more information, see [Explicit Overrides](../../windows/explicit-overrides-cpp-component-extensions.md). For more information on the older syntax, see [Explicit Overrides](../../cpp/explicit-overrides-cpp.md).  
  
 The following sample generates C3648:  
  
```  
// C3648.cpp  
// compile with: /clr  
public interface struct I {  
   void f();  
};  
  
public ref struct R : I {  
   virtual void I::f() {}   // C3648  
   // try the following line instead  
   // virtual void f() = I::f{}  
};  
```

