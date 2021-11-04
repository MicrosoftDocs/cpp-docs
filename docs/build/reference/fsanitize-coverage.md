---
description: "Learn more about the /fsanitize-coverage (Configure sanitizer coverage) compiler option."
title: "/fsanitize-coverage (Configure sanitizer coverage)"
ms.date: 09/15/2021
f1_keywords: ["/fsanitize-coverage", "-fsanitize-coverage", "/fsanitize-coverage=inline-8bit-counters", "/fsanitize-coverage=edge", "/fsanitize-coverage=trace-cmp", "/fsanitize-coverage=trace-div", "/fno-sanitize-coverage=inline-8bit-counters", "/fno-sanitize-coverage=edge", "/fno-sanitize-coverage=trace-cmp", "/fno-sanitize-coverage=trace-div"]
helpviewer_keywords: ["/fsanitize-coverage [C++]", "sanitizer compiler option [C++]", "/fsanitize-coverage=inline-8bit-counters", "/fsanitize-coverage=edge", "/fsanitize-coverage=trace-cmp", "/fsanitize-coverage=trace-div", "/fno-sanitize-coverage=inline-8bit-counters", "/fno-sanitize-coverage=edge", "/fno-sanitize-coverage=trace-cmp", "/fno-sanitize-coverage=trace-div"]
---
# `/fsanitize-coverage` (Configure sanitizer coverage)

The **`/fsanitize-coverage`** compiler options instruct the compiler to add various kinds of instrumentation points where user-defined functions are called. These options are useful for fuzzing scenarios that use **`/fsanitize=fuzzer`**, like OneFuzz. For more information, see the [OneFuzz documentation](https://www.microsoft.com/research/project/project-onefuzz/) and [OneFuzz GitHub project](https://github.com/microsoft/onefuzz).

## Syntax

> **`/fsanitize-coverage=edge`**\
> **`/fsanitize-coverage=inline-8bit-counters`**\
> **`/fsanitize-coverage=trace-cmp`**\
> **`/fsanitize-coverage=trace-div`**\
> **`/fno-sanitize-coverage=edge`**\
> **`/fno-sanitize-coverage=inline-8bit-counters`**\
> **`/fno-sanitize-coverage=trace-cmp`**\
> **`/fno-sanitize-coverage=trace-div`**

## Remarks

The experimental **`/fsanitize-coverage`** compiler options offer code coverage support and various options to modify which compiler-provided instrumentation is generated. All these options are automatically set when the [`/fsanitize=fuzzer`](fsanitize.md) option is specified. The **`/fsanitize=fuzzer`** option requires the same instrumentation points and callbacks mentioned in these options.

The **`/fsanitize-coverage`** options don't allow comma-separated syntax, for example: **`/fsanitize-coverage=edge,inline-8bit-counters,trace-cmp,trace-div`**. Specify these options individually.

The **`/fsanitize-coverage`** options are available beginning in Visual Studio 2022 version 17.0.

### Code coverage

The **`/fsanitize-coverage=edge`** compiler option enables code coverage instrumentation along all non-redundant edges. Use **`/fno-sanitize-coverage=edge`** to disable this option if it's already provided or implied by another option.

### Inline counters

The **`/fsanitize-coverage=inline-8bit-counters`** compiler option instructs the compiler to add an inline counter increment on every relevant edge. This option also adds a call to `extern "C" void __sanitizer_cov_8bit_counters_init(uint8_t *start, uint8_t *stop)` that you must implement. The arguments correspond to the start and end of an array that contains all the 8-bit counters created. Use **`/fno-sanitize-coverage=inline-8bit-counters`** to disable this option if it's already provided or implied by another option.

### Trace comparisons

The **`/fsanitize-coverage=trace-cmp`** compiler option instructs the compiler to insert calls to the following functions:

```C
// Before each comparison instruction of the stated size.
void __sanitizer_cov_trace_cmp1(uint8_t Arg1, uint8_t Arg2);
void __sanitizer_cov_trace_cmp2(uint16_t Arg1, uint16_t Arg2);
void __sanitizer_cov_trace_cmp4(uint32_t Arg1, uint32_t Arg2);
void __sanitizer_cov_trace_cmp8(uint64_t Arg1, uint64_t Arg2);

// Before each comparison instruction of the stated size, if one of the operands (Arg1) is constant.
void __sanitizer_cov_trace_const_cmp1(uint8_t Arg1, uint8_t Arg2);
void __sanitizer_cov_trace_const_cmp2(uint16_t Arg1, uint16_t Arg2);
void __sanitizer_cov_trace_const_cmp4(uint32_t Arg1, uint32_t Arg2);
void __sanitizer_cov_trace_const_cmp8(uint64_t Arg1, uint64_t Arg2);
```

Use **`/fno-sanitize-coverage=trace-cmp`** to disable this option if it's already provided or implied by another option.

### Trace divisions

The **`/fsanitize-coverage=trace-div`** compiler option instructs the compiler to insert calls to the following functions:

```C
// Before a division instruction of the stated size.
void __sanitizer_cov_trace_div4(uint32_t Val);
void __sanitizer_cov_trace_div8(uint64_t Val);
```

Use **`/fno-sanitize-coverage=trace-div`** to disable this option if it's already provided or implied by another option.

### To set the advanced compiler options

1. Open your project's **Property Pages** dialog box.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to set **/fsanitize-coverage** options.

1. Choose **OK** or **Apply** to save your changes.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)\
[`/fsanitize` (Enable Sanitizers)](fsanitize.md)\
[AddressSanitizer build and language reference](../../sanitizers/asan-building.md)
