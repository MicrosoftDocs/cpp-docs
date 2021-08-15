---
description: "Learn more about: Understanding the Dependencies of a Visual C++ Application"
title: "Understanding the Dependencies of a Visual C++ Application"
ms.date: "11/04/2016"
helpviewer_keywords: ["application deployment [C++], dependencies", "Dependency Walker", "dependencies [C++], application deployment and", "deploying applications [C++], dependencies", "DUMPBIN utility", "DLLs [C++], dependencies", "depends.exe", "libraries [C++], application deployment issues"]
ms.assetid: 62a44c95-c389-4c5f-82fd-07d7ef09dbf9
---
# Understanding the Dependencies of a Visual C++ Application

To determine which Visual C++ libraries an application depends on, you can view the project properties. (In Solution Explorer, right-click on the project and choose **Properties** to open the **Property Pages** dialog box.) On Windows 8 and earlier, you can also use the Dependency Walker (depends.exe), which gives a more comprehensive picture of the dependencies. For more recent versions of Windows the [lucasg/Dependencies](https://github.com/lucasg/Dependencies) tool provides similar functionality (this is a third-party tool not guaranteed by Microsoft.)

In the **Property Pages** dialog box, you can examine various pages under **Configuration Properties** to understand the dependencies. For example, if your project uses the MFC libraries and you choose **Use of MFC**, **Use MFC in a Shared DLL** on the **Configuration Properties**, **General** page, your application at run time depends on MFC DLLs such as mfc\<version>.dll. If your application doesn't use MFC, it might depend on the CRT library if you choose a **Runtime Library** value of **Multi-threaded Debug DLL (/MDd)** or **Multi-threaded DLL (/MD)** on the **Configuration Properties**, **C/C++**, **Code Generation** page.

By using depends.exe, you can examine a list of DLLs that are linked to the application at load time, and a list of its delay-loaded DLLs. If you want to get a complete list of DLLs that are dynamically loaded at run time, you can use the profiling feature in depends.exe to test the application until you're sure that all code paths have been exercised. When you end the profiling session, depends.exe shows which DLLs were dynamically loaded during run time.

When you use depends.exe, be aware that a DLL might have a dependency on another DLL or on a specific version of a DLL. You can use depends.exe on either the development computer or on a target computer. On the development computer, depends.exe reports the DLLs that are required to support an application. If you have trouble getting an application to run on a target computer, you can copy depends.exe to it and then open the application in the tool so that you can determine whether any required DLLs are missing or incorrect.

When you know which DLLs your application depends on, you can determine the ones that you have to redistribute with your application when you deploy it to another computer. In most cases, you don't have to redistribute system DLLs, but you may have to redistribute DLLs for Visual C++ libraries. For more information, see [Determining Which DLLs to Redistribute](determining-which-dlls-to-redistribute.md).

## See also

[Deploying Desktop Applications](deploying-native-desktop-applications-visual-cpp.md)
