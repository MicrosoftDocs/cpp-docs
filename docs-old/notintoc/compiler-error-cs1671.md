---
title: "Compiler Error CS1671"
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
  - "CS1671"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1671"
ms.assetid: 34255d2b-6ff6-4ac1-b617-3199e16726cf
caps.latest.revision: 6
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
# Compiler Error CS1671
A namespace declaration cannot have modifiers or attributes  
  
 Modifiers are not meaningful when applied to a namespace, so they are not allowed.  
  
 The following sample generates CS1671:  
  
```  
// CS1671.cs  
public namespace NS // CS1671  
{  
  
}  
```