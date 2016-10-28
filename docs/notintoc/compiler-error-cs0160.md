---
title: "Compiler Error CS0160"
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
  - "CS0160"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0160"
ms.assetid: 4ef07061-8ef5-42d9-b043-3f81307d569f
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