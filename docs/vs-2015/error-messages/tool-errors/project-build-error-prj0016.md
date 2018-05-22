---
title: "Project Build Error PRJ0016 | Microsoft Docs"
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
  - "PRJ0016"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0016"
ms.assetid: e9745336-883a-4c70-9c40-7753e02f0325
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Project Build Error PRJ0016
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Project Build Error PRJ0016](https://docs.microsoft.com/cpp/error-messages/tool-errors/project-build-error-prj0016).  
  
  
The user's security settings prevent the process from being created. These settings are required for building.  
  
 You are logged in as a user who does not have permissions to create processes using a process. You must change the permission levels for this user account, or contact your account administrator.  
  
 This error can also occur if the following registry key is set:  
  
 \\\HKCU\Software\Microsoft\Windows\CurrentVersion\Policies\Explorer\RestrictRun  
  
 To resolve this error, delete the RestrictRun key. If this registry key is needed, append **vcspawn.exe** to the list of entries in the key.  
  
 Another cause for this error is that your Policy Setting does not include VCSpawn.exe under the registry key HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Policies\RestrictRun as an allowed Window program for this user account.  
  
 For additional information, see:  
  
-   Knowledge Base article 324153, which is available on [http://support.microsoft.com/default.aspx?scid=kb;en-us;324153](http://support.microsoft.com/default.aspx?scid=kb;en-us;324153).  
  
-   [Adhering to System Policy Settings](http://msdn.microsoft.com/library/aa372139), the section on "Run only allowed Windows applications".

