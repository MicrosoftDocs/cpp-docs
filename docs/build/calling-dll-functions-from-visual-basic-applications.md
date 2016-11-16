---
title: "Calling DLL Functions from Visual Basic Applications | Microsoft Docs"
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
  - "functions [C++], calling DLL functions from Visual Basic"
  - "DLL functions [C++]"
  - "function calls [C++], DLL functions"
  - "DLLs [C++], calling"
  - "calling DLL functions from VB applications [C++]"
  - "__stdcall keyword [C++]"
  - "DLL functions [C++], calling"
ms.assetid: 282f7fbf-a0f2-4b9f-b277-1982710be56c
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
# Calling DLL Functions from Visual Basic Applications
For Visual Basic applications (or applications in other languages such as Pascal or Fortran) to call functions in a C/C++ DLL, the functions must be exported using the correct calling convention without any name decoration done by the compiler.  
  
 `__stdcall` creates the correct calling convention for the function (the called function cleans up the stack and parameters are passed from right to left) but decorates the function name differently. So, when **__declspec(dllexport)** is used on an exported function in a DLL, the decorated name is exported.  
  
 The `__stdcall` name decoration prefixes the symbol name with an underscore (_) and appends the symbol with an at sign (@) character followed by the number of bytes in the argument list (the required stack space). As a result, the function when declared as:  
  
```  
int __stdcall func (int a, double b)  
```  
  
 is decorated as:  
  
```  
_func@12  
```  
  
 The C calling convention (`__cdecl`) decorates the name as `_func`.  
  
 To get the decorated name, use [/MAP](../build/reference/map-generate-mapfile.md). Use of **__declspec(dllexport)** does the following:  
  
-   If the function is exported with the C calling convention (**_cdecl**), it strips the leading underscore (_) when the name is exported.  
  
-   If the function being exported does not use the C calling convention (for example, `__stdcall`), it exports the decorated name.  
  
 Because there is no way to override where the stack cleanup occurs, you must use `__stdcall`. To undecorate names with `__stdcall`, you must specify them by using aliases in the EXPORTS section of the .def file. This is shown as follows for the following function declaration:  
  
```  
int  __stdcall MyFunc (int a, double b);  
void __stdcall InitCode (void);  
```  
  
 In the .DEF file:  
  
```  
EXPORTS  
   MYFUNC=_MyFunc@12  
   INITCODE=_InitCode@0  
```  
  
 For DLLs to be called by programs written in Visual Basic, the alias technique shown in this topic is needed in the .def file. If the alias is done in the Visual Basic program, use of aliasing in the .def file is not necessary. It can be done in the Visual Basic program by adding an alias clause to the [Declare](/dotnet/articles/visual-basic/language-reference/statements/declare-statement) statement.  
  
## What do you want to know more about?  
  
-   [Exporting from a DLL](../build/exporting-from-a-dll.md)  
  
-   [Exporting from a DLL using .DEF files](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Exporting from a DLL using __declspec(dllexport)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Exporting C++ functions for use in C-language executables](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Determining which exporting method to use](../build/determining-which-exporting-method-to-use.md)  
  
-   [Decorated names](../build/reference/decorated-names.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)