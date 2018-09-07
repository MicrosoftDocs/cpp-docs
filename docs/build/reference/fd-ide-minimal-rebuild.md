---
title: "-FD (IDE Minimal Rebuild) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/FD"]
dev_langs: ["C++"]
helpviewer_keywords: ["/FD compiler option [C++]", "-FD compiler option [C++]", "FD compiler option [C++]"]
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /FD (IDE Minimal Rebuild)
**/FD** is not exposed to users except in the [Command Line](../../ide/command-line-property-pages.md) property page of a C++ project's **Property Pages** dialog box, if and only if [/Gm (Enable Minimal Rebuild)](../../build/reference/gm-enable-minimal-rebuild.md) is not also selected. **/FD** has no effect other than from the development environment. **/FD** is not exposed in the output of **cl /?**.  
  
 If you do not enable **/Gm** in the development environment, **/FD** will be used. **/FD** ensures that the .idb file has sufficient dependency information. **/FD** is only used by the development environment, and it should not be used from the command line or a build script.  
  
## See Also  
 [Output-File (/F) Options](../../build/reference/output-file-f-options.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)