---
title: "VSPackages and the Managed Package Framework"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
helpviewer_keywords: 
  - "managed package framework"
  - "VSPackages, managed package framework"
  - "managed VSPackages, managed package framework"
ms.assetid: e8d80e0f-6b5b-4baf-a7df-59fd808c60cd
caps.latest.revision: 16
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
# VSPackages and the Managed Package Framework
You can reduce development time by creating a VSPackage with the managed package framework (MPF) classes instead of by using COM interop classes.  
  
 There are two ways to create a managed VSPackage:  
  
-   Use the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] Package project template  
  
     For more information, see [Walkthrough: Creating a Menu Command By Using the Visual Studio Package Template](../Topic/Walkthrough:%20Creating%20a%20Menu%20Command%20By%20Using%20the%20Visual%20Studio%20Package%20Template.md).  
  
-   Build your VSPackage without the [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] Package project template  
  
     For example, you can copy a sample VSPackage and change the GUIDs and the names. You can find samples in the VSX section of [Code Gallery](http://code.msdn.microsoft.com/vsx/).  
  
## In This Section  
 [Managed Package Framework Classes](../notintoc/managed-package-framework-classes.md)  
 Describes and lists the MPF class namespaces and DLL files.  
  
## Related Sections  
 [Walkthrough: Creating a Menu Command By Using the Visual Studio Package Template](../Topic/Walkthrough:%20Creating%20a%20Menu%20Command%20By%20Using%20the%20Visual%20Studio%20Package%20Template.md)  
 Explains how to create a managed VSPackage.  
  
 [Managed VSPackages](../notintoc/managed-vspackages.md)  
 Introduces aspects of VSPackages that apply to managed code.