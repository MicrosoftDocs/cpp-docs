---
title: "Exporting C Functions for Use in C or C++ Language Executables"
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
  - "functions [C], exporting"
  - "functions [C], C or C++ executables and"
  - "__cplusplus macro"
  - "exporting DLLs [C++], C functions in C++ executables"
  - "exporting functions [C++], C functions in C++ executables"
ms.assetid: b51d6e5e-37cf-4c1c-b0bf-fcf188c82f00
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
# Exporting C Functions for Use in C or C++ Language Executables
If you have functions in a DLL written in C that you want to access from a C language or C++ language module, you should use the **__cplusplus** preprocessor macro to determine which language is being compiled, and then declare these functions with C linkage if being used from a C++ language module. If you use this technique and provide header files for your DLL, these functions can be used by C and C++ users with no change.  
  
 The following code shows a header file that can be used by C and C++ client applications:  
  
```  
// MyCFuncs.h  
#ifdef __cplusplus  
extern "C" {  // only need to export C interface if  
              // used by C++ source code  
#endif  
  
__declspec( dllimport ) void MyCFunc();  
__declspec( dllimport ) void AnotherCFunc();  
  
#ifdef __cplusplus  
}  
#endif  
```  
  
 If you need to link C functions to your C++ executable and the function declaration header files have not used the above technique, in the C++ source file, do the following to prevent the compiler from decorating the C function names:  
  
```  
extern "C" {  
#include "MyCHeader.h"  
}  
```  
  
## What do you want to do?  
  
-   [Export from a DLL using .def files](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Export from a DLL using __declspec(dllexport)](../build/exporting-from-a-dll-using-__declspec-dllexport-.md)  
  
-   [Export and import using AFX_EXT_CLASS](../build/exporting-and-importing-using-afx_ext_class.md)  
  
-   [Determine which exporting method to use](../build/determining-which-exporting-method-to-use.md)  
  
-   [Import into an application using __declspec(dllimport)](../build/importing-into-an-application-using-__declspec-dllimport-.md)  
  
-   [Initialize a DLL](../build/initializing-a-dll.md)  
  
## What do you want to know more about?  
  
-   [Decorated names](../buildref/decorated-names.md)  
  
-   [Linkage specifications](assetId:///d2b0cff1-7798-4c38-9ac8-61c3bfe2bfb9)  
  
## See Also  
 [Exporting from a DLL](../build/exporting-from-a-dll.md)