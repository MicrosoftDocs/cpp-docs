---
title: "CLS Compliance Warning CLS01102 | Microsoft Docs"
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
  - "CLS01102"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01102"
ms.assetid: 49426c42-9d01-49ba-b061-ca0e8bd6782d
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
# CLS Compliance Warning CLS01102
All types appearing in a signature shall be CLS-compliant  
  
 If an event is CLS compliant, then all types used in the event access functions, unless marked not CLS compliant, must be CLS compliant types.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
```  
// CLS01102.cpp  
// compile with: /clr /LD  
// CLS01102 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
// Test types  
[CLSCompliant(true)]  
public delegate void CompliantType([parameter:CLSCompliant(true)] int parameter);  
  
[CLSCompliant(false)]  
public delegate void NotCompliantType([parameter:CLSCompliant(false)] int parameter);  
  
public ref class One {  
public:  
   event NotCompliantType^ MyEvent {  
   public:  
      void add(NotCompliantType^ Addparameter) {}  
      void remove(NotCompliantType^ Removeparameter) {}  
      void raise([parameter:CLSCompliant(false)] int parameter) {}  
   }  
};  
```