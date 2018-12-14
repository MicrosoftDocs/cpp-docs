---
title: "/FD (IDE Minimal Rebuild) (C++) - Visual Studio"
ms.date: "12/14/2018"
f1_keywords: ["/FD"]
helpviewer_keywords: ["/FD compiler option [C++]", "-FD compiler option [C++]", "FD compiler option [C++]"]
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
---
# /FD (IDE Minimal Rebuild)

**/FD** is not exposed to users except in the [Command Line](command-line-property-pages.md) property page of a C++ project's **Property Pages** dialog box, if and only if [/Gm (Enable Minimal Rebuild)](gm-enable-minimal-rebuild.md) is not also selected. **/FD** has no effect other than from the development environment. **/FD** is not exposed in the output of **cl /?**.

If you do not enable **/Gm** in the development environment, **/FD** will be used. **/FD** ensures that the .idb file has sufficient dependency information. **/FD** is only used by the development environment, and it should not be used from the command line or a build script.

## See Also

[Output-File (/F) Options](output-file-f-options.md)<br/>
[Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](compiler-command-line-syntax.md)