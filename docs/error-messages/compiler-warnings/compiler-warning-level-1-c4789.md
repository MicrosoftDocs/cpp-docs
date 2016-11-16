---
title: "Compiler Warning (Level 1) C4789 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4789"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4789"
ms.assetid: 5800c301-5afb-4af0-85c1-ceb54d775234
caps.latest.revision: 18
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
# Compiler Warning (Level 1) C4789
buffer 'identifier' of size N bytes will be overrun; M bytes will be written starting at offset L  
  
 Warns about buffer overrun when specific C run-time (CRT) functions are used, parameters are passed, and assignments are performed, such that the data sizes are known at compile time. This warning is for situations that might elude typical data-size mismatch detection.  
  
 The warning appears when data, whose length is known at compile time, is copied and put into a data block whose size is known at compile time to be too small for the data. The copy must be done by using the intrinsic form of one of the following CRT functions:  
  
-   [strcpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)  
  
-   [memset](../../c-runtime-library/reference/memset-wmemset.md)  
  
-   [memcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md), [wmemcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md)  
  
 The warning also appears when a parameter datatype is mismatched by using a cast, and then a copy assignment from an lvalue reference is attempted.  
  
 Visual C++ might generate this warning for a code path that does not ever execute. You can temporarily disable the warning by using `#pragma`, as shown in this example:  
  
 `#pragma(push)`  
  
 `#pragma warning ( disable : 4789 )`  
  
 `// unused code that generates compiler warning C4789`  
  
 `#pragma(pop)`  
  
 This keeps Visual C++ from generating the warning for that specific block of code. The `#pragma(push)` preserves the existing state before `#pragma warning(disable: 4789)` changes it. The `#pragma(pop)` restores the pushed state, and removes the effects of the `#pragma warning(disable:4789)`. For more information about the C++ preprocessor directive `#pragma`, see [warning](../../preprocessor/warning.md) and [Pragma Directives and the __Pragma Keyword](../../preprocessor/pragma-directives-and-the-pragma-keyword.md).  
  
## Example  
 The following sample generates C4789.  
  
```  
// C4789.cpp  
// compile with: /Oi /W1 /c  
#include <string.h>  
#include <stdio.h>  
  
int main()   
{  
    char a[20];  
    strcpy(a, "0000000000000000000000000\n");   // C4789  
  
    char buf2[20];  
    memset(buf2, 'a', 21);   // C4789  
  
    char c;  
    wchar_t w = 0;  
    memcpy(&c, &w, sizeof(wchar_t));  
}  
```  
  
## Example  
 The following sample also generates C4789.  
  
```  
// C4789b.cpp  
// compile with: /W1 /O2 /c  
// processor: x86  
short G;  
  
void main()  
{  
   int * p = (int *)&G;   
   *p = 3;   // C4789 - writes an int through a pointer to short  
}   
```