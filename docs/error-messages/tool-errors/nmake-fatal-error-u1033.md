---
title: "NMAKE Fatal Error U1033 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["U1033"]
dev_langs: ["C++"]
helpviewer_keywords: ["U1033"]
ms.assetid: c146f7b5-7d5c-4329-a522-28a648546016
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# NMAKE Fatal Error U1033
syntax error : 'string' unexpected  
  
 The string is not part of the valid syntax for a makefile.  
  
### To fix by checking the following possible causes  
  
1.  If the closing set of angle brackets (**<<**) for an inline file are not at the beginning of a line, the following error occurs:  
  
    ```  
    syntax error : 'EOF' unexpected  
    ```  
  
2.  If a macro definition in the makefile contained an equal sign (**=**) without a preceding name or if the name being defined is a macro that expands to nothing, the following error occurs:  
  
    ```  
    syntax error : '=' unexpected  
    ```  
  
3.  If the semicolon (**;**) in a comment line in TOOLS.INI is not at the beginning of the line, the following error occurs:  
  
    ```  
    syntax error : ';' unexpected  
    ```  
  
4.  If the makefile has been formatted by a word processor, the following error can occur:  
  
    ```  
    syntax error : ':' unexpected  
    ```