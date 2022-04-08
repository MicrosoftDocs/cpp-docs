---
description: "Learn more about: C++ features deprecated in Visual Studio"
title: "C++ features deprecated in Visual Studio"
ms.date: 04/07/2022
helpviewer_keywords: ["Features deprecated in Visual Studio"]
---
# C++ features deprecated in Visual Studio

This article is a non-exhaustive list of C++ features deprecated in Visual Studio 2019 and 2022. For information on breaking changes and conformance improvements for C++ in the latest version of Visual Studio, see [C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md).

## Deprecated in Visual Studio 2019

- Support for Windows XP development

  Visual Studio 2019 and later versions don't include current toolset support for creating code for Windows XP. Support for Windows XP development by using the v141_xp toolset that shipped in Visual Studio 2017 is still available as an optional component in the Visual Studio Installer. For information on how to install the v141_xp Windows XP platform toolset, see [Configuring programs for Windows XP](../build/configuring-programs-for-windows-xp.md).

## Deprecated in Visual Studio 2022

- Support for project upgrade from Visual C++ 6
  
  Visual Studio 2022 and later versions don't support upgrades from Visual C++ 6 Workspace (*`.dsw`*) and Project (*`.dsp`*) files. Visual Studio no longer registers the *`.dsw`* and *`.dsp`* file extensions as Visual Studio file types. To upgrade a project with these extensions, first use Visual Studio 2019 to upgrade the project to modern Solution (*`.sln`*) and C++ Project (*`.vcxproj`*) files. Then use the current version of Visual Studio to upgrade the project again.
