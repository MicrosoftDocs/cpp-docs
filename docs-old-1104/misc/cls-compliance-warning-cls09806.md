---
title: "CLS Compliance Warning CLS09806 | Microsoft Docs"
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
  - "CLS09806"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS09806"
ms.assetid: fc97cf0e-c72e-4c09-96be-f90f9840e76e
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
# CLS Compliance Warning CLS09806
Generic methods are not CLS-compliant  
  
 A generic method is not CLS compliant.  
  
 For more information Common Language Subset (CLS) compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS09806:  
  
```  
// CLS09806.cpp  
// compile with: /clr /LD /link /noentry  
// CLS09806 expected  
using namespace System::Reflection;  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
using namespace System;  
[assembly:CLSCompliant (true)];  
  
generic <class T> public ref struct One {  
public:  
   generic <class U> void Method1() {}  
};  
```