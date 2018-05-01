---
title: "Project Build Error PRJ0003 | Microsoft Docs"
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
  - "PRJ0003"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0003"
ms.assetid: fc5a84bb-c6d3-41d6-8dd6-475455820778
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Project Build Error PRJ0003
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Project Build Error PRJ0003](https://docs.microsoft.com/cpp/error-messages/tool-errors/project-build-error-prj0003).  
  
  
Error spawning 'command line'.  
  
 A command, ***command line***, which was formed from input in the **Property Pages** dialog box, returned an error code but no information will appear in the Output window.  
  
 Possible reasons for this error:  
  
-   Your project depends on ATL Server. Beginning with [!INCLUDE[vs_orcas_long](../../includes/vs-orcas-long-md.md)], ATL Server is no longer included as part of Visual Studio, but has been released as a shared-source project at CodePlex. To download the ATL Server source code and tools, go to [http://go.microsoft.com/fwlink/?LinkID=81979](http://go.microsoft.com/fwlink/?LinkID=81979).  
  
-   Low system resources. Close some applications to resolve this.  
  
-   Insufficient security privileges. Verify that you have sufficient security privileges.  
  
-   The executable paths specified in [VC++ Directories](http://msdn.microsoft.com/en-us/e027448b-c811-4c3d-8531-4325ad3f6e02) do not include the path for the tool that you are attempting to run.  
  
-   For makefile projects, you are missing a command to run on either **Build Command Line** or **Rebuild Command Line**.  
  
## See Also  
 [Project Build Errors and Warnings (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)

