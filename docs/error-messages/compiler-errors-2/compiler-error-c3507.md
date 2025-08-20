---
title: "Compiler Error C3507"
description: "Learn more about: Compiler Error C3507"
ms.date: 11/04/2016
f1_keywords: ["C3507"]
helpviewer_keywords: ["C3507"]
---
# Compiler Error C3507

> a ProgID can have no more than 39 characters 'id'; nor contain any punctuation apart from '.'; nor start with a digit

## Remarks

The [progid](../../windows/attributes/progid.md) attribute has restrictions on the values that it can take.

## Example

The following example generates C3507:

```cpp
// C3507.cpp
[module(name="x")];
[
coclass,
progid("0123456789012345678901234567890123456789"),
uuid("00000000-0000-0000-0000-000000000001") // C3507 expected
]
struct CMyStruct {
};
int main() {
}
```
