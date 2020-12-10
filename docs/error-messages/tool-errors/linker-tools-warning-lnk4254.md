---
description: "Learn more about: Linker Tools Warning LNK4254"
title: "Linker Tools Warning LNK4254"
ms.date: "11/04/2016"
f1_keywords: ["LNK4254"]
helpviewer_keywords: ["LNK4254"]
ms.assetid: 6f41dfb3-ca21-40d3-bac7-b637e578efa4
---
# Linker Tools Warning LNK4254

section 'section1' (offset) merged into 'section2' (offset) with different attributes

The contents of one section were merged into another, but the attributes of the two sections are different. Your program may give unexpected results. For example, data you wanted to be read only may now be in a writable section.

To resolve LNK4254, modify or remove the merge request.

When targeting x86 machines and Windows CE targets (ARM, MIPS, SH4, and Thumb) with Visual C++, the .CRT section is read-only. If your code depends on previous behavior (.CRT sections are read/write), you could see unexpected behavior.

For more information, see,

- [/MERGE (Combine Sections)](../../build/reference/merge-combine-sections.md)

- [comment (C/C++)](../../preprocessor/comment-c-cpp.md)

## Example

The following sample generates LNK4254.

```cpp
// LNK4254.cpp
// compile with: /W1 /link /WX
// LNK4254 expected
#pragma comment(linker, "/merge:.data=.text")
int main() {}
```
