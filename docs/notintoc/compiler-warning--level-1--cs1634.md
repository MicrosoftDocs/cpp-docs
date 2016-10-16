---
title: "Compiler Warning (level 1) CS1634"
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
  - "CS1634"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1634"
ms.assetid: 4fd00eeb-89e3-4c18-827d-9b00a4bd8c9a
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
# Compiler Warning (level 1) CS1634
Expected disable or restore  
  
 This error occurs if a #pragma warning clause is badly formed, such as if disable or restore was omitted. For more information, see the [#pragma warning](../Topic/%23pragma%20warning%20\(C%23%20Reference\).md) topic.  
  
## Example  
 The following sample generates CS1634:  
  
```  
// CS1634.cs  
// compile with: /W:1  
  
#pragma warning   // CS1634  
// Try this instead:  
// #pragma warning disable 0219  
  
class MyClass  
{  
  public static void Main()  
  {  
  }  
}  
```