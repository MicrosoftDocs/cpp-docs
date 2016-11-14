---
title: "Registering Custom Options Pages | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "registration, custom Tools Options pages"
  - "Tools Options pages [Visual Studio SDK], registering"
ms.assetid: 0ac6377d-a679-4f7d-be80-451c829b56f2
caps.latest.revision: 28
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
# Registering Custom Options Pages
For a **Tools Options** page to be available to users and support automation, it must be properly registered with the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] integrated development environment (IDE).  
  
 **Tools Options** pages based on the managed package framework are registered by applying an instance of <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> to the VSPackage providing the page. Automation support is indicated by setting the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute.SupportsAutomation%2A> property to `true`.  
  
## Tools Options Page Registration  
 Integrating a custom **Tools Options** page with [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] requires the creation of a registry entry in the following location: HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\ToolsOptionsPages, where *\<Version>* is the version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], for example 8.0.  
  
 The entry has a primary key with the category (`<PageCategory>`) of the **Tools Options** page, and a subkey containing the name of the page's subcategory (`<PageSubCategory>`).  
  
 For example, the **Tools Options** page identified with the string, **TextEditor.Basic**, has a registry key `<PageCategory>`=textEditor with a subkey of `<PageSubCategory>`=Basic.  
  
 The structure of the registry entry is below:  
  
 HKLM\Software\Microsoft\VisualStudio\\*\<Version>*\ToolsOptionsPages\  
  
 `<PageCategory>` = '#12345'  
  
 Package = '{XXXXXX XXXX XXXX XXXX XXXXXXXXX}'  
  
 ResourcePackage = '{YYYYYY YYYY YYYY YYYY YYYYYYYYY}'  
  
 HKLM\Software\Microsoft\VisualStudio\\*\<Version>*\ToolsOptionsPages\\`<PageCategory>`  
  
 `<PageSubCategory>>` = '#67890'  
  
 Page = '{ZZZZZZ ZZZZ ZZZZ ZZZZ ZZZZZZZZZ}'  
  
 Package = '{AAAAAA AAAA AAAA AAAA AAAAAAAAA}'  
  
 ResourcePackage = '{BBBBBB BBBB BBBB BBBB BBBBBBBBB}'  
  
 NoShowAllView = 0/1  
  
 The following table lists the values under HKLM\Software\Microsoft\VisualStudio\\*\<Version>*\ToolsOptionsPages\\`<PageCategory>`.  
  
|Name|Type|Data|Description|  
|----------|----------|----------|-----------------|  
|(Default)|REG_SZ|The canonical category name of the custom **Tools Options** page|The key's name, `<PageCategory>`, is the canonical non-localized category name of the **Tools Options** page. **Note:**  If automation is supported, the canonical non-localized category and subcategory names are used to obtain a **Tools Options** page's <xref:EnvDTE.Properties> collection. For more information, see [Using Options Pages](../misc/using-options-pages.md). <br /><br /> For implementations based on the managed package framework, `<PageCategory`> is obtained from the `categoryName` argument to the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> constructor.<br /><br /> The key can be empty, or it can contain the reference ID to the localized string in an implementation's satellite DLL.<br /><br /> For implementations based on the managed package framework, this value is obtained from the `categoryResourceID` argument to the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> constructor.|  
|Package|REG_SZ|GUID|The GUID of the VSPackage implementing the custom **Tools Options** page.<br /><br /> Implementations based on the managed package framework using <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> use reflection to obtain this value.|  
|ResourcePackage|REG_SZ|GUID|Optional.<br /><br /> A satellite DLL containing localized strings if the implementing VSPackage does not supply them.<br /><br /> The managed package framework uses reflection to obtain the correct resource package, so <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> does not set this argument.|  
  
 The following table lists the values under HKLM\Software\Microsoft\VisualStudio\\*\<Version>*\ToolsOptionsPages\\`<PageCategory>`\\`<PageSubCategory>`.  
  
|Name|Type|Data|Description|  
|----------|----------|----------|-----------------|  
|(Default)|REG_SZ|The canonical subcategory name of the custom **Tools Options** page|The key's name, `<PageSubCategory`>, is the canonical non-localized name of the **Tools Options** page subcategory. **Note:**  If automation is supported, the canonical non-localized category and subcategory names are used to obtain a **Tools Options** page's <xref:EnvDTE.Properties> collection. For more information, see [Using Options Pages](../misc/using-options-pages.md). <br /><br /> For implementations based on the managed package framework, `<PageSubegory`> is obtained from the `pageName` argument to the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> constructor.<br /><br /> The key can be empty, or it can contain the reference ID to the localized string in a satellite DLL of an implementation.<br /><br /> For implementations based on the managed package framework, this value is obtained from the `pageNameResourceID` argument to the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> constructor.|  
|Page|REG_SZ|GUID|The GUID of the object implementing the custom **Tools Options** page.<br /><br /> Implementations based on the managed package framework using <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> use the constructor's `pageType` argument containing the VSPackage's <xref:System.Type> and reflection to obtain this value.|  
|Package|REG_SZ|GUID|Implementations based on the managed package framework using <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> use reflection to obtain this value.|  
|ResourcePackage|REG_SZ|GUID|Optional.<br /><br /> A satellite DLL containing localized strings if the implementing VSPackage does not supply them.<br /><br /> The managed package framework uses reflection to obtain the correct resource DLL, so <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> does not set this argument.|  
|NoShowAllView|REG_DWORD|0 or 1|Optional.<br /><br /> Indicates whether a given **Tools Options** page should appear in the complex (default) view of **Tools Options** pages. Supports programming environments, such as Visual Basic, which have special **Tools Options** pages to aggregate common settings to provide users with specialized simplified views of options.<br /><br /> If the REG_DWORD entry is non-zero, the **Tools Options** page does not appear in a complex view.<br /><br /> For more information, see [Options Dialog Box](/visual-studio/ide/reference/options-dialog-box-visual-studio).<br /><br /> Implementations based on the managed package framework can set this value by setting the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute.NoShowAllView%2A> property to `true` in the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> constructor.|  
  
 A VSPackage or object based on a single interop assembly may implement more than one **Tools Options** page. Each implementation requires a new entry in HKLM\Software\Microsoft\VisualStudio\\*\<Version>*\ToolsOptionsPages.  
  
 As the managed package framework instantiates the object providing a **Tools Options** page, each page should have its own implementation object, independent from a VSPackage's implementation of <xref:Microsoft.VisualStudio.Shell.Package>.  
  
## Automation Support  
 If automation support is used to implement a **Tools Options** page, it must register itself as an automation provider. To use automation for property management, and use its persistence mechanisms to save the **Tools Options** page state, it must register itself as an `AutomationProperty`provider.  
  
### Register a VSPackage as an Automation Provider (Only for Tools Options Pages Based on Interop Assemblies)  
 **Tools Options** pages based on an interop assembly are implemented as part of a VSPackage's implementation classes.  
  
 In this case, if a **Tools Options** page is to support automation, the interop assembly–based VSPackage must be registered as an automation provider.  
  
> [!NOTE]
>  Automation support in the managed package framework is provided by an object independent of the implementation of the VSPackage. If that object supports automation, this is registered through the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute.SupportsAutomation%2A> property of the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> constructor.  
  
 The entry for registering a VSPackage as an automation provider is of the form HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\Packages\\*\<PackageGUID>*\Automation, where *\<Version>* is the version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] (such as 8.0) and *\<PackageGUID>* is the GUID of the VSPackage implementing the automation object.  
  
> [!NOTE]
>  The root path of HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>* can be overridden with an alternate root when the Visual Studio shell is initialized. For more information, see [Command-Line Switches](/visual-studio/extensibility/command-line-switches-visual-studio-sdk).  
  
 The structure of the registry entry is:  
  
 HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\Packages\\*\<PackageGUID>*\Automation  
  
 `<AutomationObjectName>`  
  
|Name|Type|Data|Description|  
|----------|----------|----------|-----------------|  
|Automation|REG_SZ|Not defined|Undefined.<br /><br /> The presence of this key indicates that the VSPackage referred to by *\<PackageGUID>* supports automation.<br /><br /> The field can be used to store documentation.<br /><br /> <xref:Microsoft.VisualStudio.Shell.ProvideAutomationObjectAttribute> automatically creates this key for applications based on the managed package framework.|  
|`<AutomationObjectName>`|REG_SZ|The canonical name of the automation object provided|Only the key name is relevant. It is used in automation operations.<br /><br /> The field can be used to store documentation.<br /><br /> For implementations based on the managed package framework, the name of this key is determined by the `name` argument to the <xref:Microsoft.VisualStudio.Shell.ProvideAutomationObjectAttribute> constructor.<br /><br /> If the <xref:Microsoft.VisualStudio.Shell.ProvideAutomationObjectAttribute> constructor has a valid string supplied to its <xref:Microsoft.VisualStudio.Shell.ProvideAutomationObjectAttribute.Description%2A> property, this value is inserted here.|  
  
### Register a Tools Options Page as Supporting Automation  
 Both Managed Package Framework– and interop assembly–based implementations of **Tools Options** pages must register to allow automation access to a **Tools Options** page. This includes the automation property persistence mechanisms and access to the page through <xref:EnvDTE>. This is independent of the registration of the VSPackage itself as an automation service provider.  
  
 As with the **Tools Options** page registration mentioned above, the entry has a primary key with the category (`<PageCategory>`) of the **Tools Options** page, and a subkey containing the name of the page's subcategory (`<PageSubcategory>`).  
  
 If you use the managed package framework, use <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> to register a class as providing a **Tools Options** page and set the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute.SupportsAutomation%2A> property to `true` to indicate that the page supports automation.  
  
 The registry entry is found in HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\AutomationProperties, where *\<Version>* is the version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], for example 8.0.  
  
> [!NOTE]
>  The root path of HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>* can be overridden with an alternate root when the Visual Studio shell is initialized, for more information see, [Command-Line Switches](/visual-studio/extensibility/command-line-switches-visual-studio-sdk).  
  
 The structure of the registry entry is below:  
  
 HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>\\*AutomationProperties  
  
 `<PageCategory>` = ‘#456’  
  
 ResourcePackage = '{XXXXXX XXXX XXXX XXXX XXXXXXXXX}'  
  
 `<PageSubCategory>` =  ‘#789’  
  
 Package =  '{YYYYYY YYYY YYYY YYYY YYYYYYYYY}'  
  
 Name =  '`<PageCategory>` .`<PageSubcategory>`'  
  
 'ProfileSave' =  1/0  
  
 The following table lists the values under HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\AutomationProperties\\`<PageCategory>`.  
  
|Name|Type|Data|Description|  
|----------|----------|----------|-----------------|  
|(Default)|REG_SZ|The canonical category name of the custom **Tools Options** page|The key's name, `<PageCategory`>, is the canonical non-localized name of the **Tools Options** page category. **Note:**  If automation is supported, the canonical non-localized category and subcategory names are used to obtain a **Tools Options** page's <xref:EnvDTE.Properties> collection. For more information, see [Using Options Pages](../misc/using-options-pages.md). <br /><br /> The key can be empty, or it can contain the reference ID to the localized string in an implementation's satellite DLL.<br /><br /> For implementations based on the managed package framework, `<PageCategory`> is obtained from the `categoryName` argument to the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> constructor.|  
|ResourcePackage|REG_SZ|GUID|Optional.<br /><br /> A satellite DLL containing localized strings if the implementing VSPackage does not supply them.<br /><br /> The managed package framework uses reflection to obtain the correct resource VSPackage, so <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> does not set this argument.|  
  
 The following table lists the values under HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\AutomationProperties\\`<PageCategory>\<PageSubCategory>`.  
  
|Name|Type|Data|Description|  
|----------|----------|----------|-----------------|  
|(Default)|REG_SZ|The subcategory name of the custom **Tools Options** page|The key's name, `<PageSubCategory`>, is the canonical non-localized name of the **Tools Options** page subcategory. **Note:**  If automation is supported, the canonical non-localized category and subcategory names are used to obtain a **Tools Options** page's <xref:EnvDTE.Properties> collection. For more information, see [Using Options Pages](../misc/using-options-pages.md). <br /><br /> The key can be empty, or it can contain the reference ID to the localized string in an implementation's satellite DLL.<br /><br /> For implementations based on the managed package framework, `<PageSubCategory>` is obtained from the `pageName` argument to the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> constructor.|  
|Package|REG_SZ|GUID|The GUID of the VSPackage implementing the custom **Tools Options** page.<br /><br /> Implementations based on the managed package framework using <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> use reflection to obtain this value.|  
|Name|REG_SZ|Name of the **Tools Options** page properties collection|The `<PageCategory>.<PageSubCategory>` string used to refer to the **Tools Options** page. For more information, see [Using Options Pages](../misc/using-options-pages.md).<br /><br /> For implementations based on the managed package framework, the name is obtained from arguments to the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> constructor and is of the form `categoryName.pageName`.|  
|ProfileSave|DWORD|1/0|Optional.<br /><br /> This value indicates whether the **Tools Options** page settings are saved by the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] settings mechanism when a user clicks the **Import/Export Settings** command on the **Tools** menu.<br /><br /> If the key is present and its value is 1, then the **Tools Options** page is requesting settings support.<br /><br /> Implementations based on the managed package framework set this value if the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> constructor is supplied with the <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute.SupportsProfiles%2A> property set to `true`.|  
  
## See Also  
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)   
 [Using Options Pages](../misc/using-options-pages.md)   
 [Creating Options Pages By Using Interop Assemblies](../misc/creating-options-pages-by-using-interop-assemblies.md)   
 [How to: Create Custom Options Pages](../Topic/How%20to:%20Create%20Custom%20Options%20Pages.md)   
 [Options Pages](../misc/options-pages.md)   
 [Automation Support for Options Pages](/visual-studio/extensibility/internals/automation-support-for-options-pages)