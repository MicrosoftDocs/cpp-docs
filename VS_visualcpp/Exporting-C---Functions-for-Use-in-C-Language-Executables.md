---
title: "Exporting C++ Functions for Use in C-Language Executables"
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
ms.assetid: 80b9e982-f52d-4312-a891-f73cc69f3c2b
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
# Exporting C++ Functions for Use in C-Language Executables
If you have functions in a DLL written in C++ that you want to access from a C-language module, you should declare these functions with C linkage instead of C++ linkage. Unless otherwise specified, the C++ compiler uses C++ type-safe naming (also known as name decoration) and C++ calling conventions, which can be difficult to call from C.  
  
 To specify C linkage, specify **extern** "**C**" for your function declarations. For example:  
  
```  
extern "C" __declspec( dllexport ) int MyFunc(long parm1);  
```  
  
## What do you want to do?  
  
-   [Export from a DLL using .def files](../VS_visualcpp/Exporting-from-a-DLL-Using-DEF-Files.md)  
  
-   [Export from a DLL using __declspec(dllexport)](../VS_visualcpp/Exporting-from-a-DLL-Using-__declspec-dllexport-.md)  
  
-   [Export and import using AFX_EXT_CLASS](../VS_visualcpp/Exporting-and-Importing-Using-AFX_EXT_CLASS.md)  
  
-   [Export C functions for use in C or C++-language executables](../VS_visualcpp/Exporting-C-Functions-for-Use-in-C-or-C---Language-Executables.md)  
  
-   [Determine which exporting method to use](../VS_visualcpp/Determining-Which-Exporting-Method-to-Use.md)  
  
-   [Import into an application using __declspec(dllimport)](../VS_visualcpp/Importing-into-an-Application-Using-__declspec-dllimport-.md)  
  
-   [Initialize a DLL](../VS_visualcpp/Initializing-a-DLL.md)  
  
## What do you want to know more about?  
  
-   [Decorated names](../VS_visualcpp/Decorated-Names.md)  
  
-   [Linkage specifications](assetId:///d2b0cff1-7798-4c38-9ac8-61c3bfe2bfb9)  
  
## See Also  
 [Exporting from a DLL](../VS_visualcpp/Exporting-from-a-DLL.md)