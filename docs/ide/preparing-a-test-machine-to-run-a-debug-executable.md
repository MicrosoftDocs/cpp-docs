---
title: "Preparing a Test Machine To Run a Debug Executable"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "debug executable, preparing a test machine to run"
ms.assetid: f0400989-cc2e-4dce-9788-6bdbe91c6f5a
caps.latest.revision: 15
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Preparing a Test Machine To Run a Debug Executable
To prepare a computer to test the debug version of an application that is built with Visual C++, you have to deploy debug versions of the Visual C++ library DLLs that the application depends on. To identify which DLLs have to be deployed, follow the steps in [Understanding the Dependencies of a Visual C++ Application](../ide/understanding-the-dependencies-of-a-visual-c---application.md). Typically, debug versions of Visual C++ library DLLs have names that end in "d"; for example, the debug version of msvcr100.dll is named msvcr100d.dll.  
  
> [!NOTE]
>  Debug versions of an application are not redistributable, and debug versions of the Visual C++ library DLLs are not redistributable. You may deploy debug versions of applications and Visual C++ DLLs only to your other computers, for the sole purpose of debugging and testing the applications on a computer that does not have Visual Studio installed. For more information, see [Redistributing Visual C++ Files](../ide/redistributing-visual-c---files.md).  
  
 There are three ways to deploy debug versions of Visual C++ library DLLs together with the debug version of an application.  
  
-   Use central deployment to install a debug version of a particular Visual C++ DLL to the %windir%\system32\ directory by using a Setup project that includes merge modules for the right library version and architecture of your application. Merge modules are found in the Program Files or Program Files (x86) directory in \Common Files\Merge Modules\\. The debug version of a merge module has Debug in the namefor example, Microsoft_VC110_DebugCRT_x86.msm. An example of this deployment may be found in [Walkthrough: Deploying a Visual C++ Application By Using a Setup Project](../ide/walkthrough--deploying-a-visual-c---application-by-using-a-setup-project.md).  
  
-   Use local deployment to install a debug version of a particular Visual C++ DLL in the application’s installation directory by using files that are provided in the Program Files or Program Files (x86) directory in \Microsoft Visual Studio \<version>\VC\redist\Debug_NonRedist\\.  
  
    > [!NOTE]
    >  For remote debugging of your application built by using Visual C++ 2005 or Visual C++ 2008 on another computer, you have to deploy debug versions of Visual C++ library DLLs as shared side-by-side assemblies. You can use either a Setup project or Windows Installer to install corresponding merge modules.  
  
-   Use the_**Deploy** option in the **Configuration Manager** dialog box in Visual Studio to copy the project output and other files to the remote computer. An example of this deployment may be found in [Set Up Remote Debugging for a Visual Studio Project](../Topic/Set%20Up%20Remote%20Debugging%20for%20a%20Visual%20Studio%20Project.md).  
  
 After Visual C++ DLLs are installed, you can run a remote debugger on a network share. For more information about remote debugging, see [Set Up the Remote Tools on the Device](../Topic/Set%20Up%20the%20Remote%20Tools%20on%20the%20Device.md).  
  
## See Also  
 [Set Up the Remote Tools on the Device](../Topic/Set%20Up%20the%20Remote%20Tools%20on%20the%20Device.md)   
 [Deployment in Visual C++](../ide/deployment-in-visual-c--.md)   
 [Windows Installer Command line options](http://msdn.microsoft.com/library/windows/desktop/aa367988.aspx)   
 [Deployment Examples](../ide/deployment-examples.md)