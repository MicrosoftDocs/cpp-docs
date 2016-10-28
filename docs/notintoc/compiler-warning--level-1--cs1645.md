---
title: "Compiler Warning (level 1) CS1645"
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
  - "CS1645"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1645"
ms.assetid: ea45fb20-b696-4d4e-b893-edde9d96bd3a
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
# Compiler Warning (level 1) CS1645
Feature 'feature' is not part of the standardized ISO C# language specification, and may not be accepted by other compilers  
  
 The feature you are using is not part of the ISO standard. Code using this feature may not compile on other compilers.  
  
```  
// CS1645.cs  
// compile with: /W:1 /t:module /langversion:ISO-1  
[assembly:System.CLSCompliant(false)]  
// To supress the warning use the switch: /nowarn:1645  
[module:System.CLSCompliant(false)]   // CS1645  
class Test  
{  
}  
```