---
title: "Compiler Error CS0160 | Microsoft Docs"
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
  - "CS0160"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0160"
ms.assetid: 4ef07061-8ef5-42d9-b043-3f81307d569f
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0160
A previous catch clause already catches all exceptions of this or of a super type ('type')  
  
 A series of **catch** statements needs to be in decreasing order of derivation. For example, the most derived objects must appear first.  
  
 For more information, see [Exception Handling Statements](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md) and [Exceptions and Exception Handling](../Topic/Exceptions%20and%20Exception%20Handling%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0160:  
  
```  
// CS0160.cs  
public class MyClass2 : System.Exception {}  
public class MyClass  
{  
   public static void Main()  
   {  
      try {}  
  
      catch(System.Exception) {}   // Second-most derived; should be second catch  
      catch(MyClass2) {}   // CS0160  Most derived; should be first catch  
   }  
}  
```