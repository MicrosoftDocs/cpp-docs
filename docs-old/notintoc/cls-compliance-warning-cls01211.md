---
title: "CLS Compliance Warning CLS01211"
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
  - "CLS01211"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01211"
ms.assetid: a6df4b7a-81e8-4e77-90d1-ec1cc3a759f5
caps.latest.revision: 9
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
# CLS Compliance Warning CLS01211
The visibility and accessibility of types and members shall be such that types in the signature of any member shall be visible and accessible whenever the member itself is visible and accessible. For example, a type that is visible outside its assembly shall not have a base type that is visible only within the assembly.  
  
 Types and interfaces inherited or implemented by a type (A) must have accessibility greater than or equal to that of the type.  For example, a public method that is visible outside its assembly shall not have an argument whose type is visible only within the assembly.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](assetId:///3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS01211:  
  
```  
// CLS01211.cpp  
// compile with: /clr /LD  
// CLS01211 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
private interface class I {};  
public interface class I2 : public I {};  
```