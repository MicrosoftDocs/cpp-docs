---
title: "Compiler Error C3121"
description: "Learn more about: Compiler Error C3121"
ms.date: 11/04/2016
f1_keywords: ["C3121"]
helpviewer_keywords: ["C3121"]
---
# Compiler Error C3121

> cannot change GUID for class 'class_name'

## Remarks

You attempted to change the class ID with [__declspec(uuid)](../../cpp/uuid-cpp.md).

## Example

For example, the following code generates C3121:

```cpp
// C3121.cpp
[emitidl];
[module(name="MyLibrary")];

[coclass, uuid="00000000-0000-0000-0000-111111111111"]
class __declspec(uuid("00000000-0000-0000-0000-111111111112")) A   // C3121
{
};
int main()
{
}
```
