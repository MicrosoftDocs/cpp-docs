---
description: "Learn more about: section pragma"
title: "section pragma"
ms.date: "08/29/2019"
f1_keywords: ["section_CPP", "vc-pragma.section"]
helpviewer_keywords: ["pragmas, section", "section pragma"]
ms.assetid: c67215e9-2c4a-4b0f-b691-2414d2e2d96f
---
# section pragma

Creates a section in an .obj file.

## Syntax

> **#pragma section(** "*section-name*" [ **,** *attributes* ] **)**

## Remarks

The terms *segment* and *section* have the same meaning in this article.

Once a section is defined, it remains valid for the remainder of the compilation. However, you must use [__declspec(allocate)](../cpp/allocate.md), or nothing is placed in the section.

*section-name* is a required parameter that becomes the name of the section. The name must not conflict with any standard section names. See [/SECTION](../build/reference/section-specify-section-attributes.md) for a list of names you shouldn't use when creating a section.

*attributes* is an optional parameter consisting of one or more comma-separated attributes to assign to the section. Possible *attributes* are:

|Attribute|Description|
|-|-|
|**read**|Allows read operations on data.|
|**write**|Allows write operations on data.|
|**execute**|Allows code to be executed.|
|**shared**|Shares the section among all processes that load the image.|
|**nopage**|Marks the section as not pageable. Useful for Win32 device drivers.|
|**nocache**|Marks the section as not cacheable. Useful for Win32 device drivers.|
|**discard**|Marks the section as discardable. Useful for Win32 device drivers.|
|**remove**|Marks the section as not memory-resident. For virtual device drivers (V*x*D) only.|

If you don't specify any attributes, the section has **read** and **write** attributes.

## Example

In this example, the first section pragma identifies the section and its attributes. The integer `j` is not put into `mysec` because it was not declared using `__declspec(allocate)`. Instead, `j` goes into the data section. The integer `i` does go into `mysec` as a result of its `__declspec(allocate)` storage-class attribute.

```cpp
// pragma_section.cpp
#pragma section("mysec",read,write)
int j = 0;

__declspec(allocate("mysec"))
int i = 0;

int main(){}
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
