---
title: "CLS Compliance Warning CLS01114 | Microsoft Docs"
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
  - "CLS01114"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01114"
ms.assetid: f3382da6-d3d0-4209-a229-400701c53ede
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
# CLS Compliance Warning CLS01114
All types appearing in a signature shall be CLS-compliant  
  
 If a delegate is CLS compliant, then all types in the delegate signature must be CLS compliant.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS01114:  
  
```  
// CLS01114.cpp  
// compile with: /clr /LD  
// CLS01114 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
[CLSCompliant(true)]  
public ref class CompliantType {};  
  
[CLSCompliant(false)]  
public ref class NotCompliantType {};  
  
// Public delegate  
public delegate CompliantType ^ PublicDelegate1(NotCompliantType^ param);   // CLS01114  
  
public delegate CompliantType ^ PublicDelegate2(CompliantType^ param);   // OK  
```