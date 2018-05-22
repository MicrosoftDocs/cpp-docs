---
title: "The application cannot start. | Microsoft Docs"
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
  - "vs.message.0x800A0001"
  - "vs.message.VB_E_IDACANTBOOT"
ms.assetid: ffc123a0-99e1-4e9d-8f6e-34aa357bf98f
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The application cannot start.
An unexpected error has prevented Visual Studio from starting. This error appears when one of the following items occurs:  
  
-   The integrated development environment (IDE) was not able to load Msxml3.dll.  
  
-   The IDE was not able to load Mso.dll.  
  
-   The IDE was not able to load DTE.olb.  
  
-   The license key for Visual Studio was not created during setup.  
  
-   Script blocking is turned on and not allowing scripting code to execute.  
  
-   Setup for the .NET Framework, a component required by Visual Studio, failed to generate a valid native image for mscorlib.dll.  
  
-   The Klez virus is present on your computer.  
  
 Use the following procedures to correct this error.  
  
> [!WARNING]
>  Some of these resolutions require that you modify the registry key. If you use Registry Editor incorrectly, you might cause serious problems that could require you to reinstall your operating system. Microsoft cannot guarantee that you can solve problems that result from using Registry Editor incorrectly. Use Registry Editor at your own risk.  
  
 The IDE was not able to load Msxml3.dll.  
 The July 2001 Beta release of the MSXML 4.0 Technology Preview has left the computer in a state that causes this behavior. To repair the Msxml3.dll registration, follow these steps:  
  
### Uninstall Msxml4.dll  
  
1.  From the **Start** menu, choose **Run**.  
  
2.  In the **Open** text box, type `regsvr32 /u c:\winnt\system32\msxml4.dll` and click **OK**.  
  
### Download and install the security update for MSXML  
  
1.  Download the latest security update for the version of MSXML you have on your computer from [http://www.microsoft.com/windows/ie/downloads/critical/q317244/download.asp](http://www.microsoft.com/windows/ie/downloads/critical/q317244/download.asp).  
  
2.  Run the .exe for the security update.  
  
### Download and apply updated registry values  
  
1.  Download updated registry values from [http://download.microsoft.com/download/VisualStudioNET/fix/1.0/WIN98MeXP/Fixxml4.exe](http://download.microsoft.com/download/VisualStudioNET/fix/1.0/WIN98MeXP/Fixxml4.exe).  
  
2.  Double-click fixxml4.exe and unzip the files.  
  
3.  Locate Fixxml4.reg and double-click the file to update the registry values.  
  
 The IDE was not able to load Mso.dll.  
 Use the following list to fix problems with Mso.dll.  
  
### Microsoft Office  
  
-   Uninstall any Microsoft Office XP Beta releases on your computer.  
  
-   Repair Office XP via Add/Remove Programs.  
  
-   In the Registry Editor, verify the following registry key:  
  
     `[HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\VisualStudio\7.0\Path] "MSO"="C:\Program Files\Common Files\Microsoft Shared\Office10\MSO.DLL"`  
  
 The IDE was not able to load DTE.olb.  
 To correct this error:  
  
### Register Dte.olb  
  
1.  From the **Start** menu, choose **Run**.  
  
2.  In the **Open** text box, type `regsvr32 C:\Program Files\Common Files\Microsoft Shared\MSEnv\DTE.OLB` and click **OK**.  
  
 The license key for Visual Studio was not created during setup.  
 If the splash screen for Visual Studio does not contain a list of the installed products and does not include information about the person who installed the product, the license key is missing. Also, if Visual Studio is not listed in the Add/Remove Programs dialog box, the license key is missing.  
  
 To correct this problem:  
  
### Create a license key for Visual Studio  
  
-   Completely remove Visual Studio from the computer and then reinstall the product.  
  
 Script blocking is turned on and not allowing scripting code to execute.  
 If a third-party application has script blocking enabled, the IDE will appear and then disappear.  
  
-   To correct this issue, verify that the script blocking feature is working correctly.  
  
 Setup for the .NET Framework, a component required by Visual Studio, failed to generate a valid native image for mscorlib.dll.  
 If the splash screen for Visual Studio appears briefly and then disappears, you might be missing a valid native image for the file Mscorlib.dll. This file is created during the .NET Framework setup in the \\%windir%\assembly\NativeImages1_v1.0.3705\mscorlib directory.  
  
 To correct this issue:  
  
### Create a valid Mscorlib.dll file  
  
1.  Uninstall and then reinstall the .NET Framework.  
  
 The Klez virus is present on your computer.  
 If your computer is infected with the Klez virus, the error "The application cannot start." might appear. It is recommended that you update your antivirus software and then scan your computer for viruses.