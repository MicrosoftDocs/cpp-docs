---
title: "Determining the Default Namespace of a Project | Microsoft Docs"
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
  - "custom tools, computing default namespace"
ms.assetid: 6d890676-7016-458c-8a6a-95cc0a068612
caps.latest.revision: 13
manager: "douge"
---
# Determining the Default Namespace of a Project
For [!INCLUDE[vbprvb](../includes/vbprvb-md.md)], if the `CustomToolNamespace` property is set on the input file, then the value of `CustomToolNamespace` becomes the value of the default namespace parameter passed to the <xref:Microsoft.VisualStudio.Shell.Interop.IVsSingleFileGenerator.Generate%2A> method. Otherwise, the `wszDefaultNamespace` parameter passed to `Generate` is always equal to the root namespace. For more information on namespaces, see [Namespace Keywords](http://msdn.microsoft.com/library/091a66eb-b10d-4f54-9102-5ac0d4bdb84b).  
  
 [!INCLUDE[csprcs](../includes/csprcs-md.md)] uses folder-based namespaces. That is, the namespace consists of the root namespace, plus names of any folders containing the custom tool. Each folder name is converted into a valid identifier, and periods separate all names. For example, if the input file is FolderA\FolderB\FolderC\MyInput.txt, and the root namespace is CL9, then the computed default namespace would be **CL9.FolderA.FolderB.FolderC**.  
  
 An exception to this rule occurs when the hierarchy chain contains a Web reference folder. For example, if:  
  
-   FolderC were a Web reference folder, the namespace would be **CL9.FolderC**.  
  
-   FolderB were a Web reference folder, the namespace would be **CL9.FolderB.FolderC**.  
  
 That is, the namespace uses the following format:  
  
```  
rootNamespace.webReferenceFolder.containedFolder.containedFolder ...  
```  
  
## See Also  
 [Implementing Single-File Generators](http://msdn.microsoft.com/library/fe9ef6b6-4690-4c2c-872c-301c980d17fe)   
 [Registering Single File Generators](http://msdn.microsoft.com/library/db7592c0-1273-4843-9617-6e2ddabb6ca8)   
 [Exposing Types to Visual Designers](http://msdn.microsoft.com/library/a7a32ad4-3a0a-4eb8-a6ac-491c42885639)