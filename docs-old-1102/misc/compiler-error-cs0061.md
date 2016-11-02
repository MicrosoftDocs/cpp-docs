---
title: "Compiler Error CS0061"
ms.custom: ""
ms.date: "10/25/2016"
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
  
 A [public](../Topic/public%20\(C%23%20Reference\).md) construct must return a publicly accessible object.  
  
 Interface accessibility cannot be narrowed in a derived interface. For more information, see [Interfaces](../Topic/Interfaces%20\(C%23%20Programming%20Guide\).md) and [Access Modifiers](../Topic/Access%20Modifiers%20\(C%23%20Programming%20Guide\).md).  
  
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