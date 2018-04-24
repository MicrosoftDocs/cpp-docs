---
title: "Troubleshooting Exceptions: System.DeploymentFramework.DeploymentDownloadException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "DeploymentDownloadException class"
  - "application deployment [C#], DeploymentDownloadException class"
  - "deploying applications [C#], DeploymentDownloadException class"
ms.assetid: 55ec7af5-b1d1-4db2-8af8-3c708f521cc7
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.DeploymentFramework.DeploymentDownloadException
A `T:System.DeploymentFramework.DeploymentDownloadException` occurs if a network exception of any kind occurs when an application update is being downloaded.  
  
## Associated Tips  
 **Examine InnerException to determine the underlying System.Net or System.IO exception.**  
 This exception occurs whenever there is a network exception when an application update is being downloaded. Examine the exception's <xref:System.Exception.InnerException%2A> property to determine the underlying exception.  
  
## See Also  
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)   
 [Try...Catch...Finally Statement](http://msdn.microsoft.com/library/d6488026-ccb3-42b8-a810-0d97b9d6472b)