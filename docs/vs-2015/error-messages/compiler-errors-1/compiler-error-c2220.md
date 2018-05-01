---
title: "Compiler Error C2220 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2220"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2220"
ms.assetid: d610802c-64d7-40ad-a2a6-0ed0b6815a6c
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2220
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2220](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2220).  
  
  
warning treated as error - no object file generated  
  
 [/WX](../../build/reference/compiler-option-warning-level.md) tells the compiler to treat all warnings as errors. Because an error occurred, no object or executable file was generated.  
  
 This error only appears when the **/WX** flag is set and a warning occurs during compilation. To fix this error, you must eliminate every warning in your project.  
  
### To fix, use one of the following techniques  
  
-   Fix the problems that cause warnings in your project.  
  
-   Compile at a lower warning level—for example, use **/W3** instead of **/W4**.  
  
-   Use a [warning](../../preprocessor/warning.md) pragma to disable or suppress a specific warning.  
  
-   Don't use **/WX** to compile.

