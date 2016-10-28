---
title: "Compiler Error CS1021"
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
  - "CS1021"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1021"
ms.assetid: 0346ba58-d7cd-40bd-bcad-b90117fdc9b5
caps.latest.revision: 7
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
# Compiler Error CS1021
Integral constant is too large  
  
 A value assigned to an [integral type](../Topic/Integral%20Types%20Table%20\(C%23%20Reference\).md) is larger than the largest possible unsigned integer value.  
  
 The following sample generates CS1021:  
  
```  
// CS1021.cs  
enum F : int  
{  
   a=(int)2590000000000000000000   // CS1021  
}  
  
public class clx  
{  
   public static void Main()  
   {  
   }  
}  
```