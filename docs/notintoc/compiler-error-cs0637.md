---
title: "Compiler Error CS0637"
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
  - "CS0637"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0637"
ms.assetid: 02f6964c-0fcc-4f81-8ebb-0330aecdde19
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
# Compiler Error CS0637
The FieldOffset attribute is not allowed on static or const fields  
  
 The [FieldOffset](frlrfsystemruntimeinteropservicesfieldoffsetattributeclasstopic) attribute cannot be used on fields marked with [static](../Topic/static%20\(C%23%20Reference\).md) or [const](../Topic/const%20\(C%23%20Reference\).md).  
  
 The following sample generates CS0637:  
  
```  
// CS0637.cs  
using System;  
using System.Runtime.InteropServices;  
  
[StructLayout(LayoutKind.Explicit)]  
public class MainClass  
{  
   [FieldOffset(3)]   // CS0637  
   public static int i;  
   public static void Main ()  
   {  
   }  
}  
```