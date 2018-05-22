---
title: "-FD (IDE Minimal Rebuild) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/FD"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FD compiler option [C++]"
  - "-FD compiler option [C++]"
  - "FD compiler option [C++]"
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /FD (IDE Minimal Rebuild)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-FD (IDE Minimal Rebuild)](https://docs.microsoft.com/cpp/build/reference/fd-ide-minimal-rebuild).  
  
  
FD** is not exposed to users except in the [Command Line](../../ide/command-line-property-pages.md) property page of a C++ project's **Property Pages** dialog box, if and only if [/Gm (Enable Minimal Rebuild)](../../build/reference/gm-enable-minimal-rebuild.md) is not also selected. **/FD** has no effect other than from the development environment. **/FD** is not exposed in the output of **cl /?**.  
  
 If you do not enable **/Gm** in the development environment, **/FD** will be used. **/FD** ensures that the .idb file has sufficient dependency information. **/FD** is only used by the development environment, and it should not be used from the command line or a build script.  
  
## See Also  
 [Output-File (/F) Options](../../build/reference/output-file-f-options.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)

