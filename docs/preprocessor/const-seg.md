---
description: "Learn more about: const_seg pragma"
title: "const_seg pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.const_seg", "const_seg_CPP"]
helpviewer_keywords: ["pragmas, const_seg", "const_seg pragma"]
ms.assetid: 1eb58ee2-fb0e-4a39-9621-699c8f5ef957
---
# const_seg pragma

Specifies the section (segment) where [const](../cpp/const-cpp.md) variables are stored in the object (.obj) file.

## Syntax

> **#pragma const_seg(** [ "*section-name*" [ **,** "*section-class*" ] ] **)**\
> **#pragma const_seg(** { **push** | **pop** } [ **,** *identifier* ] [ **,** "*section-name*" [ **,** "*section-class*" ] ] **)**

### Parameters

**push**\
(Optional) Puts a record on the internal compiler stack. A **push** can have an *identifier* and *section-name*.

**pop**\
(Optional) Removes a record from the top of the internal compiler stack. A **pop** can have an *identifier* and *section-name*. You can pop multiple records using just one **pop** command by using the *identifier*. The *section-name* becomes the active const section name after the pop.

*identifier*\
(Optional) When used with **push**, assigns a name to the record on the internal compiler stack. When used with **pop**, the directive pops records off the internal stack until *identifier* is removed. If *identifier* isn't found on the internal stack, nothing is popped.

"*section-name*"\
(Optional) The name of a section. When used with **pop**, the stack is popped and *section-name* becomes the active const section name.

"*section-class*"\
(Optional) Ignored, but included for compatibility with versions of Microsoft C++ earlier than version 2.0.

## Remarks

A *section* in an object file is a named block of data that's loaded into memory as a unit. A *const section* is a section that contains constant data. In this article, the terms *segment* and *section* have the same meaning.

The **const_seg** pragma directive tells the compiler to put all constant data items from the translation unit into a const section named *section-name*. The default section in the object file for **`const`** variables is `.rdata`. Some **`const`** variables, such as scalars, are automatically inlined into the code stream. Inlined code doesn't appear in `.rdata`. A **const_seg** pragma directive without a *section-name* parameter resets the section name for the subsequent **`const`** data items to `.rdata`.

If you define an object that requires dynamic initialization in a `const_seg`, the result is undefined behavior.

For a list of names that shouldn't be used to create a section, see [/SECTION](../build/reference/section-specify-section-attributes.md).

You can also specify sections for initialized data ([data_seg](../preprocessor/data-seg.md)), uninitialized data ([bss_seg](../preprocessor/bss-seg.md)), and functions ([code_seg](../preprocessor/code-seg.md)).

You can use the [DUMPBIN.EXE](../build/reference/dumpbin-command-line.md) application to view object files. Versions of DUMPBIN for each supported target architecture are included with Visual Studio.

## Example

```cpp
// pragma_directive_const_seg.cpp
// compile with: /EHsc
#include <iostream>

const int i = 7;               // inlined, not stored in .rdata
const char sz1[]= "test1";     // stored in .rdata

#pragma const_seg(".my_data1")
const char sz2[]= "test2";     // stored in .my_data1

#pragma const_seg(push, stack1, ".my_data2")
const char sz3[]= "test3";     // stored in .my_data2

#pragma const_seg(pop, stack1) // pop stack1 from stack
const char sz4[]= "test4";     // stored in .my_data1

int main() {
    using namespace std;
   // const data must be referenced to be put in .obj
   cout << sz1 << endl;
   cout << sz2 << endl;
   cout << sz3 << endl;
   cout << sz4 << endl;
}
```

```Output
test1
test2
test3
test4
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
