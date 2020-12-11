---
description: "Learn more about: Porting to the Universal Windows Platform (C++)"
title: "Porting to the Universal Windows Platform (C++)"
ms.date: "10/23/2019"
ms.assetid: f662d2e4-8940-418d-8109-cb76cb8f8569
---
# Porting to the Universal Windows Platform (C++)

In this topic, you can find information on how to port existing C++ code to the Windows 10 app platform, the Universal Windows Platform. What is meant by the term *universal* is that your code can run on any of the devices that run Windows 10. You create a single project and a single XAML-base user interface that works well on any device that runs Windows 10. You can use dynamic layout features in XAML to allow the app's UI to adapt to different display sizes.

The Windows Dev Center documentation contains a guide for porting Windows 8.1 apps to the Universal Windows Platform. See [Move from Windows Runtime 8 to UWP](/windows/uwp/porting/w8x-to-uwp-root). Although the guide focuses mostly on C# code, most of the guidance is applicable to C++. The following procedures contain more detailed information. See also [Move from a desktop application to UWP](/windows/uwp/porting/desktop-to-uwp-migrate).

This topic contains the following procedures for porting code to the UWP.

- [Porting a Windows 8.1 Store App to the UWP](#BK_81StoreApp)

- [Porting a Windows 8.1 Runtime Component to the UWP](#BK_81Component)

If you have a classic desktop Win32 DLL and you want to call it from a UWP application, you can do that as well. Using such procedures, you can create a UWP user interface layer for an existing classic Windows desktop C++ application, or your cross-platform standard C++ code. See [How to: Use Existing C++ Code in a Universal Windows Platform App](../porting/how-to-use-existing-cpp-code-in-a-universal-windows-platform-app.md).

## <a name="BK_81StoreApp"></a> Porting a Windows 8.1 Store App to the UWP

If you have a Windows 8.1 Store App, you can use this procedure to get it working on the UWP and any device that runs Windows 10.  It's a good idea to first build the project with Visual Studio 2019 as a Windows 8.1 project, to first eliminate any issues that arise from changes in the compiler and libraries. Once you've done that, there are two ways to convert this to a Windows 10 UWP project. The easiest way (as explained in the following procedure) is to create a Universal Windows project, and copy your existing code into it. If you were using a Universal project for Windows 8.1 desktop and Windows 8.1 Phone, your project will start with two different layouts in XAML but end with a single dynamic layout that adjusts to the display size.

### To port a Windows 8.1 Store App to the UWP

1. If you have not already done so, open your Windows 8.1 App project in Visual Studio 2017, and follow the instructions to upgrade the project file.

   You need to have installed the **Windows 8.1 Tools in Visual Studio** setup. If you don't have those tools installed, start **Visual Studio** setup from the **Programs and Features** window, choose **Visual Studio 2017**, and in the setup window, choose **Modify**. Locate **Windows 8.1 Tools**, make sure it is selected, and choose **OK**.

1. Open the **Project Properties** window, and under **C++** > **General**, set the **Platform Toolset** to **v141**, the toolset for Visual Studio 2017.

1. Build the project as a Windows 8.1 project, and address any build errors. Any errors at this stage are probably due to breaking changes in the build tools and libraries. See [Visual C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-2015.md) for a detailed explanation of the changes that might affect your code.

   Once your project builds cleanly, you are ready to port to Universal Windows (Windows 10).

1. Create a new Universal Windows App project using the Blank template. You might want to give it the same name as your existing project, although to do that the projects must be in different directories.

1. Close the solution, and then using **Windows Explorer** or the command line, copy the code files (with extensions .cpp, .h, and .xaml) from your Windows 8.1 project into the same folder as the project file (.vcxproj) for the project you created in step 1. Do not copy the Package.appxmanifest file, and if you have separate code for Windows 8.1 desktop and phone, choose one of them to port first (you'll have to do some work later to adapt to the other). Be sure to copy and subfolders and their contents. If prompted, choose to replace any files with duplicate names.

1. Reopen the solution, and choose **Add** > **Existing Item** from the shortcut menu for the project node. Select all the files you copied, except any that are already part of the project.

   Check any subfolders and make sure to add the files in them as well.

1. If you are not using the same project name as your old project, open the Package.appxmanifest file and update the **Entry Point** to reflect the namespace name for the `App` class.

   The **Entry Point** field in the Package.appxmanifest file contains a scoped name for the `App` class, which includes the namespace that contains the `App` class. When you create a Universal Windows project, the namespace is set to the name of the project. If this is different from what's in the files you copied in from your old project, you must update one or the other to make them match.

1. Build the project, and address any build errors due to breaking changes between the different versions of the Windows SDK.

1. Run the project on the Local Desktop. Verify that there are no deployment errors, and that the layout of the app looks reasonable and that it functions correctly on the desktop.

1. If you had separate code files and .xaml for another device, such as Windows Phone 8.1, examine this code and identify where it differs from the standard device. If the difference is only in the layout, you might be able to use a **Visual State Manager** in the xaml to customize the display depending on the size of the screen. For other differences, you can use conditions sections in your code using the following #if statements.

    ```cpp
    #if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)
    #if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PHONE_APP)
    #if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
    #if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    ```

   These statements respectively apply to UWP apps, Windows Phone Store apps, both, or neither (classic Win32 desktop only). These macros are only available in Windows SDK 8.1 and later, so if your code needs to compile with earlier versions of the Windows SDK or for other platforms besides Windows, then you should also consider the case that none of them are defined.

1. Run and debug the app on an emulator or physical device, for each type of device that your app supports. To run an emulator, you need to run Visual Studio on a physical computer, not a virtual machine.

## <a name="BK_81Component"></a> Porting a Windows 8.1 Runtime Component to the UWP

If you have a DLL or a Windows Runtime Component that already works with Windows 8.1 Store apps, you can use this procedure to get the component or DLL working with the UWP and Windows 10. The basic procedure is to create a new project and copy your code into it.

### To port a Windows 8.1 Runtime Component to the UWP

1. In the **New Project** dialog in Visual Studio 2017, locate the **Windows Universal** node. If you don't see this node, install the [Windows 10 SDK](https://developer.microsoft.com/windows/downloads/windows-10-sdk) first. Choose the **Windows Runtime Component** template, give a name for your component, and choose the **OK** button. The component name will be used as the namespace name, so you might want to use the same name as your old projects' namespace. This requires that you create the project in a different folder from the old one. If you choose a different name, you can update the namespace name in the generated code files.

1. Close the project.

1. Copy all the code files (.cpp, .h, .xaml, etc.) from your Windows 8.1 component into your newly created project. Do not copy the Package.appxmanifest file.

1. Build, and resolve any errors due to breaking changes between different versions of the Windows SDK.

## Troubleshooting

You might encounter various errors during the process of porting code to the UWP. Here are some of the possible problems you might encounter.

### Project Configuration Issues

You might receive the error:

```Output
could not find assembly 'platform.winmd': please specify the assembly search path using /AI or by setting the LIBPATH environment variable
```

If this happens, the project is not building as a Windows Universal project. Check the project file and make sure it has the correct XML elements that identify a project as a Windows Universal Project. The following elements should be present (the version number of the target platform might be different):

```xml
<AppContainerApplication>true</AppContainerApplication>
<ApplicationType>Windows Store</ApplicationType>
<WindowsTargetPlatformVersion>10.0.10156.0</WindowsTargetPlatformVersion>
<WindowsTargetPlatformMinVersion>10.0.10156.0</WindowsTargetPlatformMinVersion>
<ApplicationTypeRevision>10.0</ApplicationTypeRevision>
```

If you created a new UWP project using Visual Studio, you should not see this error.

## See also

[Visual C++ Porting Guide](../porting/porting-to-the-universal-windows-platform-cpp.md)<br/>
[Develop apps for the Universal Windows Platform (UWP)](/visualstudio/cross-platform/develop-apps-for-the-universal-windows-platform-uwp)
