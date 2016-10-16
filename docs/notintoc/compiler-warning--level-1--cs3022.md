---
title: "Compiler Warning (level 1) CS3022"
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
  - "CS3022"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3022"
ms.assetid: 9340645c-10c3-4e21-a825-3f05fae02ff7
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
# Compiler Warning (level 1) CS3022
CLSCompliant attribute has no meaning when applied to parameters. Try putting it on the method instead.  
  
 Method parameters are not checked for CLS Compliance, since the CLS Compliance rules apply to methods and type declarations.  
  
## Example  
 The following sample generates CS3022:  
  
```  
// CS3022.cs  
// compile with: /W:1  
  
using System;  
  
[assembly: CLSCompliant(true)]  
[CLSCompliant(true)]  
public class C  
{  
    public void F([CLSCompliant(true)] int i)  
    {  
    }  
  
    public static void Main()  
    {  
    }  
}  
```