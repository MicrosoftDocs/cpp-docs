---
title: "Compiler Error CS0143"
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
  - "CS0143"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0143"
ms.assetid: dfe6f6ba-dec9-49bd-9d5b-3dc4743bd940
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
# Compiler Error CS0143
The type 'class' has no constructors defined  
  
 There is no appropriate constructor available. This is the case for built-in numeric value types, which are initialized simply by assigning a value to them.  
  
 The following sample generates CS0143:  
  
```  
// CS0143.cs  
class MyClass  
{  
   static public void Main ()  
   {  
      double d = new double(4.5);   // CS0143  
      // Try this line instead:  
      // double d = 4.5;  
   }  
}  
```