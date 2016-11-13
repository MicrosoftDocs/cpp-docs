---
title: "Compiler Error CS0509 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0509"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0509"
ms.assetid: dc113e03-7a01-489b-b886-51ee056fc96a
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
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
# Compiler Error CS0509
'class1' : cannot derive from sealed type 'class2'  
  
 A [sealed](/dotnet/csharp/language-reference/keywords/sealed) class cannot act as a [base](/dotnet/csharp/language-reference/keywords/base) class. Structs are sealed by default.  
  
 The following sample generates CS0509:  
  
```  
// CS0509.cs  
// compile with: /target:library  
sealed public class clx {}  
public class cly : clx {}   // CS0509  
```