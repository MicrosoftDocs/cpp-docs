---
title: "Compiler Error CS0061 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0061"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0061"
ms.assetid: 8dfc57a9-653d-4902-a88c-92032ba64024
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
# Compiler Error CS0061
Inconsistent accessibility: base interface 'interface 1' is less accessible than interface 'interface 2'  
  
 A [public](/dotnet/csharp/language-reference/keywords/public) construct must return a publicly accessible object.  
  
 Interface accessibility cannot be narrowed in a derived interface. For more information, see [Interfaces](/dotnet/csharp/programming-guide/interfaces/index) and [Access Modifiers](/dotnet/csharp/programming-guide/classes-and-structs/access-modifiers).  
  
 The following sample generates CS0061.  
  
```  
// CS0061.cs  
// compile with: /target:library  
internal interface A {}  
public interface AA : A {}  // CS0061  
  
// OK  
public interface B {}  
internal interface BB : B {}  
  
internal interface C {}  
internal interface CC : C {}  
```