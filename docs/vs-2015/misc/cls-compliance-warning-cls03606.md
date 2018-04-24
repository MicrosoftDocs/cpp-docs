---
title: "CLS Compliance Warning CLS03606 | Microsoft Docs"
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
  - "CLS03606"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS03606"
ms.assetid: 567b0b18-7487-4f48-a9ae-a4a4db53a409
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# CLS Compliance Warning CLS03606
Global static methods are not CLS-compliant  
  
 Global static fields and methods are not CLS-compliant.  
  
 For more information Common Language Subset (CLS) compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS03606:  
  
```  
// CLS03606.cpp  
// compile with: /clr /LD  
// CLS03606 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
void MyGlobalFunction1() {}   // CLS03606  
  
public ref class MyClass {  
public:  
   void MemberFunction() {}   // OK  
};  
```