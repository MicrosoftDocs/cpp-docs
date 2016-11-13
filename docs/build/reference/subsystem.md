---
title: "-SUBSYSTEM | Microsoft Docs"
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
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/SUBSYSTEM editbin option"
  - "-SUBSYSTEM editbin option"
  - "SUBSYSTEM editbin option"
ms.assetid: 515e4cdf-3cc4-4659-8764-1f2757b49215
caps.latest.revision: 12
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
# /SUBSYSTEM
Specifies the execution environment that's required by the executable image.  
  
```  
/SUBSYSTEM:{BOOT_APPLICATION|CONSOLE|EFI_APPLICATION|  
        EFI_BOOT_SERVICE_DRIVER|EFI_ROM|EFI_RUNTIME_DRIVER|  
        NATIVE|POSIX|WINDOWS|WINDOWSCE}[,major[.minor]]  
```  
  
## Remarks  
 This option edits the image to indicate which subsystem the operating system must invoke for execution.  
  
 You can specify any of the following subsystems:  
  
 BOOT_APPLICATION  
 An application that runs in the Windows boot environment. For more information about boot applications, see[About the BCD WMI Provider](http://msdn.microsoft.com/library/aa362639.aspx).  
  
 CONSOLE  
 A Windows character-mode application. The operating system provides a console for console applications.  
  
 Extensible Firmware Interface (EFI) Image  
 The EFI subsystem options describe executable images that run in the Extensible Firmware Interface environment. This environment is typically provided with the hardware and executes before the operating system is loaded. The major differences between EFI image types are the memory location that the image is loaded into and the action that's taken when the call to the image returns. An EFI_APPLICATION image is unloaded when control returns. An EFI_BOOT_SERVICE_DRIVER or EFI_RUNTIME_DRIVER is unloaded only if control returns with an error code. An EFI_ROM image is executed from ROM. For more information, see the specifications on the [Unified EFI Forum](http://www.uefi.org/) website.  
  
 NATIVE  
 Code that runs without a subsystem environment—for example, kernel mode device drivers and native system processes. This option is usually reserved for Windows system features.  
  
 POSIX  
 An app that runs in the POSIX subsystem in Windows.  
  
 WINDOWS  
 An app that runs in the Windows graphical environment. This includes both desktop apps and Windows Store apps.  
  
 WINDOWSCE  
 The WINDOWSCE subsystem indicates that the app is intended to run on a device that has a version of the Windows CE kernel. Versions of the kernel include PocketPC, Windows Mobile, Windows Phone 7, Windows CE V1.0-6.0R3, and Windows Embedded Compact 7.  
  
 The optional `major` and `minor` values specify the minimum required version of the specified subsystem:  
  
-   The whole number part of the version number—the portion to the left of the decimal point—is represented by `major`.  
  
-   The fractional part of the version number—the portion to the right of the decimal point—is represented by `minor`.  
  
-   The values of `major` and `minor` must be from 0 through 65,535.  
  
 The choice of subsystem affects the default starting address for the program. For more information, see [/ENTRY (Entry-Point Symbol)](../../build/reference/entry-entry-point-symbol.md), the linker /ENTRY:*function* option.  
  
 For more information, including the minimum and default values for the major and minor version numbers for each subsystem, see the [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) linker option.  
  
## See Also  
 [EDITBIN Options](../../build/reference/editbin-options.md)