---
description: "Learn more about: __fastfail"
title: "__fastfail"
ms.date: "09/02/2019"
ms.assetid: 9cd32639-e395-4c75-9f3a-ac3ba7f49921
---
# __fastfail

**Microsoft Specific**

Immediately terminates the calling process with minimum overhead.

## Syntax

```C
void __fastfail(unsigned int code);
```

### Parameters

*code*\
[in] A `FAST_FAIL_<description>` symbolic constant from winnt.h or wdm.h that indicates the reason for process termination.

## Return value

The `__fastfail` intrinsic does not return.

## Remarks

The `__fastfail` intrinsic provides a mechanism for a *fast fail* request—a way for a potentially corrupted process to request immediate process termination. Critical failures that may have corrupted program state and stack beyond recovery cannot be handled by the regular exception handling facility. Use `__fastfail` to terminate the process using minimal overhead.

Internally, `__fastfail` is implemented by using several architecture-specific mechanisms:

|Architecture|Instruction|Location of code argument|
|------------------|-----------------|-------------------------------|
|x86|int 0x29|`ecx`|
|x64|int 0x29|`rcx`|
|ARM|Opcode 0xDEFB|`r0`|
|ARM64|Opcode 0xF003|`x0`|

A fast fail request is self-contained and typically requires just two instructions to execute. After a fast fail request has been executed, the kernel then takes the appropriate action. In user-mode code, there are no memory dependencies beyond the instruction pointer itself when a fast fail event is raised. That maximizes its reliability, even in cases of severe memory corruption.

The `code` argument, one of the `FAST_FAIL_<description>` symbolic constants from winnt.h or wdm.h, describes the type of failure condition. It's incorporated into failure reports in an environment-specific manner.

User-mode fast fail requests appear as a second chance non-continuable exception with exception code 0xC0000409, and with at least one exception parameter. The first exception parameter is the `code` value. This exception code indicates to the Windows Error Reporting (WER) and debugging infrastructure that the process is corrupted, and that minimal in-process actions should be taken in response to the failure. Kernel-mode fast fail requests are implemented by using a dedicated bugcheck code, `KERNEL_SECURITY_CHECK_FAILURE` (0x139). In both cases, no exception handlers are invoked because the program is expected to be in a corrupted state. If a debugger is present, it's given an opportunity to examine the state of the program before termination.

Support for the native fast fail mechanism began in Windows 8. Windows operating systems that don't support the fast fail instruction natively will typically treat a fast fail request as an access violation, or as an `UNEXPECTED_KERNEL_MODE_TRAP` bugcheck. In these cases, the program is still terminated, but not necessarily as quickly.

`__fastfail` is only available as an intrinsic.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__fastfail`|x86, x64, ARM, ARM64|

**Header file** \<intrin.h>

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
