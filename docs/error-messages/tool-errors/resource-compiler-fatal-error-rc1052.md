---
title: "Resource Compiler Fatal Error RC1052 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RC1052"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC1052"
ms.assetid: 59803673-492b-44fa-80fa-df93b8aaf9fb
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Resource Compiler Fatal Error RC1052
compiler limit : #if or #ifdef blocks nested too deeply  
  
 The program exceeded the maximum allowable nesting levels for `#if` and `#ifdef` directives.  
  
 This error can be caused by include files that use these preprocessor directives.  
  
 To fix this issue, reduce the number of nested `#if` and `#ifdef` directives in your resource file. If the issue is caused by header files that are included in your resource file, reduce the number of nested `#if` and `#ifdef` directives in the header files. If this is not possible, consider creating and including a new header file in your resource file, by running the preprocessor on the existing included header files. For more information, see the [/P (Preprocess to a File)](../../build/reference/p-preprocess-to-a-file.md) compiler option.