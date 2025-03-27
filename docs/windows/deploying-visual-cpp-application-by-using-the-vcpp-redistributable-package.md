---
title: "Deploy a Visual C++ App by Using the Redistributable"
description: "Learn how to deploy a Visual C++ application by using the Visual C++ Redistributable package."
ms.date: 03/20/2025
ms.topic: tutorial
helpviewer_keywords: ["walkthrough, deploying a Visual C++ application by using the redistributable package"]
ms.assetid: e59becbf-b8c6-4c8e-bab3-b69cc1ed3e5e
ms.custom: intro-deployment
---
# Walkthrough: Deploy a Visual C++ application by using the Visual C++ Redistributable package

This step-by-step article describes one way to deploy both the Microsoft Visual C++ Redistributable package and your Visual C++ application. You can use any installer technology to deploy your app. This walkthrough uses the IExpress Wizard to create a self-extracting executable installer that installs the Redistributable and an application.

To run apps that use Visual C++ runtime libraries, the target machine must have a compatible Microsoft Visual C++ Redistributable package installed.

## Prerequisites

- A computer that has Visual Studio installed

- A second computer that doesn't have the Visual C++ libraries

## Create an application and a setup file

1. If you need a sample application to deploy, you can create and build an MFC application by following the steps in [Walkthrough: Deploying a Visual C++ application by using a setup project](walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md). This walkthrough assumes your app is named `MyMFCApp` like the sample, but you can change the name to match your app.

1. Create a file and name it *`setup.bat`*. For now, you can save it to a temporary location.

    Add the following commands to the file. If your app has a different name, change `MyMFCApp` to the name of your app. If your app targets x86, change `Program Files` to `Program Files (x86)`. Remove the leading colons (`::`) to uncomment the line that installs the Redistributable for your target architecture.

    ```cmd
    @echo off
    REM Choose one of the following Redistributable files to install
    ::vc_redist.x86.exe    REM remove leading :: to install Redistributable for x86
    ::vc_redist.x64.exe    REM remove leading :: to install Redistributable for x64
    ::vc_redist.arm64.exe  REM remove leading :: to install Redistributable for ARM64
    mkdir "C:\Program Files\MyMFCApp"
    copy MyMFCApp.exe "C:\Program Files\MyMFCApp"
    ```

    You can apply command-line options to the Redistributable executable in your batch file. For more information, see [Command-line options for the Redistributable packages](./redistributing-visual-cpp-files.md#command-line-options-for-the-redistributable-packages).

## Create a self-extracting setup file

1. Open a command prompt or open the **Run** window from the Start menu, then enter `iexpress.exe`.

1. Select **Create new Self Extraction Directive file** and then choose the **Next** button.

1. Select **Extract files and run an installation command** and then choose **Next**.

1. In the text box, enter the name of your app and then choose **Next**.

1. On the **Confirmation prompt** page, select **No Prompt** and then choose **Next**.

1. On the **License agreement** page, select **Do not display a license** and then choose **Next**.

1. On the **Packaged files** page, add the following files and then choose **Next**.

   - The *`.exe`* file for your sample application (for example, *`MyMFCApp.exe`*). You can find this in the folder where you saved your solution.

   - The *`setup.bat`* file that you created in the previous section.

   - The Redistributable for your app's target architecture. We recommend that you [download the latest supported Redistributable file from Microsoft](latest-supported-vc-redist.md) for your deployment. You can also deploy the Redistributable file found in your Visual Studio installation. In Visual Studio 2017 and later, this file is called *`vc_redist.x86.exe`*, *`vc_redist.x64.exe`*, or *`vc_redist.arm64.exe`* and is located in *`%VCToolsRedistDir%`*. In Visual Studio 2015, this file is called *`vcredist_x86.exe`*, *`vcredist_x64.exe`*, or *`vcredist_arm.exe`* and is located in *`%VCINSTALLDIR%redist\1033\`*.

1. On the **Install Program to Launch** page, in the **Install Program** text box, enter the following command line, and then choose **Next**.

   `cmd.exe /c "setup.bat"`

1. On the **Show window** page, select **Default** and then choose **Next**.

1. On the **Finished message** page, select **No message**. Choose **Next**.

1. On the **Package Name and Options** page, enter a name for your self-extracting setup file, select the **Store files using Long File Name inside Package** option, and then choose **Next**. The end of the file name must be *`Setup.exe`*—for example, *`MyMFCAppSetup.exe`*.

1. On the **Configure restart** page, select **No restart**. Choose **Next**.

1. On the **Save Self Extraction Directive** page, select **Save Self Extraction Directive (SED) file**. Choose **Next**.

1. On the **Create package** page, choose **Next**. Choose **Finish**.

## Test the self-extracting setup file on the other computer

1. On the other computer that doesn't have the Visual C++ libraries, download a copy of the setup file. Then, run the setup and follow the steps that it provides. Depending on the options selected, installation might require you to accept a User Account Control elevation request, or to run the installer by using the **Run as administrator** command.

1. Run the app.

   The self-extracting setup file installs the app that's in the folder you specified in *`setup.bat`*. The app should run successfully because the Microsoft Visual C++ Redistributable package installer is included in the self-extracting setup file.

   > [!IMPORTANT]
   > To determine which version of the runtime is installed, the installer checks the registry key `\HKLM\SOFTWARE\Microsoft\VisualStudio\<version>\VC\Runtimes\<platform>\Version`. (The `<version>` value used for Visual Studio 2015, 2017, 2019, and 2022 is 14.0.) If the currently installed version is newer than the version that the installer is attempting to install, the installer returns success without installing the older version and leaves an additional entry on the installed programs page in the Control Panel.

## See also

- [Deployment examples](deployment-examples.md)
