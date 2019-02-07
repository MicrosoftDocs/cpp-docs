---
title: "/INTEGRITYCHECK (Require Signature Check)"
ms.date: "11/04/2016"
ms.assetid: 9e738825-2c98-40cd-8ad2-5d0d9c14893e
---
# /INTEGRITYCHECK (Require Signature Check)

Specifies that the digital signature of the binary image must be checked at load time.

```
/INTEGRITYCHECK[:NO]
```

## Remarks

By default, **/INTEGRITYCHECK** is off.

The **/INTEGRITYCHECK** option sets—in the PE header of the DLL file or executable file—a flag for the memory manager to check for a digital signature in order to load the image in Windows. This option must be set for both 32-bit and 64-bit DLLs that implement kernel-mode code loaded by certain Windows features, and is recommended for all device drivers on Windows Vista, Windows 7, Windows 8, Windows Server 2008, and Windows Server 2012. Versions of Windows prior to Windows Vista ignore this flag. For more information, see [Forced Integrity Signing of Portable Executable (PE) files](http://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx).

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Expand the **Configuration Properties** node.

1. Expand the **Linker** node.

1. Select the **Command Line** property page.

1. In **Additional Options**, enter `/INTEGRITYCHECK` or `/INTEGRITYCHECK:NO`.

## See also

- [Setting Linker Options](../../build/reference/setting-linker-options.md)
- [Linker Options](../../build/reference/linker-options.md)
- [Forced Integrity Signing of Portable Executable (PE) files](http://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx)
- [Kernel-Mode Code Signing Walkthrough](https://msdn.microsoft.com/windows/hardware/gg487328.aspx)
- [AppInit DLLs in Windows 7 and Windows Server 2008](https://msdn.microsoft.com/windows/hardware/gg463040.aspx)
