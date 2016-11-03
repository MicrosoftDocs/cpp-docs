---
title: "Making Custom Projects Version-Aware | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 5233d3ff-6e89-4401-b449-51b4686becca
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
# Making Custom Projects Version-Aware
In your custom project system, you can allow projects of that type to load in multiple versions of Visual Studio. You can also prevent projects of that type from loading in an earlier version of Visual Studio. You can also enable that project to identify itself to a later version in case the project requires repair, conversion, or deprecation.  
  
## Allowing Projects to Load in Multiple Versions  
 You can modify most projects that were created in [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)] with SP1 or later to work in multiple versions.  
  
 Before a project is loaded, Visual Studio calls the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory4.UpgradeProject_CheckOnly*> method to determine whether the project can be upgraded. If the project can be upgraded, the `UpgradeProject_CheckOnly` method sets a flag that causes a later call to the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject*> method to upgrade the project. Because incompatible projects can’t be upgraded, `UpgradeProject_CheckOnly` must first check for project compatibility, as described in the earlier section.  
  
 You, as the author of a project system, implement `UpgradeProject_CheckOnly` (from the `IVsProjectUpgradeViaFactory4` interface) to provide users of your project system with an upgrade check. When users open a project, this method is called to determine whether a project must be repaired before it is loaded. The possible upgrade requirements are enumerated in `VSPUVF_REPAIRFLAGS`, and they include the following possibilities:  
  
1.  `SPUVF_PROJECT_NOREPAIR`: Requires no repair.  
  
2.  `VSPUVF_PROJECT_SAFEREPAIR`: Makes the project compatible with an earlier version without the issues that you might have encounter with the previous versions of the product.  
  
3.  `VSPUVF_PROJECT_UNSAFEREPAIR`: Makes the project backwards-compatible but with some risk of the issues that you might have encountered with previous versions of the product. For example, the project won’t be compatible if it depended on different SDK versions.  
  
4.  `VSPUVF_PROJECT_ONEWAYUPGRADE`: Makes the project incompatible with an earlier version.  
  
5.  `VSPUVF_PROJECT_INCOMPATIBLE`: Indicates that the current version doesn’t support this project.  
  
6.  `VSPUVF_PROJECT_DEPRECATED`: Indicates that this project is no longer supported.  
  
> [!NOTE]
>  To avoid confusion, don’t combine upgrade flags when you set them. For example, don't create an ambiguous upgrade status such as `VSPUVF_PROJECT_SAFEREPAIR | VSPUVF_PROJECT_DEPRECATED`.  
  
 Project flavors may implement the function `UpgradeProjectFlavor_CheckOnly` from the `IVsProjectFlavorUpgradeViaFactory2` interface. To make this function work, the `IVsProjectUpgradeViaFactory4.UpgradeProject_CheckOnly` implementation mentioned earlier must call it. This call is already implemented in the Visual Basic or C# base project system. The effect of this function enables project flavors to also determine the upgrade requirements of a project, in addition to what the base project system has determined. The compatibility dialog box shows the most severe of the two requirements.  
  
 When Visual Studio performs an upgrade check, it provides a logger instead of a NULL value as in previous versions of Visual Studio. The logger enables project systems and flavors to provide additional information that can help you understand the nature of the changes that are needed to make your older projects load properly. We recommend that you use the logger to provide more information instead of using dialog boxes. For more information, see [The Upgrade Logger](../misc/making-custom-projects-version-aware.md#BKMK_UpgradeLogger) later in this topic.  
  
 For Managed implementations, the project upgrade interfaces are available in the Microsoft.VisualStudio.Shell.Interop.11.0.dll interop assembly.  
  
 The `UpgradeProject` method can determine whether the changes it makes would prevent the project from loading in an previous version of Visual Studio. If so, the method marks the project as incompatible. To understand how a project is marked as incompatible, see [Marking a Project as Incompatible](../misc/making-custom-projects-version-aware.md#BKMK_Incompat) earlier in this topic. We recommend that, after this dialog box appears, you mark the project as incompatible by calling the method `IVsAppCompat.BreakAssetCompatibility` directly, instead of first calling the `IVsAppCompat.AskForUserConsentToBreakAssetCompat` method because the dialog box doesn’t need to appear twice.  
  
 Here is an example to help summarize the compatibility user experience. If a project was created in an earlier version, and the current version determines that an upgrade is required, Visual Studio displays a dialog box to ask the user for permission to make the changes. If the user agrees, the project is modified and then loaded. If the solution is then closed and reopened in the earlier version, the one-way-upgraded project will be incompatible and not loaded. If the project had only required a repair (instead of an upgrade), the repaired project will still open in both versions.  
  
##  <a name="BKMK_Incompat"></a> Marking a Project as Incompatible  
 You can mark a project as incompatible with earlier versions of Visual Studio.  For example, suppose you create a project that uses a .NET Framework 4.5 feature. Because this project can’t be built in [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)], you can mark it as incompatible to prevent that version from trying to load it.  
  
 The component that adds the incompatible feature is responsible for marking the project as incompatible. The component must have access to the <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy> interface that represents the projects of interest.  
  
#### To mark a project as incompatible  
  
1.  In the component, get an `IVsAppCompat` interface from the global service SVsSolution.  
  
     For more information, see <xref:Microsoft.VisualStudio.Shell.Interop.SVsSolution>.  
  
2.  In the component, call `IVsAppCompat.AskForUserConsentToBreakAssetCompat`, and pass it an array of `IVsHierarchy` interfaces that represent the projects of interest.  
  
     This method has the following signature:  
  
    ```  
    HRESULT AskForUserConsentToBreakAssetCompat([in] SAFEARRAY(IVsHierarchy*) sarrProjectHierarchies)  
  
    ```  
  
     If you implement this code, a project compatibility dialog box will appear. The dialog box will asks the user for permission to mark all specified projects as incompatible. If the user agrees, `AskForUserConsentToBreakAssetCompat` returns `S_OK`; otherwise, `AskForUserConsentToBreakAssetCompat` returns `OLE_E_PROMPTSAVECANCELLED`.  
  
    > [!WARNING]
    >  In most common scenarios, the `IVsHierarchy` array will contain only one item.  
  
3.  If `AskForUserConsentToBreakAssetCompat` returns `S_OK`, the component makes or accepts the changes that break compatibility.  
  
4.  In your component, call the `IVsAppCompat.BreakAssetCompatibility` method for each project that you want to mark as incompatible. The component can set the value of the parameter `lpszMinimumVersion` to a specific minimum version instead of having Visual Studio look up the current version string in the registry. This approach minimizes the risk of the component inadvertently setting a higher value in the future, based on what is in the registry at that time. If that higher value were set, Visual Studio couldn't open the project.  
  
     This method has the following signature:  
  
    ```  
    HRESULT BreakAssetCompatibility([in] IVsHierarchy * pProjHier), [in] LPCOLESTR lpszMinimumVersion);  
  
    ```  
  
     If the component sets `lpszMinimumVersion` to NULL, the `BreakAssetCompatibility` method calls the `IVsAppCompat.GetCurrentDesignTimeCompatVersion` method to obtain a string that represents the current version of Visual Studio.  
  
     This method has the following signature:  
  
    ```  
    HRESULT GetCurrentDesignTimeCompatVersion([out] BSTR * pbstrCurrentDesignTimeCompatVersion)  
    ```  
  
     The BreakAssetCompatibility method then calls the `IVsHierarchy.SetProperty` method to set the root `VSHPROPID_MinimumDesignTimeCompatVersion` property to the value of the version string that you obtained in the previous step.  
  
     For more information, see <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.SetProperty*>.  
  
> [!IMPORTANT]
>  You must implement the `VSHPROPID_MinimumDesignTimeCompatVersion` property to mark a project as compatible or incompatible. For example, if the project system uses an MSBuild project file, add to the project file a `<MinimumVisualStudioVersion>` build property that has a value equal to the corresponding `VSHPROPID_MinimumDesignTimeCompatVersion` property value.  
  
## Detecting Whether a Project is Incompatible  
 A project that is incompatible with the current version of Visual Studio must be kept from loading. Furthermore, a project that is incompatible can’t be upgraded or repaired. Therefore, a project must be checked for compatibility twice: first, when it is being considered for upgrade or repair, and second, before it is loaded.  
  
 To enable the detection of project incompatibility, you must implement the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory4.UpgradeProject_CheckOnly*> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectFactory.CreateProject*> methods. If a project is incompatible, `UpgradeProject_CheckOnly` must return the success code `VS_S_INCOMPATIBLEPROJECT`, and `CreateProject` must return the error code `VS_E_INCOMPATIBLEPROJECT`. For flavored projects, you must implement `IVsProjectFlavorUpgradeViaFactory2.UpgradeProjectFlavor_CheckOnly` instead of `IVsProjectUpgradeViaFactory4.UpgradeProject_CheckOnly`.  
  
 A project system is referred to as flavored if it has a web, Office (VSTO), Silverlight, or other project type built on top of it. Older project systems that already implement `IVsProjectUpgradeViaFactory.UpgradeProject_CheckOnly` and flavored project systems that already implement `IVsProjectFlavorUpgradeViaFactory.UpgradeProjectFlavor_CheckOnly` continue to be supported. The older version of `IVsProjectUpgradeViaFactory.UpgradeProject_CheckOnly` has the following implementation signature:  
  
```  
IVsProjectUpgradeViaFactory::UpgradeProject_CheckOnly(  
  
/* [in] */ BSTR bstrFileName,  
/* [in] */ IVsUpgradeLogger *pLogger,  
/* [out] */ BOOL *pUpgradeRequired,  
/* [out] */ GUID *pguidNewProjectFactory,  
/* [out] */ VSPUVF_FLAGS *pUpgradeProjectCapabilityFlags  
)  
```  
  
 If this method sets `pUpgradeRequired` to TRUE and returns `S_OK`, the result is treated as “Upgrade” and as though the method set an upgrade flag to the value `VSPUVF_PROJECT_ONEWAYUPGRADE`, which is described later in this topic. The following return values are supported by using this older method but only when `pUpgradeRequired` is set to TRUE:  
  
1.  `VS_S_PROJECT_SAFEREPAIRREQUIRED`. This return value translates the `pUpgradeRequired` value to TRUE as equivalent to `VSPUVF_PROJECT_SAFEREPAIR`, which is described later in this topic.  
  
2.  `VS_S_PROJECT_UNSAFEREPAIRREQUIRED`. This return value translates the `pUpgradeRequired` value to TRUE as equivalent to `VSPUVF_PROJECT_UNSAFEREPAIR`, which is described later in this topic  
  
3.  `VS_S_PROJECT_ONEWAYUPGRADEREQUIRED`. This return value translates the `pUpgradeRequired` value to TRUE as equivalent to `VSPUVF_PROJECT_ONEWAYUPGRADE`, which is described later in this topic.  
  
 The new implementations in `IVsProjectUpgradeViaFactory4` and `IVsProjectFlavorUpgradeViaFactory2` enable specifying the migration type more precisely.  
  
> [!NOTE]
>  You can cache the result of the compatibility check by the `UpgradeProject_CheckOnly` method so that it can also be used by the subsequent call to `CreateProject`.  
  
 For example, if the `UpgradeProject_CheckOnly` and `CreateProject` methods that are written for a [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)] with SP1 project system examine a project file and find that the `<MinimumVisualStudioVersion>` build property is "11.0", Visual Studio 2010 with SP1 won’t load the project. In addition, **Solution Navigator** would indicate that the project is “incompatible” and won’t load it.  
  
##  <a name="BKMK_UpgradeLogger"></a> The Upgrade Logger  
 The call to `IVsProjectUpgradeViaFactory::UpgradeProject` contains an `IVsUpgradeLogger` logger, which project systems and flavors should use to provide detailed upgrade tracing for troubleshooting. If a warning or an error is logged, Visual Studio shows the upgrade report.  
  
 When you write to the upgrade logger, consider the following guidelines:  
  
-   Visual Studio will call Flush after all projects have finished upgrading. Don’t call it in your project system.  
  
-   The LogMessage function has the following ErrorLevels:  
  
    -   0 is for any information that you’d like to trace.  
  
    -   1 is for a warning.  
  
    -   2 is for an error  
  
    -   3 is for the Report formatter. When your project is upgraded, log the word “Converted” once, and don’t localize the word.  
  
-   If a project doesn’t require any repair or upgrade, Visual Studio will generate the log file only if the project system had logged a warning or an error during UpgradeProject_CheckOnly or UpgradeProjectFlavor_CheckOnly methods.