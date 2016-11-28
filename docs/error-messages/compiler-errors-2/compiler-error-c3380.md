---
title: "Compiler Error C3380 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3380"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3380"
ms.assetid: 86f1f4ec-4ad8-4a1a-9b6c-2d9b6129df6b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C3380
'class' : invalid assembly access specifier - only 'public' or 'private' are allowed  
  
 When applied to a managed class or struct, the [public](../../cpp/public-cpp.md) and [private](../../cpp/private-cpp.md) keywords indicate whether the class will be exposed through assembly metadata. Only `public` or `private` can be applied to a class in a program compiled with [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 The `ref` and `value` keywords, when used with [/clr](../../build/reference/clr-common-language-runtime-compilation.md), indicate that a class is managed (see [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md)).  
  
 The following sample generates C3380:  
  
```  
// C3380_2.cpp  
// compile with: /clr  
protected ref class A {   // C3380  
// try the following line instead  
// ref class A {  
public:  
   static int i = 9;  
};  
  
int main() {  
   A^ myA = gcnew A;  
   System::Console::WriteLine(myA->i);  
}  
```  
