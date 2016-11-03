---
title: "Compiler Error CS0525 | Microsoft Docs"
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
  - "CS0525"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0525"
ms.assetid: fcecfd4f-221f-41e6-a95c-1685be78926e
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
# Compiler Error CS0525
Interfaces cannot contain fields  
  
 An [interface](/dotnet/csharp/language-reference/keywords/interface) can contain methods and properties but not fields.  
  
 The following sample generates CS0525:  
  
```  
// CS0525.cs  
namespace x  
{  
   public interface clx  
   {  
      public int i;   // CS0525  
   }  
}  
```