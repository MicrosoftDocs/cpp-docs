---
title: "Fatal Error C1383"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C1383"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1383"
ms.assetid: ca224d14-d687-4fd6-80c2-8b82f28924ea
caps.latest.revision: 5
ms.author: "corob"
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
# Fatal Error C1383
compiler option /GL is incompatible with the installed version of common language runtime  
  
 C1383 occurs when you are using a previous version of the common language runtime with a newer compiler, and when you compile with **/clr** and **/GL.**  
  
 To resolve, either do not use **/GL** with **/clr** or install the version of the common language runtime that shipped with your compiler.  
  
 For more information, see [/clr (Common Language Runtime Compilation)](../buildref/-clr--common-language-runtime-compilation-.md) and [/GL (Whole Program Optimization)](../buildref/-gl--whole-program-optimization-.md).