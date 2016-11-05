---
title: "MSBuild Error MSB1011 | Microsoft Docs"
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
  - "MSBuild.AmbiguousProjectError"
helpviewer_keywords: 
  - "MSB1011"
ms.assetid: f3cb16e5-288c-4dba-941f-a0ed3bf92db7
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
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
# MSBuild Error MSB1011
**Specify which project or solution file to use because this folder contains more than one project or solution file.**  
  
 If a project file is not specified at the command line, [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] searches the current working directory for a file that has a file extension that ends in "proj" or "sln" and uses that file. The current working directory contains more than one file that has a file extension that ends in "proj" or "sln".  
  
### To correct this error  
  
1.  Include the project file name on the command line. For example, instead of typing `msbuild`, type `msbuild myapp.proj`.  
  
## See Also  
 [Command-Line Reference](/visual-studio/msbuild/msbuild-command-line-reference)