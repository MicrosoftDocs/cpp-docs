---
title: "How to: Modify the Target Framework and Platform Toolset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
f1_keywords: 
  - "msbuild.cpp.howto.modifytargetframeworkandplatformtoolset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "msbuild (c++), howto: modify target framework and platform toolset"
ms.assetid: 031b1d54-e6e1-4da7-9868-3e75a87d9ffe
caps.latest.revision: 32
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# How to: Modify the Target Framework and Platform Toolset
You can change [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] project settings to target different versions of the .NET Framework and to use different platform toolsets. By default, the project system uses the .NET Framework version and the toolset version that correspond to the version of Visual Studio that you use to create the project. You can change the target platform toolset by modifying the project properties. You can change the target Framework by modifying the project (.vcxproj) file. You do not have to maintain a separate code base for every compilation target.  
  
> [!IMPORTANT]
>  Some editions might not support modified target Frameworks or platform toolsets. For compatibility information, see [Porting, Migrating, and Upgrading Visual Studio Projects](/visualstudio/porting/porting-migrating-and-upgrading-visual-studio-projects).  
  
 When you change the target Framework, also change the platform toolset to a version that supports that Framework. For example, to target the .NET Framework 4.5, you must use a compatible platform toolset such as Visual Studio 2015 (v140), Visual Studio 2013 (v120) or Visual Studio 2012 (v110). You can use the **Windows7.1SDK** platform toolset to target the .NET Framework 2.0, 3.0, 3.5, and 4, and the x86, Itanium, and x64 platforms.  
  
> [!NOTE]
>  To change the target platform toolset, you must have the associated version of Visual Studio or the Windows Platform SDK installed. For example, to target the Itanium platform with the **Windows7.1SDK** platform toolset, you must have [Microsoft Windows SDK for Windows 7 and .NET Framework 4 SP1](http://www.microsoft.com/download/details.aspx?id=8279) installed; however, you could use another compatible version of Visual Studio to do your development work, provided that you target the correct Framework version and platform toolset.  
  
 You can extend the target platform further by creating a custom platform toolset. For more information, see [C++ Native Multi-Targeting](http://go.microsoft.com/fwlink/?LinkId=196619) on the Visual C++ blog.  
  
### To change the target Framework  
  
1.  In Visual Studio, in **Solution Explorer**, select your project. On the menu bar, open the **Project** menu and choose **Unload project**. This unloads the project (.vcxproj) file for your project.  
  
    > [!NOTE]
    >  A C++ project cannot be loaded while the project file is being modified in Visual Studio. However, you can use another editor such as Notepad to modify the project file while the project is loaded in Visual Studio. Visual Studio will detect that the project file has changed and prompt you to reload the project.  
  
2.  On the menu bar, select **File**, **Open**, **File**. In the **Open File** dialog box, navigate to your project folder, and then open the project (.vcxproj) file.  
  
3.  In the project file, locate the entry for the target Framework version. For example, if your project is designed to use the .NET Framework 4.5, locate `<TargetFrameworkVersion>v4.5</TargetFrameworkVersion>` in the `<PropertyGroup Label="Globals">` element of the `<Project>` element. If the `<TargetFrameworkVersion>` element isn't present, your project doesn't use the .NET Framework and no change is required.  
  
4.  Change the value to the Framework version you want, such as v3.5 or v4.6.  
  
5.  Save the changes and close the editor.  
  
6.  In **Solution Explorer**, open the shortcut menu for your project and then choose **Reload Project**.  
  
7.  To verify the change, in **Solution Explorer**, right-click to open the shortcut menu for your project (not for your solution) and then choose **Properties** to open your project **Property Pages** dialog box. In the left pane of the dialog box, expand **Configuration Properties** and then select **General**. Verify that **.NET Target Framework Version** shows the new Framework version.  
  
### To change the project toolset  
  
1.  In Visual Studio, in **Solution Explorer**, open the shortcut menu for your project (not for your solution) and then choose **Properties** to open your project **Property Pages** dialog box.  
  
2.  In the **Property Pages** dialog box, open the **Configuration** drop-down list and then select **All Configurations**.  
  
3.  In the left pane of the dialog box, expand **Configuration Properties** and then select **General**.  
  
4.  In the right pane, select **Platform Toolset** and then select the toolset you want from the drop-down list. For example, if you have installed the [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)] toolset, select **Visual Studio 2010 (v100)** to use it for your project.  
  
5.  Choose the **OK** button.  
  
## See Also  
 [MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)