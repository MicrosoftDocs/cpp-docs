---
title: "Fatal error C1029"
description: "Learn more about: Fatal error C1029"
ms.date: 04/13/2026
f1_keywords: ["C1029"]
helpviewer_keywords: ["C1029"]
---
# Fatal error C1029

> '*filename*': source file hash (*number* bytes) exceeds the IFC format's maximum supported hash size (*number* bytes); use a smaller hash algorithm such as SHA-256

## Remarks

This error occurs when you compile a C++ module (or header unit) with a [`/ZH`](../../build/reference/zh.md) hash algorithm that produces a checksum larger than the current IFC format supports. The **`/ZH:SHA384`** and **`/ZH:SHA512`** options produce checksums that exceed this limit.

To fix this error, use **`/ZH:SHA_256`** or a smaller hash algorithm (such as **`/ZH:SHA1`** or **`/ZH:MD5`**) when you compile modules or header units. The default **`/ZH:SHA_256`** option works correctly with IFC files.
