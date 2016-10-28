---
title: "CLS Compliance Warning CLS03002"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CLS03002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS03002"
ms.assetid: b3254410-e21c-430b-a2fd-d110d6f5f38a
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "douge"
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
# CLS Compliance Warning CLS03002
The accessibility of an event and of its accessors shall be identical  
  
 An event and it accessor methods shall not differ in their accessibility.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS03002:  
  
```  
// CLS03002.cpp  
// compile with: /clr /LD  
// CLS03002 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
public delegate void MyDelegate(int parameter);  
  
public ref class One {  
public:  
  
   event MyDelegate^ MyEvent {   // CLS03002  
   public:  
      void add(MyDelegate^ paramter) {}  
      void remove(MyDelegate^ parameter) {}  
   protected:  
      void raise(int parameter)   {}  
   }  
  
   event MyDelegate^ MyEvent2 {   // OK  
   public:  
      void add(MyDelegate^ paramter) {}  
      void remove(MyDelegate^ parameter) {}  
      void raise(int parameter)   {}  
   }  
};  
```