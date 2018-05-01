---
title: "Compiler Error C3646 | Microsoft Docs"
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
  - "C3646"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3646"
ms.assetid: 4391ead2-9637-4ca3-aeda-5a991b18d66d
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3646
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3646](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3646).  
  
  
specifier' : unknown override specifier  
  
 The compiler found a token in the position where it expected to find an override specifier, but the token was not recognized by the compiler.  
  
 For more information, see [Override Specifiers](../../windows/override-specifiers-cpp-component-extensions.md).  
  
 The following sample generates C3646:  
  
```  
// C3646.cpp  
// compile with: /clr /c  
ref class C {  
   void f() unknown;   // C3646  
   // try the following line instead  
   // virtual void f() abstract;  
};  
```

