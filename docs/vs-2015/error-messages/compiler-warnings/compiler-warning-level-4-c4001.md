---
title: "Compiler Warning (level 4) C4001 | Microsoft Docs"
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
  - "C4001"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4001"
ms.assetid: 414a47fe-d597-425e-9374-6a569231dc0a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4001
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4001](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4001).  
  
  
nonstandard extension 'single line comment' was used  
  
 Single-line comments are standard in C++ and nonstandard in C. Under strict ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), C files that contain single-line comments, generate C4001 due to the usage of a nonstandard extension. Since single-line comments are standard in C++, C files containing single-line comments do not produce C4001 when compiling with Microsoft extensions (/Ze).  
  
## Example  
 To disable warning, uncomment [#pragma warning(disable:4001)](../../preprocessor/warning.md).  
  
```  
// C4001.cpp  
// compile with: /W4 /Za /TC  
// #pragma warning(disable:4001)  
int main()  
{  
   // single-line comment in main  
   // C4001  
}  
```

