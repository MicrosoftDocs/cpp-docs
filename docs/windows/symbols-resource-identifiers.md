---
description: "Learn more about: Resource Identifiers (Symbols) (C++)"
title: "Resource Identifiers (Symbols) (C++)"
ms.date: "02/14/2019"
f1_keywords: ["vc.editors.symbol.identifiers"]
helpviewer_keywords: ["symbols [C++], resource identifiers", "symbols [C++], creating", "resource symbols", "symbols [C++], editing", "resource editors [C++], resource symbols"]
ms.assetid: 8fccc09a-0237-4a65-b9c4-57d60c59e324
---
# Resource Identifiers (Symbols) (C++)

A symbol is a resource identifier (ID) that consists of two parts, a symbol name (text string) mapped to an symbol value (integer), for example:

```cpp
IDC_EDITNAME = 5100
```

Symbol names are most often referred to as identifiers.

Symbols provide a descriptive way of referring to resources and user-interface objects, both in your source code and while you're working with them in the resource editors. You can view and manipulate symbols in one convenient place using the [Resource Symbols dialog box](./creating-new-symbols.md).

As your application grows in size and sophistication, so does its number of resources and symbols. Tracking large numbers of symbols scattered throughout several files can be difficult. The **Resource Symbols** dialog box simplifies symbol management by offering a central tool through which you can:

- [Create Symbols](../windows/creating-new-symbols.md)

- [Manage Symbols](../windows/changing-a-symbol-or-symbol-name-id.md)

- [View Predefined Symbol IDs](../windows/predefined-symbol-ids.md)

When you create a new resource or resource object, the [resource editors](../windows/resource-editors.md) provide a default name for the resource, for example, `IDC_RADIO1`, and assign a value to it. The name-plus-value definition is stored in the `Resource.h` file.

> [!NOTE]
> When you are copying resources or resource objects from one .rc file to another, Visual C++ may change the transferred resource's symbol value, or symbol name and value, to avoid conflicts with symbol names or values in the existing file.

## Requirements

Win32

## See also

[Working with Resource Files](../windows/working-with-resource-files.md)<br/>
[Resource Files](../windows/resource-files-visual-studio.md)<br/>
[Resource Editors](../windows/resource-editors.md)<br/>
