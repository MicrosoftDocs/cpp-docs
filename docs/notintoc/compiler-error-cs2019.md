---
title: "Compiler Error CS2019"
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
  - "CS2019"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2019"
ms.assetid: eafd2531-8b3a-499c-9e12-a605a011396f
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
# Compiler Error CS2019
Invalid target type for /target: must specify 'exe', 'winexe', 'library', or 'module'  
  
 The [/target](../Topic/-target%20\(C%23%20Compiler%20Options\).md) compiler option was used, but an invalid parameter was passed. To resolve this error, recompile the program using the form of the **/target** option that is appropriate to your output file.  
  
 The following sample generates CS2017:  
  
```  
// CS2019.cs  
// compile with: /target:libra  
// CS2019 expected  
class MyClass  
{  
}  
```