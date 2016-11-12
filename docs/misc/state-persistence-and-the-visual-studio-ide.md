---
title: "State Persistence and the Visual Studio IDE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "IDE settings, state persistence"
  - "user settings [Visual Studio SDK], persisting"
  - "Tools Options pages [Visual Studio SDK], persisting settings"
  - "IDE, state persistence"
  - "persistence, user settings"
ms.assetid: fdd49bb1-ed3b-4428-b685-de65c3215c1c
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
# State Persistence and the Visual Studio IDE
The **Import/Export Settings** command on the **Tools** menu of the integrated development environment (IDE) imports and exports customizations of the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] environment. The [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings APIs in the [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] enable a VSPackage to define one or more settings categories (groups of state variables) to be persisted when a user chooses the **Import/Export Settings** command.  
  
 A GUID uniquely identifies each settings category and is defined in its own registry entry, referred to as a *Custom Settings Point*.  
  
> [!NOTE]
>  The standard implementations of the **ToolsOptions** pages, the **Toolbox**, and the `Microsoft.VisualStudio.Shell.DialogPage` automatically provide support for persistence. The settings API can override the default mechanism. For more information, see [Extending the Toolbox](../misc/extending-the-toolbox.md), [Options Pages](../misc/options-pages.md), and <xref:Microsoft.VisualStudio.Shell.DialogPage>.  
  
## In This Section  
 [Support for User Settings](/visual-studio/extensibility/internals/support-for-user-settings)  
 Describes the registry settings (Custom Settings Point) and attributes used to specify a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings implementation used by a given VSPackage.  
  
 [How to: Export Settings By Using Interop Assemblies](../misc/how-to-export-settings-by-using-interop-assemblies.md)  
 Provides a detailed description of how to implement support for saving configuration data by using the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings mechanism for interop assembly based VSPackages.  
  
 [How to: Use Interop Assemblies to Import Settings](../misc/how-to-use-interop-assemblies-to-import-settings.md)  
 Provides a detailed description of how to implement support for retrieving configuration data by using the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings mechanism for interop assembly based VSPackages.  
  
 [Exporting Settings](../misc/exporting-settings.md)  
 Includes a detailed description of how to implement support for saving configuration data by using the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings mechanism for Managed Package Framework based VSPackages.  
  
 [Importing Settings](../misc/importing-settings.md)  
 Provides a detailed description of how to implement support for retrieving configuration data by using the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings mechanism for Managed Package Framework based VSPackages.  
  
## Related Sections  
 [Working with Settings](http://msdn.microsoft.com/en-us/4c0a56ab-6091-4ebc-9dc7-52c40846bacb)  
 Describes how to manage the export/import sections of the IDE.  
  
 [Options Pages](../misc/options-pages.md)  
 Describes the support that the [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] automatically provides for managing existing or creating new **Tools Options** pages.  
  
 [Extending the Toolbox](../misc/extending-the-toolbox.md)  
 Explains the support that the [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] automatically provides for managing or extending the **Toolbox**.  
  
 [Extending User Settings and Options](/visual-studio/extensibility/extending-user-settings-and-options)  
 Describes how to program your VSPackage to obtain and preserve user preferences.