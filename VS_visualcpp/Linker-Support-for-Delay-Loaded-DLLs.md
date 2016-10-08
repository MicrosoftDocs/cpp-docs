---
title: "Linker Support for Delay-Loaded DLLs"
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
ms.assetid: b2d7e449-2809-42b1-9c90-2c0ca5e31a14
caps.latest.revision: 9
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
# Linker Support for Delay-Loaded DLLs
The Visual C++ linker now supports the delayed loading of DLLs. This relieves you of the need to use the Windows SDK functions **LoadLibrary** and **GetProcAddress** to implement DLL delayed loading.  
  
 Before Visual C++ 6.0, the only way to load a DLL at run time was by using **LoadLibrary** and **GetProcAddress**; the operating system would load the DLL when the executable or DLL using it was loaded.  
  
 Beginning with Visual C++ 6.0, when statically linking with a DLL, the linker provides options to delay load the DLL until the program calls a function in that DLL.  
  
 An application can delay load a DLL using the [/DELAYLOAD (Delay Load Import)](../VS_visualcpp/-DELAYLOAD--Delay-Load-Import-.md) linker option with a helper function (default implementation provided by Visual C++). The helper function will load the DLL at run time by calling **LoadLibrary** and **GetProcAddress** for you.  
  
 You should consider delay loading a DLL if:  
  
-   Your program may not call a function in the DLL.  
  
-   A function in the DLL may not get called until late in your program's execution.  
  
 The delayed loading of a DLL can be specified during the build of either a .EXE or .DLL project. A .DLL project that delays the loading of one or more DLLs should not itself call a delay-loaded entry point in Dllmain.  
  
 The following topics describe delay loading DLLs:  
  
-   [Specifying DLLs to Delay Load](../VS_visualcpp/Specifying-DLLs-to-Delay-Load.md)  
  
-   [Explicitly Unloading a Delay-Loaded DLL](../VS_visualcpp/Explicitly-Unloading-a-Delay-Loaded-DLL.md)  
  
-   [Loading All Imports for a Delay-Loaded DLL](../VS_visualcpp/Loading-All-Imports-for-a-Delay-Loaded-DLL.md)  
  
-   [Binding Imports](../VS_visualcpp/Binding-Imports.md)  
  
-   [Error Handling and Notification](../VS_visualcpp/Error-Handling-and-Notification.md)  
  
-   [Dumping Delay-Loaded Imports](../VS_visualcpp/Dumping-Delay-Loaded-Imports.md)  
  
-   [Constraints of Delay Loading DLLs](../VS_visualcpp/Constraints-of-Delay-Loading-DLLs.md)  
  
-   [Understanding the Helper Function](assetId:///6279c12c-d908-4967-b0b3-cabfc3e91d3d)  
  
-   [Developing Your Own Helper Function](../VS_visualcpp/Developing-Your-Own-Helper-Function.md)  
  
## See Also  
 [DLLs in Visual C++](../VS_visualcpp/DLLs-in-Visual-C--.md)   
 [Linking](../VS_visualcpp/Linking.md)