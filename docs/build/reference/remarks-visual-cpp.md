---
description: "Learn more about: &lt;remarks&gt;"
title: "&lt;remarks> (C++ documentation comments)"
ms.date: "11/04/2016"
f1_keywords: ["remarks", "<remarks>"]
helpviewer_keywords: ["<remarks> C++ XML tag", "remarks C++ XML tag"]
ms.assetid: c820083b-3192-40ab-9ec8-1472c55b4247
---
# &lt;remarks&gt;

The \<remarks> tag is used to add information about a type, supplementing the information specified with [\<summary>](summary-visual-cpp.md). This information is displayed in the [Object Browser](/visualstudio/ide/viewing-the-structure-of-code) and in the Code Comment Web Report.

## Syntax

```
<remarks>description</remarks>
```

#### Parameters

*description*<br/>
A description of the member.

## Remarks

Compile with [/doc](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

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

[XML Documentation](xml-documentation-visual-cpp.md)
