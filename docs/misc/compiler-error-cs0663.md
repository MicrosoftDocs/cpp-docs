---
title: "Compiler Error CS0663"
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
  - "CS0663"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0663"
ms.assetid: 9f96c42b-dcc8-4a0f-8404-289fc88dba5e
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
# Compiler Error CS0663
Cannot define overloaded methods that differ only on ref and out.  
  
 Methods that differ only on their use of [ref](../Topic/ref%20\(C%23%20Reference\).md) and [out](../Topic/out%20\(C%23%20Reference\).md) on a parameter are not allowed.  
  
 The following sample generates CS0663:  
  
```  
// CS0663.cs  
class TestClass  
{  
   public static void Main()  
   {  
   }  
  
   public void Test(ref int i)  
   {  
   }  
  
   public void Test(out int i)   // CS0663  
   {  
   }  
}  
```