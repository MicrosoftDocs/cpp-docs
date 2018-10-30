---
title: "Register usage"
ms.date: "11/04/2016"
ms.assetid: ce58e2cf-afd3-4068-980e-28a209298265
---
# Register usage

The x64 architecture provides for 16 general-purpose registers (hereafter referred to as integer registers) as well as 16 XMM/YMM registers available for floating-point use. Volatile registers are scratch registers presumed by the caller to be destroyed across a call. Nonvolatile registers are required to retain their values across a function call and must be saved by the callee if used.

## Register volatility and preservation

The following table describes how each register is used across function calls:

||||
|-|-|-|
|Register|Status|Use|
|RAX|Volatile|Return value register|
|RCX|Volatile|First integer argument|
|RDX|Volatile|Second integer argument|
|R8|Volatile|Third integer argument|
|R9|Volatile|Fourth integer argument|
|R10:R11|Volatile|Must be preserved as needed by caller; used in syscall/sysret instructions|
|R12:R15|Nonvolatile|Must be preserved by callee|
|RDI|Nonvolatile|Must be preserved by callee|
|RSI|Nonvolatile|Must be preserved by callee|
|RBX|Nonvolatile|Must be preserved by callee|
|RBP|Nonvolatile|May be used as a frame pointer; must be preserved by callee|
|RSP|Nonvolatile|Stack pointer|
|XMM0, YMM0|Volatile|First FP argument; first vector-type argument when `__vectorcall` is used|
|XMM1, YMM1|Volatile|Second FP argument; second vector-type argument when `__vectorcall` is used|
|XMM2, YMM2|Volatile|Third FP argument; third vector-type argument when `__vectorcall` is used|
|XMM3, YMM3|Volatile|Fourth FP argument; fourth vector-type argument when `__vectorcall` is used|
|XMM4, YMM4|Volatile|Must be preserved as needed by caller; fifth vector-type argument when `__vectorcall` is used|
|XMM5, YMM5|Volatile|Must be preserved as needed by caller; sixth vector-type argument when `__vectorcall` is used|
|XMM6:XMM15, YMM6:YMM15|Nonvolatile (XMM), Volatile (upper half of YMM)|Must be preserved by callee. YMM registers must be preserved as needed by caller.|

On function exit and on function entry to C Runtime Library calls and Windows system calls, the direction flag in the CPU flags register is expected to be cleared.

## See also

- [x64 Software Conventions](../build/x64-software-conventions.md)
- [__vectorcall](../cpp/vectorcall.md)
- [Direction flag](../c-runtime-library/direction-flag.md)
