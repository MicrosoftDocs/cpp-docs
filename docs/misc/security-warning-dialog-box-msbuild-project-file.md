---
title: "Security Warning Dialog Box (MSBuild Project File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.projectfileinsecure"
helpviewer_keywords: 
  - "Security Warning dialog box [MSBuild project file]"
  - "MSBuild, security warning dialog box"
ms.assetid: ea705296-ad5b-4e55-a75f-e421f35fe640
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
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
# Security Warning Dialog Box (MSBuild Project File)
The **Security Warning** dialog box warns developers about security issues with projects.  
  
## UI Elements  
 **Ask me for every project in this solution**  
 Select this option to be prompted for every project in the solution. This is set by default.  
  
### Project Items in Potentially Dangerous Locations  
 Some items in otherwise safe .targets files use user-defined project properties set their paths. To prevent an item from overwriting an important file, project files that contain item paths that evaluate to one of the following locations or any subdirectories of these locations are considered to be potential security risks unless they are also located in or below the solution file or project file directory:  
  
-   The root directory of any drive.  
  
-   The Windows directory, for example, C:\Windows\\.  
  
-   The Program Files directory, for example, C:\Program Files\\.  
  
-   Network shares.  
  
## See Also  
[MSBuild](/visual-studio/msbuild/msbuild1)  
 [MSBuild Reference](/visual-studio/msbuild/msbuild-reference)   
 [MSBuild Concepts](/visual-studio/msbuild/msbuild-concepts)