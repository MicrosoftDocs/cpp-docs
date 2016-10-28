---
title: "Compiler Warning (level 1) CS3013"
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
  - "CS3013"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3013"
ms.assetid: 00b3bbe1-f2a0-465c-be0e-1af700c5753d
caps.latest.revision: 9
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
# Compiler Warning (level 1) CS3013
Added modules must be marked with the CLSCompliant attribute to match the assembly  
  
 A module that was compiled with the [/target:module](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md) compiler option was added to a compilation with [/addmodule](../Topic/-addmodule%20\(C%23%20Compiler%20Options\).md). However, the module's compliance with the Common Language Specification (CLS) does not agree with the CLS state of the current compilation.  
  
 CLS compliance is indicated with the module attribute. For example, `[module:CLSCompliant(true)]` indicates that the module is CLS compliant, and `[module:CLSCompliant(false)]` indicates that the module is not CLS compliant. The default is `[module:CLSCompliant(false)]`. For more information on the CLS, see [Language Independence and Language-Independent Components](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).