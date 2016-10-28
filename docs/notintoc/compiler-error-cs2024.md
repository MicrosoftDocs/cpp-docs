---
title: "Compiler Error CS2024"
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
  - "CS2023"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2024"
ms.assetid: 65cf7419-a5a6-4128-88af-176dc8dba14f
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
# Compiler Error CS2024
Invalid file section alignment number '#'  
  
 An invalid value was passed to the [/filealign](../Topic/-filealign%20\(C%23%20Compiler%20Options\).md) compiler option.  
  
 The following sample generates CS2024:  
  
```  
// CS2024.cs  
// compile with: /filealign:ex  
// CS2024 expected  
class MyClass  
{  
   public static void Main()  
   {  
   }  
}  
```