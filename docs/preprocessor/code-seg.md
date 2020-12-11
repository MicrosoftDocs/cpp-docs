---
description: "Learn more about: code_seg pragma"
title: "code_seg pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.code_seg"]
helpviewer_keywords: ["pragmas, code_seg", "code_seg pragma"]
ms.assetid: bf4faac1-a511-46a6-8d9e-456851d97d56
---
# code_seg pragma

Specifies the text section (segment) where functions are stored in the object (.obj) file.

## Syntax

> **#pragma code_seg(** [ "*section-name*" [ **,** "*section-class*" ] ] **)**\
> **#pragma code_seg(** { **push** | **pop** } [ **,** *identifier* ] [ **,** "*section-name*" [ **,** "*section-class*" ] ] **)**

### Parameters

**push**\
(Optional) Puts a record on the internal compiler stack. A **push** can have an *identifier* and *section-name*.

**pop**\
(Optional) Removes a record from the top of the internal compiler stack. A **pop** can have an *identifier* and *section-name*. You can pop multiple records using just one **pop** command by using the *identifier*. The *section-name* becomes the active text section name after the pop.

*identifier*\
(Optional) When used with **push**, assigns a name to the record on the internal compiler stack. When used with **pop**, the directive pops records off the internal stack until *identifier* is removed. If *identifier* isn't found on the internal stack, nothing is popped.

"*section-name*"\
(Optional) The name of a section. When used with **pop**, the stack is popped and *section-name* becomes the active text section name.

"*section-class*"\
(Optional) Ignored, but included for compatibility with versions of Microsoft C++ earlier than version 2.0.

## Remarks

A *section* in an object file is a named block of data that's loaded into memory as a unit. A *text section* is a section that contains executable code. In this article, the terms *segment* and *section* have the same meaning.

The **code_seg** pragma directive tells the compiler to put all subsequent object code from the translation unit into a text section named *section-name*. By default, the text section used for functions in an object file is named `.text`. A **code_seg** pragma directive without a *section-name* parameter resets the text section name for the subsequent object code to `.text`.

The **code_seg** pragma directive doesn't control placement of object code generated for instantiated templates. Nor does it control code generated implicitly by the compiler, such as special member functions. To control that code, we recommend you use the [__declspec(code_seg(...))](../cpp/code-seg-declspec.md) attribute instead. It gives you control over placement of all object code, including compiler-generated code.

For a list of names that shouldn't be used to create a section, see [/SECTION](../build/reference/section-specify-section-attributes.md).

You can also specify sections for initialized data ([data_seg](../preprocessor/data-seg.md)), uninitialized data ([bss_seg](../preprocessor/bss-seg.md)), and const variables ([const_seg](../preprocessor/const-seg.md)).

You can use the [DUMPBIN.EXE](../build/reference/dumpbin-command-line.md) application to view object files. Versions of DUMPBIN for each supported target architecture are included with Visual Studio.

## Example

This example shows how to use the **code_seg** pragma directive to control where object code is put:

```cpp
// pragma_directive_code_seg.cpp
void func1() {                  // stored in .text
}

#pragma code_seg(".my_data1")
void func2() {                  // stored in my_data1
}

#pragma code_seg(push, r1, ".my_data2")
void func3() {                  // stored in my_data2
}

#pragma code_seg(pop, r1)      // stored in my_data1
void func4() {
}

int main() {
}
```

## See also

[code_seg (__declspec)](../cpp/code-seg-declspec.md)\
[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
