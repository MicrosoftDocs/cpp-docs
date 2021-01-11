---
description: "Learn more about: Fatal Error C1010"
title: "Fatal Error C1010"
ms.date: "09/03/2019"
f1_keywords: ["C1010"]
helpviewer_keywords: ["C1010"]
ms.assetid: dfd035f1-a7a2-40bc-bc92-dc4d7f456767
---
# Fatal Error C1010

> unexpected end of file while looking for precompiled header. Did you forget to add '#include *name*' to your source?

## Remarks

An include file specified by [/Yu](../../build/reference/yu-use-precompiled-header-file.md) isn't listed in the source file. This option is enabled by default in many Visual Studio C++ project types. The default include file specified by this option is *pch.h*, or *stdafx.h* in Visual Studio 2017 and earlier.

In the Visual Studio environment, use one of the following methods to resolve this error:

- Make sure you haven't inadvertently deleted, renamed, or removed the *pch.h* header file or *pch.cpp* source file from the current project. (In older projects, these files may be named *stdafx.h* and *stdafx.cpp*.)

- Make sure the *pch.h* or *stdafx.h* header file is included before any other code or preprocessor directives in your source files. (In Visual Studio, this header file is specified by the **Precompiled Header File** project property.)

- You can turn off precompiled header use. If you turn off precompiled headers, it may severely impact build performance.

### To turn off precompiled headers

To turn off precompiled header use in a project, follow these steps:

1. In the **Solution Explorer** window, right-click the project name, and then choose **Properties** to open the project **Property Pages** dialog.

1. In the **Configuration** drop-down, select **All Configurations**.

1. Select the **Configuration properties** > **C/C++** > **Precompiled Headers** property page.

1. In the property list, select the drop-down for the **Precompiled Header** property, and then choose **Not Using Precompiled Headers**. Choose **OK** to save your changes.

1. In the **Solution Explorer** window, right-click the *pch.cpp* source file in your project. (In older projects, the file may be named *stdafx.cpp*.) Choose **Exclude from Project** to remove it from the build.

1. Use the **Build** > **Clean solution** menu command for each configuration you build, to delete any *project_name.pch* files in your intermediate build directories.

## See also

[Precompiled header files](../../build/creating-precompiled-header-files.md)\
[/Yc (Create precompiled header file)](../../build/reference/yc-create-precompiled-header-file.md)\
[/Yu (Use precompiled header file)](../../build/reference/yu-use-precompiled-header-file.md)
