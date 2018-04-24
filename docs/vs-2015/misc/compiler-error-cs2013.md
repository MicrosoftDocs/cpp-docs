---
title: "Compiler Error CS2013 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS2013"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2013"
ms.assetid: 8a57b4c8-02fc-4f73-b489-121ff468c17d
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS2013
Invalid image base number 'value'  
  
 An invalid value (not a number) was passed to the [/baseaddress](http://msdn.microsoft.com/library/ce13c965-dfe4-4433-94f5-63b476e3a608) compiler option.  
  
 The following sample generates CS2013:  
  
```  
// CS2013.cs  
// compile with: /target:library /baseaddress:x  
// CS2013 expected  
class MyClass  
{  
}  
```