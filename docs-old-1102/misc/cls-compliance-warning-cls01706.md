---
title: "CLS Compliance Warning CLS01706"
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
  - "CLS01706"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01706"
ms.assetid: b89ccbf1-7256-4842-a0af-44a803f28340
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
# CLS Compliance Warning CLS01706
Unmanaged pointer types are not CLS-compliant  
  
 A CLS-compliant function signature cannot contain an unmanaged pointer type.  
  
 For more information Common Language Subset (CLS) compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS01706:  
  
```  
// CLS01706.cpp  
// compile with: /clr /LD  
// CLS01706 expected  
[assembly:System::CLSCompliant (true)];  
[assembly:System::Reflection::AssemblyKeyFile("clscompliance.snk")];  
  
public ref class One {  
public:  
   void Method1(int* parameter) {}   // CLS01706  
   void Method1(One ^ parameter) {}   // OK  
};  
```