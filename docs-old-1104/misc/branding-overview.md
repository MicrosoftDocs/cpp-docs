---
title: "Branding Overview | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "About dialog box"
  - "VSPackages, splash screens"
  - "VSPackages, branding"
ms.assetid: a47b3645-574c-41c7-8a97-d071cd6b1e82
caps.latest.revision: 11
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
# Branding Overview
To show product information in the splash screen or **Help About** dialog box, your VSPackage must either:  
  
-   Provide detailed product information under the InstalledProducts registry key.  
  
     -or-  
  
-   Implement <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct>.  
  
 The managed package framework (MPF) provides the <xref:Microsoft.VisualStudio.Shell.InstalledProductRegistrationAttribute> attribute to control registration under the InstalledProducts registry key. For more information, see [How to: Brand a VSPackage (C# and Visual Basic)](../misc/how-to-brand-a-vspackage-csharp-and-visual-basic.md).  
  
 The Visual Studio Library provides the `IVsInstalledProductImpl` template class to create an implementation of <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct>. For more information, see [How to: Brand a VSPackage (C++)](../misc/how-to-brand-a-vspackage-cpp.md).  
  
 Implementing <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct> explicitly is more powerful than using the attribute or template.  
  
-   You can specify a splash screen icon that differs from the **Help About** icon.  
  
-   You can specify a splash screen product name that differs from the **Help About** product name.  
  
    > [!IMPORTANT]
    >  If you use <xref:Microsoft.VisualStudio.Shell.InstalledProductRegistrationAttribute> and also implement <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct>, the interface takes precedence.  
  
    > [!NOTE]
    >  The same icon resource is used for the splash screen and the **Help About** dialog box. Your VSPackage icon resource should include a 16 × 16 image for the splash screen and a 32 × 32 image for the **Help About** dialog box. If you provide only one image size, it will be resized as needed, but the visual results will be suboptimal.  
  
 For a list of related tasks, see[VSPackages](/visual-studio/extensibility/internals/vspackages).  
  
## See Also  
 [VSPackages](/visual-studio/extensibility/internals/vspackages)   
 [Visual Studio Library Overview](../misc/visual-studio-library-overview.md)