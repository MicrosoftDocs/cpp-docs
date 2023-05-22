---
title: "Redistributing Visual C++ Files"
description: "Visual Studio includes Redistributable libraries and components you can deploy with your app."
ms.date: 01/13/2023
helpviewer_keywords: ["application deployment [C++], file redistributing", "redistributing applications [C++]", "deploying applications [C++], file redistributing", "file redistribution [C++]", "redistributing applications [C++], about redistributing applications"]
ms.assetid: d201b2ce-36f1-44e5-a96c-0db81a1ba652
---
# Redistributing Visual C++ Files

> [!NOTE]
> Are you here because you're looking for a download of one of the Visual C++ Runtime files? Go to the [Latest supported Visual C++ Redistributable downloads](latest-supported-vc-redist.md) page.

## Redistributable files and licensing

When you deploy an application, you must also deploy the files that are required to support it. If any of these files are provided by Microsoft, check whether you're permitted to redistribute them. You'll find a link to the Visual Studio license terms in the IDE. Use the License terms link in the About Microsoft Visual Studio dialog box. Or, download the relevant EULAs and licenses from the Visual Studio [License Directory](https://visualstudio.microsoft.com/license-terms/).

::: moniker range="msvc-170"

To view the "REDIST list" that's referenced in the "Distributable Code" section of the Visual Studio 2022 Microsoft Software License Terms, see [Distributable code files for Microsoft Visual Studio 2022](/visualstudio/releases/2022/redistribution#-distributable-code-files-for-visual-studio-2022)

::: moniker-end

::: moniker range="msvc-160"

To view the "REDIST list" that's referenced in the "Distributable Code" section of the Visual Studio 2019 Microsoft Software License Terms, see [Distributable Code Files for Microsoft Visual Studio 2019](/visualstudio/releases/2019/redistribution#-distributable-code-files-for-visual-studio-2019)

::: moniker-end

::: moniker range="msvc-150"

To view the "REDIST list" that's referenced in the "Distributable Code" section of the Visual Studio 2017 Microsoft Software License Terms, see [Distributable Code Files for Microsoft Visual Studio 2017](/visualstudio/productinfo/2017-redistribution-vs#-distributable-code-files-for-visual-studio-2017).

::: moniker-end

::: moniker range="msvc-140"

To view the "REDIST list" that's referenced in the "Distributable Code" section of the Visual Studio 2015 Microsoft Software License Terms, see [Distributable Code Files for Microsoft Visual Studio 2015](/visualstudio/productinfo/2015-redistribution-vs#-distributable-code-files-for-visual-studio-2015).

::: moniker-end

For more information about redistributable files, see [Determining which DLLs to redistribute](determining-which-dlls-to-redistribute.md) and [Deployment examples](deployment-examples.md).

## Locate the redistributable files

To deploy redistributable files, you can use the redistributable packages installed by Visual Studio. In versions of Visual Studio since 2017, these files are named *`vc_redist.arm64.exe`*, *`vc_redist.x64.exe`*, and *`vc_redist.x86.exe`*. In Visual Studio 2015, 2017, and 2019, they're also available under the names *`vcredist_x86.exe`*, *`vcredist_x64.exe`*, and (2015 only) *`vcredist_arm.exe`*.

The easiest way to locate the redistributable files is by using environment variables set in a developer command prompt. In Visual Studio 2022, the redistributable files are in the *`%VCINSTALLDIR%Redist\MSVC\v143`* folder. In the latest version of Visual Studio 2019, you'll find the redistributable files in the *`%VCINSTALLDIR%Redist\MSVC\v142`* folder. In both Visual Studio 2017 and Visual Studio 2019, they're also found in *`%VCToolsRedistDir%`*. In Visual Studio 2015, these files can be found in *`%VCINSTALLDIR%redist\<locale>`*, where *`<locale>`* is the locale of the redistributable packages.

In Visual Studio 2022 and 2019, merge module files are part of an optional installable component named **C++ \<version> Redistributable MSMs** in the Visual Studio Installer. The merge modules are installed by default as part of a C++ install in Visual Studio 2017 and Visual Studio 2015. When installed in Visual Studio 2022, you'll find the redistributable merge modules in *`%VCINSTALLDIR%Redist\MSVC\v143\MergeModules`*. In the latest version of Visual Studio 2019, the redistributable merge modules are in *`%VCINSTALLDIR%Redist\MSVC\v142\MergeModules`*. In both Visual Studio 2019 and Visual Studio 2017, they're also found in *`%VCToolsRedistDir%MergeModules`*. In Visual Studio 2015, they're found in *`Program Files [(x86)]\Common Files\Merge Modules`*.

## Install the redistributable packages

The Visual C++ Redistributable Packages install and register all Visual C++ libraries. If you use one, run it as a prerequisite on the target system before you install your application. We recommend that you use these packages for your deployments because they enable automatic updating of the Visual C++ libraries. For an example about how to use these packages, see [Walkthrough: Deploying a Visual C++ Application By Using the Visual C++ Redistributable Package](deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).

Each Visual C++ Redistributable package checks for the existence of a more recent version on the machine. If a more recent version is found, the package won't get installed. In Visual Studio 2015 or later, Redistributable packages display an error message stating that setup failed. If a package is run by using the **`/quiet`** flag, no error message is displayed. In either case, an error is logged by the Microsoft installer, and an error result is returned to the caller. In Visual Studio 2015 and later, you can avoid this error by checking the registry to find out if a more recent version is installed. The current installed version number is stored in the **`HKEY_LOCAL_MACHINE\SOFTWARE\Wow6432Node\Microsoft\VisualStudio\14.0\VC\Runtimes\{x86|x64|arm64}`** key. The version number is 14.0 for Visual Studio 2015, 2017, 2019, and 2022 because the latest Redistributable is binary compatible with previous versions back to 2015. The key is `arm64`, `x86`, or `x64` depending on the installed vcredist versions for the platform. (You need to check under the `Wow6432Node` subkey only if you're using Regedit to view the version of the installed x86 package on an x64 platform.) The version number is stored in the `REG_SZ` string value **`Version`** and also in the set of **`Major`**, **`Minor`**, **`Bld`**, and **`Rbld`** `REG_DWORD` values. To avoid an error at install time, you must skip installation of the Redistributable package if the currently installed version is more recent.

### Command-line options for the Redistributable packages

The Visual C++ Redistributable supports several command-line options. The `/?`, `/h`, or `/help` options display a pop-up dialog that lists the available options. You may specify `/install` to install, `/repair` to repair, or `/uninstall` to uninstall the Redistributable. The `/layout` option copies the complete contents of the Redistributable in the current directory. By default, the Redistributable installs its contents and prompts the user for information and whether to restart after installation. You can specify the `/passive` option, which displays progress, but doesn't otherwise require user interaction. You can also specify a `/quiet` option, which doesn't display any UI or require any user interaction. The `/norestart` option suppresses any attempts to restart. By default, a log file is created in *`%TEMP%`*. You can use `/log filename.txt` to log to a specific file.

This example command installs the x64 Redistributable. It shows installation progress, but doesn't require user interaction or a restart:

```cmd
vc_redist.x64.exe /install /passive /norestart
```

## Install the redistributable merge modules

> [!IMPORTANT]
> Merge modules (*`.msm`* files) for Visual C++ Redistributable files are deprecated. We don't recommend you use them for application deployment. Instead, we recommend central deployment of the Visual C++ Redistributable package. Central deployment by a Redistributable package makes it possible for Microsoft to service runtime library files independently. And, an uninstall of your app can't affect other applications that also use central deployment. When you use a Redistributable package for central deployment, you aren't responsible for tracking and maintaining the runtime libraries. Otherwise, an update to the runtime library files requires you to update and redeploy your *`.msi`* installer. Your app could be vulnerable to bugs or security issues until you do.

Redistributable merge modules must be included in the Windows Installer package (or similar installation package) that you use to deploy your application. For more information, see [Redistributing by using merge modules](redistributing-components-by-using-merge-modules.md). For an example see [Walkthrough: Deploying a Visual C++ application by using a setup project](walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md).

## Install individual redistributable files

It's also possible to directly install the Redistributable DLLs in the *application local folder*. The application local folder is the folder that contains your executable application file. For servicing reasons, we don't recommend you use this installation location.

## Potential run-time errors

If Windows can't find one of the Redistributable library DLLs required by your application, it may display a message similar to: "This application has failed to start because *library*.dll was not found. Reinstalling the application may fix this problem."

To resolve this kind of error, make sure your application installer builds correctly. Verify that the Redistributable libraries get deployed correctly on the target system. For more information, see [Understanding the Dependencies of a Visual C++ Application](understanding-the-dependencies-of-a-visual-cpp-application.md).

## Related articles

[Redistributing by using merge modules](redistributing-components-by-using-merge-modules.md)\
Describes how to use Visual C++ Redistributable merge modules to install the Visual C++ runtime libraries as shared DLLs in the *`%windir%\system32\`* folder.

[Redistributing Visual C++ ActiveX Controls](redistributing-visual-cpp-activex-controls.md)\
Describes how to redistribute an application that uses ActiveX Controls.

[Redistributing the MFC Library](redistributing-the-mfc-library.md)\
Describes how to redistribute an application that uses MFC.

[Redistributing an ATL application](redistributing-an-atl-application.md)\
Describes how to redistribute an application that uses ATL. In Visual Studio 2012 and later, no ATL library is required.

[Deployment Examples](deployment-examples.md)\
Links to examples that demonstrate how to deploy Visual C++ applications.

[Deploying Desktop Applications](deploying-native-desktop-applications-visual-cpp.md)\
Introduces Visual C++ deployment concepts and technologies.
