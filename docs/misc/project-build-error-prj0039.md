---
title: "Project Build Error PRJ0039 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "PRJ0039"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0039"
ms.assetid: 207bbc28-922f-44d6-8bdd-3016c850f5b9
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
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
# Project Build Error PRJ0039
Unable to create a temporary file. The ability to do this is required in order for the NMake tool to be able to run.  
  
 When building a makefile project (see [Creating a Makefile Project](../ide/creating-a-makefile-project.md)), the Visual C++ project system needs to create some temporary files. This error indicates that the project system was unable to create one or more of those files.  
  
 The TMP environment variable contains the name of the temp directory.  
  
 Possible causes for this error, and suggested resolutions, are listed below:  
  
 User doesn't have write access to temp directory  
 Make sure you have write access to the temp directory.  
  
 Too many temp files in temp directory  
 Other processes may have created temp files, but not deleted them. Delete some or all of these temp files.  
  
 No free disk space  
 Delete some files on your disk or change your temp directory to a disk with free space.  
  
 TMP environment variable is bad  
 It is possible that the TMP environment variable points to a directory that does not exist.