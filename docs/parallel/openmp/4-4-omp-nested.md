---
title: "4.4 OMP_NESTED"
ms.date: "11/04/2016"
ms.assetid: fd17b6f4-84e8-44c0-a96a-3a9e5ba33688
---
# 4.4 OMP_NESTED

The `OMP_NESTED` environment variable enables or disables nested parallelism unless nested parallelism is enabled or disabled by calling the `o`**mp_set_nested** library routine. If set to **TRUE**, nested parallelism is enabled; if it is set to **FALSE**, nested parallelism is disabled. The default value is **FALSE**.

Example:

```
setenv OMP_NESTED TRUE
```

## Cross Reference:

- `omp_set_nested` function, see [Section 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) on page 40.