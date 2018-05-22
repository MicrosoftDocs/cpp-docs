---
title: "CLS Compliance Warning CLS02609 | Microsoft Docs"
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
  - "CLS02609"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS02609"
ms.assetid: ea1afa9a-03d2-4417-af14-68e3b03a858f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# CLS Compliance Warning CLS02609
A property and its accessors shall all be static, all be virtual, or all be instance  
  
 A property and its accessors shall not differ in their static, virtual, or instance qualifiers.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS02609:  
  
```  
// CLS02609.cpp  
// compile with: /clr /LD  
// CLS02609 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
public ref class One {  
private:  
   int InstanceMember;  
   static int StaticMember;  
public:  
  
   property int MyProperty1 {   // CLS02609  
   public:  
      void set(int value) {}  
      static int get() {  
         return StaticMember;  
      }  
   }  
  
   property int MyProperty2 {   // OK  
   public:  
      void set(int value) {}  
      int get() {  
         return StaticMember;  
      }  
   }  
};  
```