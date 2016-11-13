---
title: "Upgrading Custom Projects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "upgrading project systems"
  - "projects [Visual Studio SDK], upgrading"
  - "project system upgrades [Visual Studio]"
ms.assetid: 262ada44-7689-44d8-bacb-9c6d33834d4e
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
# Upgrading Custom Projects
If you change the information persisted in the project file between different Visual Studio versions of your product, then you need to support upgrading your project file from the old to the new version. To support upgrading that allows you to participate in the **Visual Studio Conversion Wizard**, implement the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory> interface. This interface contains the only mechanism available for copy upgrading. The upgrading of the project happens as a part of the solution opens. The <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory> interface is implemented by the project factory, or should at least be obtainable from the project factory.  
  
 The old mechanism that uses the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade> interface is still supported, but conceptually upgrades the project system as a part of the project open. The <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade> interface is therefore called by the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] environment even if the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory> interface is called or implemented. This approach allows you to use <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory> to implement the copy and project only portions of the upgrade, and delegate the rest of the work to be done in-place (possibly at the new location) by the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade> interface.  
  
 For a sample implementation of <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade>, see [VSSDK Samples](../misc/vssdk-samples.md).  
  
 The following scenarios arise with project upgrades:  
  
-   If the file is of a newer format than the project can support, then it must return an error stating this. This assumes that the older version of your product — for example, Visual Studio .NET 2003 — includes code to check for the version.  
  
-   If the <xref:Microsoft.VisualStudio.Shell.Interop.__VSPPROJECTUPGRADEVIAFACTORYFLAGS> flag is specified in the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject%2A> method, the upgrade is going to be implemented as an in-place upgrade prior to the opening of the project.  
  
-   If the <xref:Microsoft.VisualStudio.Shell.Interop.__VSPPROJECTUPGRADEVIAFACTORYFLAGS> flag is specified in the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject%2A> method, the upgrade is implemented as a copy upgrade.  
  
-   If the <xref:Microsoft.VisualStudio.Shell.Interop.__VSUPGRADEPROJFLAGS> flag is specified in the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A> call, then the user has been prompted by the environment to upgrade the project file as an in-place upgrade, after the project is opened. For example, the environment prompts the user to upgrade when the user opens an older version of the solution.  
  
-   If the <xref:Microsoft.VisualStudio.Shell.Interop.__VSUPGRADEPROJFLAGS> flag is not specified in the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A> call, then you must prompt the user to upgrade the project file.  
  
     The following is an example upgrade prompt message:  
  
     "The project '%1' was created with an older version of Visual Studio. If you open it with this version of Visual Studio, you may not be able to open it with older versions of Visual Studio. Do you want to continue and open this project?"  
  
### To implement IVsProjectUpgradeViaFactory  
  
1.  Implement the method of the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory> interface, specifically the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject%2A> method in your project factory implementation, or make the implementations callable from your project factory implementation.  
  
2.  If you want to do an in-place upgrade as a part of the solution opening, supply the flag <xref:Microsoft.VisualStudio.Shell.Interop.__VSPPROJECTUPGRADEVIAFACTORYFLAGS> as the `VSPUVF_FLAGS` parameter in your <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject%2A> implementation.  
  
3.  If you want to do an in-place upgrade as a part of the solution opening, supply the flag <xref:Microsoft.VisualStudio.Shell.Interop.__VSPPROJECTUPGRADEVIAFACTORYFLAGS> as the `VSPUVF_FLAGS` parameter in your <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject%2A> implementation.  
  
4.  For both the steps 2 and 3, the actual file upgrade steps, using <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2>, can be implemented as described in the "Implementing `IVsProjectUpgade`" section below, or you can delegate the actual file upgrade to <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade>.  
  
5.  Use the methods of <xref:Microsoft.VisualStudio.Shell.Interop.IVsUpgradeLogger> to post upgrade related messages for the user using Visual Studio Migration Wizard.  
  
6.  <xref:Microsoft.VisualStudio.Shell.Interop.IVsFileUpgrade> interface is used to implement any kind of file upgrade that needs to happen as part of project upgrade. This interface is not called from <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory>, but is supplied as a mechanism to upgrade files that are part of the project system, but the main project system might not be directly aware of. For example, this situation could arise if the compiler related files and properties are not handled by the same development team that handles the rest of the project system.  
  
## IVsProjectUpgrade Implementation  
 If your project system implements <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade> only, it can not participate in the **Visual Studio Conversion Wizard**. However, even if you implement the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory> interface, you can still delegate the file upgrade to <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade> implementation.  
  
#### To implement IVsProjectUpgrade  
  
1.  When a user attempts to open a project, the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A> method is called by the environment after the project is opened and before any other user action can be taken on the project. If the user had already been prompted to upgrade the solution, then the <xref:Microsoft.VisualStudio.Shell.Interop.__VSUPGRADEPROJFLAGS> flag is passed in the `grfUpgradeFlags` parameter. If the user opens a project directly, such as by using the **Add Existing Project** command, then the <xref:Microsoft.VisualStudio.Shell.Interop.__VSUPGRADEPROJFLAGS> flag is not passed and the project needs to prompt the user to upgrade.  
  
2.  In response to the <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A> call, the project must evaluate whether the project file is upgraded. If the project does not need to upgrade the project type to a new version, then it can simply return the <xref:Microsoft.VisualStudio.VSConstants.S_OK> flag.  
  
3.  If the project needs to upgrade the project type to a new version, then it must determine whether the project file can be modified by calling the <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A> method and passing in a value of <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags> for the `rgfQueryEdit` parameter. The project then needs to do the following:  
  
    -   If the `VSQueryEditResult` value returned in the `pfEditCanceled` parameter is <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResult>, then the upgrade can proceed because the project file can be written.  
  
    -   If the `VSQueryEditResult` value returned in the `pfEditCanceled` parameter is <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResult> and the `VSQueryEditResult` value has the <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResultFlags> bit set, then <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A> must return failure, because users should resolve the permissions issue themselves. The project should then do the following:  
  
         Report the error to the user by calling <xref:Microsoft.VisualStudio.Shell.Interop.IVsUIShell.ReportErrorInfo%2A>. and return the <xref:Microsoft.VisualStudio.Shell.Interop.VSErrorCodes> error code to <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade>.  
  
    -   If the `VSQueryEditResult` value is <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResult> and the `VSQueryEditResultFlags` value has the <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResultFlags> bit set, then the project file should be checked out by calling <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A> (<xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags>, <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags>,...).  
  
4.  If the <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A> call on the project file causes the file to be checked out, and the latest version to be retrieved, then the project is unloaded and reloaded. The <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A> method is called again once another instance of the project is created. On this second call, the project file can be written to disk; it is recommended that the project save a copy of the project file in the previous format with an .OLD extension, make its necessary upgrade changes, and save the project file in the new format. Again, if any part of the upgrade process fails, the method must indicate failure by returning <xref:Microsoft.VisualStudio.Shell.Interop.VSErrorCodes>. This causes the project to be unloaded in Solution Explorer.  
  
     It is important to understand the complete process that occurs in the environment for the case in which the call to the <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A> method (specifying a value of ReportOnly) returns the <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResult> and the <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResultFlags> flags.  
  
5.  The user attempts to open the project file.  
  
6.  The environment calls your <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectFactory.CanCreateProject%2A> implementation.  
  
7.  If <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectFactory.CanCreateProject%2A> returns `true`, then the environment calls your <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectFactory.CanCreateProject%2A> implementation.  
  
8.  The environment calls your <xref:Microsoft.VisualStudio.Shell.Interop.IPersistFileFormat.Load%2A> implementation to open the file and initialize the project object, for example, Project1.  
  
9. The environment calls your `IVsProjectUpgrade::UpgradeProject` implementation to determine whether the project file needs to be upgraded.  
  
10. You call <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A> and pass in a value of <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags> for the `rgfQueryEdit` parameter.  
  
11. The environment returns <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResult> for `VSQueryEditResult` and the <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResultFlags> bit is set in `VSQueryEditResultFlags`.  
  
12. Your <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade> implementation calls `IVsQueryEditQuerySave::QueryEditFiles` (<xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags>, <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags>).  
  
 This call may cause a new copy of your project file to be checked out and the latest version retrieved, as well as a need to reload your project file. At this point, one of two things happen:  
  
-   If you handle your own project reload, then the environment calls your <xref:Microsoft.VisualStudio.Shell.Interop.IVsPersistHierarchyItem2.ReloadItem%2A> (VSITEMID_ROOT) implementation. When you receive this call, reload the first instance of your project (Project1) and continue upgrading your project file. The environment knows that you handle your own project reload if you return `true` for <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.GetProperty%2A> (<xref:Microsoft.VisualStudio.Shell.Interop.__VSHPROPID>).  
  
-   If you do not handle your own project reload, then you return `false` for <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.GetProperty%2A> (<xref:Microsoft.VisualStudio.Shell.Interop.__VSHPROPID>). In this case, before <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A>([QEF_ForceEdit_NoPrompting](assetId:///T:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags?qualifyHint=False&autoUpgrade=True), [QEF_DisallowInMemoryEdits](assetId:///T:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags?qualifyHint=False&autoUpgrade=True),) returns, the environment creates another new, instance of your project, for example, Project2, as follows:  
  
    1.  The environment calls <xref:Microsoft.VisualStudio.Shell.Interop.IVsHierarchy.Close%2A> on your first project object, Project1, thus placing this object in the inactive state.  
  
    2.  The environment calls your `IVsProjectFactory::CreateProject` implementation to create a second instance of your project, Project2.  
  
    3.  The environment calls your `IPersistFileFormat::Load` implementation to open the file and initialize the second project object, Project2.  
  
    4.  The environment calls `IVsProjectUpgrade::UpgradeProject` for a second time to determine whether the project object should be upgraded. However, this call is made on a new, second, instance of the project, Project2. This is the project that is opened in the solution.  
  
        > [!NOTE]
        >  In the instance that your first project, Project1, is placed in the inactive state, then you must return <xref:Microsoft.VisualStudio.VSConstants.S_OK> from the first call to your <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgrade.UpgradeProject%2A> implementation. See [Basic Project](http://msdn.microsoft.com/en-us/385fd2a3-d9f1-4808-87c2-a3f05a91fc36) for an implementation of `IVsProjectUpgrade::UpgradeProject`.  
  
    5.  You call <xref:Microsoft.VisualStudio.Shell.Interop.IVsQueryEditQuerySave2.QueryEditFiles%2A> and pass in a value of <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditFlags> for the `rgfQueryEdit` parameter.  
  
    6.  The environment returns <xref:Microsoft.VisualStudio.Shell.Interop.tagVSQueryEditResult> and the upgrade can proceed because the project file can be written.  
  
 If you fail to upgrade, return <xref:Microsoft.VisualStudio.Shell.Interop.VSErrorCodes> from `IVsProjectUpgrade::UpgradeProject`. If no upgrade is necessary or you choose not to upgrade, treat the `IVsProjectUpgrade::UpgradeProject` call as a no-op. If you return <xref:Microsoft.VisualStudio.Shell.Interop.VSErrorCodes>, a placeholder node is added to the solution for your project.  
  
## See Also  
 [Visual Studio Conversion Wizard](http://msdn.microsoft.com/en-us/4acfd30e-c192-4184-a86f-2da5e4c3d83c)   
 [Upgrading Project Items](../misc/upgrading-project-items.md)   
 [Projects](/visual-studio/extensibility/internals/projects)