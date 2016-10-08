---
title: "Visual C++ Porting and Upgrading Guide"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: f5fbcc3d-aa72-41a6-ad9a-a706af2166fb
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Visual C++ Porting and Upgrading Guide
This topic provides a guide for upgrading Visual C++ code. This includes getting the code to compile and run correctly on a newer release of the tools, as well as taking advantage of new language and Visual Studio features. This topic also includes information about migrating legacy apps to more modern platforms.  
  
## Reasons to Upgrade Visual C++ Code  
 You should consider upgrading your code for the following reasons:  
  
-   Faster code, due to improved compiler optimizations.  
  
-   Faster builds, due to performance improvements in the compiler itself.  
  
-   Language features. Visual C++ now implements many features from the newer C++ standards.  
  
-   Better security. Security features such as guard checking.  
  
### Porting your Code  
 When upgrading, first consider your application's code and projects. Is your application built with Visual Studio?  If so, identify the projects involved.  Do you have custom build scripts?  If you have custom build scripts instead of using Visual Studio's build system, you will have more work to do in upgrading, because you can't save time by having Visual Studio update your project files and build settings.  
  
 The build system and project file format in Visual Studio changed from vcbuild in versions up to Visual Studio 2008 to MSBuild in versions of Visual Studio from 2010 onwards. If your upgrade is from a version prior to 2010, and you have a highly customized build system, you might have to do more work to upgrade.  If you are upgrading from Visual Studio 2010 or later, your projects are already using MSBuild, so upgrading the project and build for your application should be easier.  
  
 If you are not using Visual Studio's build system, you should consider upgrading to use MSBuild. If you upgrade to use MSBuild, you might have an easier time in future upgrades, and it will be easier to use services such as Visual Studio Online. MSBuild supports all the target platforms that Visual Studio supports.  
  
### Porting Visual Studio Projects  
 For larger projects, you might want to upgrade just one Visual Studio version at a time, because otherwise it can be hard to know what version introduced a particular breaking change that affected your code.  
  
 To start upgrading a project or solution, just open the solution in the new version of Visual Studio, and follow the prompts to start upgrading it.  When you upgrade a project, you get an upgrade report, which is also saved in your project folder as UpgradeLog.htm. The upgrade report shows a summary of what problems were encountered during the upgrade process and some information about changes that were made, or problems that could not be addressed automatically.  
  
1.  Project properties  
  
2.  Include files  
  
3.  Code that no longer compiles cleanly due to compiler conformance changes  
  
4.  Code that relies on Visual Studio or Windows features that are no longer available or header files that either aren't included in a default installation of Visual Studio, or were removed from the product  
  
5.  Code that no longer compiles due to changes in APIs such as renamed APIs, changed function signatures, or deprecated functions  
  
6.  Code that no longer compiles due to changes in diagnostics, such as warning becoming an error  
  
7.  Linker errors due to libraries that were changed, especially when /NODEFAULTLIB is used.  
  
8.  Runtime errors or unexpected results due to behavior changes  
  
9. Errors due to errors that were introduced in the tools. If you encounter an issue, report it to the Visual C++ team through your normal support channels or by using the [Visual Studio Feedback Center](http://connect.microsoft.com/VisualStudio/Feedback).  
  
 In addition to changes that you can't avoid due to compiler errors, some changes are optional in an upgrade process, such as:  
  
1.  New warnings might mean you want to clean up your code. Depending on the specific diagnostics, this can improve the portability, standards conformance, and security of your code.  
  
2.  You might want to take advantage of new compiler features such as the [/guard:cf (Enable Flow Control Guard)](../VS_visualcpp/-guard--Enable-Control-Flow-Guard-.md) compiler option, which adds checks for unauthorized code execution.  
  
3.  You might want to update some code to use new language features that simplify the code, improve the performance of your programs, or update the code to use modern libraries and conform to modern standards and best practices.  
  
 Once you've upgraded your project (and tested it), you might also want to consider improving your code further or plan the future direction of your code, or even reconsider the architecture of your project. Will it be important for your code to run on other platforms?  If so, what platforms?  C++ is a standardized langauge designed with portability and cross-platform development in mind, and yet the code for many Windows applications is strongly tied to the Windows platform. Do you want to refactor your code, to separate out those parts that are more tied to the Windows platform?  
  
 What about your user interface?  If you are using MFC, you might want to update the UI.  Are you using any of the newer MFC features that were introduced in 2008 as a Feature Pack?  If you just want to give your app a newer look and feel, without rewriting the entire app, you might consider using the ribbon APIs in MFC, or using some of new features of MFC.  
  
 To add a new Windows desktop user interface, you could use C++/CX (component extensions), or add managed code in C# and an interoperability layer in C++/CLI to connect C# with your native code.  
  
 Alternatively, perhaps you now have new requirements, or you can foresee the need for targeting platforms other than Windows desktop, such as Windows Phone, or Android devices. You could port your user interface code to a cross-platform UI library. With these UI frameworks, you can target multiple devices and still use Visual Studio  and the Visual Studio debugger as your development environment.  
  
## Related Topics  
  
|Title|Description|  
|-----------|-----------------|  
|[Upgrading Projects from Earlier Versions of Visual C++](../VS_visualcpp/Upgrading-Projects-from-Earlier-Versions-of-Visual-C--.md)|Discusses how to use projects created in earlier versions of Visual C++.|  
|[Visual C++ change history 2003 - 2015](../VS_visualcpp/Visual-C---change-history-2003---20151.md)|A list of all the changes in the Visual C++ libraries and build tools since 2003 that might require changes in your code.|  
|[Visual C++ What's New 2003 through 2015](../VS_visualcpp/Visual-C---What-s-New-2003-through-2015.md)|All the "what's new" information for Visual C++ going back to Visual Studio 2003.|  
|[Porting and Upgrading: Examples and Case Studies](../VS_visualcpp/Porting-and-Upgrading--Examples-and-Case-Studies.md)|For this section, we ported and upgrades several samples and applications and discussed the experiences and results. You might find that reading these gives you a sense of what is involved in the porting and upgrading process. Throughout the process, we discuss tips and tricks for upgrading and show how specific errors were fixed.|  
|[Porting to the Universal Windows Platform](../VS_visualcpp/Porting-to-the-Universal-Windows-Platform--C---.md)|Contains information about porting code to Windows 10|  
|[Introduction to Visual C++ for UNIX Users](../VS_visualcpp/Introduction-to-Visual-C---for-UNIX-Users.md)|Provides information for UNIX users who are new to Visual C++ and want to become productive with it.|  
|[Porting from UNIX to Win32](../VS_visualcpp/Porting-from-UNIX-to-Win32.md)|Discusses options for migrating UNIX applications to Windows.|  
|[C++/CLI Migration Primer](../VS_visualcpp/C---CLI-Migration-Primer.md)|Shows in detail how to upgrade your Managed Extensions for C++ syntax to use the new syntax. For more information, see [Component Extensions for Runtime Platforms](../VS_visualcpp/Component-Extensions-for-Runtime-Platforms.md).|  
  
## See Also  
 [Visual C++](../VS_visualcpp/Visual-C---in-Visual-Studio-2015.md)