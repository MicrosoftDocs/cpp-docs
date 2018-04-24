---
title: "MSBuild Error MSB3841 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.ResolveSDKReference.InvalidDependencyInPlatform"
ms.assetid: 80ed22a1-bd62-4ace-892f-6b6009dff8e5
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3841
**MSB3841: The SDK "{1}" depends on the SDK "{0}", which is incompatible with projects targeting platform version "{2}".**  
  
 MSBuild generates this error when your project has a dependency which is incompatible with the platform your project is targeting. Relying on incompatible dependencies may cause failures or unexpected app behavior at runtime  
  
### To correct this error for project references  
  
1.  Visual Basic, C#, C++, and JavaScript projects that target [!INCLUDE[win81](../includes/win81-md.md)] Store projects cannot reference C++ Windows Store projects that target [!INCLUDE[win8](../includes/win8-md.md)] because it will cause runtime issues. If any project in your app targets [!INCLUDE[win81](../includes/win81-md.md)] and your app consists of a C++Windows Store project, you will need to perform the following steps:  
  
2.  Retarget all the projects in your app to [!INCLUDE[win81](../includes/win81-md.md)]. You can do this by right-clicking on each project in your app, selecting the **Retarget to Windows 8.1** command, and clicking **OK** on the **Review Project and Solution Changes** dialog.  
  
3.  Right-click on each Visual Basic, C#, and JavaScript project that depends on a C++ Windows Store project, choose **Add Reference**, go to the **Windows** tab, then the **Extensions** sub-tab, uncheck **Microsoft Visual C++ Runtime Package v11.0** and check **Microsoft Visual C++ Runtime Package v12.0**, then click **OK**.  
  
4.  Visual Basic, C#, and JavaScript Windows Store projects that target [!INCLUDE[win81](../includes/win81-md.md)] can reference Visual Basic and C# Windows Store projects that target [!INCLUDE[win8](../includes/win8-md.md)] provided that the [!INCLUDE[win8](../includes/win8-md.md)] Store projects do not use APIs that have been deprecated in [!INCLUDE[win81](../includes/win81-md.md)]. See [Migrating Windows 8 apps to Windows 8.1 Preview](http://msdn.microsoft.com/library/windows/apps/dn263113.aspx) to ascertain whether the [!INCLUDE[win8](../includes/win8-md.md)] Store projects will continue to behave as expected when referenced from a [!INCLUDE[win81](../includes/win81-md.md)] project.  
  
     [!INCLUDE[win8](../includes/win8-md.md)] Store projects cannot depend upon Windows Store projects or binaries that target [!INCLUDE[win81](../includes/win81-md.md)].  
  
### To correct this error for Extension SDK references  
  
1.  Visual Basic, C#, C++, and JavaScript Windows Store projects that target [!INCLUDE[win81](../includes/win81-md.md)] cannot reference Extension SDKs that depend on Microsoft Visual C++ Runtime Package v11.0, because this will cause runtime issues. You can find out whether an Extension SDK depends on Microsoft Visual C++ Runtime Package v11.0 by creating a new C# Windows Store project, right-clicking on the project and choosing **Add Reference**, going to the **Windows** tab, then the **Extensions** sub-tab, selecting the Extension SDK and seeing whether the right pane in the **Reference Manager** lists **Microsoft.VCLibs, version = 11.0** as a dependency.  
  
     Visual Basic, C#, and JavaScript Windows Store projects that target [!INCLUDE[win81](../includes/win81-md.md)] can reference Extension SDKs that do not depend on Microsoft Visual C++ Runtime Package v11.0, provided that these Extension SDKs do not use APIs that have been deprecated in [!INCLUDE[win81](../includes/win81-md.md)]. Please check the Extension SDK vendor site to ascertain whether it can be referenced by Store projects that target [!INCLUDE[win81](../includes/win81-md.md)].  
  
     If you determine that the Extension SDK being referenced by your app is not supported, then you need to perform the following steps:  
  
2.  Look at the name of the project that is causing the error. The platform your project is targeting is noted in parentheses next to the project name. For example, **MyProjectName (Windows 8.1)** means that your project **MyProjectName** is targeting platform version [!INCLUDE[win81](../includes/win81-md.md)].  
  
3.  Go to the site of the vendor who owns the unsupported Extension SDK and install the version of the Extension SDK with dependencies that are compatible with the version of the platform your project is targeting.  
  
4.  If the Extension SDK you installed earlier has dependencies on other Extension SDKs, go to the site(s) of the vendor(s) who own the dependencies and install the versions of these dependencies that are compatible with the version of the platform your project is targeting.  
  
    > [!NOTE]
    >  If your project is targeting [!INCLUDE[win81](../includes/win81-md.md)] and the Extension SDK installed earlier has a dependency on the Microsoft Visual C++ Runtime Package, the version of Microsoft Visual C++ Runtime Package that is compatible with Windows 8.1 is v12.0 and is installed with [!INCLUDE[vs_dev12](../includes/vs-dev12-md.md)].  
  
    > [!NOTE]
    >  To find out whether the Extension SDK installed earlier has dependencies on other Extension SDKs is to restart Visual Studio, create a new C# Windows Store project, right-click on the project and choose **Add Reference**, go to the **Windows** tab, go to the **Extensions** sub-tab, select the Extension SDK and look at the right pane in the **Reference Manager**. If it has dependencies, they will be listed there.  
  
5.  Restart Visual Studio and open your app.  
  
6.  Right-click on the project causing the error and choose **Add Reference** in the case of Visual Basic, C#, or JavaScript projects, or **References** in the case of C++ projects. For C++ projects, then click on the **Add New Reference** button.  
  
7.  Click the **Windows** tab and then the **Extensions** sub-tab. Uncheck the checkboxes next to the old Extension SDKs, and check the checkboxes next to the new Extension SDKs. Click **OK**.