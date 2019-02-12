---
title: "How to: Include Resources at Compile Time (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vs.resvw.resource.including", "vc.resvw.resource.including", "vc.editors.resourceincludes"]
helpviewer_keywords: ["comments [C++], compiled files", "resources [C++], including at compile time", "projects [C++], including resources", "#include directive", "include directive (#include)", "Resource Includes dialog box [C++]", "rc files [C++], changing storage", "symbol header files [C++], changing", ".rc files [C++], changing storage", "symbol header files [C++], read-only", "symbols [C++], symbol header files", "directories [C++], specifying include paths for resources", "include files [C++], specifying for resources", "resources [C++], including in projects", "symbols [C++], finding", "resources [C++], searching for symbols"]
ms.assetid: 357e93c2-0a29-42f9-806f-882f688b8924
---
# How to: Include Resources at Compile Time (C++)

Normally it's easy and convenient to work with the default arrangement of all resources in one resource script (.rc) file. However, you can add resources in other files to your current project at compile time by listing them in the **Compile-time directives** box in the **Resource Includes** dialog box.

There are several reasons to place resources in a file other than the main .rc file:

- To add comments to resource statements that won't get deleted when you save the .rc file.

   The resource editors don't directly read .rc or `resource.h` files. The resource compiler compiles them into .aps files, which are consumed by the resource editors. This file is a compile step and only stores symbolic data. As with a normal compile process, information that isn't symbolic (for example, comments) is discarded during the compile process. Whenever the .aps file gets out of synch with the .rc file, the .rc file is regenerated (for example, when you Save, the resource editor overwrites the .rc file and the `resource.h` file). Any changes to the resources themselves will remain incorporated in the .rc file, but comments will always be lost once the .rc file is overwritten.

- To include resources that have already been developed and tested and don't need further modification. (Any files that are included but don't have an .rc extension won't be editable by the resource editors.)

- To include resources that are being used by several different projects, or that are part of a source code version-control system, and so must exist in a central location where modifications will affect all projects.

- To include resources (such as RCDATA resources) that are in a custom format. RCDATA resources may have special requirements. For example, you can't use an expression as a value for the nameID field. For more information, see the Windows SDK documentation.

If you have sections in your existing .rc files that meet any of these conditions, you should place the sections in one or more separate .rc files and include them in your project using the **Resource Includes** dialog box. The *Projectname*.rc2 file created in the \res subdirectory of a new project is used for this purpose.

You can use the **Resource Includes** dialog box in a C++ project to modify the environment's normal working arrangement of storing all resources in the project .rc file and all [symbols](../windows/symbols-resource-identifiers.md) in Resource.h.

To open the **Resource Includes** dialog box, right-click an .rc file in [Resource View](../windows/resource-view-window.md), then choose **Resource Includes** from the shortcut menu. This dialog box has the following properties:

|Property|Description|
|---|---|
|**Symbol header file**|Allows you to change the name of the header file where the symbol definitions for your resource file are stored. For more information, see [Changing the Names of Symbol Header Files](../windows/changing-the-names-of-symbol-header-files.md).|
|**Read-only symbol directives**|Enables you to include header files that contain symbols that shouldn't be modified during an editing session. For example, you can include a symbol file that is shared among several projects. You can also include MFC .h files. For more information, see [Including Shared (Read-Only) or Calculated Symbols](../windows/including-shared-read-only-or-calculated-symbols.md).|
|**Compile-time directives**|Allows you to include resource files that are created and edited separately from the resources in your main resource file, contain compile-time directives (such as those directives that conditionally include resources), or contain resources in a custom format. You can also use the **Compile-time directives box** to include standard MFC resource files. For more information, see [Including Resources at Compile Time](../windows/how-to-include-resources-at-compile-time.md).|

> [!NOTE]
> Entries in these text boxes appear in the .rc file marked by `TEXTINCLUDE 1`, `TEXTINCLUDE 2`, and `TEXTINCLUDE 3` respectively. For more information, see [TN035: Using Multiple Resource Files and Header Files with Visual C++](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md).

Once you have made changes to your resource file using the **Resource Includes** dialog box, you need to close the .rc file and then reopen it for the changes to take effect.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the .NET Framework Developer's Guide.

## To include resources in your project at compile time

1. Place the resources in a resource script file with a unique file name. Don't use *projectname*.rc, because this name is the file name used for the main resource script file.

1. Right-click the .rc file (in [Resource View](../windows/resource-view-window.md)) and choose **Resource Includes** from the shortcut menu.

1. In the **Compile-time directives** box, add the [#include](../preprocessor/hash-include-directive-c-cpp.md) compiler directive to include the new resource file in the main resource file in the development environment.

   The resources in files included in this way are made a part of your executable file at compile time. They aren't directly available for editing or modification when you're working on your project's main .rc file. Open included .rc files separately. Any files that are included but don't have an .rc extension won't be editable by the resource editors.

## To specify include directories for a specific resource (.rc file)

1. Right-click the .rc file in Solution Explorer and select **Properties** from the shortcut menu.

1. In the **Property Pages** dialog box, select the **Resources** node in the left pane, then specify the additional include directories in the **Additional include directories** property.

## To find symbols in resources

1. From the **Edit** menu, choose **Find Symbol**.

1. In the [Find Symbol dialog box](/visualstudio/ide/go-to), in the **Find What** box, select a previous search string from the drop-down list or type the accelerator key you want to find (for example, ID_ACCEL1).

   > [!TIP]
   > To use [regular expressions](/visualstudio/ide/using-regular-expressions-in-visual-studio) for your search, you must use the [Find in Files command](/visualstudio/ide/reference/find-command) from the **Edit** menu instead of the **Find Symbol** command. To enable regular expressions, you must have the **Use: Regular Expressions** check box selected in the [Find dialog box](/visualstudio/ide/finding-and-replacing-text). Then you can select the right-arrow button to the right of the **Find What** box to display a list of regular search expressions. When you select an expression from this list, it is substituted as the search text in the **Find What** box.

1. Select any of the **Find** options.

1. Choose **Find Next**.

> [!NOTE]
> You cannot search for symbols in string, accelerator, or binary resources.

## Requirements

Win32

## See also

[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Resource Editors](../windows/resource-editors.md)<br/>
[Symbols: Resource Identifiers](../windows/symbols-resource-identifiers.md)<br/>