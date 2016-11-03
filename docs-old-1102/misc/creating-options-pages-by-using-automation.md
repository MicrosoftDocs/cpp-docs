---
title: "Creating Options Pages By Using Automation"
ms.custom: ""
ms.date: "10/25/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Tools Options pages [Visual Studio SDK], creating"
  - "automation [Visual Studio SDK], creating Tools Options pages"
ms.assetid: 05ec0337-58fe-4746-8e85-7fb97f285522
caps.latest.revision: 12
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
# Creating Options Pages By Using Automation
Managed VSPackages can use automation to extend the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] integrated development environment (IDE) by adding **Options** pages to the **Tools** menu.  
  
 A **Tools Options** page is fundamentally a user control, and is coded in the same way as any other user control. Typically, you would use one of the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] IDE's designers to create the object and add user controls.  
  
> [!NOTE]
>  **Tools Options** pages implemented as a dialog box, using a `DialogProc` to handle windows messages, must be modeless dialog boxes, and must not call the `EndDialog` function.  
  
 You should use the automation object that the VSPackage provides to the environment to support user control properties.  
  
## Automation Support for Tools Options Pages Implemented with the Interop Assemblies  
 To support the automation model, a VSPackage must create and register an automation object. See [Providing Automation for VSPackages](../Topic/Providing%20Automation%20for%20VSPackages.md) for more information.  
  
 When code that uses the automation model calls `DTE.Properties` for the properties collection of a given **Tools Options** page, the IDE uses the automation object provided by the VSPackage's implementation of <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.GetAutomationObject*> to return the collection and allow access to its constituent <xref:EnvDTE.Property> objects.  
  
 **Note** The automation object returned by <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.GetAutomationObject*> depends on the GUID supplied (as a VSPackage can support more than one automation object). For more information on implementing automation objects, see [Automation Support for Options Pages](../Topic/Automation%20Support%20for%20Options%20Pages.md).  
  
 A **Tools Options** page is specified by two identifiers. The first identifier is a string that indicates the folder containing the item on the **Options** section of the **Tools** menu. The second identifier is a string that indicates the specific item in the folder. For more information, see [Using Options Pages](../misc/using-options-pages.md).  
  
 Two registry entries are required to register an automation object:  
  
-   Under HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*<Version* \Packages\\*\<PackageGUID>*\Automation  
  
-   Under HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\AutomationProperties  
  
     where *\<Version>* is the version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] (such as 8.0) and *\<PackageGUID>* is the GUID of the VSPackage that implements the automation object.  
  
 Depending on the configuration under the AutomationProperties registry entry, the state of a **Tools Options** page may be automatically saved and restored through the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings mechanism when a user selects the **Import/Export Settings** command on the **Tools** menu. For more information on saving **Tools Options** page settings, see [Registering Custom Options Pages](../misc/registering-custom-options-pages.md).  
  
 An application might not use the automation model to implement support for a **Tools Options** page's properties and settings.  
  
 This may be desirable for several reasons:  
  
-   The settings handled by the **Tools Options** page are more complex in structure than what the relatively flat automation property model supports.  
  
-   There is a need to prevent other applications from programmatically managing its **Tools Options** page.  
  
-   Special access controls or security features are required.  
  
 In these cases, VSPackages can implement **Tools Options** page support in any way that is appropriate. However, they must:  
  
-   Handle the setting of **Tools Options** page properties.  
  
-   Manage persistence of **Tools Options** page state through the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings.  
  
-   Provide an API, if desired, for other applications to use the **Tools Options** page.  
  
 The properties of the **Fonts and Colors** dialog box is an example of a **Tools Options** page that cannot be modified through the automation model. Instead, a separate API is provided, based on the <xref:Microsoft.VisualStudio.Shell.Interop.IVsFontAndColorDefaults> interface to allow programmatic manipulation of the **Fonts and ColorsTools Options** page. For more information on controlling the **Fonts and ColorsTools Options** page, see [Using Fonts and Colors](../Topic/Using%20Fonts%20and%20Colors.md).  
  
## Automation Support for Tools Options Pages Within the Managed Package Framework  
 Set the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute.SupportsAutomation*> property of an implementation's registering <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> instance to indicate that a Managed Package Framework-base implementation of a **Tools Options** page supports automation.  
  
 **Tools Options** pages derived from <xref:Microsoft.VisualStudio.Shell.DialogPage> are supplied with a default automation object, which can be overridden.  
  
 If a **Tools Options** page implementation does not support automation, the implementation must supply its own API to allow programmatic access to the **Tools Options** page.  
  
> [!NOTE]
>  The IDE's **Fonts and Colors** page is an example of a **Tools Options** page that does not support automation, but provides access to the **Tools Options** page through its own API. For more information, see [Using Fonts and Colors](../Topic/Using%20Fonts%20and%20Colors.md).  
  
## See Also  
 [Extending the Visual Studio Environment](../Topic/Extending%20the%20Visual%20Studio%20Environment.md)   
 [Creating Options Pages By Using Interop Assemblies](../misc/creating-options-pages-by-using-interop-assemblies.md)   
 [Creating Options Pages](../Topic/Creating%20Options%20Pages.md)   
 [How to: Create Custom Options Pages](../Topic/How%20to:%20Create%20Custom%20Options%20Pages.md)   
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)   
 [Automation Support for Options Pages](../Topic/Automation%20Support%20for%20Options%20Pages.md)   
 [Using Options Pages](../misc/using-options-pages.md)