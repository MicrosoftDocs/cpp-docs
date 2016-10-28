---
title: "Compiler Error CS1681"
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
  - "CS1681"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1681"
ms.assetid: 99934e15-1db8-4b71-9da8-a681a1d47407
caps.latest.revision: 9
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
# Compiler Error CS1681
You cannot redefine the global extern alias  
  
 The global alias is already defined to include all unaliased references and therefore cannot be redefined.  
  
## Example  
 The following sample generates CS1681.  
  
```  
// CS1681.cs  
// compile with: /reference:global=System.dll  
// CS1681 expected  
  
// try this instead: /reference:System.dll  
class A  
{  
   static void Main() {}  
}  
```