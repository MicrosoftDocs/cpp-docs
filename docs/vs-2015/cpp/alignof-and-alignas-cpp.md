---
title: "alignof and alignas (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
ms.assetid: 1d18aa8a-9621-4fb5-86e5-4cc86d5187f4
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# alignof and alignas (C++)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [alignof and alignas (C++)](https://docs.microsoft.com/cpp/cpp/alignof-and-alignas-cpp).  
  
The `alignas` type specifier is a portable, C++ standard way to specify custom alignment of variables and user defined types. The `alignof` operator is likewise a standard, portable way to obtain the alignment of a specified type or variable.  
  
## Example  
 You can use `alignas` on a class, struck or union, or on individual members. When multiple `alignas` specifiers are encountered, the compiler will choose the strictest one, (the one with the largest value).  
  
```  
struct alignas(16) Bar  
{      
    int i;       // 4 bytes  
    int n;      // 4 bytes  
    alignas(4) char arr[3];  
    short s;          // 2 bytes  
};  
…  
cout << alignof(Bar) << endl; // output: 16  
  
```  
  
## See Also  
 [Alignment](../cpp/alignment-cpp-declarations.md)





