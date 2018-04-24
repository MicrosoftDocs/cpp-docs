---
title: "Creating Options Pages By Using Interop Assemblies | Microsoft Docs"
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
  - "Tools Options pages [Visual Studio SDK], creating using interop assemblies"
  - "interop assemblies, creating Tools Options pages"
ms.assetid: 7a03f2f5-a53e-4a46-877f-5b10dd82dbc3
caps.latest.revision: 30
manager: "douge"
---
# Creating Options Pages By Using Interop Assemblies
Managed VSPackages can use the COM-based interop assemblies of the [!INCLUDE[vsipsdk](../includes/vsipsdk-md.md)] to extend the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] integrated development environment (IDE) by adding **Options** pages to the **Tools** menu.  
  
 A **Tools Options** page is fundamentally a user control, and is coded in the same way as any other user control. Typically, you would use one of the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] IDE's designers to create the object and add user controls.  
  
> [!NOTE]
>  A **Tools Options** page implemented as a dialog box, using a DialogProc to handle windows messages, must be a modeless dialog box, and must not call the EndDialog function.  
  
 You should use the automation object that the VSPackage provides to the environment to support the properties that the user control displays.  
  
 A VSPackage that implements a **Tools Options** page can support programmatic control of its properties directly or through the IDE's automation model. For more information on supporting **Tools Options** pages with automation, see [Creating Options Pages By Using Automation](../misc/creating-options-pages-by-using-automation.md).  
  
## Making Tools Options Pages Available to the IDE  
 In addition to implementing a user control, VSPackages must make that control available to the IDE.  
  
 This is done through the implementation of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.GetPropertyPage%2A> method, which returns a <xref:Microsoft.VisualStudio.Shell.Interop.VSPROPSHEETPAGE> structure based on the GUID passed.  
  
 The IDE uses the <xref:Microsoft.VisualStudio.Shell.Interop.VSPROPSHEETPAGE> structure to set the characteristics of a **Properties** page.  
  
 The settings contained in its `dwFlags` member determine the exact interpretation of the other members of <xref:Microsoft.VisualStudio.Shell.Interop.VSPROPSHEETPAGE>. The structure typically provides:  
  
-   A handle to the instance from which to load an icon or string resource.  
  
-   The resource identifier of the page's dialog box templates.  
  
-   A pointer to the DialogProc for the page.  
  
## Registering a Tools Options Page  
 You can register a **Tools Options** page by creating an entry in the following registry location: HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\ToolsOptionsPages, where *\<Version>* is the version of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)], such as 8.0.  
  
 To register the page, you can either manually edit the registry or use a registry script (.rgs file). For more information, see [Creating Registrar Scripts](../atl/creating-registrar-scripts.md).  
  
## See Also  
 [Extending the Visual Studio Environment](http://msdn.microsoft.com/library/4173a963-7ac7-4966-9bb7-e28a9d9f6792)   
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)   
 [Automation Support for Options Pages](http://msdn.microsoft.com/library/0b25b82c-7432-4e0a-9e84-350269ba8260)   
 [Using Options Pages](../misc/using-options-pages.md)   
 [Creating Options Pages](http://msdn.microsoft.com/library/1bf11fec-dece-4943-8053-6de1483c43eb)   
 [Creating Options Pages By Using Automation](../misc/creating-options-pages-by-using-automation.md)