---
title: "How to: Manually Package an Extension (VSIX Deployment) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: d25990e0-e782-4a79-9d9a-1caf3c56c6a2
caps.latest.revision: 10
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
# How to: Manually Package an Extension (VSIX Deployment)
You can create a VSIX package to wrap a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] extension for deployment. There are three ways to create the package:  
  
-   Create a VSIX package project by using one of the extensibility templates that are included in the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] SDK. This is the easiest option for most scenarios.  
  
-   Wrap the output of your extension project in an empty [VSIX Project](/visual-studio/extensibility/vsix-project-template). We recommend this option for templates, unsupported assemblies, and custom types.  
  
-   Manually create a VSIX package. We recommend this option only when the other two options are not available.  
  
 This document describes the third option.  
  
## Creating a VSIX Package  
 To manually package an extension, add an extension.manifest file and a [Content_Types].xml file to the extension project, put them in a compressed file together with your build output, and rename the compressed file so that it has a .vsix file name extension. The extension to be packaged must be of a type that is supported by the [VSIX schema](http://msdn.microsoft.com/en-us/76e410ec-b1fb-4652-ac98-4a4c52e09a2b).  
  
> [!NOTE]
>  The names of files in VSIX packages must not include spaces, nor characters that are reserved in Uniform Resource Identifiers (URI), as defined under [\[RFC2396\]](http://go.microsoft.com/fwlink/?LinkId=90339).  
  
#### To manually create a VSIX package  
  
1.  Create a Visual Studio extension of a type that is supported by the VSIX schema.  
  
2.  Create an XML file, and name it `extension.vsixmanifest`.  
  
3.  Fill in the extension.vsixmanifest file according to the VSIX schema. For an example manifest, see [PackageManifest Element (Root Element, VSX Schema)](http://msdn.microsoft.com/en-us/f8ae42ba-775a-4d2b-976a-f556e147f187).  
  
4.  Create a second XML file, and name it `[Content_Types].xml`.  
  
5.  Fill in the [Content_Types].xml file as specified in [The Structure of the Content_types\].xml File](../Topic/The%20Structure%20of%20the%20Content_types].xml%20File.md).  
  
6.  Put both XML files in a directory together with the extension to be deployed.  
  
     In the case of a project template or item template, put the .zip file that contains the template in the same folder as the XML files. Do not put the XML files in the .zip file.  
  
     In all other cases, put the XML files in the same directory as the build output.  
  
7.  In Windows Explorer, right-click the folder that contains the extension content and the two XML files, click **Send To**, and then click **Compressed (zipped) Folder**.  
  
8.  Rename the resulting .zip file to *Filename*.vsix, where *Filename* is the name of the redistributable file that installs your package.  
  
## See Also  
 [Shipping Visual Studio Extensions](/visual-studio/extensibility/shipping-visual-studio-extensions)   
 [Anatomy of a VSIX Package](/visual-studio/extensibility/anatomy-of-a-vsix-package)   
 [PackageManifest Element (Root Element, VSX Schema)](http://msdn.microsoft.com/en-us/f8ae42ba-775a-4d2b-976a-f556e147f187)