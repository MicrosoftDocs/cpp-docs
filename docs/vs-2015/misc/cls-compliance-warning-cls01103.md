---
title: "CLS Compliance Warning CLS01103 | Microsoft Docs"
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
  - "CLS01103"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01103"
ms.assetid: 0d0aebaa-441a-4dc0-9745-8de3a551204b
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# CLS Compliance Warning CLS01103
All types appearing in a signature shall be CLS-compliant  
  
 If a type is CLS compliant, then all fields, unless marked not CLS compliant, must be of CLS compliant types.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
```  
// CLS01103.cpp  
// compile with: /clr /LD  
// CLS01103 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
[CLSCompliant(false)]  
public ref class NotCompliantType {};  
  
// Ref class  
public ref class One {  
public:  
   NotCompliantType^ Member1;   // CLS01103  
   static NotCompliantType^ Member2;   // CLS01103  
};  
```