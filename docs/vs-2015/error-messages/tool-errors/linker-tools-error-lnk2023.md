---
title: "Linker Tools Error LNK2023 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2023"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2023"
ms.assetid: c99e35a8-739a-4a20-a715-29b8c3744703
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK2023
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK2023](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk2023).  
  
  
bad dll or entry point \<dll or entry point>  
  
 The linker is loading an incorrect version of msobj90.dll. Ensure that link.exe and msobj90.dll in your path have the same version.  
  
 A dependency of msobj90.dll may not be present. The dependency list for msobj90.dll is:  
  
-   Msvcr90.dll  
  
-   Kernel32.dll  
  
 Check your machine for any other copies of msobj90.dll that may be out of date.

