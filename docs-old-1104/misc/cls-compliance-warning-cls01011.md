---
title: "CLS Compliance Warning CLS01011 | Microsoft Docs"
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
  - "CLS01011"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01011"
ms.assetid: e4141e15-14fd-491c-9639-f3f3a47d7865
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
# CLS Compliance Warning CLS01011
Accessibility shall not be changed when overriding inherited methods  
  
 Make sure that the overriding method has the same visibility as the method that it overrides.  Accessibility shall not be changed when overriding inherited methods, except when overriding a method inherited from a different assembly with accessibility Family-or-Assembly. In this case the override shall have accessibility of Family.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS01011:  
  
```  
// CLS01011.cpp  
// compile with: /clr /LD  
// CLS01011 expected  
using namespace System;  
using namespace System::Reflection;  
using namespace cli::language;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
public ref class BaseType {  
public protected:  
   virtual void BaseTypeMethod() {}  
};  
  
public ref class One : public BaseType {  
  
public:        
   void BaseTypeMethod() {}   // CLS01011  
  
// OK  
// public protected:  
//    void BaseTypeMethod() {}  
  
};  
```