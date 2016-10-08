---
title: "Calling DLL Functions from Visual Basic Applications"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 282f7fbf-a0f2-4b9f-b277-1982710be56c
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
  
 To get the decorated name, use [/MAP](../VS_visualcpp/-MAP--Generate-Mapfile-.md). Use of **__declspec(dllexport)** does the following:  
  
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
  
 For DLLs to be called by programs written in Visual Basic, the alias technique shown in this topic is needed in the .def file. If the alias is done in the Visual Basic program, use of aliasing in the .def file is not necessary. It can be done in the Visual Basic program by adding an alias clause to the [Declare](../Topic/Declare%20Statement.md) statement.  
  
## What do you want to know more about?  
  
-   [Exporting from a DLL](../VS_visualcpp/Exporting-from-a-DLL.md)  
  
-   [Exporting from a DLL using .DEF files](../VS_visualcpp/Exporting-from-a-DLL-Using-DEF-Files.md)  
  
-   [Exporting from a DLL using __declspec(dllexport)](../VS_visualcpp/Exporting-from-a-DLL-Using-__declspec-dllexport-.md)  
  
-   [Exporting C++ functions for use in C-language executables](../VS_visualcpp/Exporting-C---Functions-for-Use-in-C-Language-Executables.md)  
  
-   [Determining which exporting method to use](../VS_visualcpp/Determining-Which-Exporting-Method-to-Use.md)  
  
-   [Decorated names](../VS_visualcpp/Decorated-Names.md)  
  
## See Also  
 [DLLs in Visual C++](../VS_visualcpp/DLLs-in-Visual-C--.md)