---
title: "Compiler Warning (level 1) CS3012"
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
  - "CS3012"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3012"
ms.assetid: 1f7555b4-61e4-4821-85c9-586301df4c5c
caps.latest.revision: 11
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
# Compiler Warning (level 1) CS3012
You cannot specify the CLSCompliant attribute on a module that differs from the CLSCompliant attribute on the assembly  
  
 In order for a module to be compliant with the Common Language Specification (CLS) through `[module:System.CLCSompliant(true)]`, it must be built with the [/target:module](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md) compiler option. For more information on the CLS, see [Language Independence and Language-Independent Components](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Example  
 The following example, when built without `/target:module`, generates CS3012:  
  
```  
// CS3012.cs  
// compile with: /W:1  
  
[module:System.CLSCompliant(true)]   // CS3012  
public class C  
{  
    public static void Main()  
    {  
    }  
}  
```