---
title: "Project Build Error PRJ0006 | Microsoft Docs"
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
  - "PRJ0006"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0006"
ms.assetid: ce092be4-1652-414f-8cb5-b97ef5841f89
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Project Build Error PRJ0006
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Project Build Error PRJ0006](https://docs.microsoft.com/cpp/error-messages/tool-errors/project-build-error-prj0006).  
  
  
Could not open the temporary file 'file'. Make sure the file exists and that the directory is not write-protected.  
  
 Visual C++ could not create a temporary file during the build process. Reasons for this include:  
  
-   No temp directory.  
  
-   Read-only temp directory.  
  
-   Out of disk space.  
  
-   The $(IntDir) folder is either read-only or contains temporary files that are read-only.  
  
 This error will also occur following error PRJ0007: Could not create output directory 'directory'. Error PRJ0007 means that the $(IntDir) directory could not be created, implying the creation of temporarily files will also fail.  
  
 Temp files are created whenever you specify:  
  
-   A response file.  
  
-   A custom build step.  
  
-   A build event.

