---
title: "Compiler Warning C4693 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4693"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4693"
ms.assetid: 72d8db01-5e6f-4794-8731-76107e8f064a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# Compiler Warning C4693
'class': a sealed abstract class cannot have any instance members 'Test'  
  
 If a type is marked [sealed](../../windows/sealed-cpp-component-extensions.md) and [abstract](../../windows/abstract-cpp-component-extensions.md), it can only have static members.  
  
## Example  
 The following sample generates C4693.  
  
```  
// C4693.cpp  
// compile with: /clr /c  
public ref class Public_Ref_Class sealed abstract {  
public:  
   void Test() {}   // C4693  
   static void Test2() {}   // OK  
};  
```