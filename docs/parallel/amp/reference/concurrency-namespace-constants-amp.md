---
title: "Concurrency namespace constants (AMP)"
description: "Learn more about: Concurrency namespace constants (AMP)"
ms.date: 11/04/2016
f1_keywords: ["amp/Concurrency::HLSL_MAX_NUM_BUFFERS", "amp/Concurrency::MODULENAME_MAX_LENGTH"]
---
# Concurrency namespace constants (AMP)

The following constants are defined in the `Concurrency` namespace (AMP):

## <a name="hlsl_max_num_buffers"></a> `HLSL_MAX_NUM_BUFFERS` Constant

The maximum number of buffers allowed by DirectX.

```cpp
static const UINT HLSL_MAX_NUM_BUFFERS = 64 + 128;
```

## <a name="modulename_max_length"></a> `MODULENAME_MAX_LENGTH` constant

Stores the maximum length of the module name. This value must be the same at compile time and runtime.

```cpp
static const UINT MODULENAME_MAX_LENGTH = 1024;
```

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
