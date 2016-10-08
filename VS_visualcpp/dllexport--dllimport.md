---
title: "dllexport, dllimport"
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
ms.topic: language-reference
ms.assetid: ff95b645-ef55-4e72-b848-df44657b3208
caps.latest.revision: 13
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
# dllexport, dllimport
**Microsoft Specific**  
  
 The `dllexport` and **dllimport** storage-class attributes are Microsoft-specific extensions to the C and C++ languages. You can use them to export and import functions, data, and objects to or from a DLL.  
  
## Syntax  
  
```  
  
      __declspec( dllimport ) declarator  
__declspec( dllexport ) declarator  
```  
  
## Remarks  
 These attributes explicitly define the DLL's interface to its client, which can be the executable file or another DLL. Declaring functions as `dllexport` eliminates the need for a module-definition (.def) file, at least with respect to the specification of exported functions. The `dllexport` attribute replaces the `__export` keyword.  
  
 If a class is marked declspec(dllexport), any specializations of class templates in the class hierarchy are implicitly marked as declspec(dllexport). This means that class templates are explicitly instantiated and the class's members must be defined.  
  
 `dllexport` of a function exposes the function with its decorated name. For C++ functions, this includes name mangling. For C functions or functions that are declared as `extern "C"`, this includes platform-specific decoration that's based on the calling convention. For information on name decoration in C/C++ code, see [Decorated Names](../VS_visualcpp/Decorated-Names.md). No name decoration is applied to exported C functions or C++ `extern "C"` functions using the `__cdecl` calling convention.  
  
 To export an undecorated name, you can link by using a Module Definition (.def) file that defines the undecorated name in an EXPORTS section. For more information, see [EXPORTS](../VS_visualcpp/EXPORTS.md). Another way to export an undecorated name is to use a `#pragma comment(linker, "/export:``alias``=``decorated_name``")` directive in the source code.  
  
 When you declare `dllexport` or **dllimport**, you must use [extended attribute syntax](../VS_visualcpp/__declspec.md) and the `__declspec` keyword.  
  
## Example  
  
```cpp  
// Example of the dllimport and dllexport class attributes  
__declspec( dllimport ) int i;  
__declspec( dllexport ) void func();  
```  
  
 Alternatively, to make your code more readable, you can use macro definitions:  
  
```cpp  
#define DllImport   __declspec( dllimport )  
#define DllExport   __declspec( dllexport )  
  
DllExport void func();  
DllExport int i = 10;  
DllImport int j;  
DllExport int n;  
```  
  
 For more information, see:  
  
-   [Definitions and Declarations](../VS_visualcpp/Definitions-and-Declarations--C---.md)  
  
-   [Defining Inline C++ Functions with dllexport and dllimport](../VS_visualcpp/Defining-Inline-C---Functions-with-dllexport-and-dllimport.md)  
  
-   [General Rules and Limitations](../VS_visualcpp/General-Rules-and-Limitations.md)  
  
-   [Using dllimport and dllexport in C++ Classes](../VS_visualcpp/Using-dllimport-and-dllexport-in-C---Classes.md)  
  
 **END Microsoft Specific**  
  
## See Also  
 [__declspec](../VS_visualcpp/__declspec.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)