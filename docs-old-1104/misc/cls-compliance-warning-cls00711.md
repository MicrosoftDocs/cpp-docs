---
title: "CLS Compliance Warning CLS00711 | Microsoft Docs"
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
  - "CLS00711"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS00711"
ms.assetid: 76481641-bda1-4128-8da8-ccba577b7ba1
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
# CLS Compliance Warning CLS00711
The underlying type of an enum shall be a built-in CLS integer type  
  
 If you specify the underlying type of an enum, and if you want a CLS-compliant assembly, the underlying type of the enum must be a Common Language Subset (CLS) compliant, integer type.  
  
 For more information about CLR enums, see [enum class](../windows/enum-class-cpp-component-extensions.md).  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS00711:  
  
```  
// CLS00711.cpp  
// compile with: /clr /LD  
// CLS00711 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
public ref class One {  
public:  
  
   enum class MyEnum_cls_bad : Char {  
      bad_one = 1, bad_two = 2, bad_three = 3  
   };  
  
   enum class MyEnum_cls_good : Int32 {  
      good_one = 1, good_two = 2, good_three = 3  
   };  
};  
```