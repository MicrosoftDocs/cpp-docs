---
title: "Registering Toolbox Support Features"
ms.custom: ""
ms.date: "10/27/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Toolbox [Visual Studio SDK], registering support"
ms.assetid: 859ed38f-847b-43ba-b363-29af9de98e89
caps.latest.revision: 27
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
# Registering Toolbox Support Features
VSPackages must update the registry if they extend the default set of **Toolbox** functionality in any of the following ways:  
  
-   Using automatic toolbox tab selection of a particular toolbox category or tab when a particular designer or editor is active.  
  
-   Providing any <xref:System.Drawing.Design.ToolboxItem> objects to be loaded by the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] environment.  
  
     These items are loaded by the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] environment whenever the **Toolbox** is reset, either by a user through the IDE, or programmatically through the <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.ResetDefaults*> method. Resetting of the **Toolbox** generates a <xref:Microsoft.VisualStudio.Shell.Package.ToolboxInitialized> event under the Managed Package Framework.  
  
    > [!NOTE]
    >  VSPackages developed under the Managed Package Framework use <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> applied to their implementation of the <xref:Microsoft.VisualStudio.Shell.Package> object to register this support.  
  
-   Providing non-standard Clipboard format <xref:System.Drawing.Design.ToolboxItem> objects by implementing the <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider2> interfaces.  
  
    > [!NOTE]
    >  VSPackages developed under the Managed Package Framework use an instance of the <xref:Microsoft.VisualStudio.Shell.ProvideToolboxFormatAttribute> object applied to their implementation of <xref:Microsoft.VisualStudio.Shell.Package> to register this support.  
  
-   Supporting dynamic configuration of <xref:System.Drawing.Design.ToolboxItem> object through an implementation of the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface.  
  
    > [!NOTE]
    >  VSPackages developed with the Managed Package Framework use <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute> applied to their implementation of the <xref:Microsoft.VisualStudio.Shell.Package> class, and the <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> class applied to their implementations of the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> class to register this support.  
  
 Unmanaged VSPackages must explicitly update the registry either by manually editing it or by using a Registrar (.rgs) file. For more information, see [Creating Registrar Scripts](../atl/creating-registrar-scripts.md).  
  
## Automatic Toolbox Tab Selection  
 Editors or designers, provided by an instance of an editor factory object, can require a particular toolbox tab or category to be made active when they are themselves active. For example, if a forms designer is activated, you may want the **All Windows Forms** tab selected.  
  
 For automatic toolbox category selection to take place, the designer's or editor's factory object must be properly registered.  
  
 An appropriate registry entry is found in the following registry location: HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\<Version\>\Editor\<Editor Factory GUID>, where \<Version> is the version number of the release of Visual Studio, such as 8.0, and \<Editor Factory GUID> is the GUID for the editor factory.  
  
 The entry should contain:  
  
|Name|Type|Range|Description|  
|----------|----------|-----------|-----------------|  
|Default|REG_SZ|GUID|Optional. It can be used to contain a non-localized name of the editor.|  
|DefaultToolboxTab|REG_SZ|"Your tab name here"|The non-localized name of the toolbox tab, which is made the default toolbox tab when this editor is active.|  
  
> [!NOTE]
>  There are no <xref:System.Attribute> objects which support these registry entries in the Managed Package Framework.  
  
## Registering a Package as Providing Toolbox Items  
  
> [!NOTE]
>  Controls created with the Toolbox Control templates in the Visual Studio 10 SDK register automatically. For more information, see [How to: Create a Toolbox Control That Uses Windows Forms](../misc/how-to-create-a-toolbox-control-that-uses-windows-forms.md) and [Creating a WPF Toolbox Control](../Topic/Creating%20a%20WPF%20Toolbox%20Control.md).  
  
 Any VSPackage providing <xref:System.Drawing.Design.ToolboxItem> objects must have a subkey, *Toolbox*, under its own package key, HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\Packages\\*\<Package GUID*>, where *\<Version>* is the version number of the release of Visual Studio, such as 8.0, and *\<Package GUID>* is the GUID of the package that provides **Toolbox** items.  
  
 This Toolbox subkey must contain at least one entry, a DWORD entry named *Default**Items*.  
  
> [!NOTE]
>  The root path of HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>* can be overridden with an alternate root when the Visual Studio shell is initialized, or you can use <xref:Microsoft.VisualStudio.Shell.DefaultRegistryRootAttribute>. For more information, see [Command-Line Switches](../Topic/Command-Line%20Switches%20\(Visual%20Studio%20SDK\).md).  
  
 For the entry under HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\Packages\\*\<Package GUID*>:  
  
|Name|Type|Data|Description|  
|----------|----------|----------|-----------------|  
|`Default Items`|REG_DWORD|Can be any DWORD value. Starting with 1. The value is incremented if you update your VSPackage to supply more or different items.|The value of `Default Items` must be greater than or equal to 1 to add <xref:System.Drawing.Design.ToolboxItem> objects to the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] **Toolbox**.<br /><br /> Changing the value of `Default Items` will cause the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] IDE to load the most recent instance of a VSPackage providing <xref:System.Drawing.Design.ToolboxItem> objects, rather than using any cached values.<br /><br /> In the Managed Package Framework, `Default Items` is set by the value used in the constructor for the <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute> instance applied to the VSPackage providing <xref:System.Drawing.Design.ToolboxItem> objects.|  
  
## Registering Support for a Non-Standard Format  
 Registration of supported Clipboard formats that a <xref:System.Drawing.Design.ToolboxItem> provider VSPackage supports is optional.  
  
 If a <xref:System.Drawing.Design.ToolboxItem> provider VSPackage does not register any special Clipboard formats, it must support the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] standard formats. For more information on the standard **Toolbox** Clipboard formats, see [Extending the Toolbox](../misc/extending-the-toolbox.md).  
  
 If a VSPackage does provide support for non-standard formats, it must register those formats under the VSPackage's **Toolbox** registration key HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\Packages\\*\<Package GUID*>\Toolbox, by adding a string entry named `Formats`.  
  
> [!NOTE]
>  If a VSPackage registers support for any custom format, it only supports those formats that it explicitly registers. A VSPackage registering custom Clipboard formats is no longer registered as supporting the default **Toolbox** Clipboard formats, unless it does so explicitly.  
  
|Name|Type|Data|Description|  
|----------|----------|----------|-----------------|  
|`Formats`|REG_SZ|For custom formats, use a string for this subkey.|Specifies the Clipboard formats supported by a VSPackage providing custom **Toolbox** Clipboard formats (by implementing <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider2>).<br /><br /> The formats should be specified in a comma-separated list.<br /><br /> A format can be specified either by a string containing its name, or its ID name. For example, a `Formats` entry might be `'1,13,16,HTML Format'`.<br /><br /> For more information about Clipboard formats, see <xref:System.Windows.Forms.DataFormats.Format>.<br /><br /> In the Managed Package Framework, the value of `Formats` is obtained from the string used as an argument to the constructor for the instance of the <xref:Microsoft.VisualStudio.Shell.ProvideToolboxFormatAttribute> object applied to the VSPackage providing <xref:System.Drawing.Design.ToolboxItem> objects.|  
  
## Registering Support for Dynamic Toolbox-Item Configuration  
 If a VSPackage provides an implementation of <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> it must add registry settings under HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\CLSID. and HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\ToolboxItemConfiguration.  
  
 The registry data under HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\CLSID contains the information the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] environment requires to invoke the implementation of <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>.  
  
 The HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\ToolboxItemConfiguration data is used to select or filter which <xref:System.Drawing.Design.ToolboxItem> objects the implementation of <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> configures on the basis of the assemblies that contain them.  
  
 Content of the HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\CLSID Registry Entry:  
  
> [!NOTE]
>  Under the Managed Package Framework, these registry entries are created by the instance of <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute>. This instance is attached to the VSPackage that provides <xref:System.Drawing.Design.ToolboxItem> configuration by using reflection. The reflection is performed on the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> item that is provided to the <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemConfigurationAttribute> constructor.  
  
|Name|Type|Data|Description|  
|----------|----------|----------|-----------------|  
|*(Default)*|REG_SZ|(Optional)<br /><br /> Full name of the class implementing <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>.|The value here should be the same as that provided by <xref:System.Type.FullName*> acting on the <xref:System.Type> implementing <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>.|  
|`Assembly`|REG_SZ|Full Name of the assembly providing the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>|This value must be the full assembly identification, which, depending on the assembly, may include:<br /><br /> - a simple name<br /><br /> - a version number<br /><br /> - a cryptographic key pair<br /><br /> - a supported culture<br /><br /> - a custom field<br /><br /> The value must be a comma-separated list of property values as would be provided by <xref:System.Type.FullName*> property acting on the <xref:System.Type> implementing <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>.<br /><br /> For instance:<br /><br /> `MyPackage.Toolbox, Version=8.0.1200.0, Culture=neutral,PublicKeyToken=abcdef12345ab, Custom=null`<br /><br /> Wildcard characters are not supported.<br /><br /> For more information on the format of full assembly names, see <xref:System.Type.AssemblyQualifiedName*>.<br /><br /> <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>.<br /><br /> For more information on assembly identification, see <xref:System.Reflection.AssemblyName>.|  
|`Class`|REG_SZ|Full name of the class implementing the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface as provided by <xref:System.Type.FullName*>.|The value should be the same as that provided by <xref:System.Type.FullName*>, acting on the type implementing <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>.|  
|`CodeBase`|REG_SZ|Location of the assembly providing the implementation of <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>|This value must be the fully qualified path to the assembly file containing the implementation of <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>.|  
|`InprocServer32`|REG_SZ|Must always be set to `"C:\WINDOWS\System32\mscoree.dll"`|The in-process server|  
|`ThreadingModel`|REG_SZ|Must always be set to `"Both"`|Threading model|  
  
 Content of the HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\ToolboxItemConfiguration Registry Entry:  
  
> [!NOTE]
>  Under the Managed Package Framework, these registry entries are created by the instance of <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> attached to the <xref:System.Type> providing an implementation of <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>.  
  
|Name|Type|Data|Description|  
|----------|----------|----------|-----------------|  
|*\<AssemblyName>*|REG_SZ|Specification of the assemblies to select or filter.|The key's name, *\<AssemblyName>*, must be specified in the format of full assembly identification, which, depending on the assemblies to be filtered, may include:<br /><br /> - a simple name<br /><br /> - a version number<br /><br /> - a cryptographic key pair<br /><br /> - a supported culture<br /><br /> - a custom field<br /><br /> The key's name must be a comma-separated list of property value pairs. For more information on the format of full assembly names, see the <xref:System.Type.FullName*?displayProperty=fullName> property.<br /><br /> A wildcard character of `"*"` is supported in this value, and any field not provided is treated as a wildcard.<br /><br /> For instance, a key name of<br /><br /> `System.Windows.*, Version=8.0.*, Culture=*,PublicKeyToken=*`<br /><br /> selects all assemblies with namespaces under `System.Windows` (though not `System.Windows` itself), for all minor versions of the 8.0 release, and for all cultures, cryptographic key values, and custom strings.<br /><br /> In the Managed Package Framework, the *\<Assembly Name>* key's name is determined by the string used as the argument to the constructor for the <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> instance applied to the class implementing the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface.|  
|*\<ImplementationObject>*|REG_SZ|GUID|The name of this subkey of *AssemblyName* is the fully qualified name of the <xref:System.Type> implementing the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface.<br /><br /> The value of this subkey is the GUID of this <xref:System.Type>.<br /><br /> In the Managed Package Framework this information is obtained through reflection from the class implementing the <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem> interface with a <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute> object applied to it.|  
  
 An example of an entry under HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\\*\<Version>*\ToolboxItemConfiguration would be:  
  
 `Vsip.*, Version=2.0.3500`  
  
 `Vsip.ToolboxConfiguration = {YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY}`  
  
## See Also  
 <xref:Microsoft.VisualStudio.Shell.ProvideToolboxItemsAttribute>   
 <xref:Microsoft.VisualStudio.Shell.ProvideToolboxFormatAttribute>   
 <xref:Microsoft.VisualStudio.Shell.ProvideAssemblyFilterAttribute>   
 <xref:Microsoft.VisualStudio.Shell.IConfigureToolboxItem>   
 <xref:System.Drawing.Design.ToolboxItem>   
 [Managing the Toolbox](../misc/managing-the-toolbox.md)   
 [How to: Provide Custom Toolbox Items By Using Interop Assemblies](../misc/how-to-provide-custom-toolbox-items-by-using-interop-assemblies.md)