---
description: "Learn more about: Project Build Warning PRJ0049"
title: "Project Build Warning PRJ0049"
ms.date: "11/04/2016"
helpviewer_keywords: ["PRJ0049"]
ms.assetid: 8b38afa1-e080-4efd-ae89-776cfd044413
---
# Project Build Warning PRJ0049

Referenced target '\<Reference>' requires .NET Framework \<MinFrameworkVersion> and will fail to run on this project's target framework

Applications created by using Visual Studio 2008 can specify which version of the .NET Framework they should target. If you add a reference to an assembly or project that depends on a version of the .NET Framework that is later than the targeted version, you will get this warning at compile time.

### To correct this warning

1. Choose one of the following:

   - Change the targeted framework in the project's **Property Pages** dialog box so that it is later than or equal to the minimal framework version of all referenced assemblies and projects. For more information, see [Adding references](../../build/adding-references-in-visual-cpp-projects.md).

   - Remove the reference to the assembly or project that has a minimal framework version that is later than the targeted framework. These items will be marked with a warning icon in the project's **Property Pages**.

## See also

[Project Build Errors and Warnings (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)
