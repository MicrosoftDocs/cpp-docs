---
description: "Learn more about the region and endregion pragma directives in Microsoft C/C++"
title: "region and endregion pragma"
ms.date: 01/22/2021
f1_keywords: ["vc-pragma.endregion", "endregion_CPP", "region_CPP", "vc-pragma.region"]
helpviewer_keywords: ["pragma, region", "pragma, endregion", "endregion pragma", "region pragma"]
no-loc: ["pragma"]
---
# `region` and `endregion` pragma

`#pragma region` lets you specify a block of code that you can expand or collapse when using the [outlining feature](/visualstudio/ide/outlining) of the Visual Studio editor.

## Syntax

> **`#pragma region`** *name*\
> **`#pragma endregion`** *comment*

### Parameters

*comment*\
(Optional) A comment to display in the code editor.

*name*\
(Optional) The name of the region. This name displays in the code editor.

## Remarks

`#pragma endregion` marks the end of a `#pragma region` block.

A `#pragma region` block must be terminated by a `#pragma endregion` directive.

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

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
