---
title: "Managed Package Framework Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/02/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "managed package framework, helper classes"
  - "managed package helper classes"
  - "Visual Studio SDK, managed package helper classes"
  - "classes [Visual Studio SDK], managed package framework"
ms.assetid: 15aedcc3-c79a-460b-b620-43223f1ae81e
caps.latest.revision: 24
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
# Managed Package Framework Classes
The managed package framework (MPF) classes can be used to create VSPackages using managed code. They provide default implementations for many VSPackage interfaces. By hiding implementation details and complexities, MPF enables you to create [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] integration products with a minimum amount of code.  
  
> [!WARNING]
>  Most of the assemblies that contain Managed Package Framework classes are shipped with the Visual Studio SDK. You can download the source code for the Managed Packaged Framework for Projects at [Managed Package Framework for Projects](http://mpfproj11.codeplex.com/).  
  
## MPF Namespaces  
 The following table lists the MPF namespaces provided by the [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)].  
  
|Name space|Contents|  
|----------------|--------------|  
|<xref:Microsoft.VisualStudio>|Contains useful classes for handling COM errors, [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] constants, and Win32 windows.|  
|<xref:Microsoft.VisualStudio.Package>|Includes managed code wrappers for [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] projects, editors, and MSBuild.|  
|<xref:Microsoft.VisualStudio.Shell>|Includes MPF base classes from which you can derive an implementation of many common Visual Studio objects.|  
|<xref:Microsoft.VisualStudio.Shell.Design>|Contains [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] designer extensions.|  
|<xref:Microsoft.VisualStudio.Shell.Design.Serialization>|Contains [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] serialization designer extensions.|  
|<xref:Microsoft.VisualStudio.Shell.Design.Serialization.CodeDom>|Contains [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] CodeDom designer extensions.|  
|<xref:Microsoft.VisualStudio.Shell.Flavor>|Supports project subtypes (also known as "flavors").|  
  
## See Also  
 [VSPackages and the Managed Package Framework](../misc/vspackages-and-the-managed-package-framework.md)   
 [Using Visual Studio Interop Assemblies](/visual-studio/extensibility/internals/using-visual-studio-interop-assemblies)   
 [VSPackages and the Managed Package Framework](../misc/vspackages-and-the-managed-package-framework.md)