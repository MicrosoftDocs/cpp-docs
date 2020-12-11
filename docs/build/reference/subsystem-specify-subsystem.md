---
description: "Learn more about: /SUBSYSTEM (Specify Subsystem)"
title: "/SUBSYSTEM (Specify Subsystem)"
ms.date: "11/04/2016"
f1_keywords: ["/subsystem", "VC.Project.VCLinkerTool.SubSystem", "VC.Project.VCLinkerTool.SubSystemVersion"]
helpviewer_keywords: ["/SUBSYSTEM linker option", "SUBSYSTEM linker option", "-SUBSYSTEM linker option", "subsystem specifications"]
ms.assetid: d7b133cf-cf22-4da8-ab46-6552702c0b9b
---
# /SUBSYSTEM (Specify Subsystem)

```
/SUBSYSTEM:{BOOT_APPLICATION|CONSOLE|EFI_APPLICATION|
            EFI_BOOT_SERVICE_DRIVER|EFI_ROM|EFI_RUNTIME_DRIVER|NATIVE|
            POSIX|WINDOWS)
            [,major[.minor]]
```

## Arguments

**BOOT_APPLICATION**<br/>
An application that runs in the Windows boot environment. For more information about boot applications, see [About BCD](/previous-versions/windows/desktop/bcd/about-bcd).

**CONSOLE**<br/>
Win32 character-mode application. The operating system provides a console for console applications. If `main` or `wmain` is defined for native code, `int main(array<String ^> ^)` is defined for managed code, or you build the application completely by using `/clr:safe`, CONSOLE is the default.

**EFI_APPLICATION**<br/>
**EFI_BOOT_SERVICE_DRIVER**<br/>
**EFI_ROM**<br/>
**EFI_RUNTIME_DRIVER**<br/>
The Extensible Firmware Interface subsystems. See the EFI specification for more information. For examples, see the Intel Web site. The minimum version and default version is 1.0.

**NATIVE**<br/>
Kernel mode drivers for Windows NT. This option is usually reserved for Windows system components. If [/DRIVER:WDM](driver-windows-nt-kernel-mode-driver.md) is specified, NATIVE is the default.

**POSIX**<br/>
Application that runs with the POSIX subsystem in Windows NT.

**WINDOWS**<br/>
Application does not require a console, probably because it creates its own windows for interaction with the user. If `WinMain` or `wWinMain` is defined for native code, or `WinMain(HISTANCE *, HINSTANCE *, char *, int)` or `wWinMain(HINSTANCE *, HINSTANCE *, wchar_t *, int)` is defined for managed code, WINDOWS is the default.

*major* and *minor*<br/>
(Optional) Specify the minimum required version of the subsystem. The arguments are decimal numbers in the range 0 through 65,535. See the Remarks for more information. There are no upper bounds for version numbers.

## Remarks

The **/SUBSYSTEM** option specifies the environment for the executable.

The choice of subsystem affects the entry point symbol (or entry point function) that the linker will select.

The optional minimum and default *major* and *minor* version numbers for the subsystems are as follows.

|Subsystem|Minimum|Default|
|---------------|-------------|-------------|
|BOOT_APPLICATION|1.0|1.0|
|CONSOLE|5.01 (x86) 5.02 (x64) 6.02 (ARM)|6.00 (x86, x64) 6.02 (ARM)|
|WINDOWS|5.01 (x86) 5.02 (x64) 6.02 (ARM)|6.00 (x86, x64) 6.02 (ARM)|
|NATIVE (with DRIVER:WDM)|1.00 (x86) 1.10 (x64, ARM)|1.00 (x86) 1.10 (x64, ARM)|
|NATIVE (without /DRIVER:WDM)|4.00 (x86) 5.02 (x64) 6.02 (ARM)|4.00 (x86) 5.02 (x64) 6.02 (ARM)|
|POSIX|1.0|19.90|
|EFI_APPLICATION, EFI_BOOT_SERVICE_DRIVER, EFI_ROM, EFI_RUNTIME_DRIVER|1.0|1.0|

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the Linker folder.

1. Select the **System** property page.

1. Modify the `SubSystem` property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SubSystem%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
