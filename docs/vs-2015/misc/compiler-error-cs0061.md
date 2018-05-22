---
title: "Compiler Error CS0061 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
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
---
# Compiler Error CS0061
Inconsistent accessibility: base interface 'interface 1' is less accessible than interface 'interface 2'  
  
 A [public](http://msdn.microsoft.com/library/0ae45d16-a551-4b74-9845-57208de1328e) construct must return a publicly accessible object.  
  
 Interface accessibility cannot be narrowed in a derived interface. For more information, see [Interfaces](http://msdn.microsoft.com/library/2feda177-ce11-432d-81b4-d50f5f35fd37) and [Access Modifiers](http://msdn.microsoft.com/library/6e81ee82-224f-4a12-9baf-a0dca2656c5b).  
  
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