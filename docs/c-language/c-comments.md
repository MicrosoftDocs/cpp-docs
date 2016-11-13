---
title: "C Comments | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "code comments, C code"
  - "comments, documenting code"
  - "comments, C code"
  - "/* */ comment delimiters"
  - "comments"
ms.assetid: 0f5f2825-e673-49e7-8669-94e2f5294989
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
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
# C Comments
A "comment" is a sequence of characters beginning with a forward slash/asterisk combination (**/\***) that is treated as a single white-space character by the compiler and is otherwise ignored. A comment can include any combination of characters from the representable character set, including newline characters, but excluding the "end comment" delimiter (**\*/**). Comments can occupy more than one line but cannot be nested.  
  
 Comments can appear anywhere a white-space character is allowed. Since the compiler treats a comment as a single white-space character, you cannot include comments within tokens. The compiler ignores the characters in the comment.  
  
 Use comments to document your code. This example is a comment accepted by the compiler:  
  
```  
/* Comments can contain keywords such as  
   for and while without generating errors. */  
```  
  
 Comments can appear on the same line as a code statement:  
  
```  
printf( "Hello\n" );  /* Comments can go here */  
```  
  
 You can choose to precede functions or program modules with a descriptive comment block:  
  
```  
/* MATHERR.C illustrates writing an error routine   
 * for math functions.   
 */   
```  
  
 Since comments cannot contain nested comments, this example causes an error:  
  
```  
/* Comment out this routine for testing   
  
   /* Open file */  
    fh = _open( "myfile.c", _O_RDONLY );  
    .  
    .  
    .  
 */  
```  
  
 The error occurs because the compiler recognizes the first `*/`, after the words `Open file`, as the end of the comment. It tries to process the remaining text and produces an error when it finds the `*/` outside a comment.  
  
 While you can use comments to render certain lines of code inactive for test purposes, the preprocessor directives `#if` and `#endif` and conditional compilation are a useful alternative for this task. For more information, see [Preprocessor Directives](../preprocessor/preprocessor-directives.md) in the *Preprocessor Reference*.  
  
 **Microsoft Specific**  
  
 The Microsoft compiler also supports single-line comments preceded by two forward slashes (**//**). If you compile with /Za (ANSI standard), these comments generate errors. These comments cannot extend to a second line.  
  
```  
// This is a valid comment  
```  
  
 Comments beginning with two forward slashes (**//**) are terminated by the next newline character that is not preceded by an escape character. In the next example, the newline character is preceded by a backslash (**\\**), creating an "escape sequence." This escape sequence causes the compiler to treat the next line as part of the previous line. (For more information, see [Escape Sequences](../c-language/escape-sequences.md).)  
  
```  
// my comment \  
    i++;   
```  
  
 Therefore, the `i++;` statement is commented out.  
  
 The default for Microsoft C is that the Microsoft extensions are enabled. Use /Za to disable these extensions.  
  
 **END Microsoft Specific**  
  
## See Also  
 [C Tokens](../c-language/c-tokens.md)