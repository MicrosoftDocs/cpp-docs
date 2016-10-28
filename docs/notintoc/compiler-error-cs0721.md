---
title: "Compiler Error CS0721"
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
  - "CS0721"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0721"
ms.assetid: 7ab8591d-df8a-440c-80d6-61b438a935fd
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
# Compiler Error CS0721
'type': static types cannot be used as parameters  
  
 A static type is not meaningful as a parameter. Since no instances of static types may be created, no instance could ever be passed as a parameter.  
  
 The following sample generates CS0721:  
  
```  
// CS0721.cs  
public static class SC  
{  
}  
  
public class CMain  
{  
   public void F(SC sc)  // CS0721  
   {  
   }  
  
   public static void Main()  
   {  
   }  
}  
```