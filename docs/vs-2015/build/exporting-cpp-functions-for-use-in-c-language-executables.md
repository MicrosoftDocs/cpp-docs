---
title: "Exporting C++ Functions for Use in C-Language Executables | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "functions [C++], C++ functions in C executables"
  - "exporting DLLs [C++], C++ functions in C executables"
  - "exporting functions [C++], C++ functions in C executables"
  - "functions [C++], exporting"
ms.assetid: 80b9e982-f52d-4312-a891-f73cc69f3c2b
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Exporting C++ Functions for Use in C-Language Executables
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Exporting C++ Functions for Use in C-Language Executables](https://docs.microsoft.com/cpp/build/exporting-cpp-functions-for-use-in-c-language-executables).  
  
  
If you have functions in a DLL written in C++ that you want to access from a C-language module, you should declare these functions with C linkage instead of C++ linkage. Unless otherwise specified, the C++ compiler uses C++ type-safe naming (also known as name decoration) and C++ calling conventions, which can be difficult to call from C.  
  
 To specify C linkage, specify **extern** "**C**" for your function declarations. For example:  
  
```  
extern "C" __declspec( dllexport ) int MyFunc(long parm1);  
```  
  
## What do you want to do?  
  
-   [Export from a DLL using .def files](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Export from a DLL using __declspec(dllexport)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Export and import using AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Export C functions for use in C or C++-language executables](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Determine which exporting method to use](../build/determining-which-exporting-method-to-use.md)  
  
-   [Import into an application using __declspec(dllimport)](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Initialize a DLL](../build/initializing-a-dll.md)  
  
## What do you want to know more about?  
  
-   [Decorated names](../build/reference/decorated-names.md)  
  
-   [Linkage specifications](http://msdn.microsoft.com/en-us/d2b0cff1-7798-4c38-9ac8-61c3bfe2bfb9)  
  
## See Also  
 [Exporting from a DLL](../build/exporting-from-a-dll.md)

