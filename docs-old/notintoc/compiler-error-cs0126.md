---
title: "Compiler Error CS0126"
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
  - "CS0126"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0126"
ms.assetid: 15fb0f38-ac9d-4c09-a69f-398a4903d790
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
# Compiler Error CS0126
An object of a type convertible to 'type' is required  
  
 A return statement is present, but the statement does not return a value of the expected type. For more information, see [Properties](../Topic/Properties%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0126:  
  
```  
// CS0126.cs  
public class a  
{  
   public int i  
   {  
      set  
      {  
      }  
      get  
      {  
         return;   // CS0126, specify a value to return  
      }  
   }  
}  
```