---
title: "How to: Use the Windows SDK in a Windows Desktop application"
description: "How to set the target SDK version in a Windows Desktop application project to use the latest Windows SDK."
ms.custom: "get-started-article"
ms.date: "01/22/2020"
ms.assetid: eed6421e-9355-44a6-9582-3f1d453a6d44
---
# How to: Use the Windows SDK in a Windows Desktop application

When you create a new classic Windows desktop project in Visual Studio, it targets the latest Windows SDK installed by Visual Studio by default. Visual Studio installs a version of the SDK when you install the C++ Desktop workload. The Windows SDK supports writing code for Windows 7 SP1 and later. For more information about targeting specific versions of Windows, see [Using the Windows Headers](/windows/win32/WinProg/using-the-windows-headers) and [Update WINVER and _WIN32_WINNT](../porting/modifying-winver-and-win32-winnt.md).

When you upgrade an existing project, you have a choice: You can keep using the target Windows SDK specified in your project. Or, you can retarget your project to use the latest Windows SDK. With the latest Windows SDK, you get the advantages of support for the latest operating systems and language standards.

## Use the right Windows SDK for your project

Starting with Visual Studio 2015, the C Runtime (CRT) library was separated into two parts: One part, ucrtbase, contains the Standard C and Microsoft-specific CRT functions that you can use in Universal Windows Apps. This library is now known as the Universal CRT, or UCRT, and has moved into the Windows SDK. The UCRT contains many new functions, such as C99 functions, needed to support the latest C++ language standards. The other part of the original CRT is vcruntime. It contains the C runtime support, startup, and termination code, and everything else that didn't go into the UCRT. The vcruntime library gets installed along with the C++ compiler and toolset in Visual Studio. For more information, see [CRT library features](../c-runtime-library/crt-library-features.md).

The UCRT is now a system component that's installed on every version of Windows 10 and later. It's also available as an installable component for all earlier supported versions of Windows. You can use the Windows SDK to target all the supported versions of Windows. For a complete list of supported operating systems, see [Windows SDK](https://developer.microsoft.com/windows/downloads/windows-sdk).

To retarget your projects to use the latest Windows SDK when you upgrade from a project version before Visual Studio 2015, follow these steps:

### To target the latest Windows SDK

1. Make sure the latest Windows SDK is installed. The Windows SDK is installed as part of the **Desktop development with C++** workload in the Visual Studio Installer. A standalone version is available at [Windows SDK](https://developer.microsoft.com/windows/downloads/windows-sdk/).

1. Open the shortcut menu for the project node, and choose **Retarget projects**. (In earlier versions of Visual Studio, choose **Retarget SDK Version**.) The **Review Solution Actions** dialog appears.

   ![Review Solution Actions.](../windows/media/retargetingwindowssdk2.PNG "RetargetingWindowsSDK2")

1. In the **Target Platform Version** dropdown list, choose the version of the Windows SDK you want to target. Generally speaking, we recommend you choose the latest installed version. Choose the **OK** button to apply the change.

   The 8.1 in this context refers to the Windows 8.1 SDK.

   If this step is successful, the following text appears in the Output window:

   `Retargeting End: 1 completed, 0 failed, 0 skipped`

1. Open the project properties dialog. In the **Configuration Properties** > **General** section, notice the values of **Windows Target Platform Version**. Changing the value here has the same effect as following this procedure. For more information, see [General Property Page (Project)](../build/reference/general-property-page-project.md).

   ![Target Platform property in the Property Pages dialog.](../windows/media/retargetingwindowssdk3.PNG "RetargetingWindowsSDK3")

   This action changes the values of project macros that include paths to header files and library files. To see what changed, open the **Visual C++ Directories** section of the **Project Properties** dialog. Select one of the properties, such as **Include Directories**. Then, open the property value's dropdown list, and choose **\<Edit>**. The **Include Directories** dialog appears.

   ![Include Directories dialog box.](../windows/media/retargetingwindowssdk4.PNG "RetargetingWindowsSDK4")

   Choose the **Macros >>** button, and scroll down the list of macros to the Windows SDK macros to see all the new values.

   ![List of Windows SDK Macros.](../windows/media/retargetingwindowssdk5.PNG "RetargetingWindowsSDK5")

1. Repeat the retargeting procedure for other solution projects, as needed, and rebuild the solution.

### To target the Windows 8.1 SDK

1. Open the shortcut menu for the project node in Solution Explorer, and choose **Retarget projects**. (In earlier versions of Visual Studio, choose **Retarget SDK Version**.)

2. In the **Target Platform Version** dropdown list, choose **8.1**.

## See also

[Walkthrough: Create a traditional Windows Desktop application (C++)](../windows/walkthrough-creating-windows-desktop-applications-cpp.md)
