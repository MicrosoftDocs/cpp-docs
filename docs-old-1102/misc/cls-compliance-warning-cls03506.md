---
title: "CLS Compliance Warning CLS03506"
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
  - "CLS03506"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS03506"
ms.assetid: baec820c-aabb-44c4-b0cd-043c3ca9c537
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
# CLS Compliance Warning CLS03506
**The CLS does not allow publicly visible required modifiers (modreq), but does allow optional modifiers (modopt) they do not understand**  
  
 The CLS does not allow publicly visible required modifiers (modreq), but does allow optional modifiers (modopt) they do not understand.  
  
 Make sure that method signatures do not contain types marked with publicly visible required modifiers.  
  
 For more information Common Language Subset (CLS) compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS03506:  
  
```  
// CLS03506.cpp  
// compile with: /clr /LD  
// CLS03506 expected  
using namespace System;  
using namespace System::Reflection;  
using namespace cli::language;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
public ref class One {  
public:  
   void F1(volatile Int32 parameter) {}   // CLS03506  
   void F2( Int32 parameter) {}   // OK  
};  
```