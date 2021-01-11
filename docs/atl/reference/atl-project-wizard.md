---
description: "Learn more about: ATL Project Wizard"
title: "ATL Project Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.appwiz.atl.com.overview"]
helpviewer_keywords: ["ATL projects, creating", "ATL Project Wizard"]
ms.assetid: 564d2aaf-5b8e-4c2a-a925-ca40a283ea34
---
# ATL Project Wizard

The Active Template Library (ATL) is a set of template-based C++ classes that simplify writing small and fast COM objects. The ATL Project Wizard creates a project with the structures to contain COM objects.

## Overview

This wizard page describes the current [application settings for the ATL project](../../atl/reference/application-settings-atl-project-wizard.md) you are creating. By default, the project has the following settings:

- Dynamic-link library   Specifies that your server is a DLL and therefore an in-process server.

- Attributed   Specifies that your project uses attributes.

To change these defaults, click **Application Settings** in the left column of the wizard and make changes in that page of the ATL Project Wizard.

For information on the default project settings, including the choice of character set, and linking defaults, see [Default ATL Project Configurations](../../atl/reference/default-atl-project-configurations.md).

After you create an ATL project, you can add objects or controls to your project using Visual C++ [code wizards](../../ide/adding-functionality-with-code-wizards-cpp.md). You can make the following types of enhancements to a basic ATL project using code wizards:

- [Add object and controls to an ATL project](../../atl/reference/adding-objects-and-controls-to-an-atl-project.md)

- [Add a new interface in an ATL project](../../atl/reference/adding-a-new-interface-in-an-atl-project.md)

- [Add a COM+ 1.0 component to an ATL project](../../atl/reference/adding-an-atl-com-plus-1-0-component.md)

Additionally, consider these tasks when you create and enhance an ATL project:

- [Make an ATL object noncreatable](../../atl/reference/making-an-atl-object-noncreatable.md)

- [Optimize the compiler for an ATL project](../../atl/reference/specifying-compiler-optimization-for-an-atl-project.md)

You can specify project properties (for example, [whether to link statically to the CRT](../../atl/programming-with-atl-and-c-run-time-code.md)) in the [Project Properties](../../build/reference/general-property-page-project.md) page, and you can set [build configurations](/visualstudio/ide/understanding-build-configurations) for an ATL project.

## See also

[Visual Studio Projects - C++](../../build/creating-and-managing-visual-cpp-projects.md)<br/>
[C++ project types in Visual Studio](../../build/reference/visual-cpp-project-types.md)<br/>
[Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Programming with ATL and C Run-Time Code](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Tutorial](../../atl/active-template-library-atl-tutorial.md)
