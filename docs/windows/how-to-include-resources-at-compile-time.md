---
title: "How to: Include Resources at Compile Time (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vs.resvw.resource.including", "vc.resvw.resource.including"]
dev_langs: ["C++"]
helpviewer_keywords: ["comments [C++], compiled files", "resources [C++], including at compile time", "projects [C++], including resources", "#include directive", "include directive (#include)"]
ms.assetid: 357e93c2-0a29-42f9-806f-882f688b8924
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# How to: Include Resources at Compile Time

Normally it is easy and convenient to work with the default arrangement of all resources in one resource script (.rc) file. However, you can add resources in other files to your current project at compile time by listing them in the **Compile-time directives** box in the [Resource Includes dialog box](../windows/resource-includes-dialog-box.md).

There are several reasons to place resources in a file other than the main .rc file:

- To add comments to resource statements that will not get deleted when you save the .rc file.

   The resource editors do not directly read .rc or `resource.h` files. The resource compiler compiles them into .aps files, which are consumed by the resource editors. This file is a compile step and only stores symbolic data. As with a normal compile process, information that is not symbolic (for example, comments) is discarded during the compile process. Whenever the .aps file gets out of synch with the .rc file, the .rc file is regenerated (for example, when you Save, the resource editor overwrites the .rc file and the `resource.h` file). Any changes to the resources themselves will remain incorporated in the .rc file, but comments will always be lost once the .rc file is overwritten.

- To include resources that have already been developed and tested and do not need further modification. (Any files that are included but don't have an .rc extension will not be editable by the resource editors.)

- To include resources that are being used by several different projects, or that are part of a source code version-control system, and thus must exist in a central location where modifications will affect all projects.

- To include resources (such as RCDATA resources) that are in a custom format. RCDATA resources may have special requirements. For example, you cannot use an expression as a value for the nameID field. See the Windows SDK documentation for more information.

If you have sections in your existing .rc files that meet any of these conditions, you should place the sections in one or more separate .rc files and include them in your project using the [Resource Includes dialog box](../windows/resource-includes-dialog-box.md). The *Projectname*.rc2 file created in the \res subdirectory of a new project is used for this purpose.

### To include resources in your project at compile time

1. Place the resources in a resource script file with a unique file name. Do not use *projectname*.rc, because this is the file name used for the main resource script file.

2. Right-click the .rc file (in [Resource View](../windows/resource-view-window.md)) and choose **Resource Includes** from the shortcut menu.

3. In the **Compile-time directives** box, add the [#include](../preprocessor/hash-include-directive-c-cpp.md) compiler directive to include the new resource file in the main resource file in the development environment.

   The resources in files included in this way are made a part of your executable file at compile time. They are not directly available for editing or modification when you are working on your project's main .rc file. You need to open included .rc files separately. Any files that are included but don't have an .rc extension will not be editable by the resource editors.

## Requirements

Win32

## See Also

[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Resource Editors](../windows/resource-editors.md)