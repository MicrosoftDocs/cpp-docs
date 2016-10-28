---
title: "Compiler Error CS0180"
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
  - "CS0180"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0180"
ms.assetid: a21bf0a2-ed5a-4ddd-88d3-240babc5888a
caps.latest.revision: 8
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
# Compiler Error CS0180
'member' cannot be both extern and abstract  
  
 The [abstract](../Topic/abstract%20\(C%23%20Reference\).md) and [extern](../Topic/extern%20\(C%23%20Reference\).md) keywords are mutually exclusive. The `extern` keyword means that the member is defined outside the file, and **abstract** means that the implementation is provided in a derived class. For more information, see [Methods](../Topic/Methods%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0180:  
  
```  
// CS0180.cs  
namespace MyNamespace  
{  
   public class MyClass  
   {  
      public extern abstract int Foo(int a);   // CS0180  
  
      public static void Main()  
      {  
      }  
   }  
}  
```