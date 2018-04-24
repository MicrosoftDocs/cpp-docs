---
title: "Linker Tools Warning LNK4075 | Microsoft Docs"
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
  - "LNK4075"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4075"
ms.assetid: f39ad3f9-c263-4cf0-9d70-259fc56ac96d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Warning LNK4075
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Warning LNK4075](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-warning-lnk4075).  
  
  
ignoring "option1" due to "option2" specification  
  
 The second option overrides the first.  
  
 Mutually exclusive linker options are being specified.  Examine your linker options.  Where linker options are specified depends on how you are building your project.  
  
-   If you are building in the development environment, look in the linker property pages for your project, and see where both linker options are being specified.  See [How to: Specify Project Properties with Property Pages](../../misc/how-to-specify-project-properties-with-property-pages.md) for more information.  
  
-   If you build at the command line, look at the linker options specified there.  
  
-   If you build with build scripts, look through your scripts to see where these linker options are being specified.  
  
 When you find where the mutually exclusive linker options are specified, remove one of the linker options.  
  
 Some specific examples:  
  
-   If you link a module that was compiled with **/ZI**, which implies an internal linker option called /EDITANDCONTINUE, and a module that was compiled with /OPT:REF, /OPT:ICF, or /INCREMENTAL:NO, which imply no /EDITANDCONTINUE, you will get LNK4075.  See [/Z7, /Zi, /ZI (Debug Information Format)](../../build/reference/z7-zi-zi-debug-information-format.md) for more information.

