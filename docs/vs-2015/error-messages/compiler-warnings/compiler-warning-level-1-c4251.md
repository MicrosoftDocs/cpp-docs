---
title: "Compiler Warning (level 1) C4251 | Microsoft Docs"
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
  - "C4251"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4251"
ms.assetid: a9992038-f0c2-4fc4-a9be-4509442cbc1e
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4251
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4251](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4251).  
  
  
identifier' : class 'type' needs to have dll-interface to be used by clients of class 'type2'  
  
 To minimize the possibility of data corruption when exporting a class with [__declspec(dllexport)](../../cpp/dllexport-dllimport.md), ensure that:  
  
-   All your static data is access through functions that are exported from the DLL.  
  
-   No inlined methods of your class can modify static data.  
  
-   No inlined methods of your class use CRT functions or other library functions use static data (see [Potential Errors Passing CRT Objects Across DLL Boundaries](../../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md) for more information).  
  
-   No methods of your class (regardless of inlining) can use types where the instantiation in the EXE and DLL have static data differences.  
  
 You can avoid exporting classes by defining a DLL that defines a class with virtual functions, and functions you can call to instantiate and delete objects of the type.  You can then just call virtual functions on the type.  
  
 For more information on exporting templates, see [http://support.microsoft.com/default.aspx?scid=KB;EN-US;168958](http://support.microsoft.com/default.aspx?scid=KB;EN-US;168958).  
  
 C4251 can be ignored if you are deriving from a type in the Standard C++ Library, compiling a debug release (**/MTd**) and where the compiler error message refers to _Container_base.  
  
```  
// C4251.cpp  
// compile with: /EHsc /MTd /W2 /c  
#include <vector>  
using namespace std;  
class Node;  
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4251  
```

