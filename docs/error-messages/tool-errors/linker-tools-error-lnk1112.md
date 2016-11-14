---
title: "Linker Tools Error LNK1112 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1112"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1112"
ms.assetid: 425793d8-37e6-4072-9b6e-c3d4e9c12562
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Linker Tools Error LNK1112
module machine type 'type1' conflicts with target machine type 'type2'  
  
 The object files specified as input were compiled for different computer types.  
  
 For example, if you try to link an object file compiled with **/clr** and an object file compiled with **/clr:pure** (machine type CEE), the linker will generate the error LNK1112.  
  
 Similarly, if you create one module with the [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] compiler and another module with the x86 compiler, and try to link them, the linker will generate LNK1112.  
  
 A possible reason for this error is if you are developing a 64-bit application but have not installed one of the Visual C++ 64-bit compilers. In this case, 64-bit configurations will not be available. To fix this issue, run the installer for Visual Studio and install the missing C++ components.  
  
 This error can also occur if you change the **Active solution configuration** in the **Configuration Manager** and then try to build the project before you delete the intermediate project files. To resolve this error, select **Rebuild Solution** from the **Build** menu. You can also select **Clean Solution** from the **Build** menu and then build the solution.  
  
## See Also  
 [Linker Tools Errors and Warnings](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)