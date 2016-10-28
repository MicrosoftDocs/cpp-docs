---
title: "Compiler Warning (level 1) CS1030"
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
  - "CS1030"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1030"
ms.assetid: 7c565abc-1366-4641-9383-ab8ba026ab96
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
# Compiler Warning (level 1) CS1030
\#warning: 'text'  
  
 Displays the text of a warning defined with the [#warning](../Topic/%23warning%20\(C%23%20Reference\).md) directive.  
  
 The following sample shows how to create a user-defined warning:  
  
```  
// CS1030.cs  
class Sample  
{  
   static void Main()  
   {  
      #warning Let's give a warning here   // CS1030  
   }  
}  
```