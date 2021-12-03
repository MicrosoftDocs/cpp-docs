---
description: "Learn more about: XML documentation tag <remarks>"
title: "<remarks> (C++ documentation comments)"
ms.date: 12/03/2021
f1_keywords: ["<remarks>"]
helpviewer_keywords: ["<remarks> C++ XML tag", "remarks C++ XML tag"]
ms.assetid: c820083b-3192-40ab-9ec8-1472c55b4247
---
# `<remarks>` documentation tag

The `<remarks>` tag is used to add information about a type, supplementing the information specified with [`<summary>`](summary-visual-cpp.md). This information is displayed in the [Object Browser](/visualstudio/ide/viewing-the-structure-of-code) and in the Code Comment Web Report.

## Syntax

```cpp
/// <remarks>description</remarks>
```

### Parameters

*`description`*\
A description of the member.

## Remarks

Compile with [`/doc`](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

## Example

```cpp
// xml_remarks_tag.cpp
// compile with: /LD /clr /doc
// post-build command: xdcmake xml_remarks_tag.dll

using namespace System;

/// <summary>
/// You may have some primary information about this class.
/// </summary>
/// <remarks>
/// You may have some additional information about this class.
/// </remarks>
public ref class MyClass {};
```

## See also

[XML documentation](xml-documentation-visual-cpp.md)
