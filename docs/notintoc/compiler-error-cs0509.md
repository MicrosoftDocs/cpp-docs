---
title: "Compiler Error CS0509"
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
  - "CS0509"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0509"
ms.assetid: dc113e03-7a01-489b-b886-51ee056fc96a
caps.latest.revision: 9
ms.author: "billchi"
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
# Compiler Error CS0509
'class1' : cannot derive from sealed type 'class2'  
  
 A [sealed](../Topic/sealed%20\(C%23%20Reference\).md) class cannot act as a [base](../Topic/base%20\(C%23%20Reference\).md) class. Structs are sealed by default.  
  
 The following sample generates CS0509:  
  
```  
// CS0509.cs  
// compile with: /target:library  
sealed public class clx {}  
public class cly : clx {}   // CS0509  
```