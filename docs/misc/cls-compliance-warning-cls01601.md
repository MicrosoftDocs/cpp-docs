---
title: "CLS Compliance Warning CLS01601 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CLS01601"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01601"
ms.assetid: fa162fc6-a0fd-4a0f-a201-4f166304d057
caps.latest.revision: 9
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
# CLS Compliance Warning CLS01601
Arrays shall have elements with a CLS-compliant type and all dimensions of the array shall have lower bounds of zero  
  
 Arrays shall have elements with a CLS-compliant type and all dimensions of the array shall have lower bounds of zero. Only the fact that an item is an array and the element type of the array shall be required to distinguish between overloads. When overloading is based on two or more array types the element types shall be named types.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS01601:  
  
```  
// CLS01601.cpp  
// compile with: /clr /LD  
// CLS01601 expected  
using namespace System;  
using namespace System::Reflection;  
using namespace cli::language;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
[CLSCompliant(true)]  
public ref class CompliantType {};  
  
[CLSCompliant(false)]  
public ref class NotCompliantType {};  
  
public ref class One {  
public:  
   // CLS01601  
   One(array<NotCompliantType^>^ param) {}  
  
   // OK  
   One(array<CompliantType^>^ param) {}  
};  
```