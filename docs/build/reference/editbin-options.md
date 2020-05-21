---
title: "EDITBIN Options"
description: "Reference guide to the Microsoft EDITBIN utility command-line options."
ms.date: "02/09/2020"
helpviewer_keywords: ["EDITBIN program, options"]
ms.assetid: 2da9f88e-cbab-4d64-bb66-ef700535230f
---
# EDITBIN Options

You can use EDITBIN to modify object files, executable files, and dynamic-link libraries (DLLs). Options specify the changes that EDITBIN makes.

An option consists of an option specifier, which is either a dash (`-`) or a forward slash (`/`), followed by the name of the option. Option names can't be abbreviated. Some options take arguments that are specified after a colon (`:`). No spaces or tabs are allowed within an option specification. Use one or more spaces or tabs to separate option specifications on the command line. Option names and their keyword arguments or file name arguments aren't case-sensitive. For example, `-bind` and `/BIND` mean the same thing.

EDITBIN has the following options:

|Option|Purpose|
|------------|-------------|
|[/ALLOWBIND](allowbind.md)|Specifies whether a DLL can be bound.|
|[/ALLOWISOLATION](allowisolation.md)|Specifies DLL or executable file manifest lookup behavior.|
|[/APPCONTAINER](appcontainer.md)|Specifies whether the app must run within an AppContainer—for example, a UWP app.|
|[/BIND](bind.md)|Sets the addresses for the entry points in the specified objects to speed load time.|
|[/DYNAMICBASE](dynamicbase.md)|Specifies whether the DLL or executable image can be randomly rebased at load-time by using address space layout randomization (ASLR).|
|[/ERRORREPORT](errorreport-editbin-exe.md)| Deprecated. Error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings. |
|[/HEAP](heap.md)|Sets the size of the executable image's heap in bytes.|
|[/HIGHENTROPYVA](highentropyva.md)|Specifies whether the DLL or executable image supports high entropy (64-bit) address space layout randomization (ASLR).|
|[/INTEGRITYCHECK](integritycheck.md)|Specifies whether to check the digital signature at load time.|
|[/LARGEADDRESSAWARE](largeaddressaware.md)|Specifies whether the object supports addresses that are larger than two gigabytes.|
|[/NOLOGO](nologo-editbin.md)|Suppresses the EDITBIN startup banner.|
|[/NXCOMPAT](nxcompat.md)|Specifies whether the executable image is compatible with Windows Data Execution Prevention.|
|[/REBASE](rebase.md)|Sets the base addresses for the specified objects.|
|[/RELEASE](release.md)|Sets the checksum in the header.|
|[/SECTION](section-editbin.md)|Overrides the attributes of a section.|
|[/STACK](stack.md)|Sets the size of the executable image's stack in bytes.|
|[/SUBSYSTEM](subsystem.md)|Specifies the execution environment.|
|[/SWAPRUN](swaprun.md)|Specifies that the executable image is copied to the swap file, and then run from there.|
|[/TSAWARE](tsaware.md)|Specifies that the app is designed to run in a multi-user environment.|
|[/VERSION](version.md)|Sets the version number in the header.|

## See also

[Additional MSVC build tools](c-cpp-build-tools.md)\
[EDITBIN Reference](editbin-reference.md)
