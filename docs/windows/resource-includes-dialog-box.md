---
title: "Resource Includes C++ Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.resourceincludes"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""Resource Includes dialog box [C++]"", ""rc files [C++], changing storage"", ""symbol header files [C++], changing"", "".rc files [C++], changing storage"", ""symbol header files [C++], read-only"", ""symbols [C++], symbol header files""]"]
ms.assetid: 659a54e6-e416-4045-8411-798730ff4ce3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Resource Includes C++ Dialog Box

You can use the **Resource Includes** dialog box in a C++ project to modify the environment's normal working arrangement of storing all resources in the project .rc file and all [symbols](../windows/symbols-resource-identifiers.md) in Resource.h.

To open the **Resource Includes** dialog box, right-click an .rc file in [Resource View](../windows/resource-view-window.md), then choose **Resource Includes** from the shortcut menu.

**Symbol header file**  
Allows you to change the name of the header file where the symbol definitions for your resource file are stored. For more information, see [Changing the Names of Symbol Header Files](../windows/changing-the-names-of-symbol-header-files.md).

**Read-only symbol directives**  
Enables you to include header files that contain symbols that should not be modified during an editing session. For example, you can include a symbol file that is shared among several projects. You can also include MFC .h files. For more information, see [Including Shared (Read-Only) or Calculated Symbols](../windows/including-shared-read-only-or-calculated-symbols.md).

**Compile-time directives**  
Allows you to include resource files that are created and edited separately from the resources in your main resource file, contain compile-time directives (such as those that conditionally include resources), or contain resources in a custom format. You can also use the **Compile-time directives box** to include standard MFC resource files. For more information, see [Including Resources at Compile Time](../windows/how-to-include-resources-at-compile-time.md).

> [!NOTE]
> Entries in these text boxes appear in the .rc file marked by `TEXTINCLUDE 1`, `TEXTINCLUDE 2`, and `TEXTINCLUDE 3` respectively. For more information, see [TN035: Using Multiple Resource Files and Header Files with Visual C++](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md).

Once you have made changes to your resource file using the **Resource Includes** dialog box, you need to close the .rc file and then reopen it for the changes to take effect. For more information, see [Including Resources at Compile Time](../windows/how-to-include-resources-at-compile-time.md).

## Requirements

Win32

## See Also

[How to: Specify Include Directories for Resources](../windows/how-to-specify-include-directories-for-resources.md)  
[Symbols: Resource Identifiers](../windows/symbols-resource-identifiers.md)  
[Resource Files](../windows/resource-files-visual-studio.md)  
[Resource Editors](../windows/resource-editors.md)