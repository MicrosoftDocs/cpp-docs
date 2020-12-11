---
description: "Learn more about: data_seg pragma"
title: "data_seg pragma"
ms.date: "08/29/2019"
f1_keywords: ["data_seg_CPP", "vc-pragma.data_seg"]
helpviewer_keywords: ["data_seg pragma", "pragmas, data_seg"]
ms.assetid: 65c66466-4c98-494f-93af-106beb4caf78
---
# data_seg pragma

Specifies the data section (segment) where initialized variables are stored in the object (.obj) file.

## Syntax

> **#pragma data_seg(** [ "*section-name*" [ **,** "*section-class*" ] ] **)**\
> **#pragma data_seg(** { **push** | **pop** } [ **,** *identifier* ] [ **,** "*section-name*" [ **,** "*section-class*" ] ] **)**

### Parameters

**push**\
(Optional) Puts a record on the internal compiler stack. A **push** can have an *identifier* and *section-name*.

**pop**\
(Optional) Removes a record from the top of the internal compiler stack. A **pop** can have an *identifier* and *section-name*. You can pop multiple records using just one **pop** command by using the *identifier*. The *section-name* becomes the active data section name after the pop.

*identifier*\
(Optional) When used with **push**, assigns a name to the record on the internal compiler stack. When used with **pop**, pops records off the internal stack until *identifier* is removed. If *identifier* isn't found on the internal stack, nothing is popped.

*identifier* enables multiple records to be popped with a single **pop** command.

*"section-name"*\
(Optional) The name of a section. When used with **pop**, the stack is popped and *section-name* becomes the active data section name.

*"section-class"*\
(Optional) Ignored, but included for compatibility with versions of Microsoft C++ earlier than version 2.0.

## Remarks

A *section* in an object file is a named block of data that's loaded into memory as a unit. A *data section* is a section that contains initialized data. In this article, the terms *segment* and *section* have the same meaning.

The default section in the .obj file for initialized variables is `.data`. Variables that are uninitialized are considered to be initialized to zero and are stored in `.bss`.

The **data_seg** pragma directive tells the compiler to put all initialized data items from the translation unit into a data section named *section-name*. By default, the data section used for initialized data in an object file is named `.data`. Variables that are uninitialized are considered to be initialized to zero, and are stored in `.bss`. A **data_seg** pragma directive without a *section-name* parameter resets the data section name for the subsequent initialized data items to `.data`.

Data allocated using **data_seg** doesn't retain any information about its location.

For a list of names that shouldn't be used to create a section, see [/SECTION](../build/reference/section-specify-section-attributes.md).

You can also specify sections for const variables ([const_seg](../preprocessor/const-seg.md)), uninitialized data ([bss_seg](../preprocessor/bss-seg.md)), and functions ([code_seg](../preprocessor/code-seg.md)).

You can use the [DUMPBIN.EXE](../build/reference/dumpbin-command-line.md) application to view object files. Versions of DUMPBIN for each supported target architecture are included with Visual Studio.

## Example

```cpp
// pragma_directive_data_seg.cpp
int h = 1;                     // stored in .data
int i = 0;                     // stored in .bss
#pragma data_seg(".my_data1")
int j = 1;                     // stored in .my_data1

#pragma data_seg(push, stack1, ".my_data2")
int l = 2;                     // stored in .my_data2

#pragma data_seg(pop, stack1)   // pop stack1 off the stack
int m = 3;                     // stored in .my_data1

int main() {
}
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
