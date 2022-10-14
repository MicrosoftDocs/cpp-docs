---
description: "Learn more about: Overview of ARM64EC ABI conventions"
title: "Overview of ARM64EC ABI conventions"
ms.date: "06/03/2022"
---
# Overview of ARM64EC ABI conventions

ARM64EC is an application binary interface (ABI) that enables ARM64 binaries to run natively and interoperably with x64 code. Specifically, the ARM64EC ABI follows x64 software conventions including calling convention, stack usage, and data alignment, making ARM64EC and x64 code interoperable. The operating system emulates the x64 portion of the binary. (The EC in ARM64EC stands for *emulation compatible*.)

For more information on the x64 and ARM64 ABIs, see [Overview of x64 ABI conventions](x64-software-conventions.md) and [Overview of ARM64 ABI conventions](arm64-windows-abi-conventions.md).

ARM64EC doesn't solve memory model differences between x64 and ARM based architectures. For more information, see [Common Visual C++ ARM migration issues](common-visual-cpp-arm-migration-issues.md).

## Definitions

- **ARM64** - The code stream for ARM64 processes that contains traditional ARM64 code.
- **ARM64EC** - The code stream that utilizes a subset of the ARM64 register set to provide interoperability with x64 code.

## Register mapping

x64 processes may have threads running ARM64EC code. So it's always possible to retrieve an x64 register context, ARM64EC uses a subset of the ARM64 core registers that map 1:1 to emulated x64 registers. Importantly, ARM64EC never uses registers outside of this subset, except to read the Thread Environment Block (TEB) address from `x18`.

Native ARM64 processes shouldn't regress in performance when some or many functions are recompiled as ARM64EC. To maintain performance, the ABI follows these principles:

- The ARM64EC register subset includes all registers that are part of the ARM64 function calling convention.

- The ARM64EC calling convention directly maps to the ARM64 calling convention.

Special helper routines like `__chkstk_arm64ec` use custom calling conventions and registers. These registers are also included in the ARM64EC subset of registers.

## Register mapping for integer registers

| ARM64EC register | x64 register | ARM64EC calling convention | ARM64 calling convention | x64 calling convention |
|--|--|--|--|--|
| `x0` | `rcx` | volatile | volatile | volatile |
| `x1` | `rdx` | volatile | volatile | volatile |
| `x2` | `r8` | volatile | volatile | volatile |
| `x3` | `r9` | volatile | volatile | volatile |
| `x4` | `r10` | volatile | volatile | volatile |
| `x5` | `r11` | volatile | volatile | volatile |
| `x6` | `mm1` (low 64 bits of x87 `R1` register) | volatile | volatile | volatile |
| `x7` | `mm2` (low 64 bits of x87 `R2` register) | volatile | volatile | volatile |
| `x8` | `rax` | volatile | volatile | volatile |
| `x9` | `mm3` (low 64 bits of x87 `R3` register) | volatile | volatile | volatile |
| `x10` | `mm4` (low 64 bits of x87 `R4` register) | volatile | volatile | volatile |
| `x11` | `mm5` (low 64 bits of x87 `R5` register) | volatile | volatile | volatile |
| `x12` | `mm6` (low 64 bits of x87 `R6` register) | volatile | volatile | volatile |
| `x13` | N/A | disallowed | volatile | N/A |
| `x14` | N/A | disallowed | volatile | N/A |
| `x15` | `mm7` (low 64 bits of x87 `R7` register) | volatile | volatile | volatile |
| `x16` | High 16 bits of each of the x87 `R0`-`R3` registers | volatile(`xip0`) | volatile(`xip0`) | volatile |
| `x17` | High 16 bits of each of the x87 `R4`-`R7` registers | volatile(`xip1`) | volatile(`xip1`) | volatile |
| `x18` | N/A | fixed(TEB) | fixed(TEB) | volatile |
| `x19` | `r12` | non-volatile | non-volatile | non-volatile |
| `x20` | `r13` | non-volatile | non-volatile | non-volatile |
| `x21` | `r14` | non-volatile | non-volatile | non-volatile |
| `x22` | `r15` | non-volatile | non-volatile | non-volatile |
| `x23` | N/A | disallowed | non-volatile | N/A |
| `x24` | N/A | disallowed | non-volatile | N/A |
| `x25` | `rsi` | non-volatile | non-volatile | non-volatile |
| `x26` | `rdi` | non-volatile | non-volatile | non-volatile |
| `x27` | `rbx` | non-volatile | non-volatile | non-volatile |
| `x28` | N/A | disallowed | disallowed | N/A |
| `fp` | `rbp` | non-volatile | non-volatile | non-volatile |
| `lr` | `mm0` (low 64 bits of x87 `R0` register) | volatile | volatile | N/A |
| `sp` | `rsp` | non-volatile | non-volatile | non-volatile |
| `pc` | `rip` | instruction pointer | instruction pointer | instruction pointer |
| `PSTATE` subset: `N`/`Z`/`C`/`V`/`SS` <sup>1, 2</sup> | `RFLAGS` subset: `SF`/`ZF`/`CF`/`OF`/`TF` | volatile | volatile | volatile |
| N/A | `RFLAGS` subset: `PF`/`AF` | N/A | N/A | volatile |
| N/A | `RFLAGS` subset: `DF` | N/A | N/A | non-volatile |

<sup>1</sup> Avoid directly reading, writing or computing mappings between `PSTATE` and `RFLAGS`. These bits may be used in the future and are subject to change.

<sup>2</sup> The ARM64EC carry flag `C` is the inverse of the x64 carry flag `CF` for subtraction operations. There's no special handling, because the flag is volatile and is therefore trashed when transitioning between (ARM64EC and x64) functions.

## <a name="register-mapping-for-vector-registers"/> Register mapping for vector registers

| ARM64EC register | x64 register | ARM64EC calling convention | ARM64 calling convention | x64 calling convention |
|--|--|--|--|--|
| `v0`-`v5` | `xmm0`-`xmm5` | volatile | volatile | volatile |
| `v6`-`v7` | `xmm6`-`xmm7` | volatile | volatile | non-volatile |
| `v8`-`v15` | `xmm8`-`xmm15` | volatile <sup>1</sup> | volatile <sup>1</sup> | non-volatile |
| `v16`-`v31` | `xmm16`-`xmm31` | disallowed | volatile | disallowed (x64 emulator doesn't support AVX-512) |
| `FPCR` <sup>2</sup> | `MXCSR[15:6]` | non-volatile | non-volatile | non-volatile |
| `FPSR` <sup>2</sup> | `MXCSR[5:0]` | volatile | volatile | volatile |

<sup>1</sup> These ARM64 registers are special in that the lower 64 bits are non-volatile but the upper 64 bits are volatile. From the point of view of an x64 caller, they're effectively volatile because the callee would trash data.

<sup>2</sup> Avoid directly reading, writing, or computing mappings of `FPCR` and `FPSR`. These bits may be used in the future and are subject to change.

## Struct packing

ARM64EC follows the same struct packing rules used for x64 to ensure interoperability between ARM64EC code and x64 code. For more information and examples of x64 struct packing, see [Overview of x64 ABI conventions](x64-software-conventions.md).

## Emulation helper ABI routines

ARM64EC code and [thunks](#thunks) use emulation helper routines to transition between x64 and ARM64EC functions.

The following table describes each special ABI routine and the registers the ABI uses. The routines don't modify the listed preserved registers under the ABI column. No assumptions should be made about unlisted registers. On-disk, the ABI routine pointers are null. At load time, the loader updates the pointers to point to the x64 emulator routines.

| Name | Description | ABI |
|--|--|--|
| `__os_arm64x_dispatch_call_no_redirect` | Called by an exit thunk to call an x64 target (either an x64 function or an x64 fast-forward sequence). The routine pushes the ARM64EC return address (in the `LR` register) followed by the address of the instruction that succeeds a `blr x16` instruction that invokes the x64 emulator. It then runs the `blr x16` instruction | return value in `x8` (`rax`) |
| `__os_arm64x_dispatch_ret` | Called by an entry thunk to return to its x64 caller. It pops the x64 return address from the stack and invokes the x64 emulator to jump to it | N/A |
| `__os_arm64x_check_call` | Called by ARM64EC code with a pointer to an exit thunk and the indirect ARM64EC target address to execute. The ARM64EC target is considered patchable, and execution always returns to the caller with either the same data it was called with, or with modified data | Arguments:<br/>`x9`: The target address<br/>`x10`: The exit thunk address<br/>`x11`: The fast forward sequence address<br/><br/>Out:<br/>`x9`: If the target function was detoured, it contains the address of the fast forward sequence<br/>`x10`: The exit thunk address<br/>`x11`: If the function was detoured, it contains the exit thunk address. Otherwise, the target address jumped to<br/><br/>Preserved registers: `x0`-`x8`, `x15` (`chkstk`). and `q0`-`q7` |
| `__os_arm64x_check_icall` | Called by ARM64EC code, with a pointer to an exit thunk, to handle a jump to either a target address that is either x64 or ARM64EC. If the target is x64 and the x64 code hasn't been patched, the routine sets the target address register. It points to the ARM64EC version of the function if one exists. Otherwise, it sets the register to point to the exit thunk that transitions to the x64 target. Then, it returns to the calling ARM64EC code, which then jumps to the address in the register. This routine is a non-optimized version of `__os_arm64x_check_call`, where the target address isn't known at compile time<br/><br/>Used at a call-site of an indirect call | Arguments:<br/>`x9`: The target address<br/>`x10`: The exit thunk address<br/>`x11`: The fast forward sequence address<br/><br/>Out:<br/>`x9`: If the target function was detoured, it contains the address of the fast forward sequence<br/>`x10`: The exit thunk address<br/>`x11`: If the function was detoured, it contains the exit thunk address. Otherwise, the target address jumped to<br/><br/>Preserved registers: `x0`-`x8`, `x15` (`chkstk`), and `q0`-`q7` |
| `__os_arm64x_check_icall_cfg` | Same as `__os_arm64x_check_icall` but also checks that the specified address is a valid Control Flow Graph indirect call target | Arguments:<br/>`x10`: The address of the exit thunk<br/>`x11`: The address of the target function<br/><br/>Out:<br/>`x9`: If the target is x64, the address to the function. Otherwise, undefined<br/>`x10`: The address of the exit thunk<br/>`x11`: If the target is x64, it contains the address of the exit thunk. Otherwise, the address of the function<br/><br/>Preserved registers: `x0`-`x8`, `x15` (`chkstk`), and `q0`-`q7` |
| `__os_arm64x_get_x64_information` | Gets the requested part of the live x64 register context | `_Function_class_(ARM64X_GET_X64_INFORMATION) NTSTATUS LdrpGetX64Information(_In_ ULONG Type, _Out_ PVOID Output, _In_ PVOID ExtraInfo)` |
| `__os_arm64x_set_x64_information` | Sets the requested part of the live x64 register context | `_Function_class_(ARM64X_SET_X64_INFORMATION) NTSTATUS LdrpSetX64Information(_In_ ULONG Type,_In_ PVOID Input, _In_ PVOID ExtraInfo)` |
| `__os_arm64x_x64_jump` | Used in signature-less adjustor and other thunks that directly forward (`jmp`) a call to another function that can have any signature, deferring the potential application of the right thunk to the real target | Arguments:<br/>`x9`: target to jump to<br/><br/>All parameter registers preserved (forwarded) |

## Thunks

Thunks are the low-level mechanisms to support ARM64EC and x64 functions calling each other. There are two types: *entry thunks* for entering ARM64EC functions and *exit thunks* for calling x64 functions.

### Entry thunk and intrinsic entry thunks: x64 to ARM64EC function call

To support x64 callers when a C/C++ function is compiled as ARM64EC, the toolchain generates a single entry thunk consisting of ARM64EC machine code. Intrinsics have an entry thunk of their own. All other functions share an entry thunk with all functions that have a matching calling convention, parameters, and return type. The content of the thunk depends on the calling convention of the C/C++ function.

In addition to handling parameters and the return address, the thunk bridges the differences in volatility between ARM64EC and x64 vector registers caused by [ARM64EC vector register mapping](#register-mapping-for-vector-registers):

| ARM64EC register | x64 register | ARM64EC calling convention | ARM64 calling convention | x64 calling convention |
|--|--|--|--|--|
| `v6`-`v15` | `xmm6`-`xmm15` | volatile, but saved/restored in the entry thunk (x64 to ARM64EC) | volatile or partially volatile upper 64 bits | non-volatile |

The entry thunk performs the following actions:

| Parameter number | Stack usage |
|--|--|
| 0-4 | Stores ARM64EC `v6` and `v7` into the caller-allocated home space<br/><br/>Since the callee is ARM64EC, which doesn't have the notion of a home space, the stored values aren't clobbered.<br/><br/>Allocates an extra 128 bytes on the stack and store ARM64EC `v8` through `v15`. |
| 5-8 | `x4` = 5th parameter from the stack<br/>`x5` = 6th parameter from the stack<br/>`x6` = 7th parameter from the stack<br/>`x7` = 8th parameter from the stack<br/><br/>If the parameter is SIMD, the `v4`-`v7` registers are used instead |
| 9+ | Allocates `AlignUp(NumParams - 8 , 2) * 8` bytes on the stack. \*<br/><br/>Copies the 9th and remaining parameters to this area |

\* Aligning the value to an even number guarantees that the stack remains aligned to 16 bytes

If the function accepts a 32-bit integer parameter, the thunk is permitted to only push 32 bits instead of the full 64 bits of the parent register.

Next, the thunk uses an ARM64 `bl` instruction to call the ARM64EC function. After the function returns, the thunk:

1. Undoes any stack allocations
1. Calls the `__os_arm64x_dispatch_ret` emulator helper to pop the x64 return address and resume x64 emulation.

### Exit thunk: ARM64EC to x64 function call

For every call that an ARM64EC C/C++ function makes to potential x64 code, the MSVC toolchain generates an exit thunk. The content of the thunk depends on the parameters of the x64 callee and whether the callee is using the standard calling convention or `__vectorcall`. The compiler obtains this information from a function declaration for the callee.

First, The thunk pushes the return address that's in the ARM64EC `lr` register and a dummy 8-byte value to guarantee that the stack is aligned to 16 bytes. Second, the thunk handles the parameters:

| Parameter number | Stack usage |
|--|--|
| 0-4 | Allocates 32 bytes of home space on the stack |
| 5-8 | Allocates `AlignUp(NumParams - 4, 2) * 8` more bytes higher up on the stack. \* <br/><br/> Copies the 5th and any subsequent parameters from ARM64EC's `x4`-`x7` to this extra space |
| 9+ | Copies the 9th and remaining parameters to the extra space |

\* Aligning the value to an even number guarantees that the stack remains aligned to 16 bytes.

Third, the thunk calls the `__os_arm64x_dispatch_call_no_redirect` emulator helper to invoke the x64 emulator to run the x64 function. The call must be a `blr x16` instruction (conveniently, `x16` is a volatile register). A `blr x16` instruction is required because the x64 emulator parses this instruction as a hint.

The x64 function usually attempts to return to the emulator helper by using an x64 `ret` instruction. At this point, the x64 emulator detects that it's in ARM64EC code. It then reads the preceding 4-byte hint that happens to be the ARM64 `blr x16` instruction. Since this hint indicates that the return address is in this helper, the emulator jumps directly to this address.

The x64 function is permitted to return to the emulator helper using any branch instruction, including x64 `jmp` and `call`. The emulator handles these scenarios as well.

When the helper then returns to the thunk, the thunk:

1. Undoes any stack allocation
1. Pops the ARM64EC `lr` register
1. Executes an ARM64 `ret lr` instruction.

## ARM64EC function name decoration

An ARM64EC function name has a secondary decoration applied after any language-specific decoration. For functions with C linkage (whether compiled as C or by using `extern "C"`), a `#` is prepended to the name. For C++ decorated functions, a `$$h` tag is inserted into the name.

```
foo         => #foo
?foo@@YAHXZ => ?foo@@$$hYAHXZ
```

## `__vectorcall`

The ARM64EC toolchain currently doesn't support `__vectorcall`. The compiler emits an error when it detects `__vectorcall` usage with ARM64EC.

## See also

[Understanding ARM64EC ABI and assembly code](/windows/arm/arm64ec-abi)\
[Common Visual C++ ARM migration issues](common-visual-cpp-arm-migration-issues.md)\
[Decorated names](./reference/decorated-names.md)
