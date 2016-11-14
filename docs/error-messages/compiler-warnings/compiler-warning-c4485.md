---
title: "Compiler Warning C4485 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4485"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4485"
ms.assetid: a6f2b437-ca93-4dcd-b9cb-df415e10df86
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Warning C4485
'override_function' : matches base ref class method 'base_class_function ', but is not marked 'new' or 'override'; 'new' (and 'virtual') is assumed  
  
 An accessor overrides, with or without the `virtual` keyword, a base class accessor function, but the `override` or `new` specifier was not part of the overriding function signature. Add the `new` or `override` specifier to resolve this warning.  
  
 See [override](../../windows/override-cpp-component-extensions.md) and [new (new slot in vtable)](../../windows/new-new-slot-in-vtable-cpp-component-extensions.md) for more information.  
  
 C4485 is always issued as an error. Use the [warning](../../preprocessor/warning.md) pragma to suppress C4485.  
  
## Example  
 The following sample generates C4485  
  
```  
// C4485.cpp  
// compile with: /clr  
delegate void Del();  
  
ref struct A {  
   virtual event Del ^E;  
};  
  
ref struct B : A {  
   virtual event Del ^E;   // C4485  
};  
  
ref struct C : B {  
   virtual event Del ^E {  
      void raise() override {}  
      void add(Del ^) override {}  
      void remove(Del^) override {}  
   }  
};  
```