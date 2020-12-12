---
description: "Learn more about: Compiler Error C2778"
title: "Compiler Error C2778"
ms.date: "11/04/2016"
f1_keywords: ["C2778"]
helpviewer_keywords: ["C2778"]
ms.assetid: b24cb732-2914-42cc-8928-e2d87b393428
---
# Compiler Error C2778

improperly formed GUID in __declspec(uuid())

An incorrect GUID is supplied to the [uuid](../../cpp/uuid-cpp.md) extended attribute.

The GUID must be a string of hexadecimal numbers with the following format:

```cpp
// C2778a.cpp
// compile with: /c
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) A {};
struct __declspec(uuid("{00000000-0000-0000-0000-000000000000}")) B{};
```

The `uuid` extended attribute accepts strings recognized by [CLSIDFromString](/windows/win32/api/combaseapi/nf-combaseapi-clsidfromstring), with or without brace delimiters.

The following sample generates C2778:

```cpp
// C2778b.cpp
struct __declspec(uuid(" 00000000-0000-0000-0000-000000000000 ")) C { };   // C2778
struct __declspec(uuid("00000000000000000000000000000000")) D { };   // C2778
```
