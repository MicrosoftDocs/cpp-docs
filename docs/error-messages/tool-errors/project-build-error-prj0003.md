---
title: "Project Build Error PRJ0003 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["PRJ0003"]
dev_langs: ["C++"]
helpviewer_keywords: ["PRJ0003"]
ms.assetid: fc5a84bb-c6d3-41d6-8dd6-475455820778
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Project Build Error PRJ0003  
  
> Error spawning '*command line*'.  
  
The *command line* command formed from input in the **Property Pages** dialog box returned an error code, but no information appears in the **Output** window.  

Possible reasons for this error include:  
  
-   Your project depends on ATL Server. Beginning in Visual Studio 2008, ATL Server is no longer included as part of Visual Studio, but has been released as a shared-source project at CodePlex. To download the ATL Server source code and tools, go to [ATL Server Library and Tools](http://go.microsoft.com/fwlink/p/?linkid=81979).  
  
-   Low system resources. Close some applications to resolve this.  
  
-   Insufficient security privileges. Verify that you have sufficient security privileges.  
  
-   The executable paths specified in **VC++ Directories** do not include the path for the tool that you are attempting to run. For information, see [Working with Project Properties](../../ide/working-with-project-properties.md)  
  
-   For makefile projects, you are missing a command to run on either **Build Command Line** or **Rebuild Command Line**.  
  
## See Also  
 [Project Build Errors and Warnings (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)