---
title: "-ZW (Windows Runtime Compilation) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /ZW (Windows Runtime Compilation)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-ZW (Windows Runtime Compilation)](https://docs.microsoft.com/cpp/build/reference/zw-windows-runtime-compilation).  
  
  
Compiles source code to support [!INCLUDE[cppwrt](../../includes/cppwrt-md.md)] ([!INCLUDE[cppwrt_short](../../includes/cppwrt-short-md.md)]) for the creation of [!INCLUDE[win8_appname_long](../../includes/win8-appname-long-md.md)] apps.  
  
 When you use **/ZW** to compile, always specify **/EHsc** as well.  
  
## Syntax  
  
```cpp  
/ZW /EHsc  
/ZW:nostdlib /EHsc  
```  
  
## Arguments  
 nostdlib  
 Indicates that Platform.winmd, Windows.Foundation.winmd, and other default Windows metadata (.winmd) files are not automatically included in the compilation. Instead, you must use the [/FU (Name Forced #using File)](../../build/reference/fu-name-forced-hash-using-file.md) compiler option to explicitly specify Windows metadata files.  
  
## Remarks  
 When you specify the **/ZW** option, the compiler supports these features:  
  
-   The required metadata files, namespaces, data types, and functions that your app requires to execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)].  
  
-   Automatic reference-counting of [!INCLUDE[wrt](../../includes/wrt-md.md)] objects, and automatic discarding of an object when its reference count goes to zero.  
  
 Because the incremental linker does not support the Windows metadata included in .obj files by using the **/ZW** option, the [/Gm (Enable Minimal Rebuild)](../../build/reference/gm-enable-minimal-rebuild.md) option is incompatible with **/ZW**.  
  
 For more information, see [Visual C++ Language Reference](~/cppcx/visual-c-language-reference-c-cx.md).  
  
## Requirements  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)
