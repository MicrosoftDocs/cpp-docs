---
description: "Learn more about: region, endregion pragmas"
title: "region, endregion pragmas"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.endregion", "endregion_CPP", "region_CPP", "vc-pragma.region"]
helpviewer_keywords: ["pragmas, region", "pragmas, endregion", "endregion pragma", "region pragma"]
ms.assetid: c697f807-622f-4796-851b-68a42bbecd84
---
# region, endregion pragmas

`#pragma region` lets you specify a block of code that you can expand or collapse when using the [outlining feature](/visualstudio/ide/outlining) of the Visual Studio Code Editor.

## Syntax

> **#pragma region** *name*\
> **#pragma endregion** *comment*

### Parameters

*comment*\
(Optional) A comment to display in the code editor.

*name*\
(Optional) The name of the region. This name displays in the code editor.

## Remarks

`#pragma endregion` marks the end of a `#pragma region` block.

A `#region` block must be terminated by a `#pragma endregion` directive.

## Example

```cpp
// pragma_directives_region.cpp
#pragma region Region_1
void Test() {}
void Test2() {}
void Test3() {}
#pragma endregion Region_1

int main() {}
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
