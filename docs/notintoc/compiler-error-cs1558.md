---
title: "Compiler Error CS1558"
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
  - "CS1558"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1558"
ms.assetid: ee603d66-007e-4782-9285-7ff031975f0f
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
# Compiler Error CS1558
'class' does not have a suitable static Main method  
  
 The [/main](../Topic/-main%20\(C%23%20Compiler%20Options\).md) compiler option specified a class in which to look for a **Main** method. However, the [Main](../Topic/Main\(\)%20and%20Command-Line%20Arguments%20\(C%23%20Programming%20Guide\).md) method was not defined correctly.  
  
 The following example generates CS1558 because of invalid return type.  
  
```  
// CS1558.cs  
// compile with: /main:MyNamespace.MyClass  
  
namespace MyNamespace  
{  
   public class MyClass  
   {  
      public static float Main()   
      {  
         return 0.0; // CS1558 because the return type is a float.  
      }  
   }  
}  
```