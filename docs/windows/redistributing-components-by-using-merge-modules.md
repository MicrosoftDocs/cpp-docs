---
title: Redistribute Components by Using Merge Modules
description: Learn more about how to redistribute components by using merge modules.
ms.date: 06/08/2022
helpviewer_keywords: ["merge modules, using", "redistributing applications, using merge modules"]
ms.assetid: 93b84211-bf9b-4a78-9f22-474ac2ef7840
ms.topic: concept-article
---
# Redistribute components by using merge modules

> [!IMPORTANT]
> In Visual Studio 2019 and later, merge modules for Visual C++ Redistributable files are deprecated. We don't recommend that you use them for application deployment. Windows Update can't update redistributable files installed by using merge modules because the detection mechanism depends on knowing details of the installing package.
>
> The Visual C++ Redistributable Packages are known for each release, but packages that use MSMs are user generated. Microsoft can't know the details of user-generated packages. Instead, we recommend that you use central deployment of the Visual C++ Redistributable Package. Central deployment installs the redistributable files in the Windows `%SYSTEMROOT%\system32\` folder for use by all applications and users. Central deployment by a redistributable package makes it possible for Microsoft to service runtime library files independently. An uninstall of your app can't break other applications that also use central deployment.
>
> When you use a redistributable package for central deployment, you aren't responsible for tracking and updating the runtime libraries as part of your application maintenance. The Microsoft Update service updates these libraries for you. Otherwise, an update to the runtime library files requires you to update and redeploy your `.msi` installer. Your app could be vulnerable to bugs or security issues until you do.

Visual Studio includes [merge modules](/windows/win32/Msi/about-merge-modules) (`.msm` files) for each Visual C++ component that's licensed for redistribution with an application. There are separate versions of the merge modules for each target platform. When a merge module is compiled into a Windows Installer setup file, it enables the deployment of Visual C++ Redistributable files to that specific platform. You can't include merge modules for different versions of the same dynamic-link library (DLL) in one installer. In your installer setup file, specify that the merge modules are prerequisites for your application.

You can use merge modules for either [central deployment](deployment-in-visual-cpp.md#central-deployment) or [local deployment](deployment-in-visual-cpp.md#local-deployment). Users can't install centrally deployed files unless they have administrator rights. Local deployment might allow a nonadministrator to install and run your app, but at the cost of independent serviceability.

The installation service reports an error if you attempt central deployment of older merge modules over newer existing libraries. You should write your installer setup to handle this failure gracefully and not display an error message. Your code can still deploy and run successfully despite this failure. For more information, see [C++ binary compatibility between Visual Studio versions](../porting/binary-compat-2015-2017.md).

If you deploy your code only as an `.msi` installer, we recommend that you don't include the merge modules in the installer. Instead, report a failure to the user when the required redistributable libraries aren't found. In the failure dialog, include instructions on how to find and install the latest redistributable package. For more information and links to redistributable packages, see [the latest supported Visual C++ downloads](latest-supported-vc-redist.md).

The latest redistributable packages and merge modules are compatible with code built by using Visual Studio 2015 and later. Code built by versions of Visual Studio before 2015 require a separate redistributable package.

## When to use merge modules

Merge modules are appropriate only in limited circumstances:

- You can't install or require a separate redistributable package for policy reasons.
- Your code requires a specific, bug-compatible version of the libraries.
- Your code targets only one platform, and you don't have dependencies on more than one version of the DLLs.
- You intend to service your deployed code regularly so that the libraries remain up to date.

When you use merge modules, you must track and regularly service your application with library updates. Otherwise, you eventually force your clients to choose between running your code or remaining secure.

## Where to find merge module files

In Visual Studio 2022 and 2019, merge module files are part of an optional installable component named C++ \<version> Redistributable MSMs in the Visual Studio Installer. The merge modules are installed by default as part of a C++ installation in Visual Studio 2017 and Visual Studio 2015. When the merge modules are installed in Visual Studio 2022, you can find the Visual C++ Redistributable merge modules in `%VCINSTALLDIR%Redist\MSVC\v143\MergeModules`.

In the latest version of Visual Studio 2019, the merge modules are in `%VCINSTALLDIR%Redist\MSVC\v142\MergeModules`. In both Visual Studio 2019 and Visual Studio 2017, they're also found in `%VCToolsRedistDir%MergeModules`. In Visual Studio 2015, they're found in `Program Files [(x86)]\Common Files\Merge Modules`. For more information and a link to a list of redistributable merge modules, see [Redistribute Visual C++ files](redistributing-visual-cpp-files.md).

## Related content

- [Redistribute Visual C++ files](redistributing-visual-cpp-files.md)
