---
title: "Product Release Essentials | Microsoft Docs"
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
  - "deployment, essentials"
  - "installation [Visual Studio SDK], essentials"
ms.assetid: 28370bc8-f3a7-4c5e-9b35-8331cda14ff4
caps.latest.revision: 12
manager: "douge"
---
# Product Release Essentials
A pleasant and robust setup experience forms a lasting impression in your users’ minds about your [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] integration product. An unpleasant setup experience also forms a lasting impression, so following best practices in setup development and testing is worth the investment.  
  
## Developing Windows Installer Setup Packages  
 Windows Installer is the recommended installation and configuration service for Windows and for [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] integration products.  
  
> [!NOTE]
>  The [!INCLUDE[vsipsdk](../includes/vsipsdk-md.md)] documentation on installing [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] integration products builds on Windows Installer concepts, but it does not cover Windows Installer itself. For links to relevant sections of the Windows Installer documentation, refer to the table below.  
  
 In the context of setup, *component* refers to a Windows Installer component. Components contain resources like files and registry entries, and are installed and removed as a unit.  
  
|Task|For more information, see|  
|----------|-------------------------------|  
|Learn more about Windows Installer.|[Windows Installer](http://msdn.microsoft.com/library/aa372866.aspx)|  
|Determine your VSPackage's system requirements.|-   [Detecting System Requirements](http://msdn.microsoft.com/library/0ba94acf-bf0b-4bb3-8cca-aaac1b5d6737)|  
|Learn how to register a VSPackage in a setup package.|-   [VSPackage Registration](http://msdn.microsoft.com/library/ecd20da8-b04b-4141-a8f4-a2ef91dd597a)<br />-   [Commands That Must Be Run After Installation](http://msdn.microsoft.com/library/c9601f2e-2c6e-4da9-9a6e-e707319b39e2)|  
|See a sample installation package.|-   IronPython Integration Setup Sample|  
  
## Supporting Side-by-Side Products  
 Side-by-side (sometimes shortened to *SxS*) refers to the ability to have multiple versions of the same product installed, and even running, simultaneously. For [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] integration products, it also refers to the fact that [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] itself supports side-by-side execution.  
  
|Task|For more information, see|  
|----------|-------------------------------|  
|Learn about supporting multiple versions of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] in your [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] integration product.|-   [Choosing Between Shared and Versioned VSPackages](http://msdn.microsoft.com/library/e3128ac3-2e92-48e9-87ab-3b6c9d80e8c9)<br />-   [Component Management](http://msdn.microsoft.com/library/029bffa2-6841-4caa-a41a-442467e1aedc)|  
|Learn about supporting multiple versions of your [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] integration product.|-   [Choosing Between Shared and Versioned VSPackages](http://msdn.microsoft.com/library/e3128ac3-2e92-48e9-87ab-3b6c9d80e8c9)<br />-   [Registering File Name Extensions for Side-By-Side Deployments](http://msdn.microsoft.com/library/9ab046a2-147d-4167-aa14-7d661b1eaaa5)<br />-   [Detecting System Requirements](http://msdn.microsoft.com/library/0ba94acf-bf0b-4bb3-8cca-aaac1b5d6737)<br />-   [Commands That Must Be Run After Installation](http://msdn.microsoft.com/library/c9601f2e-2c6e-4da9-9a6e-e707319b39e2)|  
  
## Testing Your Visual Studio Integration Product  
 The [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] Integration Test (VSIT) suite is a series of tests that verifies that a VSPackage correctly integrates into [!INCLUDE[vsprvs](../includes/vsprvs-md.md)]. VSIT does not test a VSPackage’s functionality, but helps ensure that a VSPackage does not adversely affect other [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] functionality. For more information, see [Visual Studio Integration Tests](http://msdn.microsoft.com/en-us/8d741735-7d93-46c2-ab93-01da7a0e016d).