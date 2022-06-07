---
description: "Learn more about: Overview of Arm64EC ABI conventions"
title: "Overview of Arm64EC ABI conventions"
ms.date: "06/03/2022"
---
# Overview of Arm64EC ABI conventions

Arm64EC is an application binary interface (ABI) that enables Arm64 binaries to run natively and be interoperable with x64. Specifically, the Arm64EC ABI follows x64 software conventions including calling convention, stack usage and data alignment, making Arm64EC and x64 interoperable. The operating system emulates the x64 portion of the binary (EC stands for emulation compatible).

For the details on the x64 and Arm64 ABIs, see [Overview of x64 ABI conventions](x64-software-conventions.md) and [Overview of ARM64 ABI conventions](arm64-windows-abi-conventions.md) respectively.

Arm64EC does not solve memory model differences between x64 and Arm based architectures. See [Common Visual C++ ARM Migration Issues](common-visual-cpp-arm-migration-issues.md) for more details.

## Definitions

- **Arm64** - The code stream for Arm64 processes containing traditional Arm64 code.
- **Arm64EC** - The Arm64 code stream that utilizes a subset of the Arm64 register set to provide interoperability with x64 code.

## Register mapping

x64 processes may have threads running Arm64EC code so an x64 register context can always be retrieved. To support this, Arm64EC uses a subset of the Arm64 core registers that map 1:1 to emulated x64 registers.  Importantly, Arm64EC never uses registers outside of this subset, except to read the Thread Environment Block (TEB) address from `x18`.
To ensure that native Arm64 processes do not regress in performance when some or many functions are recompiled as Arm64EC, the following principles are maintained:

- The Arm64EC register subset includes all registers that are part of the Arm64 function calling convention.

- The Arm64EC calling convention directly maps to the Arm64 calling convention.

Special helper routines like `__chkstk_Arm64ec` use custom calling conventions and registers. These registers are also included in the Arm64EC subset of registers.

## Register mapping for integer registers

|Arm64EC register|x64 register|Arm64EC calling convention|Arm64 calling convention|x64 calling convention|
|---|---|---|---|---|
|`x0`|`rcx`|volatile|volatile|volatile|
|`x1`|`rdx`|volatile|volatile|volatile|
|`x2`|`r8`|volatile|volatile|volatile|
|`x3`|`r9`|volatile|volatile|volatile|
|`x4`|`r10`|volatile|volatile|volatile|
|`x5`|`r11`|volatile|volatile|volatile|
|`x6`|`mm1` (low 64 bits of x87 `R1` register)|volatile|volatile|volatile|
|`x7`|`mm2` (low 64 bits of x87 `R2` register)|volatile|volatile|volatile|
|`x8`|`rax`|volatile|volatile|volatile|
|`x9`|`mm3` (low 64 bits of x87 `R3` register)|volatile|volatile|volatile|
|`x10`|`mm4` (low 64 bits of x87 `R4` register)|volatile|volatile|volatile|
|`x11`|`mm5` (low 64 bits of x87 `R5` register)|volatile|volatile|volatile|
|`x12`|`mm6` (low 64 bits of x87 `R6` register)|volatile|volatile|volatile|
|`x13`|N/A|disallowed|volatile|N/A|
|`x14`|N/A|disallowed|volatile|N/A|
|`x15`|`mm7` (low 64 bits of x87 `R7` register)|volatile|volatile|volatile|
|`x16`|High 16 bits of each of the x87 `R0-R3` registers|volatile(xip0)|volatile(xip0)|volatile|
|`x17`|High 16 bits of each of the x87 `R4-R7` registers|volatile(xip1)|volatile(xip1)|volatile|
|`x18`|N/A|fixed(TEB)|fixed(TEB)|volatile|
|`x19`|`r12`|non-volatile|non-volatile|non-volatile|
|`x20`|`r13`|non-volatile|non-volatile|non-volatile|
|`x21`|`r14`|non-volatile|non-volatile|non-volatile|
|`x22`|`r15`|non-volatile|non-volatile|non-volatile|
|`x23`|N/A|disallowed|non-volatile|N/A|
|`x24`|N/A|disallowed|non-volatile|N/A|
|`x25`|`rsi`|non-volatile|non-volatile|non-volatile|
|`x26`|`rdi`|non-volatile|non-volatile|non-volatile|
|`x27`|`rbx`|non-volatile|non-volatile|non-volatile|
|`x28`|N/A|disallowed|disallowed|N/A|
|`fp`|`rbp`|non-volatile|non-volatile|non-volatile|
|`lr`|`mm0` (low 64 bits of x87 `R0` register)|volatile|volatile|N/A|
|`sp`|`rsp`|non-volatile|non-volatile|non-volatile|
|`pc`|`rip`|instruction pointer|instruction pointer|instruction pointer|
|PSTATE subset: N/Z/C/V/SS [*][^]|RFLAGS subset: SF/ZF/CF/OF/TF|volatile|volatile|volatile|
|N/A|RFLAGS subset: PF/AF|N/A|N/A|volatile|
|N/A|RFLAGS subset: DF|N/A|N/A|non-volatile|

[*] Avoid directly reading, writing or computing mappings of PSTATE <-> RFLAGS. These bits may be used in the future and are subject to change.

[^] The Arm64EC carry flag `C` is the inverse of the x64 carry flag `CF` for subtraction operations. There is no special handling because the flag is volatile and is therefore trashed when transitioning between (Arm64EC and x64) functions.

## Register mapping for vector registers

|Arm64EC register|x64 register|Arm64EC calling convention|Arm64 calling convention|x64 calling convention|
|---|---|---|---|---|
|`v0-v5`|`xmm0-xmm5`|volatile|volatile|volatile|
|`v6-v7`|`xmm6-xmm7`|volatile|volatile|non-volatile|
|`v8-v15`|`xmm8-xmm15`|volatile [*]|volatile [*]|non-volatile|
|`v16-v31`|`xmm16-xmm31`|disallowed|volatile|disallowed (x64 emulator doesn't support AVX-512)|
|`FPCR` [^]|`MXCSR`[15:6]|non-volatile|non-volatile|non-volatile|
|`FPSR` [^]|`MXCSR`[5:0]|volatile|volatile|volatile|

[*] These Arm64 registers are special in that the lower 64 bits are non-volatile but the upper 64 bits are volatile.  From the point of view of an x64 caller they are in effect volatile because the callee would trash data.

[^] Avoid directly reading, writing or computing mappings of `FPCR` and `FPSR`. These bits may be used in the future and are subject to change.

## Struct packing

Arm64EC uses the struct packing rules that are used for x64 code. Consider a field that has an alignment specifier. Empirically, x64 rounds the size of the struct to the next multiple of the alignment, whereas Arm64 rounds the size of the struct to the next multiple of 8.

## Emulation Helper ABI Routines

Arm64EC code and [thunks](#thunks) use these routines to transition between x64 and Arm64EC functions.

The following table describes each special ABI routine and the registers the ABI uses. The routines don't modify the listed preserved registers under the ABI column. No assumptions should be made about unlisted registers. On-disk, the ABI routine pointers are null. At load time, the loader updates the pointers to point to the x64 emulator routines.

|Name|Description|ABI|
|---|---|---|
|`__os_arm64x_dispatch_call_no_redirect`|Called by an exit thunk to call an x64 target (either an x64 function or an x64 fast-forward sequence). The routine pushes the Arm64EC return address (in the `LR` register) followed by the address of the instruction that succeeds a `blr x16` instruction that invokes the x64 emulator. It then runs the `blr x16` instruction|return value in `x8 (rax)`|
|`__os_arm64x_dispatch_ret`|Called by an entry thunk to return to its x64 caller. It pops the x64 return address from the stack and invokes the x64 emulator to jump to it|N/A
|`__os_arm64x_check_call`|Called by Arm64EC code with a pointer to an exit thunk and the indirect Arm64EC target address to execute. The Arm64EC target is considered patchable, and execution will always return to the caller with either the same data it was called with, or with modified data|Arguments:<br/>`x9`: The target address<br/>`x10`: The iexit thunk address<br/>`x11`: The fast forward sequence address<br/><br/>Out:<br/>`x9`: If the target function was detoured, this will contain the address of the fast forward sequence<br/>`x10`: The iexit thunk address<br/>`x11`: If the function was detoured, the iexit thunk address. Otherwise, the target address jumped to<br/><br/>Preserved registers: `x0-x8`, `x15(chkstk)` and `q0-q7`|
|`__os_arm64x_check_icall`|Called by Arm64EC code, with a pointer to an exit thunk, to handle a jump to either a target address that is either x64 or Arm64EC. It uses the `Arm64ECCodeRanges` table to determine the architecture of the target. If the target is x64 and the x64 code has not been patched, the routine sets the target address register to point to the Arm64EC version of the function if one exists.  Otherwise, it sets the register to point to the exit thunk that will transition to the x64 target. Then, it returns to the calling Arm64EC code, which will then jump to the address in the register. This is a non-optimized version of `__os_arm64x_check_call` where the target address isn’t known at compile time<br/><br/>Used at a call-site of an indirect call | Arguments:<br/>`x9`: The target address<br/>`x10`: The iexit thunk address<br/>`x11`: The fast forward sequence address<br/><br/>Out:<br/>`x9`: If the target function was detoured, this will contain the address of the fast forward sequence<br/>`x10`: The iexit thunk address<br/>`x11`: If the function was detoured, the iexit thunk address. Otherwise, the target address jumped to<br/><br/>Preserved registers: `x0-x8`, `x15(chkstk)` and `q0-q7`|
|`__os_arm64x_check_icall_cfg`|Same as `__os_arm64x_check_icall` but also checks that that the specified address is a valid Control Flow Graph indirect call target|Arguments:<br/>`x10`: The address of the exit thunk<br/>`x11`: The address of the target function<br/><br/>Out:<br/>`x9`: If the target is x64, the address to the function. Otherwise, undefined<br/>`x10`: The address of the exit thunk<br/>`x11`: If the target is x64, the address of the exit thunk. Otherwise, the address of the function<br/><br/>Preserved registers: `x0-x8`, `x15(chkstk)` and `q0-q7`|
|`__os_arm64x_get_x64_information`|Gets the requested part of the live x64 register context|`_Function_class_(Arm64X_GET_X64_INFORMATION) NTSTATUS LdrpGetX64Information(_In_ ULONG Type, _Out_ PVOID Output, _In_ PVOID ExtraInfo)`|
|`__os_arm64x_set_x64_information`|Sets the requested part of the live x64 register context|`_Function_class_(Arm64X_SET_X64_INFORMATION) NTSTATUS LdrpSetX64Information(_In_ ULONG Type,_In_ PVOID Input, _In_ PVOID ExtraInfo)`|
|`__os_arm64x_x64_jump`|Used in signature-less adjustor and other thunks that just forward (`jmp`) a call to another function which can have any signature, deferring the potential application of the right thunk to the real target|Arguments:<br/>`x9`: target to jump to<br/><br/>All parameter registers preserved (forwarded)

## Thunks

Thunks are the low-level mechanisms to support Arm64EC and x64 functions calling each other. There are two types: entry thunks for entering Arm64EC functions and exit thunks for calling x64 functions.

### IEntry thunk and intrinsic entry thunks: x64 -> Arm64EC Function Call

When compiling a C/C++ function as Arm64EC, a single entry thunk consisting of Arm64EC machine code is generated by the C++ toolchain to support x64 callers. Intrinsics have an entry thunk that is theirs.  All other functions share an ientry thunk with functions of matching calling convention, parameters, and return type. The content of the thunk depends on the calling convention of the C/C++ function.

Note that in addition to handling parameters and the return address, the thunk bridges the differences in volatility between Arm64EC and x64 vector registers [from Arm64EC vector register mapping](#Register-mapping-for-vector-registers):

|Arm64EC Register|x64 Register|Arm64EC calling convention|Arm64 calling convention|x64 calling convention|
|---|---|---|---|---|
|`v6-v15`|`xmm6-xmm15`|volatile, but saved/restored in the entry thunk (x64 -> Arm64EC)|volatile or partially volatile upper 64 bits|non-volatile|

The entry thunk performs the following:

|Parameter number|Stack usage|Stack unwind codes|
|---|---|---|
|0-4|Stores Arm64EC `v6` and `v7` into the caller-allocated home space<br/><br/>Since the callee is Arm64EC, which does not have the notion of a home space, the stored values aren't subsequently clobbered.<br/><br/>Allocates an additional 128 bytes on the stack and store Arm64EC `v8` through `v15`.|`UWOP_SAVE_XMM128` for `xmm6` and `xmm7`<br/><br/>`UWOP_ALLOC_SMALL` + `UWOP_SAVE_XMM128` for `xmm8-xmm15`|
|5-8|`x4` = 5th parameter from the stack<br/>`x5` = 6th parameter from the stack<br/>`x6` = 7th parameter from the stack<br/>`x7` = 8th parameter from the stack<br/><br/>If the parameter is SIMD, the `v4-v7` registers will be used instead|Same as above|
|9+|Allocates _AlignUp(NumParams – 8 , 2) * 8_ bytes on the stack. [*]<br/><br/>Copies the 9th and remaining parameters to this area|`UWOP_ALLOC_SMALL`|

[*] Aligning the value to an even number guarantees that the stack remains aligned to 16 bytes

Note that if the function accepts a 32-bit integer parameter, the thunk is permitted to only push 32 bits instead of the full 64 bits of the parent register.

Then, the thunk uses an Arm64 `bl` instruction to call the Arm64EC function.  After the function returns, the thunk:
1.	Undoes any stack allocations
2.	Calls the `__os_Arm64x_dispatch_ret` emulator helper to pop the x64 return address and resume x64 emulation.

### Exit Thunk: Arm64EC -> x64 Function Call
For every call that an Arm64EC C/C++ function makes to potential x64 code, the MSVC toolchain generates an exit thunk. The content of the thunk depends on the parameters of the x64 callee and whether the callee is using the standard calling convention or _\_\_vectorcall_. The compiler obtains this information from a function declaration for the callee.

The thunk first pushes the return address that is in the Arm64EC `lr` register and a dummy 8-byte value to guarantee that the stack is aligned to 16 bytes.  Secondly, the thunk handles the parameters:

|Parameter number|Stack usage|Stack unwind codes|
|---|---|---|
|0-4|Allocates 32 bytes of home space on the stack|`UWOP_ALLOC_SMALL`|
|5-8|Allocates an additional _AlignUp(NumParams – 4, 2) * 8_ bytes higher up on the stack. [*] <br/><br/> Copies the 5th and any subsequent parameters from Arm64EC’s `x4-x7` to this additional space|`UWOP_ALLOC_SMALL`|
|9+|Copies the 9th and remaining parameters to the additional space|`UWOP_ALLOC_SMALL`|

[*] Aligning the value to an even number guarantees that the stack remains aligned to 16 bytes.

Thirdly, the thunk calls the `__os_Arm64x_dispatch_call_no_redirect` emulator helper to invoke the x64 emulator to run the x64 function. The call must be a `blr x16` instruction (conveniently, `x16` is a volatile register). Note that `blr x16` must be used as the x64 emulator parses this as a hint.

The x64 function usually attempts to return to the emulator helper using an x64 `ret` instruction. At this point, the x64 emulator reads the `Arm64ECCodeRanges` table to detect that it is in Arm64EC code. It then reads the preceding 4-byte hint that happens to be the Arm64 `blr x16` instruction.  Since this indicates that the return address is in this helper, the emulator jumps directly to this address.

Note that the x64 function is permitted to return to the emulator helper using any branch instruction, including x64 `jmp` and `call`.  The emulator handles these scenarios as well.

When the helper subsequently returns to the thunk, the thunk:
1.	Undoes any stack allocation
2.	Pops the Arm64EC `lr` register
3.	Executes an Arm64 `ret lr` instruction.

## x64 Unwinding of an Arm64EC Function

### Recovering the Return Address
At the beginning of an x64 function, the return address is pointed to by the stack pointer, having been pushed onto the stack by the caller’s `call` instruction. In contrast, at the beginning of an Arm64EC function, the return address is in the LR register, having been set by the caller’s `bl` instruction. Therefore, when unwinding the deepest frame of a stack, if the frame corresponds to an Arm64EC function, the x64 unwinder must recreate the value of Arm64EC `lr` by reading the value stashed in the x87 registers when the exception occurred. Additionally, the new x64 unwind code `UWOP_SAVE_RET` handles the prolog saving Arm64EC `lr` to the stack.

## __vectorcall

The Arm64EC toolchain currently does not support _\_\_vectorcall_. The compiler emits an error when it detects _\_\_vectorcall_ usage with Arm64EC.

## See also

[Understanding Arm64EC ABI and assembly code](https://docs.microsoft.com/en-us/windows/arm/arm64ec-abi)<br/>
[Common Visual C++ ARM Migration Issues](common-visual-cpp-arm-migration-issues.md)<br/>

