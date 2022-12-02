---
description: "Learn more about: Error handling (CRT)"
title: "Error handling (CRT)"
ms.date: "11/04/2016"
helpviewer_keywords: ["error handling, C routines for", "logic errors", "error handling, library routines", "testing, for program errors"]
ms.assetid: 125ac697-9eb0-4152-a440-b7842f23d97f
---
# Error handling (CRT)

Use these routines to handle program errors.

## Error-handling routines

| Routine | Use |
|---|---|
| [`assert`](./reference/assert-macro-assert-wassert.md) macro | Test for programming logic errors; available in both the release and debug versions of the run-time library. |
| [`_ASSERT`, `_ASSERTE`](./reference/assert-asserte-assert-expr-macros.md) macros | Similar to `assert`, but only available in the debug versions of the run-time library. |
| [`clearerr`](./reference/clearerr.md) | Reset error indicator. Calling `rewind` or closing a stream also resets the error indicator. |
| [`_eof`](./reference/eof.md) | Check for end of file in low-level I/O. |
| [`feof`](./reference/feof.md) | Test for end of file. End of file is also indicated when `_read` returns 0. |
| [`ferror`](./reference/ferror.md) | Test for stream I/O errors. |
| [`_RPT`, `_RPTF`](./reference/rpt-rptf-rptw-rptfw-macros.md) macros | Generate a report similar to `printf`, but only available in the debug versions of the run-time library. |
| [`_set_error_mode`](./reference/set-error-mode.md) | Modifies `__error_mode` to determine a non-default location where the C run time writes an error message for an error that will possibly end the program. |
| [`_set_purecall_handler`](./reference/get-purecall-handler-set-purecall-handler.md) | Sets the handler for a pure virtual function call. |

## See also

- [Universal C runtime routines by category](./run-time-routines-by-category.md)
