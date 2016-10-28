---
title: "Compiler Warning (level 2) CS0162"
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
  - "CS0162"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0162"
ms.assetid: 369b5b02-a9cc-404b-b758-4184285af2de
caps.latest.revision: 6
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
# Compiler Warning (level 2) CS0162
Unreachable code detected  
  
 The compiler detected code that will never be executed.  
  
 The following sample generates CS0162:  
  
```  
// CS0162.cs  
// compile with: /W:2  
public class A  
{  
   public static void Main()  
   {  
      goto lab1;  
      {  
         // The following statements cannot be reached:  
         int i = 9;   // CS0162   
         i++;  
      }  
      lab1:  
      {  
      }  
   }  
}  
```