---
title: "Compiler Error CS0678 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0678"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0678"
ms.assetid: ca389fc9-da78-4e16-b68c-782f90b17c83
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
# Compiler Error CS0678
'variable': a field can not be both volatile and readonly  
  
 Use of the [volatile](/dotnet/csharp/language-reference/keywords/volatile) and [readonly](/dotnet/csharp/language-reference/keywords/readonly) keywords is mutually exclusive.  
  
 The following sample generates CS0678:  
  
```  
// CS0678.cs  
using System;  
  
class TestClass  
{  
   private readonly volatile int i;   // CS0678  
   // try the following line instead  
   // private volatile int i;  
  
   public static void Main()  
   {  
   }  
}  
```