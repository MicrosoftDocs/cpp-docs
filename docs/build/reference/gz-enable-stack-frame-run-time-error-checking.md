---
title: "-GZ (Enable Stack Frame Run-Time Error Checking) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/gz"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-GZ compiler option [C++]"
  - "release-build errors"
  - "/GZ compiler option [C++]"
  - "GZ compiler option [C++]"
  - "debug builds, catch release-build errors"
ms.assetid: b3efeeff-d5e3-4057-91c9-f6fc73d0270c
caps.latest.revision: 14
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
# /GZ (Enable Stack Frame Run-Time Error Checking)
Performs the same operations as the [/RTC (Run-Time Error Checks)](../../build/reference/rtc-run-time-error-checks.md) option. Deprecated.  
  
## Syntax  
  
```  
/GZ  
```  
  
## Remarks  
 **/GZ** is only for use in a nonoptimized ([/Od (Disable (Debug))](../../build/reference/od-disable-debug.md)) build.  
  
 **/GZ** is deprecated; use [/RTC (Run-Time Error Checks)](../../build/reference/rtc-run-time-error-checks.md) instead. For more information, see [Deprecated Compiler Options in Visual C++ 2005](http://msdn.microsoft.com/en-us/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
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