---
title: "Compiler Error CS1008"
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
  - "CS1008"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1008"
ms.assetid: e595a431-2cf0-4cc1-998f-94aecb2a6db1
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
# Compiler Error CS1008
Type byte, sbyte, short, ushort, int, uint, long, or ulong expected  
  
 Certain data types, such as [enums](../Topic/enum%20\(C%23%20Reference\).md), can only be declared to hold data of specified types.  
  
 The following sample generates CS1008:  
  
```  
// CS1008.cs  
abstract public class clx  
{  
   enum splitch : char   // CS1008, char not valid type for enums  
   {  
      x, y, z  
   }  
  
   public static void Main()  
   {  
   }  
}  
```