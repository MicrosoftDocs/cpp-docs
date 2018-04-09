---
title: "Program and Linkage  (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "04/06/2018"
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

In a C++ program, each global symbol can be defined only once, even if the program consists of multiple translation units. A translation unit consists of an implementation file (.cpp, .hpp, .cxx, etc) and all the headers that it includes directly or indirectly. A program consists of one or more translation units linked together. 

## Linkage vs. scope

The concept of *linkage* refers to the visibility of global symbols (such as variables, type names and function names) within the program as a whole across translation units. The concept of *scope* refers to symbols that are declared within a block such as a namespace, class, or function body. Such symbols are visible only within the scope in which they are defined; the concept of linkage does not apply to them. 

## External vs. internal linkage

Non-const global variables and free functions by default have external linkage; they are visible from any translation unit in the program. When a name has internal linkage, the same name may exist in another translation unit, in which case it refers to a different object or a different class. You can force a global name to have internal linkage by explicity declaring it as **static**. This limits their visiblity to the same translation unit in which they are declared. Note that in this context, **static** means something different than when applied to local variables.

The following objects have internal linkage by default:
- const objects
- constexpr objects
- typedefs
- static objects in namespace scope

To give a const object external linkage, declare it as **extern** and assign it a value:

```cpp
extern const int value = 42;
```

See [extern](using-extern-to-specify-linkage.md) for more information.

## Extern constexpr linkage

In Visual Studio 2017 version 15.3 and earlier, the compiler always gave a constexpr variable internal linkage even when the variable was marked extern. In Visual Studio 2017 version 15.5, a new compiler switch ([/Zc:externConstexpr](../build/reference/zc-externconstexpr.md)) enables correct standards-conforming behavior. Eventually this will become the default.

```cpp
extern constexpr int x = 10; //error LNK2005: "int const x" already defined
```

If a header file contains a variable declared extern constexpr, it needs to be marked **__declspec(selectany)** in order to correctly have its duplicate declarations combined:

```cpp
extern constexpr __declspec(selectany) int x = 10;
```

## See Also  
 [Basic Concepts](../cpp/basic-concepts-cpp.md)