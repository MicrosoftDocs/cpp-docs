---
title: "__func__ | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__func__"
  - "__func___cpp"
dev_langs: 
  - "C++"
ms.assetid: a5299b8d-f0ee-4af2-91dd-8fb165e68798
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __func__
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__func__](https://docs.microsoft.com/cpp/cpp/func).  
  
C++11)** The predefined identifier __func\_\_ is implicitly defined as a string that contains the unqualified and unadorned name of the enclosing function. \__func\_\_ is mandated by the C++ standard and is not a Microsoft extension.  
  
## Syntax  
  
```vb  
__func__  
```  
  
## Return Value  
 Returns a null-terminated const char array of characters that constains the function name.  
  
## Example  
  
```  
  
#include <string>  
#include <iostream>  
  
namespace Test  
{  
    struct Foo  
    {  
        static void DoSomething(int i, std::string s)  
        {  
           std::cout << __func__ << std::endl; // Output: DoSomething  
        }  
    };  
}  
int main()  
{  
    Test::Foo::DoSomething(42, "Hello");  
  
    return 0;  
}  
  
```  
  
## Requirements  
 C++11





