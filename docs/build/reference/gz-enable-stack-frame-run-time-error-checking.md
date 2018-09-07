---
title: "-GZ (Enable Stack Frame Run-Time Error Checking) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/gz"]
dev_langs: ["C++"]
helpviewer_keywords: ["-GZ compiler option [C++]", "release-build errors", "/GZ compiler option [C++]", "GZ compiler option [C++]", "debug builds, catch release-build errors"]
ms.assetid: b3efeeff-d5e3-4057-91c9-f6fc73d0270c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /GZ (Enable Stack Frame Run-Time Error Checking)
Performs the same operations as the [/RTC (Run-Time Error Checks)](../../build/reference/rtc-run-time-error-checks.md) option. Deprecated.  
  
## Syntax  
  
```  
/GZ  
```  
  
## Remarks  
 **/GZ** is only for use in a nonoptimized ([/Od (Disable (Debug))](../../build/reference/od-disable-debug.md)) build.  
  
 **/GZ** is deprecated since Visual Studio 2005; use [/RTC (Run-Time Error Checks)](../../build/reference/rtc-run-time-error-checks.md) instead. For a list of deprecated compiler options, see **Deprecated and Removed Compiler Options** in [Compiler Options Listed by Category](../../build/reference/compiler-options-listed-by-category.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)