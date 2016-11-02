---
title: "CLS Compliance Warning CLS02709 | Microsoft Docs"
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
  - "CLS02709"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS02709"
ms.assetid: 2dd2cf52-c602-43fa-818c-5ce90e507c79
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
# CLS Compliance Warning CLS02709
Type used in a property declaration was not CLS compliant  
  
 All types in a property declaration were not CLS-compliant.  
  
 For more information about properties, see [property](../windows/property-cpp-component-extensions.md).  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS02709:  
  
```  
// CLS02709.cpp  
// compile with: /clr /LD  
// CLS02709 expected  
using namespace System;  
using namespace System::Reflection;  
using namespace cli::language;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
  
public ref class One {  
   String^ LocalString;  
   int i;  
public:  
  
   // not CLS compliant  
   property interior_ptr<String^> MyProperty1 {  
  
      void set(interior_ptr<String^> value) {}  
  
      interior_ptr<String^> get() {  
         LocalString = "Hello";  
         return &LocalString;  
      }  
   }  
  
   // CLS compliant  
   property int MyProperty2 {  
  
      void set(int value) {}  
  
      int get() {  
         i = 1;  
         return i;  
      }  
   }  
};  
```