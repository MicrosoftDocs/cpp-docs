---
description: "Learn more about: /SUBSYSTEM"
title: "/SUBSYSTEM"
ms.date: "11/04/2016"
f1_keywords: ["/subsystem_editbin"]
helpviewer_keywords: ["/SUBSYSTEM editbin option", "-SUBSYSTEM editbin option", "SUBSYSTEM editbin option"]
ms.assetid: 515e4cdf-3cc4-4659-8764-1f2757b49215
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

**BOOT_APPLICATION**<br/>
An application that runs in the Windows boot environment. For more information about boot applications, see [About the BCD WMI Provider](/previous-versions/windows/desktop/bcd/about-bcd).

**CONSOLE**<br/>
A Windows character-mode application. The operating system provides a console for console applications.

**EFI_APPLICATION**<br/>
**EFI_BOOT_SERVICE_DRIVER**<br/>
**EFI_ROM**<br/>
**EFI_RUNTIME_DRIVER**<br/>
Extensible Firmware Interface (EFI) Image

The EFI subsystem options describe executable images that run in the Extensible Firmware Interface environment. This environment is typically provided with the hardware and executes before the operating system is loaded. The major differences between EFI image types are the memory location that the image is loaded into and the action that's taken when the call to the image returns. An EFI_APPLICATION image is unloaded when control returns. An EFI_BOOT_SERVICE_DRIVER or EFI_RUNTIME_DRIVER is unloaded only if control returns with an error code. An EFI_ROM image is executed from ROM. For more information, see the specifications on the [Unified EFI Forum](https://www.uefi.org/) website.

**NATIVE**<br/>
Code that runs without a subsystem environment—for example, kernel mode device drivers and native system processes. This option is usually reserved for Windows system features.

**POSIX**<br/>
An app that runs in the POSIX subsystem in Windows.

**WINDOWS**<br/>
An app that runs in the Windows graphical environment. This includes both desktop apps and Universal Windows Platform (UWP) apps.

**WINDOWSCE**<br/>
The WINDOWSCE subsystem indicates that the app is intended to run on a device that has a version of the Windows CE kernel. Versions of the kernel include PocketPC, Windows Mobile, Windows Phone 7, Windows CE V1.0-6.0R3, and Windows Embedded Compact 7.

The optional `major` and `minor` values specify the minimum required version of the specified subsystem:

- The whole number part of the version number—the portion to the left of the decimal point—is represented by `major`.

- The fractional part of the version number—the portion to the right of the decimal point—is represented by `minor`.

- The values of `major` and `minor` must be from 0 through 65,535.

The choice of subsystem affects the default starting address for the program. For more information, see [/ENTRY (Entry-Point Symbol)](entry-entry-point-symbol.md), the linker /ENTRY:*function* option.

For more information, including the minimum and default values for the major and minor version numbers for each subsystem, see the [/SUBSYSTEM](subsystem-specify-subsystem.md) linker option.

## See also

[EDITBIN Options](editbin-options.md)
