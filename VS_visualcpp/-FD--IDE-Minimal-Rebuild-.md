---
title: "-FD (IDE Minimal Rebuild)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /FD (IDE Minimal Rebuild)
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# -FD (IDE Minimal Rebuild)
**/FD** is not exposed to users except in the [Command Line](../VS_visualcpp/Command-Line-Property-Pages.md) property page of a C++ project's **Property Pages** dialog box, if and only if [/Gm (Enable Minimal Rebuild)](../VS_visualcpp/-Gm--Enable-Minimal-Rebuild-.md) is not also selected. **/FD** has no effect other than from the development environment. **/FD** is not exposed in the output of **cl /?**.  
  
 If you do not enable **/Gm** in the development environment, **/FD** will be used. **/FD** ensures that the .idb file has sufficient dependency information. **/FD** is only used by the development environment, and it should not be used from the command line or a build script.  
  
## See Also  
 [Output-File (/F) Options](../VS_visualcpp/Output-File---F--Options.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)