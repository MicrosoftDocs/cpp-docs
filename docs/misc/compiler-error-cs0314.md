---
title: "Compiler Error CS0314"
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
  - "CS0314"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0314"
ms.assetid: 12f68f51-0568-4e80-b0fd-15899807477d
caps.latest.revision: 7
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
# Compiler Error CS0314
The type 'type1' cannot be used as type parameter 'name' in the generic type or method 'name'. There is no boxing conversion or type parameter conversion from 'type1' to 'type2'.  
  
 When a generic type uses a type parameter that is constrained, the new class must also satisfy those same constraints.  
  
### To correct this error  
  
1.  In the example that follows, add `where T : ClassConstraint` to class `B`.  
  
## Example  
 The following code generates CS0314:  
  
```  
// cs0314.cs  
// Compile with: /target:library  
public class ClassConstraint { }  
  
public class A<T> where T : ClassConstraint  
{ }  
  
public class B<T> : A<T> //CS0314  
{ }  
  
// Try using this instead.  
public class C<T> : A<T> where T : ClassConstraint  
{ }  
```  
  
## See Also  
 [Constraints on Type Parameters](../Topic/Constraints%20on%20Type%20Parameters%20\(C%23%20Programming%20Guide\).md)