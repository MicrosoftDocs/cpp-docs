---
title: "&lt;system_error&gt; typedefs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["system_error/std::generic_errno"]
ms.assetid: 28cf9f7d-9c28-4baa-a297-67c8260b07fb
---
# &lt;system_error&gt; typedefs

||
|-|
|[generic_errno](#generic_errno)|

## <a name="generic_errno"></a>  generic_errno

A type that represents the enumeration that provides the symbolic names for all the error-code macros defined by Posix in `<errno.h>`.

```cpp
typedef errc generic_error;
```

### Remarks

The type is a synonym for [errc](../standard-library/system-error-enums.md#errc).

## See also

[<system_error>](../standard-library/system-error.md)<br/>
