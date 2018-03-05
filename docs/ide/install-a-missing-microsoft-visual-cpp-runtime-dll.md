---
title: Install a missing Microsoft Visual C++ Runtime DLL | Microsoft Docs 
description: How to find and install missing Visual C++ runtime DLLs.
ms.date: 08/30/2017
ms.topic: "article"
dev_langs: 
  - "C++"
author: corob-msft
ms.author: corob
manager: "ghogen"
---
# Install a missing Microsoft Visual C++ Runtime DLL

Programs written using Microsoft Visual C++ often require some additional Visual C++ runtime library files, or DLLs, to run. These runtime DLLs are available in a *Redistributable Package*, a library file installer program, for each version of Visual C++. The redistributable package required by any program should be included by its installer. If it's not, sometimes you can install a redistributable package yourself and fix a system error when you run the program. 

You can tell that a program is missing a Visual C++ runtime DLL if you get a system error when you start the program that says something like "The program can't start because VCRuntime140.dll is missing from your computer". Often, this problem can be fixed by uninstalling the program, then installing it again. We strongly recommend trying this step first, before any other potential fixes.

Sometimes the redistributable package installed by a program is out of date. Microsoft makes updated versions of the runtime DLLs available from time to time, to address bugs and security issues. To keep your computer running securely and correctly, it's a good idea to use the latest update for any runtime DLL. Check to see if there's an updated installer available for your program, which may provide this update for you. If there is, then use the updated installer to reinstall your program.

If reinstalling your program doesn't make the system error go away, then the program installer may be broken or corrupted, or the runtime DLLs on your computer may be corrupted. Try to download a new copy of the installer for your program, and use it to reinstall first. If that doesn't work, or an installer isn't available, then it may be worthwhile to check the Microsoft Visual C++ Redistributable installations on your computer. 

This table shows a list of the DLLs that are included in one or more redistributable packages, along with links to download a copy of the redistributable package. Before you download a new copy of a redistributable package, you should see if you can repair an existing installation.

|Missing DLL  |Redistributable package  |
|---------|---------|
|atl80.dll<br />msvcm80.dll<br />msvcp80.dll<br />msvcr80.dll<br />mfc80.dll<br />mfc80u.dll<br />mfcm80.dll<br />mfcm80u.dll|[Microsoft Visual C++ 2005 Redistributable (x86)](https://www.microsoft.com/en-us/download/details.aspx?id=5638)<br />[Microsoft Visual C++ 2005 Redistributable Package (x64)](https://www.microsoft.com/en-us/download/details.aspx?id=18471)<br />[Microsoft Visual C++ 2005 Service Pack 1 Redistributable Package MFC Security Update](https://www.microsoft.com/en-us/download/details.aspx?id=26347)|
|atl90.dll<br />msvcr90.dll<br />msvcm90.dll<br />msvcp90.dll<br />mfc90.dll<br />mfc90u.dll<br />mfcmifc80.dll<br />mfcm90.dll<br />mfcm90u.dll|[Microsoft Visual C++ 2008 Redistributable - x86](https://www.microsoft.com/en-us/download/details.aspx?id=5582)<br />[Microsoft Visual C++ 2008 Redistributable - x64](https://www.microsoft.com/en-us/download/details.aspx?id=2092)<br />[Microsoft Visual C++ 2008 Service Pack 1 Redistributable Package MFC Security Update](https://www.microsoft.com/en-us/download/details.aspx?id=26368)|
|atl100.dll<br />msvcr100.dll<br />msvcp100.dll<br />msdia71.dll<br />vcomp100.dll<br />mfc100.dll<br />mfc100u.dll<br />mfcmifc80.dll<br />mfcm100.dll<br />mfcm100u.dll|[Microsoft Visual C++ 2010 x86 Redistributable](https://www.microsoft.com/en-us/download/details.aspx?id=8328)<br />[Microsoft Visual C++ 2010 x64 Redistributable](https://www.microsoft.com/en-us/download/details.aspx?id=13523)<br />[Microsoft Visual C++ 2010 Service Pack 1 Redistributable Package MFC Security Update](https://www.microsoft.com/en-us/download/details.aspx?id=26999)|
|atl110.dll<br />msvcr110.dll<br />msvcp110.dll<br />mfc110.dll<br />mfc110u.dll<br />mfcmifc80.dll<br />mfcm110.dll<br />mfcm110u.dll<br />concrt110.dll<br />vccorlib110.dll<br />vcamp110.dll<br />vcomp110.dll|[Microsoft Visual C++ 2012 Redistributable (for Visual Studio 2012 Update 4)](https://www.microsoft.com/en-us/download/details.aspx?id=30679)|
|msvcr120.dll<br />msvcp120.dll<br />mfc120.dll<br />mfc120u.dll<br />mfcmifc80.dll<br />mfcm120.dll<br />mfcm120u.dll<br />concrt120.dll<br />vccorlib120.dll<br />vcamp120.dll<br />vcomp120.dll|[Microsoft Visual C++ 2013 Redistributable (links to individual downloads)](https://support.microsoft.com/en-us/help/3179560/update-for-visual-c-2013-and-visual-c-redistributable-package)<br />[Multibyte MFC Library for Visual Studio 2013](https://www.microsoft.com/en-us/download/details.aspx?id=40770)<br />[Visual C++ 2013 Runtime for Sideloaded Windows 8.1 apps (.zip download)](http://download.microsoft.com/download/5/F/0/5F0F8404-9329-44A9-8176-ED6F7F746F25/VCLibs_Redist_Packages.zip)|
|vcruntime140.dll<br />vcruntime140_app.dll<br />msvcp140.dll<br />mfc140.dll<br />mfc140u.dll<br />mfcmifc80.dll<br />mfcm140.dll<br />mfcm140u.dll<br />concrt140.dll<br />vccorlib140.dll<br />vcamp140.dll<br />vcomp140.dll|[Microsoft Visual C++ 2017 Redistributable (x86)](https://go.microsoft.com/fwlink/?LinkId=746571)<br />[Microsoft Visual C++ 2017 Redistributable (x64)](https://go.microsoft.com/fwlink/?LinkId=746572)|
|msvcr100_clr0400.dll<br />msvcr110_clr0400.dll<br />msvcr120_clr0400.dll|[Download .NET Framework](https://www.microsoft.com/net/download/framework)|

### To repair an existing Redistributable package

1. Open the Control Panel. In Windows 10, enter *control panel* in the desktop search control in the taskbar, and then choose **Control Panel** from the choices.

2. In the Control Panel, choose **Programs** > **Programs and Features**. Select the version of the Microsoft Visual C++ Redistributable that corresponds to the DLL that is missing. If a **Change** button appears at the top of the list, choose it. If the only choice is **Uninstall**, you can't repair this version of the redistributable package.

3. Choose **Repair** in the setup dialog box for the redistributable package. You may need to reboot when the repair is complete. 