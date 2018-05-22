---
title: "CLS Compliance Warning CLS01206 | Microsoft Docs"
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
  - "CLS01206"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01206"
ms.assetid: e72f2293-874b-406c-9f22-92aeb64ac732
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# CLS Compliance Warning CLS01206
The visibility and accessibility of types and members shall be such that types in the signature of any member shall be visible and accessible whenever the member itself is visible and accessible. For example, a public member function that is visible outside its assembly shall not have an argument whose type is visible only within the assembly.  
  
 Types in method signatures must have accessibility greater than or equal to that of the method.  For example, a public method that is visible outside its assembly shall not have an argument whose type is visible only within the assembly.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS01206:  
  
```  
/* CLS01206.cpp */  
// compile with: /clr /LD  
// CLS01206 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
public ref class PublicLevelType {};  
  
private ref class AssemblyLevelType {};  
  
public ref class One {  
public:  
   AssemblyLevelType^ Method1() {  
      return gcnew AssemblyLevelType();  
   }  
};  
```