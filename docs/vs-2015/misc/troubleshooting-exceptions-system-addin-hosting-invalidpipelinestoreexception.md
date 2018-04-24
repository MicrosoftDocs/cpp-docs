---
title: "Troubleshooting Exceptions: System.AddIn.Hosting.InvalidPipelineStoreException | Microsoft Docs"
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
  - "InvalidPipelineStoreException exception"
  - "System.AddIn.Hosting.InvalidPipelineStoreException exception"
ms.assetid: d12556bc-5cfd-481c-a27b-46ee2571e646
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.AddIn.Hosting.InvalidPipelineStoreException
The <xref:System.AddIn.Hosting.InvalidPipelineStoreException> exception is thrown when a directory is not found and the user does not have permission to access the pipeline root path or an add-in path.  
  
## Remarks  
 Unlike <xref:System.IO.DirectoryNotFoundException>, this exception does not provide any path information. This prevents a malicious user from deliberately specifying erroneous paths and using the information returned by the exception to determine actual paths.  
  
 The exception is thrown by the following discovery methods that build and update the store of add-in and pipeline information: <xref:System.AddIn.Hosting.AddInStore.FindAddIns%2A>,<xref:System.AddIn.Hosting.AddInStore.Rebuild%2A>, <xref:System.AddIn.Hosting.AddInStore.RebuildAddIns%2A>, <xref:System.AddIn.Hosting.AddInStore.Update%2A>, and <xref:System.AddIn.Hosting.AddInStore.UpdateAddIns%2A>.  
  
## See Also  
 <xref:System.AddIn.Hosting.InvalidPipelineStoreException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)