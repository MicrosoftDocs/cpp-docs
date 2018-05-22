---
title: "Using Options Pages | Microsoft Docs"
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
  - "Tools Options pages [Visual Studio SDK], usage"
ms.assetid: 5ae6b995-3aeb-43a7-9786-4cf69faa101c
caps.latest.revision: 36
manager: "douge"
---
# Using Options Pages
The [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] automation model provides the <xref:EnvDTE.DTE> object to enable VSPackages to access the **Options** dialog box on the **Tools** menu.  
  
 Typically, pages in the **Options** dialog box can be accessed by using the automation model, whether the pages are provided by the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] integrated development environment (IDE) or by a VSPackage. However, there are some exceptions, as follows:  
  
-   The settings of the **Dynamic Help** page cannot be accessed programmatically. The **Dynamic Help** feature can be controlled by using the automation model, but control must be accomplished directly in code. For more information, see [How to: Control the Dynamic Help Window](http://msdn.microsoft.com/en-us/7f5777aa-c270-4058-a175-8ce8a4ed25eb).  
  
-   Control of the **Fonts and Color** page settings is provided through its own API, not through the automation model. For more information, see [Using Fonts and Colors](http://msdn.microsoft.com/library/d1a9b99f-fbdc-45ed-920a-e08c3d931ac9).  
  
-   Language-specific properties cannot be obtained through the automation model.  
  
 **Options** pages that do not support the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] automation model may not return an automation <xref:EnvDTE.Properties> collection when queried. If the collection is returned, not all features are present. For information about how to manage these features, see [DTE Properties Collections](http://msdn.microsoft.com/library/c062b48c-d104-4560-a3fe-f9e2f56ca4c6).  
  
## Managing Options Pages  
 To manage **Options** pages, a VSPackage must get a <xref:EnvDTE.DTE> object from the automation model.  
  
> [!NOTE]
>  When a VSPackage uses the automation model to query and change settings on installed **Options** pages, it does not extend the IDE functionality. Therefore, the package does not have to implement an automation object.  
  
 To obtain a <xref:EnvDTE.DTE> object through the automation model, call the <xref:Microsoft.VisualStudio.OLE.Interop.IServiceProvider.QueryService%2A> method and provide a service ID argument of `SID_SDTE` and an interface argument of `IID__DTE`, as follows.  
  
```  
pServiceProvider->QueryService(SID_SDTE, IID__DTE, (LPVOID*)pDTE);  
```  
  
 To obtain a <xref:EnvDTE.DTE> object by using the Managed Package Framework (MPF), call the <xref:Microsoft.VisualStudio.Shell.Package.GetService%2A> method and provide a `serviceType` parameter of type <xref:Microsoft.VisualStudio.Shell.Interop.SDTE>.  
  
 [!code-csharp[UI_UserSettings_ToolsOptionPages#01](../snippets/csharp/VS_Snippets_VSSDK/ui_usersettings_toolsoptionpages/cs/uiusersettingstoolsoptionspagespackage.cs#01)]
 [!code-vb[UI_UserSettings_ToolsOptionPages#01](../snippets/visualbasic/VS_Snippets_VSSDK/ui_usersettings_toolsoptionpages/vb/uiusersettingstoolsoptionspagespackage.vb#01)]  
  
 An **Options** page is specified by two identifiers. The first identifier is a string that indicates the folder that contains the **Options** page. The second identifier is a string that indicates the specific item in that folder. These are referred to as an **Options** page category and subcategory, or its topic and subtopic.  
  
 For example, the text editor settings for handling Basic code are on the navigation pane as the **Basic** member of the **Text Editor** folder. The identifier for the category is `TextEditor` and its subcategory is `Basic`, and the **Options** page itself is referred to as the `TextEditor.Basic` page.  
  
> [!NOTE]
>  For localization and other reasons, the names displayed on **Options** pages may differ from the strings used as category and subcategory identifiers. You may have to use automation to query the IDE to obtain the correct identifiers, if they are not documented elsewhere. The registry location is HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<VS Version>*\AutomationProperties, where *\<VS Version>* is the version number of the release of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)]. For more information, see [Registering Custom Options Pages](../misc/registering-custom-options-pages.md).  
  
 You can obtain the properties for the `TextEditor.Basic` page through the automation model by using the following example.  
  
```  
CComPtr<_DTE> srpDTE;  
CComPtr<Properties> srpDTEPropertiesList;  
hr = srpDTE->get_Properties("TextEditor", "Basic", &srpDTEPropertiesList);  
```  
  
 To obtain the properties by using the MPF, use the <xref:EnvDTE._DTE.Properties%2A> method.  
  
 [!code-csharp[UI_UserSettings_ToolsOptionPages#02](../snippets/csharp/VS_Snippets_VSSDK/ui_usersettings_toolsoptionpages/cs/uiusersettingstoolsoptionspagespackage.cs#02)]
 [!code-vb[UI_UserSettings_ToolsOptionPages#02](../snippets/visualbasic/VS_Snippets_VSSDK/ui_usersettings_toolsoptionpages/vb/uiusersettingstoolsoptionspagespackage.vb#02)]  
  
 The <xref:EnvDTE.Properties.Item%2A> method returns individual settings from the <xref:EnvDTE.Properties> collection as a <xref:EnvDTE.Property> object.  
  
 As with categories and subcategories, each setting has an identifier that is a unique string. For example, the **Tab Size** setting on the `TextEditor.Basic` page is identified by the string, `TabSize`.  
  
> [!NOTE]
>  For localization and other reasons, the names displayed on **Options** pages may differ from the strings used as setting identifiers. You may have to use automation to query the IDE to obtain the correct identifiers, if they are not documented elsewhere.  
  
 You can use the <xref:EnvDTE.Property.Value%2A> of the <xref:EnvDTE.Property> object that is returned by the <xref:EnvDTE.Properties.Item%2A> method of the <xref:EnvDTE.Properties> collection to query and change the settings state.  
  
 For example, to set the **Tab Size** setting on the `TextEditor.Basic` page through the automation model, use the <xref:EnvDTE.Properties> object returned in the following example.  
  
```  
CComPtr<Property> srpProperty;  
hr = srpDTEPropertiesList->Item("TabSize", &srpProperty);  
hr= srpProperty.set_Value(4);  
```  
  
 The following example demonstrates how to update the **Tab Size** setting by using the MPF.  
  
 [!code-csharp[UI_UserSettings_ToolsOptionPages#03](../snippets/csharp/VS_Snippets_VSSDK/ui_usersettings_toolsoptionpages/cs/uiusersettingstoolsoptionspagespackage.cs#03)]
 [!code-vb[UI_UserSettings_ToolsOptionPages#03](../snippets/visualbasic/VS_Snippets_VSSDK/ui_usersettings_toolsoptionpages/vb/uiusersettingstoolsoptionspagespackage.vb#03)]  
  
 For more information, see [Controlling Options Settings](http://msdn.microsoft.com/library/a09ed242-7494-4cde-bbd1-7a8ec617965d).  
  
## Persisting Options Page Settings  
 The IDE implements state persistence of **Options** pages that fully support the [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] automation model.  
  
 Settings on pages that are included in the IDE are automatically saved (or retrieved) when a user clicks the **Import/Export Settings** command on the **Tools** menu.  
  
 You can enable your custom **Options** page to use this automatic persistence support by adding the `ProfileSave` flag to the custom **Options** page registry entry under HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<VS Version>*\AutomationProperties, where *\<VS Version>* is the version number of the release of [!INCLUDE[vsprvs](../includes/vsprvs-md.md)]. For more information, see [Registering Custom Options Pages](../misc/registering-custom-options-pages.md).  
  
## See Also  
 [Creating Options Pages By Using Interop Assemblies](../misc/creating-options-pages-by-using-interop-assemblies.md)   
 [Creating Options Pages](http://msdn.microsoft.com/library/1bf11fec-dece-4943-8053-6de1483c43eb)   
 [Creating Options Pages By Using Automation](../misc/creating-options-pages-by-using-automation.md)   
 [Controlling Options Settings](http://msdn.microsoft.com/library/a09ed242-7494-4cde-bbd1-7a8ec617965d)   
 [Registering Custom Options Pages](../misc/registering-custom-options-pages.md)   
 [Opening an Options Page](../misc/opening-an-options-page.md)   
 [Extending User Settings and Options](http://msdn.microsoft.com/library/5bb6277a-8c9d-48c8-9b4e-1cb3052caded)