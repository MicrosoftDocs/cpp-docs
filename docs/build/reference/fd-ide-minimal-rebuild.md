---
description: "Learn more about: /FD (IDE Minimal Rebuild)"
title: "/FD (IDE Minimal Rebuild)"
ms.date: "04/08/2019"
helpviewer_keywords: ["/FD compiler option [C++]", "-FD compiler option [C++]", "FD compiler option [C++]"]
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
---
# /FD (IDE Minimal Rebuild)

**/FD** is only exposed to users in the [Command Line](command-line-property-pages.md) property page of a C++ project's **Property Pages** dialog box. It's available if and only if the deprecated and off-by-default [/Gm (Enable Minimal Rebuild)](gm-enable-minimal-rebuild.md) option isn't selected. **/FD** has no effect other than from the development environment. **/FD** isn't exposed in the output of `cl /?`.

If you don't enable the deprecated **/Gm** option in the development environment, **/FD** is used. **/FD** ensures the .idb file has sufficient dependency information. **/FD** is only used by the development environment, and it shouldn't be used from the command line or a build script.

## See also

[Output-File (/F) Options](output-file-f-options.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
