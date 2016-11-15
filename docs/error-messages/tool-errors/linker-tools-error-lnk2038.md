---
title: "Linker Tools Error LNK2038 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2038"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2038"
ms.assetid: b8d0fb35-eee6-4f52-b3c4-239cb4f65656
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Linker Tools Error LNK2038
mismatch detected for '\<name>': value '\<value 1>' doesn't match value '\<value 2>' in \<filename.obj>  
  
 A symbol mismatch has been detected by the linker. This error indicates that different parts of an app—this includes libraries or other object code that the app links to—use conflicting definitions of the symbol. The [detect mismatch](../../preprocessor/detect-mismatch.md) pragma is used to define such symbols and detect their conflicting values.  
  
### To correct this error  
  
-   This error can occur when an object file in your project is out-of-date. Before you try other solutions to this error, perform a clean build to ensure that the object files are current.  
  
-   Visual Studio defines the following symbols to prevent the linking of incompatible code, which can cause run-time errors or other unexpected behavior.  
  
     `_MSC_VER`  
     Indicates the major and minor version numbers of the Visual C++ compiler that's used to build an app or library. Code that's compiled by using one version of the Visual C++ compiler is incompatible with code that's compiled by using a version that has different major and minor version numbers. For more information, see `_MSC_VER` in [Predefined Macros](../../preprocessor/predefined-macros.md).  
  
     If you're linking to a library that's not compatible with the version of the Visual C++ compiler that you're using, and you cannot acquire or build a compatible version of the library, you can use an earlier version of the compiler to build your project—just change the **Platform Toolset** property of the project. For more information, see [How to: Modify the Target Framework and Platform Toolset](../../build/how-to-modify-the-target-framework-and-platform-toolset.md).  
  
     `_ITERATOR_DEBUG_LEVEL`  
     Indicates the level of security and debugging features that are enabled in the C++ Standard Library. These features can change the representation of certain C++ Standard Library objects and thereby make them incompatible with those that use different security and debugging features. For more information, see [_ITERATOR_DEBUG_LEVEL](../../standard-library/iterator-debug-level.md).  
  
     `RuntimeLibrary`  
     Indicates the version of the C++ Standard Library and C runtime that's used by an app or library. Code that uses one version of the C++ Standard Library or C runtime is incompatible with code that uses a different version. For more information, see [/MD, /MT, /LD (Use Run-Time Library)](../../build/reference/md-mt-ld-use-run-time-library.md).  
  
     `_PPLTASKS_WITH_WINRT`  
     Indicates that code that uses the [Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md) is linked to objects compiled by using a different setting for the [/ZW](../../build/reference/zw-windows-runtime-compilation.md) compiler option. (**/ZW** supports C++/CX.) Code that uses or depends on the PPL must be compiled by using the same **/ZW** setting that's used in the rest of the app.  
  
     Ensure that the values of these symbols are consistent throughout the projects in your Visual Studio solution, and also that they are consistent with code and libraries that your app links to.  
  
## See Also  
 [Linker Tools Errors and Warnings](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)