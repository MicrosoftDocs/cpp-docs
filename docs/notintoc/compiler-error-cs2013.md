---
title: "Compiler Error CS2013"
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
  - "CS2013"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2013"
ms.assetid: 8a57b4c8-02fc-4f73-b489-121ff468c17d
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
# Compiler Error CS2013
Invalid image base number 'value'  
  
 An invalid value (not a number) was passed to the [/baseaddress](../Topic/-baseaddress%20\(C%23%20Compiler%20Options\).md) compiler option.  
  
 The following sample generates CS2013:  
  
```  
// CS2013.cs  
// compile with: /target:library /baseaddress:x  
// CS2013 expected  
class MyClass  
{  
}  
```