---
title: "Compiler Error C3749 | Microsoft Docs"
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
  - "C3749"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3749"
ms.assetid: 3d26b468-4757-41b8-b5a2-78022a5295fb
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3749
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3749](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3749).  
  
  
attribute': a custom attribute may not be used inside a function  
  
 A custom attribute cannot be used inside a function. (For more information on custom attributes, see the topic [attribute](../../windows/attribute.md).)  
  
 The following sample generates C3749:  
  
```  
// C3749a.cpp  
// compile with: /clr /c  
using namespace System;  
  
[AttributeUsage(AttributeTargets::All)]  
public ref struct ABC : public Attribute {  
   ABC() {}  
};  
  
void f1() { [ABC]; };  // C3749  
```  
  
 The following sample generates C3749:  
  
```  
// C3749b.cpp  
// compile with: /clr:oldSyntax /c  
using namespace System;  
  
[attribute(All)]  
public __gc struct ABC {  
   ABC() {}  
};  
  
void f1() { [ABC]; };  // C3749  
```

