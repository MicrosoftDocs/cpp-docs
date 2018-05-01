---
title: "Project Build Error PRJ0050 | Microsoft Docs"
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
  - "PRJ0050"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0050"
ms.assetid: ceef3b37-0acf-4abd-ac62-aa830b4fa145
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Project Build Error PRJ0050
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Project Build Error PRJ0050](https://docs.microsoft.com/cpp/error-messages/tool-errors/project-build-error-prj0050).  
  
  
Failed to register output. Please ensure you have the appropriate permissions to modify the registry.  
  
 The Visual C++ build system was not able to register the output of the build (dll or .exe). You need to be logged on as an administrator to modify the registry.  
  
 If you are building a .dll, you can try to register the .dll manually using regsvr32.exe, this should display information about why the build failed.  
  
 If you are not building a .dll, look at the build log for the command that causes an error.

