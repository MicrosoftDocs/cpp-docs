---
description: "Learn more about: XML documentation tag <returns>"
title: "<returns> (C++ Documentation Comments)"
ms.date: 12/03/2021
f1_keywords: ["<returns>"]
helpviewer_keywords: ["returns C++ XML tag", "<returns> C++ XML tag"]
ms.assetid: 5e3b0ed9-838d-4953-a93e-76d2d0a19fb9
---
# `<returns>` documentation tag

The `<returns>` tag should be used in the comment for a method declaration to describe the return value.

## Syntax

```cpp
/// <returns>description</returns>
```

### Parameters

*`description`*\
A description of the return value.

## Remarks

Compile with [`/doc`](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

## Example

```cpp
// xml_returns_tag.cpp
// compile with: /LD /clr /doc
// post-build command: xdcmake xml_returns_tag.dll

/// Text for class MyClass.
public ref class MyClass {
public:
   /// <returns>Returns zero.</returns>
   int GetZero() { return 0; }
};
```

## See also

[XML documentation](xml-documentation-visual-cpp.md)
