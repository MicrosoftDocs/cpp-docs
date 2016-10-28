---
title: "CLS Compliance Warning CLS03603"
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
  - "CLS03603"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS03603"
ms.assetid: 8bd74395-6b44-427d-8fe0-648dd946e6d2
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
# CLS Compliance Warning CLS03603
Global static fields are not CLS-compliant  
  
 Global static fields and methods are not CLS-compliant.  
  
 For more information Common Language Subset (CLS) compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS03603:  
  
```  
// CLS03603.cpp  
// compile with: /clr /LD  
// CLS03603 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
int i;   // CLS03603  
  
public ref class MyClass {  
public:  
   int i;   // OK  
};  
```