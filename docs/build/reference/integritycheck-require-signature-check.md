---
description: "Learn more about: /INTEGRITYCHECK (Require signature check)"
title: "/INTEGRITYCHECK (Require signature check)"
ms.date: 08/29/2023
---
# `/INTEGRITYCHECK` (Require signature check)

Specifies that the digital signature of the binary image must be checked at load time.

> **`/INTEGRITYCHECK`**

## Remarks

By default, **`/INTEGRITYCHECK`** is off.

The **`/INTEGRITYCHECK`** linker option sets a flag, `IMAGE_DLLCHARACTERISTICS_FORCE_INTEGRITY`, in the PE header of the DLL file or executable file. This flag tells the memory manager to check for a digital signature in order to load the image in Windows. This option must be set for both 32-bit and 64-bit DLLs that certain Windows features load. It's recommended for all device drivers on Windows Vista, Windows Server 2008, and all later versions of Windows and Windows Server. Versions of Windows prior to Windows Vista ignore this flag. For more information, see [Forced Integrity Signing of Portable Executable (PE) files](https://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx).

### Signing `/INTEGRITYCHECK` files

Microsoft has new signing guidance for DLL and executable files linked by using **`/INTEGRITYCHECK`**. The guidance used to recommend a cross-signed certificate from the [cross-signing program](/windows-hardware/drivers/install/cross-certificates-for-kernel-mode-code-signing). However, the [cross-signing program is now deprecated](/windows-hardware/drivers/install/deprecation-of-software-publisher-certificates-and-commercial-release-certificates). You must now sign your **`/INTEGRITYCHECK`** files by using the Microsoft [Azure Code Signing](https://techcommunity.microsoft.com/t5/security-compliance-and-identity/azure-code-signing-democratizing-trust-for-developers-and/ba-p/3604669) program instead.

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. To create a digitally signed image, include `/INTEGRITYCHECK` in the **Additional Options** command line. A digitally signed image must pass a verification check before it's loaded. This feature is disabled by default.

1. Choose **OK** to save your changes.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)\
[Forced integrity signing of portable executable (PE) files](https://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx)\
[Kernel-mode code signing requirements](/windows-hardware/drivers/install/kernel-mode-code-signing-requirements--windows-vista-and-later-)\
[AppInit DLLs and Secure Boot](/windows/win32/dlls/secure-boot-and-appinit-dlls)
