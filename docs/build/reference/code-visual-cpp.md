---
description: "Learn more about: XML Documentation tag <code>"
title: "<code>  (C++ documentation comments)"
ms.date: 12/03/2021
f1_keywords: ["<code>"]
helpviewer_keywords: ["<code> C++ XML tag", "code C++ XML tag"]
ms.assetid: 687db3f8-d435-4a90-b781-8da503fa39bc
---
# `<code>` documentation tag

The `<code>` tag gives you a way to indicate one or more lines as code.

## Syntax

```cpp
/// <code>content</code>

/// <code>
/// content
/// content
/// </code>
```

### Parameters

*`content`*\
The text you want marked as code.

## Remarks

Use [`<c>`](c-visual-cpp.md) to indicate a portion of text should be marked as code.

Compile with [`/doc`](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

## Example

For an example of how to use the `<code>` tag, see [`<example>`](example-visual-cpp.md).

## See also

[XML documentation](xml-documentation-visual-cpp.md)
