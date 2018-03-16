---
title: "Program and Linkage  (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: ["C++"]
ms.assetid: a6493ba0-24e2-4c89-956e-9da1dea660cb
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Program and Linkage  (C++)
A translation unit consists of an implementation file (.cpp, .hpp, .cxx, etc) and all the headers that it includes directly or indirectly. A program consists of one or more translation units linked together. The concept of *linkage* refers to the visibility of global symbols (such as variable, type names and function names) within the program as a whole across translation units. The concept of *scope* refers to symbols that are declared within a block such as a namespace, class, or function body. Such symbols are visible only when execution enters the block in which they are defined; the concept of linkage does not apply to them. 

Non-const global variables and free functions by default have external linkage; they are visible from any translation unit in the program. You can override this behavior by explicity declaring them as `static` which limits their visiblity to the same translation unit in which they are declared. This meaning of `static` is different than its meaning when applied to local variables. Variables declared as `const` have internal linkage by default. 

In a C++ program, each global symbol can be defined only once. 

Program execution begins in the translation unit that contains the **main** function. (For more information on translation units, see [Phases of Translation](../preprocessor/phases-of-translation.md), in the *Preprocessor Reference*.) For more information about the **main** function, see [Program Startup: the main Function](../cpp/main-program-startup.md).)  
  

from conformance updates:
Extern constexpr linkage
In earlier versions of Visual Studio, the compiler always gave a constexpr variable internal linkage even when the variable was marked extern. In Visual Studio 2017 version 15.5, a new compiler switch (/Zc:externConstexpr) enables correct standards-conforming behavior. Eventually this will become the default.

C++
Copy

extern constexpr int x = 10;
Output
Copy
error LNK2005: "int const x" already defined
If a header file contains a variable declared extern constexpr, it needs to be marked __declspec(selectany) in order to correctly have its duplicate declarations combined:

C++
Copy

extern constexpr __declspec(selectany) int x = 10;
## See Also  
 [Basic Concepts](../cpp/basic-concepts-cpp.md)