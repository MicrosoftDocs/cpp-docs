---
title: "Determining the Default Namespace of a Project | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# Determining the Default Namespace of a Project
For [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)], if the `CustomToolNamespace` property is set on the input file, then the value of `CustomToolNamespace` becomes the value of the default namespace parameter passed to the <xref:Microsoft.VisualStudio.Shell.Interop.IVsSingleFileGenerator.Generate%2A> method. Otherwise, the `wszDefaultNamespace` parameter passed to `Generate` is always equal to the root namespace. For more information on namespaces, see [Namespace Keywords](/dotnet/articles/csharp/language-reference/keywords/namespace-keywords).  
  
 [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] uses folder-based namespaces. That is, the namespace consists of the root namespace, plus names of any folders containing the custom tool. Each folder name is converted into a valid identifier, and periods separate all names. For example, if the input file is FolderA\FolderB\FolderC\MyInput.txt, and the root namespace is CL9, then the computed default namespace would be **CL9.FolderA.FolderB.FolderC**.  
  
 An exception to this rule occurs when the hierarchy chain contains a Web reference folder. For example, if:  
  
-   FolderC were a Web reference folder, the namespace would be **CL9.FolderC**.  
  
-   FolderB were a Web reference folder, the namespace would be **CL9.FolderB.FolderC**.  
  
 That is, the namespace uses the following format:  
  
```  
rootNamespace.webReferenceFolder.containedFolder.containedFolder ...  
```  
  
## See Also  
 [Implementing Single-File Generators](/visualstudio/extensibility/internals/implementing-single-file-generators)   
 [Registering Single File Generators](/visualstudio/extensibility/internals/registering-single-file-generators)   
 [Exposing Types to Visual Designers](/visualstudio/extensibility/internals/exposing-types-to-visual-designers)