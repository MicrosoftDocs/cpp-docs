---
title: "AddressSanitizer Runtime Options"
description: "List of runtime options for the Microsoft C/C++ Address Sanitizer"
ms.date: 8/08/2025
helpviewer_keywords: ["AddressSanitizer options", "AddressSanitizer flags", "Address sanitizer options", "Address sanitizer flags", "asan options", "asan flags", "sanitizer flags", "asan_options", "AddressSanitizerFlags", "SanitizerCommonFlags"]
---

# AddressSanitizer Runtime Options

The following is a list of supported runtime options that can be set by the `ASAN_OPTIONS` environment variable or by overriding the `__asan_default_options()` user function. Reference: [AddressSanitizer Runtime Options](./asan-runtime.md#runtime-options). While these mirror the options available in Clang's ASan, the description will differ by varying amounts in consideration of the MSVC ASan runtime.

If you discover options that are inaccurately documented, we invite you to [report a bug](https://aka.ms/feedback/report?space=62).

| Flag | Default value | Description |
|------|---------------|-------------|
|`abort_on_error` | `false` | If `true`, the tool calls `abort()` instead of `_exit()` after printing the error report.|
|`alloc_dealloc_mismatch` | `false` | Enables runtime detection of mismatched memory operations such as `malloc`/`delete`, `new[]`/`free`, etc.|
|`allocator_frees_and_returns_null_on_realloc_zero` | `1` | 1 - realloc(p, 0) is equivalent to free(p). 0 - realloc(p, 0) will return a non-`NULL` value.|
|`allocator_may_return_null` | `false` | If `true`, the allocator will return `nullptr` and fail when out of memory instead of crashing.|
|`allocator_release_to_os_interval_ms` | `-1` | Experimental. 64-bit allocator only. Specify minimum time interval in ms between attempts to release memory.|
|`allow_addr2line` | `false` | If `true`, the tool uses the `addr2line` binary to symbolize stack traces when `llvm-symbolizer` is not available.|
|`allow_user_poisoning` | `true` | If `true`, you may manually mark memory regions as poisoned or unpoisoned.|
|`atexit` | `false` | If `true`, prints ASan exit stats even after program terminates successfully.|
|`check_initialization_order` | `false` | If `true`, attempts to catch initialization order issues.|
|`check_malloc_usable_size` | `true` | If `true`, reports an error when the pointer does not reference a valid, currently allocated block.|
|`check_printf` | `true` | If `true`, enables ASan to validate printf family function arguments for memory safety violations.|
|`continue_on_error` | `0` | Allows an application to continue running while reporting unique memory safety errors. `0` - disabled, `1` - output to `stdout`, `2` - output to `stderr`. See [continue_on_error](asan-continue-on-error.md).|
|`coverage` | `false` | If `true` and the coverage instrumentation was enabled at compile time, coverage information will be dumped at program shutdown.|
|`detect_container_overflow` | `true` | If `true`, honor the container overflow  annotations. See [ContainerOverflow](./error-container-overflow.md).|
|`detect_invalid_pointer_pairs` | `0` | If >`0`, the tool detects operations like <, <=, >, >=, and - on invalid pointer pairs, such as pointers that belong to different objects. Higher values increase detection effort.|
|`detect_odr_violation` | `0` | If >=`2`, detect violation of One-Definition-Rule (ODR) violation; If `1`, detect ODR-violation only if the two variables have different sizes.|
|`detect_stack_use_after_return` | `false` | Enables `stack-use-after-return` checking at runtime. Requires `/fsanitize-address-use-after-return`. See [stack-use-after-return](./error-stack-use-after-return.md).|
|`disable_coredump` | `true`/`false` (on non-64-bit systems) | Disables core dumping. By default, the tool sets `disable_coredump=1` on 64-bit systems to prevent dumping a 16T+ core file. The tool ignores this flag on operating systems that don't dump core by default and for sanitizers that don't reserve large amounts of virtual memory.|
|`dump_instruction_bytes` | `false` | If `true`, dump 16 bytes starting at the instruction that caused `SEGV`.|
|`exitcode` | `1` | Override the program exit status with this value if the tool found an error.|
|`external_symbolizer_path` | `""` | Path to external symbolizer. If empty, the tool will search `$PATH` for the symbolizer.|
|`fast_unwind_on_check` | `false` | If available, the tool uses the fast frame-pointer-based unwinder on internal `CHECK` failures.|
|`fast_unwind_on_fatal` | `false` | If available, the tool uses the fast frame-pointer-based unwinder on fatal errors.|
|`fast_unwind_on_malloc` | `true` | If available, the tool uses the fast frame-pointer-based unwinder on `malloc`/`free`.|
|`full_address_space` | `false` | Sanitize complete address space; by default kernel area on 32-bit platforms will not be sanitized.|
|`halt_on_error` | `true` | Exit/abort the program after printing the first error report (May cause undefined behavior, use `continue_on_error` for full support).|
|`handle_segv` | `true` | `false` - ASan will not handle `SEGV` errors, `true` - ASan handles `SEGV` errors.|
|`handle_sigfpe` | `true` | `false` - ASan will not handle `SIGFPE` errors, `true` - ASan will handle `SIGFPE` errors.|
|`handle_sigill` | `true` | `false` - ASan will not handle `SIGILL` errors, `true` - ASan will handle `SIGILL` errors.|
|`help` | `false` | If `true`, ASan prints the flag options to console.|
|`html_cov_report` | `false` | If `true`, ASan generates a coverage report.|
|`iat_overwrite`|`error`|`error` - report an error whenever an overwrite is detected, `protect` - attempt to avoid using the overwritten definition, `ignore` - never attempt to correct any overwritten functions. See [iat_overwrite](./asan-runtime.md#msvc-specific-addresssanitizer-runtime-options).|
|`include` | `""` | Read more options from the given file.|
|`include_if_exists` | `""` | Read more options from the given file (if it exists).|
|`intercept_memcmp` | `true` | If `true`, uses custom wrappers for memcmp function to find more errors.|
|`intercept_strpbrk` | `true` | If `true`, uses custom wrappers for strpbrk function to find more errors.|
|`intercept_strspn` | `true` | If `true`, uses custom wrappers for strspn and strcspn function to find more errors.|
|`intercept_strstr` | `true` | If `true`, uses custom wrappers for strstr and strcasestr functions to find more errors.|
|`intercept_tls_get_addr` | `false` | Intercept __tls_get_addr.|
|`log_exe_name` | `false` | Mention name of executable when reporting error and append executable name to logs (as in `log_path.exe_name.pid`).|
|`log_path` | `stderr` | Write logs to `log_path.pid`. The special values are `stdout` and `stderr`. The default is `stderr`.|
|`log_to_syslog` | `false` | Write all sanitizer output to syslog in addition to other means of logging.|
|`malloc_context_size` | `1` | Max number of stack frames kept for each allocation/deallocation.|
|`malloc_fill_byte` | `0xbe` | Value used to fill the newly allocated memory.|
|`max_malloc_fill_size` | `4096` | ASan allocator flag. `max_malloc_fill_size` is the maximal amount of bytes that will be filled with `malloc_fill_byte` on `malloc`.|
|`max_redzone` | `2048` | Maximal size (in bytes) of redzones around heap objects.|
|`max_uar_stack_size_log` | `20` | Maximum fake stack size log.|
|`min_uar_stack_size_log` | `16` | Minimum fake stack size log. (Minimum value accepted: `16`).|
|`new_delete_type_mismatch` | `true` | Report errors on mismatch betwen size of new and delete. See [new-delete-type-mismatch](./error-new-delete-type-mismatch.md).|
|`poison_array_cookie` | `true` | Poison (or not) the array cookie after operator `new[]`.|
|`poison_heap` | `true` | Poison (or not) the heap memory on [de]allocation. Zero value is useful for benchmarking the allocator or instrumentator.|
|`poison_partial` | `true` | If `true`, poison partially addressable 8-byte aligned words. This flag affects heap and global buffers, but not stack buffers.|
|`print_cmdline` | `false` | Print command line on crash. With `continue_on_error` set >= `1`, print current working directory as `UTF-16` aware.|
|`print_full_thread_history` | `true` | If `true`, prints thread creation stacks for the threads involved in the report and their ancestors up to the main thread.|
|`print_legend` | `true` | Print the legend for the shadow bytes.|
|`print_stats` | `false` | Print various statistics after printing an error message or if atexit=1.|
|`print_summary` | `true` | If `false`, disable printing error summaries in addition to error reports.|
|`print_suppressions` | `true` | Print matched suppressions at exit.|
|`protect_shadow_gap` | `true` | If `true`, `mprotect` the shadow gap.|
|`quarantine_size` | `-1` | Deprecated, please use `quarantine_size_mb`.|
|`quarantine_size_mb` | `-1` | Size (in Mb) of quarantine used to detect `use-after-free` errors. Lower value may increase the chance of false negatives.|
|`redzone` | `16` | Minimal size (in bytes) of redzones around heap objects. Requirement: `redzone` >= 16, is a power of two.|
|`replace_intrin` | `true` | If `true`, uses custom wrappers for `memset` or `memcpy` or `memmove` intinsics.|
|`replace_str` | `true` | If `true`, uses custom wrappers and replacements for libc string functions to find more errors.|
|`report_globals` | `1` | Controls the way to handle globals (`0` - don't detect buffer overflow on globals, `1` - detect buffer overflow, `2` - detect buffer overflow and print data about registered globals).|
|`sancov_path` | `sancov` | Sancov tool location.|
|`sleep_before_dying` | `0` | Number of seconds to sleep between printing an error report and terminating the program.|
|`stack_trace_format` | `DEFAULT` | Format string used to render stack frames.|
|`start_deactivated` | `false` | If `true`, preserves configuration and allocator, and deactivates ASan at initialization. ASan will reactivate when requested.|
|`strict_memcmp` | `true` | If `true`, assume that `memcmp(p1, p2, n)` always reads `n` bytes before comparing `p1` and `p2`.|
|`strict_string_checks` | `false` | If `true` check that string arguments are properly null-terminated.|
|`strip_path_prefix` | `""` | Strips this prefix from file paths in error reports.|
|`suppress_equal_pcs` | `true` | Deduplicate multiple reports for single source location in `halt_on_error=false` mode.|
|`suppressions` | `""` | Suppresses file name.|
|`symbolize` | `true` | If `true`, use the `llvm-symbolizer` to turn virtual addresses to file or line locations.|
|`symbolize_inline_frames` | `true` | Print inlined frames in stacktraces.|
|`symbolize_vs_style` | `false` | Print file locations in Visual Studio style (e.g:  file(10,42): ...).|
|`unmap_shadow_on_exit` | `false` | If `true`, explicitly unmaps the shadow memory at exit.|
|`use_madv_dontdump` | `true` | If `true`, instructs kernel to not store shadow in core file.|
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