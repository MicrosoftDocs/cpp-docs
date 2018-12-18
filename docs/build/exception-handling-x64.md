---
title: "Exception Handling (x64)"
ms.date: "12/17/2018"
helpviewer_keywords: ["C++ exception handling, x64", "exception handling, x64"]
ms.assetid: 41fecd2d-3717-4643-b21c-65dcd2f18c93
---
# Exception Handling (x64)

This section discusses structured exception handling and C++ exception handling behavior on the x64. For general information on exception handling, see [Exception Handling in Visual C++](../cpp/exception-handling-in-visual-cpp.md).

<!-- - [Unwind Data for Exception Handling, Debugger Support](../build/unwind-data-for-exception-handling-debugger-support.md) -->
## Unwind Data for Exception Handling, Debugger Support

This section discusses the data structures required for exception handling and debugging support.

<!-- - [struct RUNTIME_FUNCTION](../build/struct-runtime-function.md) -->
### struct RUNTIME_FUNCTION

Table-based exception handling requires a table entry for all functions that allocate stack space or call another function (for example, nonleaf functions). Function table entries have the format:

|||
|-|-|
|ULONG|Function start address|
|ULONG|Function end address|
|ULONG|Unwind info address|

The RUNTIME_FUNCTION structure must be DWORD aligned in memory. All addresses are image relative, that is, they are 32-bit offsets from the starting address of the image that contains the function table entry. These entries are sorted, and put in the .pdata section of a PE32+ image. For dynamically generated functions [JIT compilers], the runtime to support these functions must either use RtlInstallFunctionTableCallback or RtlAddFunctionTable to provide this information to the operating system. Failure to do so will result in unreliable exception handling and debugging of processes.

<!-- - [struct UNWIND_INFO](../build/struct-unwind-info.md) -->
### struct UNWIND_INFO

The unwind data info structure is used to record the effects a function has on the stack pointer and where the nonvolatile registers are saved on the stack:

|||
|-|-|
|UBYTE: 3|Version|
|UBYTE: 5|Flags|
|UBYTE|Size of prolog|
|UBYTE|Count of unwind codes|
|UBYTE: 4|Frame Register|
|UBYTE: 4|Frame Register offset (scaled)|
|USHORT \* n|Unwind codes array|
|variable|Can either be of form (1) or (2) below|

(1)  Exception Handler

|||
|-|-|
|ULONG|Address of exception handler|
|variable|Language-specific handler data (optional)|

(2)  Chained Unwind Info

|||
|-|-|
|ULONG|Function start address|
|ULONG|Function end address|
|ULONG|Unwind info address|

The UNWIND_INFO structure must be DWORD aligned in memory. The meaning of each field is as follows:

- **Version**

   Version number of the unwind data, currently 1.

- **Flags**

   Three flags are currently defined:

   |Flag|Description|
   |-|-|
   |`UNW_FLAG_EHANDLER`| The function has an exception handler that should be called when looking for functions that need to examine exceptions.|
   |`UNW_FLAG_UHANDLER`| The function has a termination handler that should be called when unwinding an exception.|
   |`UNW_FLAG_CHAININFO`| This unwind info structure is not the primary one for the procedure. Instead, the chained unwind info entry is the contents of a previous RUNTIME_FUNCTION entry. See the following text for an explanation of chained unwind info structures. If this flag is set, then the UNW_FLAG_EHANDLER and UNW_FLAG_UHANDLER flags must be cleared. Also, the frame register and fixed-stack allocation fields must have the same values as in the primary unwind info.|

- **Size of prolog**

   Length of the function prolog in bytes.

- **Count of unwind codes**

   This is the number of slots in the unwind codes array. Note that some unwind codes (for example, UWOP_SAVE_NONVOL) require more than one slot in the array.

- **Frame register**

   If nonzero, then the function uses a frame pointer, and this field is the number of the nonvolatile register used as the frame pointer, using the same encoding for the operation info field of UNWIND_CODE nodes.

- **Frame register offset (scaled)**

   If the frame register field is nonzero, then this is the scaled offset from RSP that is applied to the FP reg when it is established. The actual FP reg is set to RSP + 16 \* this number, allowing offsets from 0 to 240. This permits pointing the FP reg into the middle of the local stack allocation for dynamic stack frames, allowing better code density through shorter instructions (more instructions can use the 8-bit signed offset form).

- **Unwind codes array**

   This is an array of items that explains the effect of the prolog on the nonvolatile registers and RSP. See the section on UNWIND_CODE for the meanings of individual items. For alignment purposes, this array will always have an even number of entries, with the final entry potentially unused (in which case the array will be one longer than indicated by the count of unwind codes field).

- **Address of exception handler**

   This is an image-relative pointer to either the function's language-specific exception/termination handler (if flag UNW_FLAG_CHAININFO is clear and one of the flags UNW_FLAG_EHANDLER or UNW_FLAG_UHANDLER is set).

- **Language-specific handler data**

   This is the function's language-specific exception handler data. The format of this data is unspecified and completely determined by the specific exception handler in use.

- **Chained Unwind Info**

   If flag UNW_FLAG_CHAININFO is set then the UNWIND_INFO structure ends with three UWORDs.  These UWORDs represent the RUNTIME_FUNCTION information for the function of the chained unwind.

<!-- - [struct UNWIND_CODE](../build/struct-unwind-code.md) -->
### struct UNWIND_CODE

The unwind code array is used to record the sequence of operations in the prolog that affect the nonvolatile registers and RSP. Each code item has the following format:

|||
|-|-|
|UBYTE|Offset in prolog|
|UBYTE: 4|Unwind operation code|
|UBYTE: 4|Operation info|

The array is sorted by descending order of offset in the prolog.

#### Offset in prolog

Offset from the beginning of the prolog of the end of the instruction that performs this operation, plus 1 (that is, the offset of the start of the next instruction).

#### Unwind operation code

Note: Certain operation codes require an unsigned offset to a value in the local stack frame. This offset is from the start (lowest address) of the fixed stack allocation. If the Frame Register field in the UNWIND_INFO is zero, this offset is from RSP. If the Frame Register field is nonzero, this is the offset from where RSP was located when the FP reg was established. This equals the FP reg minus the FP reg offset (16 \* the scaled frame register offset in the UNWIND_INFO). If an FP reg is used, then any unwind code taking an offset must only be used after the FP reg is established in the prolog.

For all opcodes except `UWOP_SAVE_XMM128` and `UWOP_SAVE_XMM128_FAR`, the offset will always be a multiple of 8, because all stack values of interest are stored on 8 byte boundaries (the stack itself is always 16-byte aligned). For operation codes that take a short offset (less than 512K), the final USHORT in the nodes for this code holds the offset divided by 8. For operation codes that take a long offset (512K <= offset < 4GB), the final two USHORT nodes for this code hold the offset (in little-endian format).

For the opcodes `UWOP_SAVE_XMM128` and `UWOP_SAVE_XMM128_FAR`, the offset will always be a multiple of 16, since all 128-bit XMM operations must occur on 16-byte aligned memory. Therefore, a scale factor of 16 is used for `UWOP_SAVE_XMM128`, permitting offsets of less than 1M.

The unwind operation code is one of the following:

`UWOP_PUSH_NONVOL` (0) 1 node

Push a nonvolatile integer register, decrementing RSP by 8. The operation info is the number of the register. Note that, because of the constraints on epilogs, `UWOP_PUSH_NONVOL` unwind codes must appear first in the prolog and correspondingly, last in the unwind code array. This relative ordering applies to all other unwind codes except `UWOP_PUSH_MACHFRAME`.

`UWOP_ALLOC_LARGE` (1) 2 or 3 nodes

Allocate a large-sized area on the stack. There are two forms. If the operation info equals 0, then the size of the allocation divided by 8 is recorded in the next slot, allowing an allocation up to 512K - 8. If the operation info equals 1, then the unscaled size of the allocation is recorded in the next two slots in little-endian format, allowing allocations up to 4GB - 8.

`UWOP_ALLOC_SMALL` (2)1 node

Allocate a small-sized area on the stack. The size of the allocation is the operation info field \* 8 + 8, allowing allocations from 8 to 128 bytes.

The unwind code for a stack allocation should always use the shortest possible encoding:

|**Allocation Size**|**Unwind Code**|
|-|-|
|8 to 128 bytes|`UWOP_ALLOC_SMALL`|
|136 to 512K-8 bytes|`UWOP_ALLOC_LARGE`, operation info = 0|
|512K to 4G-8 bytes|`UWOP_ALLOC_LARGE`, operation info = 1|

`UWOP_SET_FPREG` (3) 1 node

Establish the frame pointer register by setting the register to some offset of the current RSP. The offset is equal to the Frame Register offset (scaled) field in the UNWIND_INFO \* 16, allowing offsets from 0 to 240. The use of an offset permits establishing a frame pointer that points to the middle of the fixed stack allocation, helping code density by allowing more accesses to use short instruction forms. Note that the operation info field is reserved and should not be used.

`UWOP_SAVE_NONVOL` (4) 2 nodes

Save a nonvolatile integer register on the stack using a MOV instead of a PUSH. This is primarily used for shrink-wrapping, where a nonvolatile register is saved to the stack in a position that was previously allocated. The operation info is the number of the register. The scaled-by-8 stack offset is recorded in the next unwind operation code slot, as described in the note above.

`UWOP_SAVE_NONVOL_FAR` (5) 3 nodes

Save a nonvolatile integer register on the stack with a long offset, using a MOV instead of a PUSH. This is primarily used for shrink-wrapping, where a nonvolatile register is saved to the stack in a position that was previously allocated. The operation info is the number of the register. The unscaled stack offset is recorded in the next two unwind operation code slots, as described in the note above.

`UWOP_SAVE_XMM128` (8) 2 nodes

Save all 128 bits of a nonvolatile XMM register on the stack. The operation info is the number of the register. The scaled-by-16 stack offset is recorded in the next slot.

`UWOP_SAVE_XMM128_FAR` (9) 3 nodes

Save all 128 bits of a nonvolatile XMM register on the stack with a long offset. The operation info is the number of the register. The unscaled stack offset is recorded in the next two slots.

`UWOP_PUSH_MACHFRAME` (10) 1 node

Push a machine frame.  This is used to record the effect of a hardware interrupt or exception. There are two forms. If the operation info equals 0, the following has been pushed on the stack:

|||
|-|-|
|RSP+32|SS|
|RSP+24|Old RSP|
|RSP+16|EFLAGS|
|RSP+8|CS|
|RSP|RIP|

If the operation info equals 1, then the following has instead been pushed:

|||
|-|-|
|RSP+40|SS|
|RSP+32|Old RSP|
|RSP+24|EFLAGS|
|RSP+16|CS|
|RSP+8|RIP|
|RSP|Error code|

This unwind code will always appear in a dummy prolog, which is never actually executed but instead appears before the real entry point of an interrupt routine, and exists only to provide a place to simulate the push of a machine frame. `UWOP_PUSH_MACHFRAME` records that simulation, which indicates the machine has conceptually done the following:

1. Pop RIP return address from top of stack into *Temp*

1. Push SS

1. Push old RSP

1. Push EFLAGS

1. Push CS

1. Push *Temp*

1. Push Error Code (if op info equals 1)

The simulated `UWOP_PUSH_MACHFRAME` operation decrements RSP by 40 (op info equals 0) or 48 (op info equals 1).

#### Operation info

The meaning of these 4 bits depends upon the operation code. To encode a general-purpose (integer) register, the following mapping is used:

|||
|-|-|
|0|RAX|
|1|RCX|
|2|RDX|
|3|RBX|
|4|RSP|
|5|RBP|
|6|RSI|
|7|RDI|
|8 to 15|R8 to R15|


<!-- - [Chained Unwind Info Structures](../build/chained-unwind-info-structures.md) -->
### Chained Unwind Info Structures

If the UNW_FLAG_CHAININFO flag is set, then an unwind info structure is a secondary one, and the shared exception-handler/chained-info address field contains the primary unwind information. The following code retrieves the primary unwind information, assuming that `unwindInfo` is the structure that has the UNW_FLAG_CHAININFO flag set.

```cpp
PRUNTIME_FUNCTION primaryUwindInfo = (PRUNTIME_FUNCTION)&(unwindInfo->UnwindCode[( unwindInfo->CountOfCodes + 1 ) & ~1]);
```

Chained info is useful in two situations. First, it can be used for noncontiguous code segments. By using chained info, you can reduce the size of the required unwind information, because you do not have to duplicate the unwind codes array from the primary unwind info.

You can also use chained info to group volatile register saves. The compiler may delay saving some volatile registers until it is outside of the function entry prolog. You can record this by having primary unwind info for the portion of the function before the grouped code, and then setting up chained info with a non-zero size of prolog, where the unwind codes in the chained info reflect saves of the nonvolatile registers. In that case, the unwind codes are all instances of UWOP_SAVE_NONVOL. A grouping that saves nonvolatile registers by using a PUSH or modifies the RSP register by using an additional fixed stack allocation is not supported.

An UNWIND_INFO item that has UNW_FLAG_CHAININFO set can contain a RUNTIME_FUNCTION entry whose UNWIND_INFO item also has UNW_FLAG_CHAININFO set (multiple shrink-wrapping). Eventually, the chained unwind info pointers will arrive at an UNWIND_INFO item that has UNW_FLAG_CHAININFO cleared; this is the primary UNWIND_INFO item, which points to the actual procedure entry point.

<!-- - [The Unwind Procedure](../build/unwind-procedure.md) -->
## Unwind Procedure

The unwind code array is sorted into descending order. When an exception occurs, the complete context is stored by the operating system in a context record. The exception dispatch logic is then invoked, which repeatedly executes the following steps to find an exception handler.

1. Use the current RIP stored in the context record to search for a RUNTIME_FUNCTION table entry that describes the current function (or function portion, in the case of chained UNWIND_INFO entries).

1. If no function table entry is found, then it is in a leaf function, and RSP will directly address the return pointer. The return pointer at [RSP] is stored in the updated context, the simulated RSP is incremented by 8, and step 1 is repeated.

1. If a function table entry is found, RIP can lie within three regions a) in an epilog, b) in the prolog, or c) in code that may be covered by an exception handler.

   - Case a) If the RIP is within an epilog, then control is leaving the function, there can be no exception handler associated with this exception for this function, and the effects of the epilog must be continued to compute the context of the caller function. To determine if the RIP is within an epilog, the code stream from RIP on is examined. If that code stream can be matched to the trailing portion of a legitimate epilog, then it is in an epilog, and the remaining portion of the epilog is simulated, with the context record updated as each instruction is processed. After this, step 1 is repeated.

   - Case b) If the RIP lies within the prologue, then control has not entered the function, there can be no exception handler associated with this exception for this function, and the effects of the prolog must be undone to compute the context of the caller function. The RIP is within the prolog if the distance from the function start to the RIP is less than or equal to the prolog size encoded in the unwind info. The effects of the prolog are unwound by scanning forward through the unwind codes array for the first entry with an offset less than or equal to the offset of the RIP from the function start, then undoing the effect of all remaining items in the unwind code array. Step 1 is then repeated.

   - Case c) If the RIP is not within a prolog or epilog and the function has an exception handler (UNW_FLAG_EHANDLER is set), then the language specific handler is called. The handler scans its data and calls filter functions as appropriate. The language specific handler can return that the exception was handled or that the search is to be continued. It can also initiate an unwind directly.

1. If the language specific handler returns a handled status, then execution is continued using the original context record.

1. If there is no language specific handler or the handler returns a "continue search" status, then the context record must be unwound to the state of the caller. This is accomplished by processing all of the unwind code array elements, undoing the effect of each. Step 1 is then repeated.

When chained unwind info is involved, these basic steps are still followed. The only difference is that, while walking the unwind code array to unwind a prolog’s effects, once the end of the array is reached, it is then linked to the parent unwind info and the entire unwind code array found there is walked. This linking continues until arriving at an unwind info without the UNW_CHAINED_INFO flag and finish walking its unwind code array.

The smallest set of unwind data is 8 bytes. This would represent a function that only allocated 128 bytes of stack or less, and possibly saved one nonvolatile register. This is also the size of a chained unwind info structure for a zero-length prolog with no unwind codes.

<!-- - [The Language Specific Handler](../build/language-specific-handler.md) -->
## Language Specific Handler

The relative address of the language specific handler is present in the UNWIND_INFO whenever flags UNW_FLAG_EHANDLER or UNW_FLAG_UHANDLER are set. As described in the previous section, the language specific handler is called as part of the search for an exception handler or as part of an unwind. It has the following prototype:

```cpp
typedef EXCEPTION_DISPOSITION (*PEXCEPTION_ROUTINE) (
    IN PEXCEPTION_RECORD ExceptionRecord,
    IN ULONG64 EstablisherFrame,
    IN OUT PCONTEXT ContextRecord,
    IN OUT PDISPATCHER_CONTEXT DispatcherContext
);
```

**ExceptionRecord** supplies a pointer to an exception record, which has the standard Win64 definition.

**EstablisherFrame** is the address of the base of the fixed stack allocation for this function.

**ContextRecord** points to the exception context at the time the exception was raised (in the exception handler case) or the current "unwind" context (in the termination handler case).

**DispatcherContext** points to the dispatcher context for this function. It has the following definition:

```cpp
typedef struct _DISPATCHER_CONTEXT {
    ULONG64 ControlPc;
    ULONG64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
    ULONG64 EstablisherFrame;
    ULONG64 TargetIp;
    PCONTEXT ContextRecord;
    PEXCEPTION_ROUTINE LanguageHandler;
    PVOID HandlerData;
} DISPATCHER_CONTEXT, *PDISPATCHER_CONTEXT;
```

**ControlPc** is the value of RIP within this function. This is either an exception address or the address at which control left the establishing function. This is the RIP that will be used to determine if control is within some guarded construct within this function (for example, a __try block for \__try/\__except or \__try/\__finally).

**ImageBase** is the image base (load address) of the module containing this function, to be added to the 32-bit offsets used in the function entry and unwind info to record relative addresses.

**FunctionEntry** supplies a pointer to the RUNTIME_FUNCTION function entry holding the function and unwind info image-base relative addresses for this function.

**EstablisherFrame** is the address of the base of the fixed stack allocation for this function.

**TargetIp** Supplies an optional instruction address that specifies the continuation address of the unwind. This address is ignored if **EstablisherFrame** is not specified.

**ContextRecord** points to the exception context, for use by the system exception dispatch/unwind code.

**LanguageHandler** points to the language-specific language handler routine being called.

**HandlerData** points to the language-specific handler data for this function.

<!-- - [Unwind Helpers for MASM](../build/unwind-helpers-for-masm.md) -->
## Unwind Helpers for MASM

In order to write proper assembly routines, there are a set of pseudo-operations that can be used in parallel with the actual assembly instructions to create the appropriate .pdata and .xdata. There are also a set of macros that provide simplified use of the pseudo-operations for their most common uses.

<!-- - [Raw Pseudo Operations](../build/raw-pseudo-operations.md) -->
### Raw Pseudo Operations

|Pseudo operation|Description|
|-|-|
|PROC FRAME [:ehandler]|Causes MASM to generate a function table entry in .pdata and unwind information in .xdata for a function's structured exception handling unwind behavior.  If ehandler is present, this proc is entered in the .xdata as the language specific handler.<br /><br /> When the FRAME attribute is used, it must be followed by an .ENDPROLOG directive.  If the function is a leaf function (as defined in [Function Types](../build/stack-usage.md#function-types)) the FRAME attribute is unnecessary, as are the remainder of these pseudo-operations.|
|.PUSHREG reg|Generates a UWOP_PUSH_NONVOL unwind code entry for the specified register number using the current offset in the prologue.<br /><br /> This should only be used with nonvolatile integer registers.  For pushes of volatile registers, use an .ALLOCSTACK 8, instead|
|.SETFRAME reg, offset|Fills in the frame register field and offset in the unwind information using the specified register and offset. The offset must be a multiple of 16 and less than or equal to 240. This directive also generates a UWOP_SET_FPREG unwind code entry for the specified register using the current prologue offset.|
|.ALLOCSTACK size|Generates a UWOP_ALLOC_SMALL or a UWOP_ALLOC_LARGE with the specified size for the current offset in the prologue.<br /><br /> The size operand must be a multiple of 8.|
|.SAVEREG reg, offset|Generates either a UWOP_SAVE_NONVOL or a UWOP_SAVE_NONVOL_FAR unwind code entry for the specified register and offset using the current prologue offset. MASM will choose the most efficient encoding.<br /><br /> Offset must be positive, and a multiple of 8.  Offset is relative to the base of the procedure’s frame, which is generally in RSP, or, if using a frame pointer, the unscaled frame pointer.|
|.SAVEXMM128 reg, offset|Generates either a UWOP_SAVE_XMM128 or a UWOP_SAVE_XMM128_FAR unwind code entry for the specified XMM register and offset using the current prologue offset. MASM will choose the most efficient encoding.<br /><br /> Offset must be positive, and a multiple of 16.  Offset is relative to the base of the procedure’s frame, which is generally in RSP, or, if using a frame pointer, the unscaled frame pointer.|
|.PUSHFRAME [code]|Generates a UWOP_PUSH_MACHFRAME unwind code entry. If the optional code is specified, the unwind code entry is given a modifier of 1. Otherwise the modifier is 0.|
|.ENDPROLOG|Signals the end of the prologue declarations.  Must occur in the first 255 bytes of the function.|

Here is a sample function prolog with proper usage of most of the opcodes:

```MASM
sample PROC FRAME
   db      048h; emit a REX prefix, to enable hot-patching
   push rbp
   .pushreg rbp
   sub rsp, 040h
   .allocstack 040h
   lea rbp, [rsp+020h]
   .setframe rbp, 020h
   movdqa [rbp], xmm7
   .savexmm128 xmm7, 020h ;the offset is from the base of the frame
                          ;not the scaled offset of the frame
   mov [rbp+018h], rsi
   .savereg rsi, 038h
   mov [rsp+010h], rdi
   .savereg rdi, 010h ; you can still use RSP as the base of the frame
                      ; or any other register you choose
   .endprolog

; you can modify the stack pointer outside of the prologue (similar to alloca)
; because we have a frame pointer.
; if we didn’t have a frame pointer, this would be illegal
; if we didn’t make this modification,
; there would be no need for a frame pointer

   sub rsp, 060h

; we can unwind from the following AV because of the frame pointer

   mov rax, 0
   mov rax, [rax] ; AV!

; restore the registers that weren’t saved with a push
; this isn’t part of the official epilog, as described in section 2.5

   movdqa xmm7, [rbp]
   mov rsi, [rbp+018h]
   mov rdi, [rbp-010h]

; Here’s the official epilog

   lea rsp, [rbp-020h]
   pop rbp
   ret
sample ENDP
```

<!-- - [MASM Macros](../build/masm-macros.md) -->
### MASM Macros

In order to simplify the use of the [Raw Pseudo Operations](#raw-pseudo-operations), there are a set of macros, defined in ksamd64.inc, which can be used to create typical procedure prologues and epilogues.

|Macro|Description|
|-|-|
|alloc_stack(n)|Allocates a stack frame of n bytes (using sub rsp, n), and emits the appropriate unwind information (.allocstack n)|
|save_reg reg, loc|Saves a nonvolatile register reg on the stack at RSP offset loc, and emits the appropriate unwind information. (.savereg reg, loc)|
|push_reg reg|Pushes a nonvolatile register reg on the stack, and emits the appropriate unwind information. (.pushreg reg)|
|rex_push_reg reg|Save a nonvolatile register on the stack using a 2 byte push, and emits the appropriate unwind information (.pushreg reg)  This should be used if the push is the first instruction in the function to ensure that the function is hot-patchable.|
|save_xmm128 reg, loc|Saves a nonvolatile XMM register reg on the stack at RSP offset loc, and emits the appropriate unwind information (.savexmm128 reg, loc)|
|set_frame reg, offset|Sets the frame register reg to be the RSP + offset (using a mov, or an lea), and emits the appropriate unwind information (.set_frame reg, offset)|
|push_eflags|Pushes the eflags with a pushfq instruction, and emits the appropriate unwind information (.alloc_stack 8)|

Here is a sample function prolog with proper usage of the macros:

```MASM
SkFrame struct
    Fill    dq ?; fill to 8 mod 16
    SavedRdi dq ?; saved register RDI
    SavedRsi dq ?; saved register RSI
SkFrame ends

sampleFrame struct
    Filldq?; fill to 8 mod 16
    SavedRdidq?; Saved Register RDI
    SavedRsi  dq?; Saved Register RSI
sampleFrame ends

sample2 PROC FRAME
    alloc_stack(sizeof sampleFrame)
    save_reg rdi, sampleFrame.SavedRdi
    save_reg rsi, sampleFrame.SavedRsi
    .end_prolog

; function body

    mov rsi, sampleFrame.SavedRsi[rsp]
    mov rdi, sampleFrame.SavedRdi[rsp]

; Here’s the official epilog

    add rsp, (sizeof sampleFrame)
    ret
sample2 ENDP
```

<!-- - [Unwind Data Definitions in C](../build/unwind-data-definitions-in-c.md) -->
## Unwind Data Definitions in C

The following is a C description of the unwind data:

```C
typedef enum _UNWIND_OP_CODES {
    UWOP_PUSH_NONVOL = 0, /* info == register number */
    UWOP_ALLOC_LARGE,     /* no info, alloc size in next 2 slots */
    UWOP_ALLOC_SMALL,     /* info == size of allocation / 8 - 1 */
    UWOP_SET_FPREG,       /* no info, FP = RSP + UNWIND_INFO.FPRegOffset*16 */
    UWOP_SAVE_NONVOL,     /* info == register number, offset in next slot */
    UWOP_SAVE_NONVOL_FAR, /* info == register number, offset in next 2 slots */
    UWOP_SAVE_XMM128 = 8, /* info == XMM reg number, offset in next slot */
    UWOP_SAVE_XMM128_FAR, /* info == XMM reg number, offset in next 2 slots */
    UWOP_PUSH_MACHFRAME   /* info == 0: no error-code, 1: error-code */
} UNWIND_CODE_OPS;

typedef union _UNWIND_CODE {
    struct {
        UBYTE CodeOffset;
        UBYTE UnwindOp : 4;
        UBYTE OpInfo   : 4;
    };
    USHORT FrameOffset;
} UNWIND_CODE, *PUNWIND_CODE;

#define UNW_FLAG_EHANDLER  0x01
#define UNW_FLAG_UHANDLER  0x02
#define UNW_FLAG_CHAININFO 0x04

typedef struct _UNWIND_INFO {
    UBYTE Version       : 3;
    UBYTE Flags         : 5;
    UBYTE SizeOfProlog;
    UBYTE CountOfCodes;
    UBYTE FrameRegister : 4;
    UBYTE FrameOffset   : 4;
    UNWIND_CODE UnwindCode[1];
/*  UNWIND_CODE MoreUnwindCode[((CountOfCodes + 1) & ~1) - 1];
*   union {
*       OPTIONAL ULONG ExceptionHandler;
*       OPTIONAL ULONG FunctionEntry;
*   };
*   OPTIONAL ULONG ExceptionData[]; */
} UNWIND_INFO, *PUNWIND_INFO;

typedef struct _RUNTIME_FUNCTION {
    ULONG BeginAddress;
    ULONG EndAddress;
    ULONG UnwindData;
} RUNTIME_FUNCTION, *PRUNTIME_FUNCTION;

#define GetUnwindCodeEntry(info, index) \
    ((info)->UnwindCode[index])

#define GetLanguageSpecificDataPtr(info) \
    ((PVOID)&GetUnwindCodeEntry((info),((info)->CountOfCodes + 1) & ~1))

#define GetExceptionHandler(base, info) \
    ((PEXCEPTION_HANDLER)((base) + *(PULONG)GetLanguageSpecificDataPtr(info)))

#define GetChainedFunctionEntry(base, info) \
    ((PRUNTIME_FUNCTION)((base) + *(PULONG)GetLanguageSpecificDataPtr(info)))

#define GetExceptionDataPtr(info) \
    ((PVOID)((PULONG)GetLanguageSpecificData(info) + 1)
```

## See Also

[x64 Software Conventions](../build/x64-software-conventions.md)