---
description: "Learn more about: __preserve_none"
title: "__preserve_none"
ms.date: 02/11/2026
f1_keywords: ["__preserve_none", "register spilling", "non preserving calling convention"]
helpviewer_keywords: ["__preserve_none keyword"]
---
# __preserve_none

**Microsoft Specific**

> [!IMPORTANT]
> The **`__preserve_none`** calling convention is experimental and subject to change.

The **`__preserve_none`** calling convention specifies that arguments to functions are to be passed in registers, with most general-purpose registers treated as volatile. This calling convention is only supported for C programs and only applies to x64 code.

This calling convention is designed to minimize register spilling and improve performance.

The following list shows the behavior of this calling convention.

| Element | Behavior |
|---------|----------------|
| Argument-passing order | Arguments are passed in up to 10 registers in the following order: `r13`, `r14`, `r15`, `rbx`, `rsi`, `rdi`, `r9`, `r8`, `rdx`, `rcx`. If a hidden parameter is required for struct returns, it's passed in `r13` (the first parameter register), reducing available parameter registers to 9. Registers `r10`-`r12` are reserved for various CRT and Windows runtimes. All parameters must be passed through registers; stack-based parameters aren't currently supported. |
| Register allocation strategy | To help minimize register spilling when calling functions with different calling conventions, the allocator assigns `rcx`, `rdx`, `r8`, and `r9` only after other registers have been used, since those registers are used first by the [__vectorcall](vectorcall.md) and [__cdecl](cdecl.md) calling conventions. |
| Argument limit | Functions are restricted to a maximum of 10 parameters. An error is generated if this limit is exceeded. |
| Return value convention | Follows the regular x64 calling convention rules. Scalar return values are returned in `rax`. Structs of size 1, 2, 4, or 8 bytes are returned through the `rax` register. For structs of other sizes, a pointer to memory allocated by the caller and passed through the hidden parameter is returned in `rax`. |
| Volatile registers | All general-purpose registers except `r12`, `rsp` (stack pointer) and `rbp` (base pointer) are treated as volatile and don't need to be preserved across function calls. While `r10` and `r11` are volatile, they aren't used for parameter passing to maintain compatibility with existing programs. |
| Nonvolatile registers | Only `rsp`, `rbp`, and `r12` are nonvolatile. |
| Stack alignment | The stack must maintain 16-byte alignment. |
| Frame pointer | The `rbp` register and frame chain follow the [/Gy switch](../build/reference/gy-enable-function-level-linking.md) settings. |
| Stack-maintenance responsibility | The callee is responsible for cleaning up its own stack space. |
| Shadow space | 32 bytes are reserved on the stack as a shadow space to maintain compatibility with profilers and debugging tools. *(Shadow space is a reserved area on the stack where register parameters can be spilled if needed. It's typically 32 bytes (4 registers × 8 bytes each) that the caller reserves for the first four register parameters.)* |
| Floating-point support | Floating-point parameters aren't supported. |
| Name-decoration convention | Function names are decorated with @@_A suffix. |
| Case-translation convention | No case translation performed. |

## Restrictions and Limitations

The **`__preserve_none`** calling convention has the following restrictions:

- **C only**: Only supported for C programs.
- **x64 only**: Only supported on x64.
- **No floating-point**: Floating-point parameters aren't supported.
- **No variadic functions**: Variadic functions (varargs) aren't supported.
- **Parameter limit**: Maximum of 10 parameters, all passed through registers.

## Use Cases

The **`__preserve_none`** calling convention is designed for performance-critical scenarios where:

- Most functions in the codebase use the **`__preserve_none`** calling convention
- Used with `msvc::musttail` to tail call between functions with no stack usage
- Minimizing register spilling is important for performance
- The codebase is compatible with treating most registers as volatile

## Example

In the following example, the function `ProcessData` uses the **`__preserve_none`** calling convention:

```c
// Example of the __preserve_none keyword
void __preserve_none ProcessData(int a, int b, int c, int d, int e);

// Example of the __preserve_none keyword on function pointer
typedef int (__preserve_none *callback_ptr)(void* context, int value, int flags);
```

**END Microsoft Specific**

## See also

[Argument Passing and Naming Conventions](argument-passing-and-naming-conventions.md)\
[x64 Calling Convention](../build/x64-calling-convention.md)\
[Keywords](keywords-cpp.md)  
