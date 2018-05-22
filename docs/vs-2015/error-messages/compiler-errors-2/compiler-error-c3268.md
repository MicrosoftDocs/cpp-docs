---
title: "Compiler Error C3268 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3268"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3268"
ms.assetid: d74a630c-daea-4e29-9759-83efef7fb184
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3268
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3268](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3268).  
  
  
function' : a generic function or a member-function of a generic class cannot have a variable parameter list  
  
 See [Generics](../../windows/generics-cpp-component-extensions.md) for more information.  
  
## Example  
 The following sample generates C3268.  
  
```  
// C3268.cpp  
// compile with: /clr:pure /c  
generic <class ItemType>  
void Test(ItemType item, ...) {}   // C3268  
// try the following line instead  
// void Test(ItemType item) {}  
  
generic <class ItemType2>  
ref struct MyStruct { void Test(...){} };   // C3268  
// try the following line instead  
// ref struct MyStruct { void Test2(){} };   // OK  
```

