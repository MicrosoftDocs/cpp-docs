---
title: "Compiler Error CS0145"
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
  - "CS0145"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0145"
ms.assetid: e5f9a90f-1700-4e6a-8f82-23d0c0287b85
caps.latest.revision: 8
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
# Compiler Error CS0145
A const field requires a value to be provided  
  
 You must initialize a [const](../Topic/const%20\(C%23%20Reference\).md) variable. For more information, see [Constants](../Topic/Constants%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0145:  
  
```  
// CS0145.cs  
class MyClass  
{  
   const int i;   // CS0145  
   // try the following line instead  
   // const int i = 0;  
  
   public static void Main()  
   {  
   }  
}  
```