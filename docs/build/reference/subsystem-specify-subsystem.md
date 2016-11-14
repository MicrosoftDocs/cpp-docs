---
title: "-SUBSYSTEM (Specify Subsystem) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/subsystem"
  - "VC.Project.VCLinkerTool.SubSystem"
  - "VC.Project.VCLinkerTool.SubSystemVersion"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/SUBSYSTEM linker option"
  - "SUBSYSTEM linker option"
  - "-SUBSYSTEM linker option"
  - "subsystem specifications"
ms.assetid: d7b133cf-cf22-4da8-ab46-6552702c0b9b
caps.latest.revision: 25
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
# /SUBSYSTEM (Specify Subsystem)
```  
/SUBSYSTEM:{BOOT_APPLICATION|CONSOLE|EFI_APPLICATION|  
            EFI_BOOT_SERVICE_DRIVER|EFI_ROM|EFI_RUNTIME_DRIVER|NATIVE|  
            POSIX|WINDOWS)  
            [,major[.minor]]  
```  
  
 BOOT_APPLICATION  
 An application that runs in the Windows boot environment. For more information about boot applications, see [About BCD](http://msdn.microsoft.com/library/windows/desktop/aa362639).  
  
 CONSOLE  
 Win32 character-mode application. The operating system provides a console for console applications. If `main` or `wmain` is defined for native code, `int main(array<String ^> ^)` is defined for managed code, or you build the application completely by using `/clr:safe`, CONSOLE is the default.  
  
 Extensible Firmware Interface  
 The EFI_* subsystems. See the EFI specification for more information. For example, see the Intel Web site. The minimum version and default version is 1.0.  
  
 NATIVE  
 Kernel mode drivers for Windows NT. This option is usually reserved for Windows system components. If [/DRIVER:WDM](../../build/reference/driver-windows-nt-kernel-mode-driver.md) is specified, NATIVE is the default.  
  
 POSIX  
 Application that runs with the POSIX subsystem in Windows NT.  
  
 WINDOWS  
 Application does not require a console, probably because it creates its own windows for interaction with the user. If `WinMain` or `wWinMain` is defined for native code, or `WinMain(HISTANCE *, HINSTANCE *, char *, int)` or `wWinMain(HINSTANCE *, HINSTANCE *, wchar_t *, int)` is defined for managed code, WINDOWS is the default.  
  
 `Major` and `minor` (optional)  
 Specify the minimum required version of the subsystem. The arguments are decimal numbers in the range 0 through 65,535. See the Remarks for more information. There are no upper bounds for version numbers.  
  
## Remarks  
 The /SUBSYSTEM option specifies the environment for the executable.  
  
 The choice of subsystem affects the entry point symbol (or entry point function) that the linker will select.  
  
 The optional minimum and default `major` and `minor` version numbers for the subsystems are as follows.  
  
|Subsystem|Minimum|Default|  
|---------------|-------------|-------------|  
|BOOT_APPLICATION|1.0|1.0|  
|CONSOLE|5.01 (x86) 5.02 ([!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]) 6.02 (ARM)|6.00 (x86, [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]) 6.02 (ARM)|  
|WINDOWS|5.01 (x86) 5.02 ([!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]) 6.02 (ARM)|6.00 (x86, [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]) 6.02 (ARM)|  
|NATIVE (with DRIVER:WDM)|1.00 (x86) 1.10 ([!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], ARM)|1.00 (x86) 1.10 ([!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], ARM)|  
|NATIVE (without /DRIVER:WDM)|4.00 (x86) 5.02 ([!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]) 6.02 (ARM)|4.00 (x86) 5.02 ([!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]) 6.02 (ARM)|  
|POSIX|1.0|19.90|  
|EFI_APPLICATION, EFI_BOOT_SERVICE_DRIVER, EFI_ROM, EFI_RUNTIME_DRIVER|1.0|1.0|  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the Linker folder.  
  
3.  Select the **System** property page.  
  
4.  Modify the `SubSystem` property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SubSystem%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)