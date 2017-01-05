---
title: "How to: Create Verifiable C++ Projects (C++-CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "verifiable assemblies [C++], creating"
  - "conversions, C++ projects"
  - "Visual C++ projects"
ms.assetid: 4ef2cc1a-e3e5-4d67-8d8d-9c614f8ec5d3
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# How to: Create Verifiable C++ Projects (C++/CLI)
Visual C++ application wizards do not create verifiable projects, but projects can be converted to be verifiable. This topic describes how to set project properties and modify project source files to transform your Visual C++ projects to produce verifiable applications.  
  
## Compiler and Linker Settings  
 By default, .NET projects use the /clr compiler flag and configure the linker to target x86 hardware. For verifiable code, you must use the /clr:safe flag, and you must instruct the linker to generate MSIL instead of native machine instructions.  
  
#### To change the compiler and linker settings  
  
1.  Display the project Property Page. For more information, see [Working with Project Properties](../ide/working-with-project-properties.md).  
  
2.  On the **General** page under the **Configuration Properties** node, set the **Common Language Runtime Support** property to **Safe MSIL Common Language Runtime Support (/clr:safe)**.  
  
3.  On the **Advanced** page under the **Linker** node, set the **CLR Image Type** property to **Force safe IL image (/CLRIMAGETYPE:SAFE)**.  
  
## Removing Native Data Types  
 Because native data types are non-verifiable, even if they are not actually used, you must remove all header files containing native types.  
  
> [!NOTE]
>  The following procedure applies to Windows Forms Application (.NET) and Console Application (.NET) projects.  
  
#### To remove references to native data types  
  
1.  Comment out everything in the Stdafx.h file.  
  
## Configuring an Entry Point  
 Because verifiable applications cannot use the C run-time libraries (CRT), they cannot depend on the CRT to call the main function as the standard entry point. This means that you must explicitly provide the name of the function to be called initially to the linker. (In this case, Main() is used instead of main() or _tmain() to indicate a non-CRT entry point, but because the entry point must be specified explicitly, this name is arbitrary.)  
  
> [!NOTE]
>  The following procedures apply to Console Application (.NET) projects.  
  
#### To configure an entry point  
  
1.  Change _tmain() to Main() in the project's main .cpp file.  
  
2.  Display the project Property Page. For more information, see [Working with Project Properties](../ide/working-with-project-properties.md).  
  
3.  On the **Advanced** page under the **Linker** node, enter `Main` as the **Entry Point** property value.  
  
## See Also  
 [Pure and Verifiable Code (C++/CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md)