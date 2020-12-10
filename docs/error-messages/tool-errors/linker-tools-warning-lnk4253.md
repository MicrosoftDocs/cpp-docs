---
description: "Learn more about: Linker Tools Warning LNK4253"
title: "Linker Tools Warning LNK4253"
ms.date: "11/04/2016"
f1_keywords: ["LNK4253"]
helpviewer_keywords: ["LNK4253"]
ms.assetid: ec7433a9-aa9c-495a-a9f2-075e7bc3e7bc
---
# Linker Tools Warning LNK4253

section 'section1' not merged into 'section2'; already merged into 'section3'

The linker detected multiple, conflicting merge requests. The linker will ignore one of the requests.

A **/MERGE** option or directive is encountered and the `from` section has already been merged into a different section due to a previous **/MERGE** option or directive (or due to an implicit merge from the linker).

To resolve LNK4253, remove one of the merge requests.

When targeting x86 machines and Windows CE targets (ARM, MIPS, SH4, and Thumb) with Visual C++, the .CRT section is now read only. If your code depends on the previous behavior (.CRT sections are read/write), you could see unexpected behavior.

For more information, see,

- [/MERGE (Combine Sections)](../../build/reference/merge-combine-sections.md)

- [comment (C/C++)](../../preprocessor/comment-c-cpp.md)

## Example

In the following sample, the linker is instructed to merge the `.rdata` section twice, but into different sections. The following sample generates LNK4253.

```cpp
// LNK4253.cpp
// compile with: /W1 /link /merge:.rdata=text2
// LNK4253 expected
#pragma comment(linker, "/merge:.rdata=.text")
int main() {}
```
