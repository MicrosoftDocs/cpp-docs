---
title: "AddressSanitizer Runtime Options"
description: "List of runtime options for the Microsoft C/C++ Address Sanitizer"
ms.date: 8/08/2025
helpviewer_keywords: ["AddressSanitizer options", "AddressSanitizer flags", "Address sanitizer options", "Address sanitizer flags", "asan options", "asan flags", "sanitizer flags", "asan_options", "AddressSanitizerFlags", "SanitizerCommonFlags"]
---

# AddressSanitizer Runtime Options

The following table lists the options for the AddressSanitizer. Enable them via the `ASAN_OPTIONS` environment variable or by overriding the `__asan_default_options()` user function described [here](./asan-runtime.md#runtime-options). 

> [!NOTE]
> These descriptions account for Microsoft Visual C++ (MSVC) specific behaviors, which may vary from Clang's runtime options.


| Flag | Default value | Description |
|------|---------------|-------------|
|`abort_on_error` | `false` | If `true`, ASan calls `abort()` instead of `_exit()` after printing the error report.|
|`alloc_dealloc_mismatch` | `false` | Detects mismatched memory operations such as `malloc`/`delete`, `new[]`/`free`, and so on.|
|`allocator_frees_and_returns_null_on_realloc_zero` | `true` | If set to `true`, `realloc(p, 0)` is the same as `free(p)` by default (which is the same as the POSIX standard). If set to `false`, `realloc(p, 0)` returns a pointer to an allocated space that can't be used. |
|`allocator_may_return_null` | `false` | If `true`, the allocator returns `nullptr` when out of memory. Instead of crashing, ASan emits a warning about the allocator's failure and execution continues.|
|`allow_user_poisoning` | `true` | If `true`, you may manually mark memory regions as poisoned or unpoisoned using the [Manual AddressSanitizer poising interface](./asan-runtime.md#poisoning).|
|`check_initialization_order` | `false` | If `true`, attempts to catch initialization order issues.|
|`continue_on_error` | 0 | Allows an application to continue running while reporting memory safety errors.<br>0-disabled.<br>1-enabled; errors are sent to `stdout`.<br>2-enabled; errors are sent to `stderr`.<br>For more information, see [continue_on_error](asan-continue-on-error.md).|
|`detect_container_overflow` | `true` | If `true`, honor the container overflow annotations. For more information, see [ContainerOverflow](./error-container-overflow.md).|
|`detect_invalid_pointer_pairs` | `false` | If `true`, ASan detects operations like `<`, `<=`, `>`, `>=`, and `-` on invalid pointer pairs such as pointers that belong to different objects.|
|`detect_stack_use_after_return` | `false` | Experimental. If `true`, ASan enables `stack-use-after-return` checking at runtime. Requires `/fsanitize-address-use-after-return`. For more information, see [stack-use-after-return](./error-stack-use-after-return.md).|
|`exitcode` | 1 | Overrides the program exit status with this value if ASan finds an error.|
|`external_symbolizer_path` | "" | Path to the external symbolizer. If empty, ASan searches `$PATH` for the symbolizer.|
|`fast_unwind_on_malloc` | `true` | If available, ASan uses the fast frame-pointer-based unwinder on `malloc`/`free`.|
|`halt_on_error` | `true` | Not supported. Use `continue_on_error` instead.|
|`handle_segv` | `true` | If `true`, ASan handles `SEGV` errors.|
|`handle_sigfpe` | `true` | If `true`, ASan handles `SIGFPE` errors.|
|`handle_sigill` | `true` | If `true`, ASan handles `SIGILL` errors.|
|`help` | `false` | If `true`, ASan prints the flag options to console.|
|`iat_overwrite`|`error`|`error`-report an error whenever an overwrite is detected.<br>`protect`-attempt to avoid using the overwritten definition.<br>`ignore` - don't attempt to correct any overwritten functions. For more information, see [`iat_overwrite`](./asan-runtime.md#msvc-specific-addresssanitizer-runtime-options).|
|`include_if_exists` | "" | Reads options from the specified file. ASan doesn't fail if the file doesn't exist.|
|`intercept_strpbrk` | `true` | If `true`, uses custom wrappers for `strpbrk` function to find more errors.|
|`intercept_strspn` | `true` | If `true`, uses custom wrappers for `strspn` and `strcspn` to find more errors.|
|`intercept_strstr` | `true` | If `true`, uses custom wrappers for `strstr` and `strcasestr` to find more errors.|
|`malloc_context_size` | 1 | Maximum number of stack frames to keep for each allocation/deallocation.|
|`malloc_fill_byte` | `0xbe` | Value used to fill newly allocated memory.|
|`max_malloc_fill_size` | 4096 | The ASan allocator fills an allocation with `malloc_fill_byte` up to `max_malloc_fill_size` on a call to `malloc`.|
|`max_redzone` | 2048 | Maximum size (in bytes) of redzones around heap objects.|
|`new_delete_type_mismatch` | `true` | Report errors on mismatch between the size of `new` and `delete`. For more information, see [`new-delete-type-mismatch`](./error-new-delete-type-mismatch.md).|
|`poison_heap` | `true` | If `true`, poison the heap memory on allocation and deallocation. `false` is useful for benchmarking the allocator or instrumentator.|
|`poison_partial` | `true` | If `true`, poison partially addressable 8-byte aligned words. This flag affects heap and global buffers, but not stack buffers.|
|`print_cmdline` | `false` | Print the command line on crash. With `continue_on_error` set >= 1, prints the current working directory and is `UTF-16` aware.|
|`print_summary` | `true` | If `false`, disables showing error summaries that accompany error reports.|
|`quarantine_size_mb` | -1 | Size (in Mb) of quarantine used to detect `use-after-free` errors. A lower value may increase the chance of false negatives.|
|`redzone` | 16 | Minimum size (in bytes) of redzones around heap objects. Requirement: `redzone >= 16` and must be a power of two.|
|`replace_str` | `true` | If `true`, uses custom wrappers and replacements for `libc` string functions to find more errors.|
|`report_globals` | 1 | How to respond to buffer overflow for globals: 0-don't detect buffer overflow on globals, 1-detect buffer overflow, 2-detect buffer overflow and print data about registered globals.|
|`sleep_before_dying` | 0 | Number of seconds to sleep between printing an error report and terminating the program.|
|`stack_trace_format` | `DEFAULT` | Format string used to render stack frames. `DEFAULT` - `    #%n %p %F %L`. List of available placeholders:<br> `%%` - represents a `'%'` character<br> `%n` - frame number (copy of `frame_no`)<br> `%p` - `PC`<br> `%m` - path to module<br> `%o` - offset in the module<br> `%f` - function name<br> `%q` - if available, offset in the function<br> `%s` - path to source file<br> `%l` - line in the source file<br> `%c` - column in the source file<br> `%F` - if the function is known, ASan prints `in <func name>` followed by the offset in this function if source is unknown<br> `%S` - ASan prints file/line/column information<br> `%L` - If file information is available, ASan prints the file name, line, and column. If module information is available, ASan prints the module name, offset, and architecture. If neither are available, ASan prints `(<unknown module>)`<br> `%M` - If known, ASan prints module basename and offset, or `PC`|
|`strict_memcmp` | `true` | If `true`, assumes that `memcmp(p1, p2, n)` always reads `n` bytes before comparing `p1` and `p2`.|
|`strict_string_checks` | `false` | If `true` checks that string arguments are properly null-terminated.|
|`strip_path_prefix` | "" | Strips this prefix from file paths in error reports.|
|`symbolize` | `true` | If `true`, use the `llvm-symbolizer` to turn virtual addresses into file or line locations.|
|`symbolize_inline_frames` | `true` | Print inlined frames in stacktraces.|
|`verbosity` | 0 | Verbosity level: 0-default verbosity, 1-more output, 2-even more output, 3-maximum verbosity. |
|`windows_fast_fail_on_error`| `false` | If `true`, the process can terminate with a `__fastfail(71)` after printing the error report. For more information, see [`windows_fast_fail_on_error`](./asan-runtime.md#msvc-specific-addresssanitizer-runtime-options).|
|`windows_hook_legacy_allocators`| `true` |If `true`, enables hooking of (`Global`/`Local`)(`Alloc`/`Free`/`Size`/`ReAlloc`/`Lock`/`Unlock`) functions.|

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
