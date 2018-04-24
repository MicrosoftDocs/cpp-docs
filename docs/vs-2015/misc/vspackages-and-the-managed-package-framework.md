---
title: "VSPackages and the Managed Package Framework | Microsoft Docs"
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
  - "managed package framework"
  - "VSPackages, managed package framework"
  - "managed VSPackages, managed package framework"
ms.assetid: e8d80e0f-6b5b-4baf-a7df-59fd808c60cd
caps.latest.revision: 16
manager: "douge"
---
# VSPackages and the Managed Package Framework
You can reduce development time by creating a VSPackage with the managed package framework (MPF) classes instead of by using COM interop classes.  
  
 There are two ways to create a managed VSPackage:  
  
-   Use the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] Package project template  
  
     For more information, see [Walkthrough: Creating a Menu Command By Using the Visual Studio Package Template](http://msdn.microsoft.com/library/1985fa7d-aad4-4866-b356-a125b6a246de).  
  
-   Build your VSPackage without the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] Package project template  
  
     For example, you can copy a sample VSPackage and change the GUIDs and the names. You can find samples in the VSX section of [Code Gallery](http://code.msdn.microsoft.com/vsx/).  
  
## In This Section  
 [Managed Package Framework Classes](../misc/managed-package-framework-classes.md)  
 Describes and lists the MPF class namespaces and DLL files.  
  
## Related Sections  
 [Walkthrough: Creating a Menu Command By Using the Visual Studio Package Template](http://msdn.microsoft.com/library/1985fa7d-aad4-4866-b356-a125b6a246de)  
 Explains how to create a managed VSPackage.  
  
 [Managed VSPackages](../misc/managed-vspackages.md)  
 Introduces aspects of VSPackages that apply to managed code.