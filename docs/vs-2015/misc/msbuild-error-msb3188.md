---
title: "MSBuild Error MSB3188 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateManifest.PrerequisiteNotSigned"
helpviewer_keywords: 
  - "MSB3188"
ms.assetid: 8520e960-3b31-4e25-9fce-b9092b869bd0
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3188
**MSB3188: Assembly '\<assembly>' must be strong signed in order to be marked as a prerequisite.**  
  
 This error is generated when a prerequisite assembly is not strong-signed. It applies only to application manifests.  
  
### To correct this error  
  
-   Ensure that all assemblies that the project uses are strong-signed.