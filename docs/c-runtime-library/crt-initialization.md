---
title: "CRT Initialization | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRT initialization [C++]"
ms.assetid: e7979813-1856-4848-9639-f29c86b74ad7
caps.latest.revision: 5
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
# CRT Initialization
This topic describes how the CRT initializes global states in native code.  
  
 By default, the linker includes the CRT library, which provides its own startup code. This startup code initializes the CRT library, calls global initializers, and then calls the user-provided `main` function for console applications.  
  
## Initializing a Global Object  
 Consider the following code:  
  
```  
int func(void)  
{  
    return 3;  
}  
  
int gi = func();  
  
int main()  
{  
    return gi;  
}  
```  
  
 According to the C/C++ standard, `func()` must be called before `main()` is executed. But who calls it?  
  
 One way to determine this is to set a breakpoint in `func()`, debug the application, and examine the stack. This is possible because the CRT source code is included with Visual Studio.  
  
 When you browse the functions on the stack, you will find that the CRT is looping through a list of function pointers and calling each one as it encounters them. These functions are either similar to `func()` or constructors for class instances.  
  
 The CRT obtains the list of function pointers from the Visual C++ compiler. When the compiler sees a global initializer, it generates a dynamic initializer in the `.CRT$XCU` section (where `CRT` is the section name and `XCU` is the group name). To obtain a list of those dynamic initializers run the command **dumpbin /all main.obj**, and then search the `.CRT$XCU` section (when main.cpp is compiled as a C++ file, not a C file). It will be similar to the following:  
  
```  
SECTION HEADER #6  
.CRT$XCU name  
       0 physical address  
       0 virtual address  
       4 size of raw data  
     1F2 file pointer to raw data (000001F2 to 000001F5)  
     1F6 file pointer to relocation table  
       0 file pointer to line numbers  
       1 number of relocations  
       0 number of line numbers  
40300040 flags  
         Initialized Data  
         4 byte align  
         Read Only  
  
RAW DATA #6  
  00000000: 00 00 00 00                                      ....  
  
RELOCATIONS #6  
                                                Symbol    Symbol  
 Offset    Type              Applied To         Index     Name  
 --------  ----------------  -----------------  --------  ------  
 00000000  DIR32                      00000000         C  ??__Egi@@YAXXZ (void __cdecl `dynamic initializer for 'gi''(void))  
```  
  
 The CRT defines two pointers:  
  
-   `__xc_a` in `.CRT$XCA`  
  
-   `__xc_z` in `.CRT$XCZ`  
  
 Both groups do not have any other symbols defined except `__xc_a` and `__xc_z`.  
  
 Now, when the linker reads various `.CRT` groups, it combines them in one section and orders them alphabetically. This means that the user-defined global initializers (which the Visual C++ compiler puts in `.CRT$XCU`) will always come after `.CRT$XCA` and before `.CRT$XCZ`.  
  
 The section will resemble the following:  
  
```  
.CRT$XCA  
            __xc_a  
.CRT$XCU  
            Pointer to Global Initializer 1  
            Pointer to Global Initializer 2  
.CRT$XCZ  
            __xc_z  
```  
  
 So, the CRT library uses both `__xc_a` and `__xc_z` to determine the start and end of the global initializers list because of the way in which they are laid out in memory after the image is loaded.  
  
## See Also  
 [CRT Library Features](../c-runtime-library/crt-library-features.md)