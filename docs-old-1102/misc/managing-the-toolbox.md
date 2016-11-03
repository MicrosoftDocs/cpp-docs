---
title: "Managing the Toolbox"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Toolbox [Visual Studio SDK], automatic tab selection"
  - "Toolbox [Visual Studio SDK], managing"
ms.assetid: 3b052047-f6db-46dd-b3bf-da1c348ee410
caps.latest.revision: 33
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
# Managing the Toolbox
The [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] allows a VSPackage, such as an editor or designer, to manage the membership and appearance of the **Toolbox**.  
  
 In addition, The **Toolbox** itself can be managed using automation. For more information on managing a Toolbox through automation, see [How to: Control the Toolbox](../Topic/How%20to:%20Control%20the%20Toolbox.md).  
  
## Automatic Toolbox Tab Selection  
 A particular **Toolbox** tab or category can be automatically made active based on which editor or designer is currently active. For example, if a forms designer is activated, you may want the **All Windows Forms** tab selected.  
  
 This support is limited to editors and designers requiring:  
  
1.  The implementation of a factory object to provide instances of the editor or designer. For more information on implementing a designer or editor factory object, see [Editor Factories](../Topic/Editor%20Factories.md).  
  
2.  Registration of the toolbox tab that automatically is activated if the editor or designer is present.  
  
## Controlling the Toolbox  
 Supplementing automation support, the [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] provides the following interfaces to provide VSPackages greater control over how the **Toolbox** is managed.  
  
|Interface|Description|  
|---------------|-----------------|  
|<xref:System.Drawing.Design.IToolboxService>|Allows applications to manage, add, and remove <xref:System.Drawing.Design.ToolboxItem> objects from the **Toolbox**. Also enables configuration of appearance and **Toolbox** categories.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2>|Allows applications to manage, add, and remove Active-based **Toolbox** controls, as well as configure **Toolbox** categories and appearance.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3>|Extends functionality found in <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> by providing complete support for persistence and localization.|  
|<xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox4>||  
|<xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox5>||  
|<xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox6>||  
  
 There are several important points to keep in mind when working with these interfaces:  
  
-   <xref:System.Drawing.Design.IToolboxService> is available only to Managed Package Framework-based VSPackages.  
  
-   Controls cannot be directly added to the **Toolbox** using <xref:System.Drawing.Design.IToolboxService>.  
  
-   A VSPackage must either use <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> to add controls or host the control in a wrapper control that derives from <xref:System.Windows.Forms.AxHost>.  
  
     Visual Studio provides the `Aximp.exe` tool for automating the wrapping of an ActiveX control in a control derived from <xref:System.Windows.Forms.AxHost>. For more information, see [Aximp.exe (Windows Forms ActiveX Control Importer)](../Topic/Aximp.exe%20\(Windows%20Forms%20ActiveX%20Control%20Importer\).md).  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox>, <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2>, and <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3> are COM-based interfaces available through the interop assemblies.  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> derives from <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox> and implements all its methods.  
  
     Objects only obtain an instance of <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2>.  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3> does not derive from <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> and does not implement its methods.  
  
     Objects needing functionality in both interfaces must obtain instances of both interfaces from the environment.  
  
-   When working with <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3>, information about the canonical (non-localized) names of tabs is handled by the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3.GetIDOfTab*> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3.SetIDOfTab*> methods.  
  
-   When using <xref:System.Drawing.Design.IToolboxService>, it is up to the implementer to manage localized information, such as names of categories.  
  
 Use the settings mechanism to enable users to save **Toolbox** settings accessed by users from the **Import/Export Settings** command, found on the IDE's **Tools** menu. For more information on how to use settings, see [Extending User Settings and Options](../Topic/Extending%20User%20Settings%20and%20Options.md).  
  
## See Also  
 [Extending the Toolbox](../misc/extending-the-toolbox.md)