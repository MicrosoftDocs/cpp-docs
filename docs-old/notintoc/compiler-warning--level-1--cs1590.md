---
title: "Compiler Warning (level 1) CS1590"
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
  - "CS1590"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1590"
ms.assetid: 0d6e5594-d6a6-43bf-8aa8-a452fa5748df
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
# Compiler Warning (level 1) CS1590
Invalid XML include element -- Missing file attribute  
  
 A path or doc attribute, passed to the [\<include>](../Topic/%3Cinclude%3E%20\(C%23%20Programming%20Guide\).md) tag, was missing or incomplete.  
  
 The following sample generates CS1590:  
  
```  
// CS1590.cs  
// compile with: /W:1 /doc:x.xml  
  
/// <include path='MyDocs/MyMembers[@name="test"]/*' />   // CS1590  
// try the following line instead  
// /// <include file='x.doc' path='MyDocs/MyMembers[@name="test"]/*' />  
class Test  
{  
   public static void Main()  
   {  
   }  
}  
```