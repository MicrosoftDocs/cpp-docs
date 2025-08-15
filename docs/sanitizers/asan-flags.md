---
title: "AddressSanitizer Runtime Options"
description: "List of runtime options for the Microsoft C/C++ Address Sanitizer"
ms.date: 8/08/2025
helpviewer_keywords: ["AddressSanitizer options", "AddressSanitizer flags", "Address sanitizer options", "Address sanitizer flags", "asan options", "asan flags", "sanitizer flags", "asan_options", "AddressSanitizerFlags", "SanitizerCommonFlags"]
---

# AddressSanitizer Runtime Options

The following is a list of actively supported options for the AddressSanitizer. They can be enabled through the `ASAN_OPTIONS` environment variable or by overriding the `__asan_default_options()` user function, as described [here](./asan-runtime.md#runtime-options). 

> [!NOTE]
> These descriptions may vary from those in Clang's ASan docs to account for MSVC specific behaviors.


| Flag | Default value | Description |
|------|---------------|-------------|
|`abort_on_error` | `false` | If `true`, ASan calls `abort()` instead of `_exit()` after printing the error report.|
|`alloc_dealloc_mismatch` | `false` | Enables detection of mismatched memory operations such as `malloc`/`delete`, `new[]`/`free`, etc.|

|`allocator_frees_and_returns_null_on_realloc_zero` | `1` | 1 - realloc(p, 0) is equivalent to free(p). 0 - realloc(p, 0) will return a non-`NULL` value.|
|`allocator_may_return_null` | `false` | If `true`, the allocator will return `nullptr` and fail when out of memory instead of crashing.|
|`allocator_release_to_os_interval_ms` | `-1` | Experimental. 64-bit allocator only. Specify minimum time interval in ms between attempts to release memory.|
|`allow_user_poisoning` | `true` | If `true`, you may manually mark memory regions as poisoned or unpoisoned.|
|`atexit` | `false` | If `true`, prints ASan exit stats even after program terminates successfully.|
|`check_initialization_order` | `false` | If `true`, attempts to catch initialization order issues.|
|`continue_on_error` | `0` | Allows an application to continue running while reporting unique memory safety errors. `0` - disabled, `1` - output to `stdout`, `2` - output to `stderr`. See [continue_on_error](asan-continue-on-error.md).|
|`detect_container_overflow` | `true` | If `true`, honor the container overflow  annotations. See [ContainerOverflow](./error-container-overflow.md).|
|`detect_invalid_pointer_pairs` | `0` | If >`0`, the tool detects operations like <, <=, >, >=, and - on invalid pointer pairs, such as pointers that belong to different objects. Higher values increase detection effort.|
|`detect_stack_use_after_return` | `false` | Enables `stack-use-after-return` checking at runtime. Requires `/fsanitize-address-use-after-return`. See [stack-use-after-return](./error-stack-use-after-return.md).|
|`disable_coredump` | `true`/`false` (on non-64-bit systems) | Disables core dumping. By default, the tool sets `disable_coredump=1` on 64-bit systems to prevent dumping a 16T+ core file. The tool ignores this flag on operating systems that don't dump core by default and for sanitizers that don't reserve large amounts of virtual memory.|
|`exitcode` | `1` | Override the program exit status with this value if the tool found an error.|
|`external_symbolizer_path` | `""` | Path to external symbolizer. If empty, the tool will search `$PATH` for the symbolizer.|
|`fast_unwind_on_malloc` | `true` | If available, ASan uses the fast frame-pointer-based unwinder on `malloc`/`free`.|
|`full_address_space` | `false` | Sanitize complete address space; by default kernel area on 32-bit platforms will not be sanitized.|
|`halt_on_error` | `true` | Exit/abort the program after printing the first error report (May cause undefined behavior, use `continue_on_error` for full support).|
|`handle_segv` | `true` | `false` - ASan will not handle `SEGV` errors, `true` - ASan handles `SEGV` errors.|
|`handle_sigfpe` | `true` | `false` - ASan will not handle `SIGFPE` errors, `true` - ASan will handle `SIGFPE` errors.|
|`handle_sigill` | `true` | `false` - ASan will not handle `SIGILL` errors, `true` - ASan will handle `SIGILL` errors.|
|`help` | `false` | If `true`, ASan prints the flag options to console.|
|`iat_overwrite`|`error`|`error` - report an error whenever an overwrite is detected, `protect` - attempt to avoid using the overwritten definition, `ignore` - never attempt to correct any overwritten functions. See [iat_overwrite](./asan-runtime.md#msvc-specific-addresssanitizer-runtime-options).|
|`include_if_exists` | `""` | Read more options from the given file (if it exists).|
|`intercept_strpbrk` | `true` | If `true`, uses custom wrappers for strpbrk function to find more errors.|
|`intercept_strspn` | `true` | If `true`, uses custom wrappers for strspn and strcspn function to find more errors.|
|`intercept_strstr` | `true` | If `true`, uses custom wrappers for strstr and strcasestr functions to find more errors.|
|`log_exe_name` | `false` | Mention name of executable when reporting error and append executable name to logs (as in `log_path.exe_name.pid`).|
|`log_path` | `stderr` | Write logs to `log_path.pid`. The special values are `stdout` and `stderr`. The default is `stderr`.|
|`log_to_syslog` | `false` | Write all sanitizer output to syslog in addition to other means of logging.|
|`malloc_context_size` | `1` | Max number of stack frames kept for each allocation/deallocation.|
|`malloc_fill_byte` | `0xbe` | Value used to fill the newly allocated memory.|
|`max_malloc_fill_size` | `4096` | ASan allocator flag. `max_malloc_fill_size` is the maximal amount of bytes that will be filled with `malloc_fill_byte` on `malloc`.|
|`max_redzone` | `2048` | Maximal size (in bytes) of redzones around heap objects.|
|`min_uar_stack_size_log` | `16` | Minimum fake stack size log. (Minimum value accepted: `16`).|
|`new_delete_type_mismatch` | `true` | Report errors on mismatch betwen size of new and delete. See [new-delete-type-mismatch](./error-new-delete-type-mismatch.md).|
|`poison_heap` | `true` | Poison (or not) the heap memory on [de]allocation. Zero value is useful for benchmarking the allocator or instrumentator.|
|`poison_partial` | `true` | If `true`, poison partially addressable 8-byte aligned words. This flag affects heap and global buffers, but not stack buffers.|
|`print_cmdline` | `false` | Print command line on crash. With `continue_on_error` set >= `1`, print current working directory as `UTF-16` aware.|
|`print_summary` | `true` | If `false`, disable printing error summaries in addition to error reports.|
|`quarantine_size` | `-1` | Deprecated, please use `quarantine_size_mb`.|
|`quarantine_size_mb` | `-1` | Size (in Mb) of quarantine used to detect `use-after-free` errors. Lower value may increase the chance of false negatives.|
|`redzone` | `16` | Minimal size (in bytes) of redzones around heap objects. Requirement: `redzone` >= 16, is a power of two.|
|`replace_str` | `true` | If `true`, uses custom wrappers and replacements for libc string functions to find more errors.|
|`report_globals` | `1` | Controls the way to handle globals (`0` - don't detect buffer overflow on globals, `1` - detect buffer overflow, `2` - detect buffer overflow and print data about registered globals).|
|`sleep_before_dying` | `0` | Number of seconds to sleep between printing an error report and terminating the program.|
|`stack_trace_format` | `DEFAULT` | Format string used to render stack frames.|
|`strict_memcmp` | `true` | If `true`, assume that `memcmp(p1, p2, n)` always reads `n` bytes before comparing `p1` and `p2`.|
|`strict_string_checks` | `false` | If `true` check that string arguments are properly null-terminated.|
|`strip_path_prefix` | `""` | Strips this prefix from file paths in error reports.|
|`suppress_equal_pcs` | `true` | Deduplicate multiple reports for single source location in `halt_on_error=false` mode.|
|`suppressions` | `""` | Suppresses file name.|
|`symbolize` | `true` | If `true`, use the `llvm-symbolizer` to turn virtual addresses to file or line locations.|
|`symbolize_inline_frames` | `true` | Print inlined frames in stacktraces.|
|`verbosity` | `0` | Verbosity level: `0` - default, `1` - more, `2+` - even more output.|
|`windows_fast_fail_on_error`|`false`|If `true`, enable the process to terminate with a `__fastfail(71)` after printing the error report. See [windows_fast_fail_on_error](./asan-runtime.md#msvc-specific-addresssanitizer-runtime-options).|
|`windows_hook_legacy_allocators`|`true`|If `true`, enable hooking of (`Global`/`Local`)(`Alloc`/`Free`/`Size`/`ReAlloc`/`Lock`/`Unlock`) functions.|

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)