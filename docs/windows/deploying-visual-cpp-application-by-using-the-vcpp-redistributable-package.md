---
description: "Learn more about: Walkthrough: Deploying a Visual C++ Application By Using the Visual C++ Redistributable Package"
title: "Deploy an App By Using the Redistributable Package (C++)"
ms.date: "04/23/2019"
helpviewer_keywords: ["walkthrough, deploying a Visual C++ application by using the redistributable package"]
ms.assetid: e59becbf-b8c6-4c8e-bab3-b69cc1ed3e5e
---
# Walkthrough: Deploying a Visual C++ Application By Using the Visual C++ Redistributable Package

This step-by-step article describes how to use the Visual C++ Redistributable Package to deploy a Visual C++ application.

## Prerequisites

You must have these components to complete this walkthrough:

- A computer that has Visual Studio installed.

- An additional computer that does not have the Visual C++ libraries.

### To use the Visual C++ Redistributable Package to deploy an application

1. Create and build an MFC application by following the steps in [Walkthrough: Deploying a Visual C++ Application By Using a Setup Project](walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md).

1. Create a file, name it setup.bat, and add the following commands to it. Change `MyMFCApplication` to the name of your project.

    ```cmd
    @echo off
    vcredist_x86.exe
    mkdir "C:\Program Files\MyMFCApplication"
    copy MyMFCApplication.exe "C:\Program Files\MyMFCApplication"
    ```

1. Create a self-extracting setup file:

   1. At a command prompt or in the **Run** window, run iexpress.exe.

   1. Select **Create new Self Extraction Directive file** and then choose the **Next** button.

   1. Select **Extract files and run an installation command** and then choose **Next**.

   1. In the text box, enter the name of your MFC application and then choose **Next**.

   1. On the **Confirmation prompt** page, select **No Prompt** and then choose **Next**.

   1. On the **License agreement** page, select **Do not display a license** and then choose **Next**.

   1. On the **Packaged files** page, add the following files and then choose **Next**.

      - Your MFC application (.exe file).

      - vcredist_x86.exe. In Visual Studio 2015, this file is located in *%VCINSTALLDIR%redist\\1033\\*. In Visual Studio 2017 and Visual Studio 2019, this file is located in *%VCToolsRedistDir%*. You can also [download the latest supported redist file from Microsoft](https://support.microsoft.com/help/2977003/the-latest-supported-visual-c-downloads).

      - The setup.bat file that you created in the earlier step.

   1. On the **Install Program to Launch** page, in the **Install Program** text box, enter the following command line and then choose **Next**.

      **cmd.exe /c "setup.bat"**

   1. On the **Show window** page, select **Default** and then choose **Next**.

   1. On the **Finished message** page, select **No message** and then choose **Next**.

   1. On the **Package Name and Options** page, enter a name for your self-extracting setup file, select the **Store files using Long File Name inside Package** option, and then choose **Next**. The end of the file name must be Setup.exe—for example, *MyMFCApplicationSetup.exe*.

   1. On the **Configure restart** page, select **No restart** and then choose **Next**.

   1. On the **Save Self Extraction Directive** page, select **Save Self Extraction Directive (SED) file** and then choose **Next**.

   1. On the **Create package** page, choose **Next**. Choose **Finish**.

1. Test the self-extracting setup file on the other computer, which does not have the Visual C++ libraries:

   1. On the other computer, download a copy of the setup file, and then install it by running it and following the steps that it provides. Depending on the options selected, installation might require the **Run as administrator** command.

   1. Run the MFC application.

      The self-extracting setup file installs the MFC application that is in the folder that you specified in step 2. The application runs successfully because the Visual C++ Redistributable Package installer is included in the self-extracting setup file.

      > [!IMPORTANT]
      > To determine which version of the runtime is installed, the installer checks the registry key \\HKLM\\SOFTWARE\\Microsoft\\VisualStudio\\_version_\\VC\\Runtimes\\_platform_\\Version. If the currently installed version is newer than the version that the installer is attempting to install, the installer returns success without installing the older version and leaves an additional entry on the installed programs page in the Control Panel.

## See also

[Deployment Examples](deployment-examples.md)<br/>
