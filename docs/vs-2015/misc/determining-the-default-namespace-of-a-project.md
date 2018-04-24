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
For [!INCLUDE[vbprvb](../includes/vbprvb-md.md)], if the `CustomToolNamespace` property is set on the input file, then the value of `CustomToolNamespace` becomes the value of the default namespace parameter passed to the <xref:Microsoft.VisualStudio.Shell.Interop.IVsSingleFileGenerator.Generate%2A> method. Otherwise, the `wszDefaultNamespace` parameter passed to `Generate` is always equal to the root namespace. For more information on namespaces, see [Namespace Keywords](../Topic/Namespace%20Keywords%20\(C%23%20Reference\).md).  
  
 [!INCLUDE[csprcs](../includes/csprcs-md.md)] uses folder-based namespaces. That is, the namespace consists of the root namespace, plus names of any folders containing the custom tool. Each folder name is converted into a valid identifier, and periods separate all names. For example, if the input file is FolderA\FolderB\FolderC\MyInput.txt, and the root namespace is CL9, then the computed default namespace would be **CL9.FolderA.FolderB.FolderC**.  
  
 An exception to this rule occurs when the hierarchy chain contains a Web reference folder. For example, if:  
  
-   FolderC were a Web reference folder, the namespace would be **CL9.FolderC**.  
  
-   FolderB were a Web reference folder, the namespace would be **CL9.FolderB.FolderC**.  
  
 That is, the namespace uses the following format:  
  
```  
rootNamespace.webReferenceFolder.containedFolder.containedFolder ...  
```  
  
## See Also  
 [Implementing Single-File Generators](../Topic/Implementing%20Single-File%20Generators.md)   
 [Registering Single File Generators](../Topic/Registering%20Single%20File%20Generators.md)   
 [Exposing Types to Visual Designers](../Topic/Exposing%20Types%20to%20Visual%20Designers.md)