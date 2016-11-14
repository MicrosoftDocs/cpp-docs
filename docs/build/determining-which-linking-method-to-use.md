---
title: "Determining Which Linking Method to Use | Microsoft Docs"
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
  - "implicit linking [C++]"
  - "explicit linking [C++]"
ms.assetid: 6b6d3fec-4711-4a30-af5b-354b965ecaec
caps.latest.revision: 9
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
# Determining Which Linking Method to Use
There are two types of linking: implicit linking and explicit linking.  
  
## Implicit Linking  
 [Implicit linking](../build/linking-implicitly.md) occurs when an application's code calls an exported DLL function. When the source code for the calling executable is compiled or assembled, the DLL function call generates an external function reference in the object code. To resolve this external reference, the application must link with the import library (.lib file) provided by the maker of the DLL.  
  
 The import library only contains code to load the DLL and to implement calls to functions in the DLL. Finding an external function in an import library informs the linker that the code for that function is in a DLL. To resolve external references to DLLs, the linker simply adds information to the executable file that tells the system where to find the DLL code when the process starts up.  
  
 When the system starts a program that contains dynamically linked references, it uses the information in the program's executable file to locate the required DLLs. If it cannot locate the DLL, the system terminates the process and displays a dialog box that reports the error. Otherwise, the system maps the DLL modules into the process's address space.  
  
 If any of the DLLs has an entry-point function (for initialization and termination code), the operating system calls the function. One of the parameters passed to the entry-point function specifies a code that indicates the DLL is attaching to the process. If the entry-point function does not return TRUE, the system terminates the process and reports the error.  
  
 Finally, the system modifies the executable code of the process to provide starting addresses for the DLL functions.  
  
 Like the rest of a program's code, DLL code is mapped into the address space of the process when the process starts up and it is loaded into memory only when needed. As a result, the **PRELOAD** and **LOADONCALL** code attributes used by .def files to control loading in previous versions of Windows no longer have meaning.  
  
## Explicit Linking  
 Most applications use implicit linking because it is the easiest linking method to use. However, there are times when [explicit linking](../build/linking-explicitly.md) is necessary. Here are some common reasons to use explicit linking:  
  
-   The application does not know the name of a DLL that it will have to load until run time. For example, the application might need to obtain the name of the DLL and the exported functions from a configuration file.  
  
-   A process using implicit linking is terminated by the operating system if the DLL is not found at process startup. A process using explicit linking is not terminated in this situation and can attempt to recover from the error. For example, the process could notify the user of the error and have the user specify another path to the DLL.  
  
-   A process using implicit linking is also terminated if any of the DLLs it is linked to have a `DllMain` function that fails. A process using explicit linking is not terminated in this situation.  
  
-   An application that implicitly links to many DLLs can be slow to start because Windows loads all the DLLs when the application loads. To improve startup performance, an application can implicitly link to those DLLs needed immediately after loading and wait to explicitly link to the other DLLs when they are needed.  
  
-   Explicit linking eliminates the need to link the application with an import library. If changes in the DLL cause the export ordinals to change, applications using explicit linking do not have to relink (assuming they are calling **GetProcAddress** with a name of a function and not with an ordinal value), whereas applications using implicit linking must relink to the new import library.  
  
 Here are two hazards of explicit linking to be aware of:  
  
-   If the DLL has a `DllMain` entry point function, the operating system calls the function in the context of the thread that called **LoadLibrary**. The entry-point function is not called if the DLL is already attached to the process because of a previous call to **LoadLibrary** with no corresponding call to the **FreeLibrary** function. Explicit linking can cause problems if the DLL is using a `DllMain` function to perform initialization for each thread of a process because threads existing when **LoadLibrary** (or `AfxLoadLibrary`) is called will not be initialized.  
  
-   If a DLL declares static-extent data as **__declspec(thread)**, it can cause a protection fault if explicitly linked. After the DLL is loaded with **LoadLibrary**, it causes a protection fault whenever the code references this data. (Static-extent data includes both global and local static items.) Therefore, when you create a DLL, you should either avoid using thread-local storage or inform DLL users about potential pitfalls (in case they attempt dynamic loading).  
  
## What do you want to do?  
  
-   [Link implicitly](../build/linking-implicitly.md)  
  
-   [Link explicitly](../build/linking-explicitly.md)  
  
## What do you want to know more about?  
  
-   [The search path used by Windows to locate a DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
  
-   [LoadLibrary and AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
  
-   [GetProcAddress](../build/getprocaddress.md)  
  
-   [FreeLibrary and AfxFreeLibrary](../build/freelibrary-and-afxfreelibrary.md)  
  
-   [Using thread local storage in a dynamic-link library (Windows SDK)](http://msdn.microsoft.com/library/windows/desktop/ms686997)  
  
## See Also  
 [Linking an Executable to a DLL](../build/linking-an-executable-to-a-dll.md)