---
description: "Learn more about: MFC MBCS DLL Add-on"
title: "MFC MBCS DLL Add-on"
ms.date: "12/02/2019"
helpviewer_keywords: ["MBCS", "MFC"]
---
# MFC MBCS DLL Add-on

Support for MFC and its multibyte character set (MBCS) libraries requires an additional step during Visual Studio installation in Visual Studio 2013 and later.

**Visual Studio 2013**: By default, the MFC libraries installed in Visual Studio 2013 only support Unicode development. You need the MBCS DLLs in order to build an MFC project in Visual Studio 2013 that has the **Character Set** property set to **Use Multi-Byte Character Set** or **Not Set**. Download the DLL at [Multibyte MFC Library for Visual Studio 2013](https://www.microsoft.com/download/details.aspx?id=40770).

**Visual Studio 2015**: Both Unicode and MBCS MFC DLLs are included in the Visual C++ setup components, but support for MFC is not installed by default. Visual C++ and MFC are optional install configurations in Visual Studio setup. To make sure that MFC is installed, choose **Custom** in setup, and under **Programming Languages**, make sure that **Visual C++** and **Microsoft Foundation Classes for C++** are selected. If you have already installed Visual Studio, you will be prompted to install Visual C++ and/or MFC when you attempt to create an MFC project.

**Visual Studio 2017 and later**: The Unicode and MBCS MFC DLLs are installed with the **Desktop development with C++** workload when you select **MFC and ATL support** from the **Optional Components** pane in the Visual Studio Installer program. If your installation does not include these components, navigate to the **File | New Projects** dialog and click the **Open Visual Studio Installer** link. For more information, see [Install Visual Studio](/visualstudio/install/install-visual-studio).

## See also

[MFC Library Versions](mfc-library-versions.md)
