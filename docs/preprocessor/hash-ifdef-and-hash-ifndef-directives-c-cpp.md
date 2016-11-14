---
title: "#ifdef and #ifndef Directives (C-C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "#ifndef"
  - "#ifdef"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#ifdef directive"
  - "preprocessor, directives"
  - "ifdef directive (#ifdef)"
  - "ifndef directive (#ifndef)"
  - "#ifndef directive"
ms.assetid: 2b0be69d-9e72-45d8-8e24-e4130fb2455b
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
# #ifdef and #ifndef Directives (C/C++)
The **#ifdef** and **#ifndef** directives perform the same task as the `#if` directive when it is used with **defined**( *identifier* ).  
  
## Syntax  
  
```  
#ifdef identifier  
#ifndef identifier  
  
// equivalent to  
#if defined identifier  
#if !defined identifier  
```  
  
## Remarks  
 You can use the **#ifdef** and **#ifndef** directives anywhere `#if` can be used. The **#ifdef** *identifier* statement is equivalent to `#if 1` when *identifier* has been defined, and it is equivalent to `#if 0` when *identifier* has not been defined or has been undefined with the `#undef` directive. These directives check only for the presence or absence of identifiers defined with `#define`, not for identifiers declared in the C or C++ source code.  
  
 These directives are provided only for compatibility with previous versions of the language. The **defined(** *identifier* **)** constant expression used with the `#if` directive is preferred.  
  
 The **#ifndef** directive checks for the opposite of the condition checked by **#ifdef**. If the identifier has not been defined (or its definition has been removed with `#undef`), the condition is true (nonzero). Otherwise, the condition is false (0).  
  
 **Microsoft Specific**  
  
 The *identifier* can be passed from the command line using the /D option. Up to 30 macros can be specified with /D.  
  
 This is useful for checking whether a definition exists, because a definition can be passed from the command line. For example:  
  
```  
// ifdef_ifndef.CPP  
// compile with: /Dtest /c  
#ifndef test  
#define final  
#endif  
```  
  
 **END Microsoft Specific**  
  
## See Also  
 [Preprocessor Directives](../preprocessor/preprocessor-directives.md)