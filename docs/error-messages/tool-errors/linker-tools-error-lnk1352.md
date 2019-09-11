---
title: "Linker Tools Error LNK1352"
description: Linker Tools Error LNK1352 occurs when an unsupported section merge is attempted.
ms.date: "09/10/2019"
f1_keywords: ["LNK1352"]
helpviewer_keywords: ["LNK1352"]
---
# Linker Tools Error LNK1352

> '*section_name_1*' and '*section_name_2*' cannot be merged into different sections

## Remarks

The linker detected a section merge that's not allowed, because *section_name_1* and *section_name_2* must be merged into the same section. For example, this error occurs if the linker detects an attempt to merge the `.stls` section and the `.tls` section into different sections.

### To correct this error

Check the [/MERGE](../../build/reference/merge-combine-sections.md) option on the linker command line for this issue.

## See also

[Linker Tools Errors and Warnings](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)
