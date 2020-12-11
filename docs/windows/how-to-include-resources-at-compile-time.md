---
description: "Learn more about: How to: Include Resources at Compile Time (C++)"
title: "How to: Include Resources at Compile Time (C++)"
ms.date: "02/14/2019"
f1_keywords: ["vs.resvw.resource.including", "vc.resvw.resource.including", "vc.editors.resourceincludes"]
helpviewer_keywords: ["comments [C++], compiled files", "resources [C++], including at compile time", "projects [C++], including resources", "#include directive", "include directive (#include)", "Resource Includes dialog box [C++]", "rc files [C++], changing storage", "symbol header files [C++], changing", ".rc files [C++], changing storage", "symbol header files [C++], read-only", "symbols [C++], symbol header files", "directories [C++], specifying include paths for resources", "include files [C++], specifying for resources", "resources [C++], including in projects", "symbols [C++], finding", "resources [C++], searching for symbols"]
ms.assetid: 357e93c2-0a29-42f9-806f-882f688b8924
---
# How to: Include Resources at Compile Time (C++)

By default all resources are located in one resource script (.rc) file, however there are many reasons to place resources in a file other than the main .rc file:

- To add comments to resource statements that won't get deleted when you save the .rc file.

- To include resources that have already been developed and tested and don't need further modification. Any files that are included but don't have an .rc extension won't be editable by the resource editors.

- To include resources that are being used by different projects, or that are part of a source code version-control system. These resources must exist in a central location where modifications will affect all projects.

- To include resources (such as RCDATA resources) that are a custom format. RCDATA resources have special requirements where you can't use an expression as a value for the `nameID` field.

If you have sections in your existing .rc files that meet any of these conditions, place these sections in one or more separate .rc files and include them in your project using the **Resource Includes** dialog box.

## Resource Includes

You can add resources from other files to your project at compile time by listing them in the **Compile-time directives** box in the **Resource Includes** dialog box. Use the **Resource Includes** dialog box to modify the project environment's normal working arrangement of storing all resources in the project .rc file and all [symbols](../windows/symbols-resource-identifiers.md) in `Resource.h`.

To get started, open the **Resource Includes** dialog box by right-clicking an .rc file in [Resource View](how-to-create-a-resource-script-file.md#create-resources), select **Resource Includes** and note the following properties:

| Property | Description |
|---|---|
| **Symbol header file** | Allows you to change the name of the header file where symbol definitions for your resource files are stored.<br/><br/>For more information, see [Changing the Names of Symbol Header Files](./changing-a-symbol-or-symbol-name-id.md). |
| **Read-only symbol directives** | Enables you to include header files that contain symbols that shouldn't be modified.<br/><br/>For example, symbol files to be shared with other projects. This can also include MFC .h files. For more information, see [Including Shared (Read-Only) or Calculated Symbols](./changing-a-symbol-or-symbol-name-id.md). |
| **Compile-time directives** | Allows you to include resource files that are created and edited separately from the resources in your main resource file, contain compile-time directives (such as those directives that conditionally include resources), or contain resources in a custom format.<br/><br/>You can also use the **Compile-time directives box** to include standard MFC resource files. |

> [!NOTE]
> Entries in these text boxes appear in the .rc file marked by `TEXTINCLUDE 1`, `TEXTINCLUDE 2`, and `TEXTINCLUDE 3` respectively. For more information, see [TN035: Using Multiple Resource Files and Header Files with Visual C++](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md).

Once changes are made to your resource file using the **Resource Includes** dialog box, you must close and reopen the *.rc* file for the changes to take effect.

### To include resources in your project at compile time

1. Place the resources in a resource script file with a unique file name. Don't use *projectname.rc*, because this is the name of the file used for the main resource script file.

1. Right-click the *.rc* file in [Resource View](how-to-create-a-resource-script-file.md#create-resources) and select **Resource Includes**.

1. In the **Compile-time directives** box, add the [#include](../preprocessor/hash-include-directive-c-cpp.md) compiler directive to include the new resource file in the main resource file in the development environment.

The resources in files included this way are only made part of the executable at compile time and aren't available for editing or modification when you're working on your project's main .rc file. Included .rc files need to be opened separately and any files included without the .rc extension won't be editable by the resource editors.

### To specify include directories for a specific resource (.rc) file

1. Right-click the *.rc* file in **Solution Explorer** and select **Properties**.

1. Select the **Resources** node in the left pane and specify any additional include directories in the **Additional include directories** property.

### To find symbols in resources

1. Go to menu **Edit** > [Find Symbol](/visualstudio/ide/go-to).

   > [!TIP]
   > To use [regular expressions](/visualstudio/ide/using-regular-expressions-in-visual-studio) in your search, select [Find in Files](/visualstudio/ide/reference/find-command) in the **Edit** menu instead of **Find Symbol**. Select the **Use: Regular Expressions** check box in the [Find dialog box](/visualstudio/ide/finding-and-replacing-text) and in the **Find What** box you can choose a regular search expression from the drop-down list. When you select an expression from this list, it's substituted as the search text in the **Find What** box.

1. In the **Find What** box, select a previous search string from the drop-down list or type the accelerator key you want to find, for example, `ID_ACCEL1`.

1. Select any of the **Find** options and choose **Find Next**.

> [!NOTE]
> You cannot search for symbols in string, accelerator, or binary resources.

## Requirements

Win32

## See also

[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[How to: Create Resources](../windows/how-to-create-a-resource-script-file.md)<br/>
[How to: Manage Resources](../windows/how-to-copy-resources.md)<br/>
