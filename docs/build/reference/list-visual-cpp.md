---
description: "Learn more about: &lt;list&gt; and &lt;listheader&gt;"
title: "&lt;list> (C++ documentation comments)"
ms.date: "11/04/2016"
f1_keywords: ["list"]
helpviewer_keywords: ["list C++ XML tag", "<list> C++ XML tag"]
ms.assetid: c792a10b-0451-422c-9aa0-604116e69d64
---
# &lt;list&gt; and &lt;listheader&gt;

The \<listheader> block is used to define the heading row of either a table or definition list. When defining a table, you only need to supply an entry for term in the heading.

## Syntax

```xml
<list type="bullet" | "number" | "table">
   <listheader>
      <term>term</term>
      <description>description</description>
   </listheader>
   <item>
      <term>term</term>
      <description>description</description>
   </item>
</list>
```

#### Parameters

*term*<br/>
A term to define, which will be defined in `description`.

*description*<br/>
Either an item in a bullet or numbered list or the definition of a `term`.

## Remarks

Each item in the list is specified with an \<item> block. When creating a definition list, you will need to specify both `term` and `description`. However, for a table, bulleted list, or numbered list, you only need to supply an entry for `description`.

A list or table can have as many \<item> blocks as needed.

Compile with [/doc](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

## Example

```cpp
// xml_list_tag.cpp
// compile with: /doc /LD
// post-build command: xdcmake xml_list_tag.dll
/// <remarks>Here is an example of a bulleted list:
/// <list type="bullet">
/// <item>
/// <description>Item 1.</description>
/// </item>
/// <item>
/// <description>Item 2.</description>
/// </item>
/// </list>
/// </remarks>
class MyClass {};
```

## See also

[XML Documentation](xml-documentation-visual-cpp.md)
