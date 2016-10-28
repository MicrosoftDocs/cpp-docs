---
title: "Compiler Error CS1527"
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
  - "CS1527"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1527"
ms.assetid: a0d52130-d6da-41bb-b153-8e96cbb7e316
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
# Compiler Error CS1527
Elements defined in a namespace cannot be explicitly declared as private, protected, or protected internal  
  
 Type declarations in a namespace can have either [public](../Topic/public%20\(C%23%20Reference\).md) or [internal](../Topic/internal%20\(C%23%20Reference\).md) access. If no accessibility is specified, **internal** is the default.  
  
 The following sample generates CS1527:  
  
```  
// CS1527.cs  
namespace Sample  
{  
   private class C1 {};             // CS1527  
   protected class C2 {};           // CS1527  
   protected internal class C3 {};  // CS1527  
}  
```  
  
 The following example generates CS1527 because when no namespace is explicitly declared in your program code, all type declarations are located implicitly within the global namespace.  
  
```  
//cs1527_2.cs  
using System;  
  
protected class C4{}  
private struct S1{}  
```  
  
## See Also  
 [Namespaces](../Topic/Namespaces%20\(C%23%20Programming%20Guide\).md)   
 [global](../Topic/global%20\(C%23%20Reference\).md)   
 [:: Operator](../Topic/::%20Operator%20\(C%23%20Reference\).md)   
 [Accessibility Domain](../Topic/Accessibility%20Domain%20\(C%23%20Reference\).md)   
 [Access Modifiers](../Topic/Access%20Modifiers%20\(C%23%20Programming%20Guide\).md)