---
title: "Compiler Warning (level 4) C4001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# Compiler Warning (level 4) C4001
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