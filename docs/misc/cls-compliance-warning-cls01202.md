---
title: "CLS Compliance Warning CLS01202 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CLS01202"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01202"
ms.assetid: ab75e9c4-9d87-4bb4-ad8f-3e6ab5559de7
caps.latest.revision: 10
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
# CLS Compliance Warning CLS01202
The visibility and accessibility of types and members shall be such that types in the signature of any member shall be visible and accessible whenever the member itself is visible and accessible. For example, a public event that is visible outside its assembly shall not have an argument whose type is visible only within the assembly.  
  
 The type of an event handler must have an accessibility that is greater than or equal to the accessibility of the event handler.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS01202:  
  
```  
/* CLS01202.cpp */  
// compile with: /clr /LD  
// CLS01202 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
public delegate void MyPublicDelegate();  
private delegate void MyAssemblyDelegate();  
  
public ref class One {  
public:  
   event MyAssemblyDelegate^ MyEvent {  
   public:  
      void add(MyAssemblyDelegate^ Addparameter) {}   //  not cls compliant  
      void remove(MyAssemblyDelegate^ Removeparameter) {}   //  not cls compliant  
      void raise() {}  
   }  
};  
```