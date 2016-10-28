---
title: "CLS Compliance Warning CLS01106"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CLS01106"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01106"
ms.assetid: 0c964444-387d-4348-aed5-05f1ccc241c8
caps.latest.revision: 7
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
# CLS Compliance Warning CLS01106
**All types appearing in a signature shall be CLS-compliant**  
  
 If a type is CLS compliant, then all functions in the type, unless marked not CLS compliant, must have CLS compliant type parameters.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](assetId:///3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS01106:  
  
```  
// CLS01106.cpp  
// compile with: /clr /LD  
// CLS01106 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
[CLSCompliant(true)]  
public ref class CompliantType {};  
  
[CLSCompliant(false)]  
public ref class NotCompliantType {};  
  
[CLSCompliant(true)]  
public ref class One {  
public:  
  
   NotCompliantType^ Method1(NotCompliantType^ parameter) {  
      return parameter;  
   }  
  
   CompliantType^ Method2(CompliantType^ parameter) {   // OK  
      return parameter;  
   }  
  
   [CLSCompliant(false)]  
   NotCompliantType^ Method3(NotCompliantType^ parameter) {   // OK  
      return parameter;  
   }  
};  
```