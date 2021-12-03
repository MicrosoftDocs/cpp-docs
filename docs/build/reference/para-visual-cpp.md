---
description: "Learn more about: XML documentation tag <para>"
title: "<para> documentation tag"
ms.date: 12/03/2021
f1_keywords: ["<para>"]
helpviewer_keywords: ["<para> C++ XML tag", "para C++ XML tag"]
ms.assetid: 35f2a1b3-bc14-4f13-bcb0-c39ccbf74d59
---
# `<para>` documentation tag

The `<para>` tag is for use inside a tag, such as [`<summary>`](summary-visual-cpp.md), [`<remarks>`](remarks-visual-cpp.md), or [`<returns>`](returns-visual-cpp.md), and lets you add structure to the text.

## Syntax

```cpp
/// <para>content</para>
```

### Parameters

*`content`*\
The text of the paragraph.

## Remarks

Compile with [`/doc`](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

## Example

See [`<summary>`](summary-visual-cpp.md) for an example of using `<para>`.

## See also

[XML documentation](xml-documentation-visual-cpp.md)
