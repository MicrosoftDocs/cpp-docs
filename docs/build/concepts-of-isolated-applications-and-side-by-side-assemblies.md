---
description: "Learn more about: Concepts of Isolated Applications and Side-by-side Assemblies"
title: "Concepts of Isolated Applications and Side-by-side Assemblies"
ms.date: "05/06/2019"
helpviewer_keywords: ["side-by-side assemblies [C++]", "isolated assemblies [C++]"]
ms.assetid: 945a885f-cb3e-4c8a-a0b9-2c2e3e02cc50
---
# Concepts of Isolated Applications and Side-by-side Assemblies

An application is considered an [isolated application](/windows/win32/SbsCs/isolated-applications) if all of its components are [side-by-side assemblies](/windows/win32/SbsCs/about-side-by-side-assemblies-). A side-by-side assembly is a collection of resources—a group of DLLs, windows classes, COM servers, type libraries, or interfaces—that are deployed together and made available for an application to use at run time. Typically, a side-by-side assembly is one to several DLLs.

## Shared or private

A side-by-side assembly can be either shared or private. [Shared side-by-side assemblies](/windows/win32/sbscs/about-shared-assemblies-) may be used by multiple applications that specify, in their manifests, a dependence on the assembly. Multiple versions of a side-by-side assembly can be shared by different applications that are running at the same time. A [private assembly](/windows/win32/SbsCs/about-private-assemblies-) is an assembly that is deployed together with an application for the exclusive use of that application. Private assemblies are installed in the folder that contains the application's executable file or one of its subfolders.

## Manifests and search order

Both isolated applications and side-by-side assemblies are described by [manifests](/windows/win32/sbscs/manifests). A manifest is an XML document that can be an external file or can be embedded in an application or an assembly as a resource. The manifest file of an isolated application is used to manage the names and versions of shared side-by-side assemblies to which the application should bind at run time. The manifest of a side-by-side assembly specifies names, versions, resources, and dependent assemblies of side-by-side assemblies. For a shared side-by-side assembly, its manifest is installed in the %WINDIR%\WinSxS\Manifests\ folder. In the case of a private assembly, we recommend that you include its manifest in the DLL as a resource that has an ID equal to 1. You can also give the private assembly the same name as that of the DLL. For more information, see [About Private Assemblies](/windows/win32/SbsCs/about-private-assemblies-).

At execution time, Windows uses assembly information from the application manifest to search and load the corresponding side-by-side assembly. If an isolated application specifies an assembly dependency, the operating system first searches for the assembly among the shared assemblies in the native assembly cache in the %WINDIR%\WinSxS\ folder. If the required assembly is not found, the operating system then searches for a private assembly in a folder of the application's directory structure. For more information, see [Assembly Searching Sequence](/windows/win32/SbsCs/assembly-searching-sequence).

## Changing dependencies

You can change side-by-side assembly dependencies after an application has been deployed by modifying the [Publisher Configuration Files](/windows/win32/SbsCs/publisher-configuration-files) and [Application Configuration Files](/windows/win32/SbsCs/application-configuration-files). A publisher configuration file, also known as a publisher policy file, is an XML file that globally redirects applications and assemblies from using one version of a side-by-side assembly to using another version of the same assembly. For example, you could change a dependency when a bug fix or security fix is deployed for a side-by-side assembly and you want to redirect all applications to use the fixed version. An application configuration file is an XML file that redirects a specific application from using one version of a side-by-side assembly to using another version of the same assembly. You can use an application configuration file to redirect a particular application to use a version of a side-by-side assembly that's different from the one that's defined in the publisher configuration file. For more information, see [Configuration](/windows/win32/SbsCs/configuration).

## Visual C++ libraries

In Visual Studio 2005 and Visual Studio 2008, redistributable libraries such as ATL, MFC, CRT, Standard C++, OpenMP, and MSDIA were deployed as shared side-by-side assemblies to the native assembly cache. In the current version, the redistributable libraries use central deployment. By default, all applications that are built by using Visual Studio are built with the manifest embedded in the final binary, and the manifest describes the dependencies of the binary on the Visual C++ libraries. To understand manifest generation for C++ applications, see [Understanding Manifest Generation for C/C++ Programs](understanding-manifest-generation-for-c-cpp-programs.md). A manifest is not required for applications that are statically linked to the libraries that they use, or that use local deployment. For more information about deployment, see [Deployment in Visual C++](../windows/deployment-in-visual-cpp.md).

## See also

[Building C/C++ Isolated Applications and Side-by-side Assemblies](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
