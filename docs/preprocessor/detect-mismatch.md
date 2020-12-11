---
description: "Learn more about: detect_mismatch pragma"
title: "detect_mismatch pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.detect_mismatch", "detect_mismatch_CPP"]
helpviewer_keywords: ["pragmas, detect_mismatch", "detect_mismatch pragma"]
ms.assetid: ddb13ac9-0e2f-40ce-be69-7e44c04f5a12
---
# detect_mismatch pragma

Places a record in an object. The linker checks these records for potential mismatches.

## Syntax

> **#pragma detect_mismatch(** "*name*" **,** "*value*" **)**

## Remarks

When you link the project, the linker throws a [LNK2038](../error-messages/tool-errors/linker-tools-error-lnk2038.md) error if the project contains two objects that have the same *name* but each has a different *value*. Use this pragma to prevent inconsistent object files from linking.

Both *name* and *value* are string literals and obey the rules for string literals with respect to escape characters and concatenation. They are case-sensitive and cannot contain a comma, equal sign, quotation marks, or the **null** character.

## Example

This example creates two files that have different version numbers for the same version label.

```cpp
// pragma_directive_detect_mismatch_a.cpp
#pragma detect_mismatch("myLib_version", "9")
int main ()
{
   return 0;
}

// pragma_directive_detect_mismatch_b.cpp
#pragma detect_mismatch("myLib_version", "1")
```

If you compile both of these files by using the command line `cl pragma_directive_detect_mismatch_a.cpp pragma_directive_detect_mismatch_b.cpp`, you will receive the error `LNK2038`.

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
