---
description: "Learn more about: _execute_onexit_table, _initialize_onexit_table, _register_onexit_function"
title: "_execute_onexit_table, _initialize_onexit_table, _register_onexit_function"
ms.date: "4/2/2020"
api_name: ["_execute_onexit_table", "_initialize_onexit_table", "_register_onexit_function", "_o__execute_onexit_table", "_o__initialize_onexit_table", "_o__register_onexit_function"]
api_location: ["api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_execute_onexit_table", "process/_execute_onexit_table", "_initialize_onexit_table", "process/_initialize_onexit_table", "_register_onexit_function", "process/_register_onexit_function"]
helpviewer_keywords: ["_execute_onexit_table function", "_initialize_onexit_table function", "_register_onexit_function function"]
ms.assetid: ad9e4149-d4ad-4fdf-aaaf-cf786fcb4473
---
# `_execute_onexit_table`, `_initialize_onexit_table`, `_register_onexit_function`

Manages the routines to be called at exit time.

## Syntax

```C
int _initialize_onexit_table(
    _onexit_table_t* table
    );

int _register_onexit_function(
    _onexit_table_t* table,
    _onexit_t        function
    );

int _execute_onexit_table(
    _onexit_table_t* table
    );
```

#### Parameters

*`table`*\
[in, out] Pointer to the `onexit` function table.

*`function`*\
[in] Pointer to a function to add to the `onexit` function table.

## Return value

If successful, the function returns 0. Otherwise, it returns a negative value.

## Remarks

These functions are infrastructure implementation details used to support the C runtime, and shouldn't be called directly from your code. The C runtime uses an `onexit` function table to represent the sequence of functions registered by calls to `atexit`, `at_quick_exit`, and `_onexit`. The `onexit` function table data structure is an opaque implementation detail of the C runtime; the order and meaning of its data members may change. They shouldn't be inspected by external code.

The **`_initialize_onexit_table`** function initializes the `onexit` function table to its initial value.  This function must be called before the `onexit` function table is passed to either **`_register_onexit_function`** or **`_execute_onexit_table`**.

The **`_register_onexit_function`** function appends a function to the end of the `onexit` function table.

The **`_execute_onexit_table`** function executes all of the functions in the `onexit` function table, clears the table, and then returns. After a call to **`_execute_onexit_table`**, the table is in a non-valid state; it must be reinitialized by a call to **`_initialize_onexit_table`** before it's used again.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_initialize_onexit_table`**, **`_register_onexit_function`**, **`_execute_onexit_table`** | C, C++: \<process.h> |

The **`_initialize_onexit_table`**, **`_register_onexit_function`**, and **`_execute_onexit_table`** functions are Microsoft-specific. For compatibility information, see [Compatibility](./compatibility.md).

## See also

[`atexit`](./reference/atexit.md)\
[`exit`, `_Exit`, `_exit`](./reference/exit-exit-exit.md)\
[`_onexit`, `_onexit_m`](./reference/onexit-onexit-m.md)
