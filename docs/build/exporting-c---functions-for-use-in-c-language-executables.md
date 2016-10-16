---
title: "Exporting C++ Functions for Use in C-Language Executables"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "functions [C++], C++ functions in C executables"
  - "exporting DLLs [C++], C++ functions in C executables"
  - "exporting functions [C++], C++ functions in C executables"
  - "functions [C++], exporting"
ms.assetid: 80b9e982-f52d-4312-a891-f73cc69f3c2b
caps.latest.revision: 7
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
# Exporting C++ Functions for Use in C-Language Executables
If you have functions in a DLL written in C++ that you want to access from a C-language module, you should declare these functions with C linkage instead of C++ linkage. Unless otherwise specified, the C++ compiler uses C++ type-safe naming (also known as name decoration) and C++ calling conventions, which can be difficult to call from C.  
  
 To specify C linkage, specify **extern** "**C**" for your function declarations. For example:  
  
```  
extern "C" __declspec( dllexport ) int MyFunc(long parm1);  
```  
  
## What do you want to do?  
  
-   [Export from a DLL using .def files](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Export from a DLL using __declspec(dllexport)](../build/exporting-from-a-dll-using-__declspec-dllexport-.md)  
  
-   [Export and import using AFX_EXT_CLASS](../build/exporting-and-importing-using-afx_ext_class.md)  
  
-   [Export C functions for use in C or C++-language executables](../build/exporting-c-functions-for-use-in-c-or-c---language-executables.md)  
  
-   [Determine which exporting method to use](../build/determining-which-exporting-method-to-use.md)  
  
-   [Import into an application using __declspec(dllimport)](../build/importing-into-an-application-using-__declspec-dllimport-.md)  
  
-   [Initialize a DLL](../build/initializing-a-dll.md)  
  
## What do you want to know more about?  
  
-   [Decorated names](../buildref/decorated-names.md)  
  
-   [Linkage specifications](assetId:///d2b0cff1-7798-4c38-9ac8-61c3bfe2bfb9)  
  
## See Also  
 [Exporting from a DLL](../build/exporting-from-a-dll.md)