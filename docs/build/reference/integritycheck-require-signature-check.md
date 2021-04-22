---
description: "Learn more about: /INTEGRITYCHECK (Require signature check)"
title: "/INTEGRITYCHECK (Require signature check)"
ms.date: 04/21/2021
---
# `/INTEGRITYCHECK` (Require signature check)

Specifies that the digital signature of the binary image must be checked at load time.

> **`/INTEGRITYCHECK`**[**`:NO`**]

## Remarks

By default, **`/INTEGRITYCHECK`** is off.

The **`/INTEGRITYCHECK`** linker option sets a flag, `IMAGE_DLLCHARACTERISTICS_FORCE_INTEGRITY`, in the PE header of the DLL file or executable file. This flag tells the memory manager to check for a digital signature in order to load the image in Windows. This option must be set for both 32-bit and 64-bit DLLs that implement kernel-mode code loaded by certain Windows features. It's recommended for all device drivers on Windows Vista, Windows Server 2008, and all later versions of Windows and Windows Server. Versions of Windows prior to Windows Vista ignore this flag. For more information, see [Forced Integrity Signing of Portable Executable (PE) files](https://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx).

### Signing `/INTEGRITYCHECK` files

Microsoft has new signing guidance for DLL and executable files linked by using **`/INTEGRITYCHECK`**. The guidance used to recommend a cross-signed certificate from the [cross-signing program](/windows-hardware/drivers/install/cross-certificates-for-kernel-mode-code-signing). However, the [cross-signing program is now deprecated](/windows-hardware/drivers/install/deprecation-of-software-publisher-certificates-and-commercial-release-certificates). We recommend you sign your **`/INTEGRITYCHECK`** files by using the Microsoft [Azure Code Signing](https://techcommunity.microsoft.com/t5/video-hub/reduce-developer-friction-with-azure-code-signing/m-p/1698637) program instead.

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In **Additional Options**, enter *`/INTEGRITYCHECK`* or *`/INTEGRITYCHECK:NO`*. Choose **OK** to save your changes.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC linker options](linker-options.md)<br/>
[Forced integrity signing of portable executable (PE) files](https://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx)<br/>
[Kernel-mode code signing requirements](/windows-hardware/drivers/install/kernel-mode-code-signing-requirements--windows-vista-and-later-)<br/>
[AppInit DLLs and Secure Boot](/windows/win32/dlls/secure-boot-and-appinit-dlls)
