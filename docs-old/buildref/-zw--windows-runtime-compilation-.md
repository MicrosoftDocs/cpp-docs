---
title: "-ZW (Windows Runtime Compilation)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.CompileAsWinRT"
  - "/zw"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ZW"
  - "-ZW compiler option"
  - "/ZW compiler option"
  - "-ZW"
  - "Windows Runtime compiler option"
ms.assetid: 0fe362b0-9526-498b-96e0-00d7a965a248
caps.latest.revision: 13
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
# /ZW (Windows Runtime Compilation)
Compiles source code to support [!INCLUDE[cppwrt](../buildref/includes/cppwrt_md.md)] ([!INCLUDE[cppwrt_short](../buildref/includes/cppwrt_short_md.md)]) for the creation of [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps.  
  
 When you use **/ZW** to compile, always specify **/EHsc** as well.  
  
## Syntax  
  
```cpp  
/ZW /EHsc  
/ZW:nostdlib /EHsc  
```  
  
## Arguments  
 nostdlib  
 Indicates that Platform.winmd, Windows.Foundation.winmd, and other default Windows metadata (.winmd) files are not automatically included in the compilation. Instead, you must use the [/FU (Name Forced #using File)](../buildref/-fu--name-forced-sharpusing-file-.md) compiler option to explicitly specify Windows metadata files.  
  
## Remarks  
 When you specify the **/ZW** option, the compiler supports these features:  
  
-   The required metadata files, namespaces, data types, and functions that your app requires to execute in the [!INCLUDE[wrt](../atl/includes/wrt_md.md)].  
  
-   Automatic reference-counting of [!INCLUDE[wrt](../atl/includes/wrt_md.md)] objects, and automatic discarding of an object when its reference count goes to zero.  
  
 Because the incremental linker does not support the Windows metadata included in .obj files by using the **/ZW** option, the [/Gm (Enable Minimal Rebuild)](../buildref/-gm--enable-minimal-rebuild-.md) option is incompatible with **/ZW**.  
  
 For more information, see [Visual C++ Language Reference](../Topic/Visual%20C++%20Language%20Reference%20\(C++-CX\).md).  
  
## Requirements  
  
## See Also  
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)