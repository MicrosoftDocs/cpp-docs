---
description: "Learn more about: bss_seg pragma"
title: "bss_seg pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.bss_seg", "bss_seg_CPP"]
helpviewer_keywords: ["pragmas, bss_seg", "bss_seg pragma"]
ms.assetid: 755f0154-de51-4778-97d3-c9b24e445079
---
# bss_seg pragma

Specifies the section (segment) where uninitialized variables are stored in the object (.obj) file.

## Syntax

> **#pragma bss_seg(** [ "*section-name*" [ **,** "*section-class*" ] ] **)**\
> **#pragma bss_seg(** { **push** | **pop** } [ **,** *identifier* ] [ **,** "*section-name*" [ **,** "*section-class*" ] ] **)**

### Parameters

**push**\
(Optional) Puts a record on the internal compiler stack. A **push** can have an *identifier* and *section-name*.

**pop**\
(Optional) Removes a record from the top of the internal compiler stack. A **pop** can have an *identifier* and *section-name*. You can pop multiple records using just one **pop** command by using the *identifier*. The *section-name* becomes the active BSS section name after the pop.

*identifier*\
(Optional) When used with **push**, assigns a name to the record on the internal compiler stack. When used with **pop**, the directive pops records off the internal stack until *identifier* is removed. If *identifier* isn't found on the internal stack, nothing is popped.

*"section-name"*\
(Optional) The name of a section. When used with **pop**, the stack is popped and *section-name* becomes the active BSS section name.

*"section-class"*\
(Optional) Ignored, but included for compatibility with versions of Microsoft C++ earlier than version 2.0.

## Remarks

A *section* in an object file is a named block of data that's loaded into memory as a unit. A *BSS section* is a section that contains uninitialized data. In this article, the terms *segment* and *section* have the same meaning.

The **bss_seg** pragma directive tells the compiler to put all uninitialized data items from the translation unit into a BSS section named *section-name*. In some cases, use of **bss_seg** can speed load times by grouping uninitialized data into one section. By default, the BSS section used for uninitialized data in an object file is named `.bss`. A **bss_seg** pragma directive without a *section-name* parameter resets the BSS section name for the subsequent uninitialized data items to `.bss`.

Data allocated using the **bss_seg** pragma does not retain any information about its location.

For a list of names that shouldn't be used to create a section, see [/SECTION](../build/reference/section-specify-section-attributes.md).

You can also specify sections for initialized data ([data_seg](../preprocessor/data-seg.md)), functions ([code_seg](../preprocessor/code-seg.md)), and const variables ([const_seg](../preprocessor/const-seg.md)).

You can use the [DUMPBIN.EXE](../build/reference/dumpbin-command-line.md) application to view object files. Versions of DUMPBIN for each supported target architecture are included with Visual Studio.

## Example

```cpp
// pragma_directive_bss_seg.cpp
int i;                     // stored in .bss
#pragma bss_seg(".my_data1")
int j;                     // stored in .my_data1

#pragma bss_seg(push, stack1, ".my_data2")
int l;                     // stored in .my_data2

#pragma bss_seg(pop, stack1)   // pop stack1 from stack
int m;                     // stored in .my_data1

int main() {
}
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
