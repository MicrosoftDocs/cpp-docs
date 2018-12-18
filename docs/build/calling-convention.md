---
title: "Calling Convention"
ms.date: "12/17/2018" 
ms.assetid: 41ca3554-b2e3-4868-9a84-f1b46e6e21d9
---
# x64 Calling Convention

This section describes the standard processes and conventions that one function (the caller) uses to make calls into another function (the callee) in x64 code.

## Calling convention defaults

The x64 Application Binary Interface (ABI) uses a four register fast-call calling convention by default. Space is allocated on the call stack as a shadow store for callees to save those registers. There is a strict one-to-one correspondence between the arguments to a function call and the registers used for those arguments. Any argument that doesn’t fit in 8 bytes, or is not 1, 2, 4, or 8 bytes, must be passed by reference. There is no attempt to spread a single argument across multiple registers. The x87 register stack is unused. It may be used by the callee, but must be considered volatile across function calls. All floating point operations are done using the 16 XMM registers. Integer arguments are passed in registers RCX, RDX, R8, and R9. Floating point arguments are passed in XMM0L, XMM1L, XMM2L, and XMM3L. 16-byte arguments are passed by reference. Parameter passing is described in detail in [Parameter Passing](#parameter-passing). In addition to these registers, RAX, R10, R11, XMM4, and XMM5 are considered volatile. All other registers are non-volatile. Register usage is documented in detail in [Register Usage](../build/x64-software-conventions.md#register-usage) and [Caller/Callee Saved Registers](#caller-callee-saved-registers).

For prototyped functions, all arguments are converted to the expected callee types before passing. The caller is responsible for allocating space for parameters to the callee, and must always allocate sufficient space to store four register parameters, even if the callee doesn’t take that many parameters. This simplifies support for unprototyped C-language functions, and vararg C/C++ functions. For vararg or unprototyped functions, any floating point values must be duplicated in the corresponding general-purpose register. Any parameters beyond the first four must be stored on the stack, above the shadow store for the first four, prior to the call. Vararg function details can be found in [Varargs](#varargs). Unprototyped function information is detailed in [Unprototyped Functions](#unprototyped-functions).

## Alignment

Most structures are aligned to their natural alignment. The primary exceptions are the stack pointer and `malloc` or `alloca` memory, which are aligned to 16 bytes in order to aid performance. Alignment above 16 bytes must be done manually, but since 16 bytes is a common alignment size for XMM operations, this should work for most code. For more information about structure layout and alignment see [Types and Storage](../build/x64-software-conventions.md#types-and-storage). For information about the stack layout, see [Stack Usage](../build/stack-usage.md).

## Unwindability

Leaf functions are functions that do not change any non-volatile registers. A non-leaf function may change non-volatile RSP, for example, by calling a function or allocating additional stack space for local variables. In order to recover non-volatile registers when an exception is handled, non-leaf functions must be annotated with static data that describes how to properly unwind the function at an arbitrary instruction. This data is stored as *pdata*, or procedure data, which in turn refers to *xdata*, the exception handling data. The xdata contains the unwinding information, and can point to additional pdata or an exception handler function. Prologs and epilogs are highly restricted so that they can be properly described in xdata. The stack pointer must be aligned to 16 bytes in any region of code that isn’t part of an epilog or prolog, except within leaf functions. Leaf functions can be unwound simply by simulating a return, so pdata and xdata are not required. For details about the proper structure of function prologs and epilogs, see [Prolog and Epilog](../build/prolog-and-epilog.md). For more information about exception handling, and the exception handling and unwinding of pdata and xdata, see [Exception Handling (x64)](../build/exception-handling-x64.md).

<!-- - [Parameter Passing](../build/parameter-passing.md) -->
## Parameter Passing

The first four integer arguments are passed in registers. Integer values are passed (in order left to right) in RCX, RDX, R8, and R9. Arguments five and higher are passed on the stack. All arguments are right-justified in registers. This is done so the callee can ignore the upper bits of the register if need be and can access only the portion of the register necessary.

Floating-point and double-precision arguments are passed in XMM0 - XMM3 (up to 4) with the integer slot (RCX, RDX, R8, and R9) that would normally be used for that cardinal slot being ignored (see example) and vice versa.

[__m128](../cpp/m128.md) types, arrays and strings are never passed by immediate value but rather a pointer is passed to memory allocated by the caller. Structs/unions of size 8, 16, 32, or 64 bits and __m64 are passed as if they were integers of the same size. Structs/unions other than these sizes are passed as a pointer to memory allocated by the caller. For these aggregate types passed as a pointer (including \__m128), the caller-allocated temporary memory will be 16-byte aligned.

Intrinsic functions that do not allocate stack space and do not call other functions can use other volatile registers to pass additional register arguments because there is a tight binding between the compiler and the intrinsic function implementation. This is a further opportunity for improving performance.

The callee has the responsibility of dumping the register parameters into their shadow space if needed.

The following table summarizes how parameters are passed:

|Parameter type|How passed|
|--------------------|----------------|
|Floating point|First 4 parameters - XMM0 through XMM3. Others passed on stack.|
|Integer|First 4 parameters - RCX, RDX, R8, R9. Others passed on stack.|
|Aggregates (8, 16, 32, or 64 bits) and __m64|First 4 parameters - RCX, RDX, R8, R9. Others passed on stack.|
|Aggregates (other)|By pointer. First 4 parameters passed as pointers in RCX, RDX, R8, and R9|
|__m128|By pointer. First 4 parameters passed as pointers in RCX, RDX, R8, and R9|

### Example of argument passing 1 - all integers

```
func1(int a, int b, int c, int d, int e);
// a in RCX, b in RDX, c in R8, d in R9, e pushed on stack
```

### Example of argument passing 2 - all floats

```
func2(float a, double b, float c, double d, float e);
// a in XMM0, b in XMM1, c in XMM2, d in XMM3, e pushed on stack
```

### Example of argument passing 3 - mixed ints and floats

```
func3(int a, double b, int c, float d);
// a in RCX, b in XMM1, c in R8, d in XMM3
```

### Example of argument passing 4 -__m64, \__m128, and aggregates

```
func4(__m64 a, _m128 b, struct c, float d);
// a in RCX, ptr to b in RDX, ptr to c in R8, d in XMM3
```

<!-- - [Varargs](../build/varargs.md) -->
## Varargs

If parameters are passed via varargs (for example, ellipsis arguments), then essentially the normal parameter passing applies including spilling the fifth and subsequent arguments. It is again the callee's responsibility to dump arguments that have their address taken. For floating-point values only, both the integer and the floating-point register will contain the float value in case the callee expects the value in the integer registers.

<!-- - [Unprototyped Functions](../build/unprototyped-functions.md) -->
## Unprototyped Functions

For functions not fully prototyped, the caller passes integer values as integers and floating-point values as double precision. For floating-point values only, both the integer register and the floating-point register contains the float value in case the callee expects the value in the integer registers.

```cpp
func1();
func2() {   // RCX = 2, RDX = XMM1 = 1.0, and R8 = 7
   func1(2, 1.0, 7);
}
```

<!-- - [Return Values](../build/return-values-cpp.md) -->
## Return Values

A scalar return value that can fit into 64 bits is returned through RAX; this includes __m64 types. Non-scalar types including floats, doubles, and vector types such as [__m128](../cpp/m128.md), [__m128i](../cpp/m128i.md), [__m128d](../cpp/m128d.md) are returned in XMM0. The state of unused bits in the value returned in RAX or XMM0 is undefined.

User-defined types can be returned by value from global functions and static member functions. To be returned by value in RAX, user-defined types must have a length of 1, 2, 4, 8, 16, 32, or 64 bits; no user-defined constructor, destructor, or copy assignment operator; no private or protected non-static data members; no non-static data members of reference type; no base classes; no virtual functions; and no data members that do not also meet these requirements. (This is essentially the definition of a C++03 POD type. Because the definition has changed in the C++11 standard, we do not recommend using `std::is_pod` for this test.) Otherwise, the caller assumes the responsibility of allocating memory and passing a pointer for the return value as the first argument. Subsequent arguments are then shifted one argument to the right. The same pointer must be returned by the callee in RAX.

These examples show how parameters and return values are passed for functions with the specified declarations:

### Example of return value 1 - 64 bit result

```Output
__int64 func1(int a, float b, int c, int d, int e);
// Caller passes a in RCX, b in XMM1, c in R8, d in R9, e pushed on stack,
// callee returns __int64 result in RAX.
```

### Example of return value 2 - 128 bit result

```Output
__m128 func2(float a, double b, int c, __m64 d);
// Caller passes a in XMM0, b in XMM1, c in R8, d in R9,
// callee returns __m128 result in XMM0.
```

### Example of return value 3 - user type result by pointer

```Output
struct Struct1 {
   int j, k, l;    // Struct1 exceeds 64 bits.
};
Struct1 func3(int a, double b, int c, float d);
// Caller allocates memory for Struct1 returned and passes pointer in RCX,
// a in RDX, b in XMM2, c in R9, d pushed on the stack;
// callee returns pointer to Struct1 result in RAX.
```

### Example of return value 4 - user type result by value

```Output
struct Struct2 {
   int j, k;    // Struct2 fits in 64 bits, and meets requirements for return by value.
};
Struct2 func4(int a, double b, int c, float d);
// Caller passes a in RCX, b in XMM1, c in R8, and d in XMM3;
// callee returns Struct2 result by value in RAX.
```

<!-- - [Caller/Callee Saved Registers](../build/caller-callee-saved-registers.md) -->
## Caller/Callee Saved Registers

The registers RAX, RCX, RDX, R8, R9, R10, R11 are considered volatile and must be considered destroyed on function calls (unless otherwise safety-provable by analysis such as whole program optimization).

The registers RBX, RBP, RDI, RSI, RSP, R12, R13, R14, and R15 are considered nonvolatile and must be saved and restored by a function that uses them.

<!-- - [Function Pointers](../build/function-pointers.md) -->
## Function Pointers

Function pointers are simply pointers to the label of the respective function. There are no table of contents (TOC) requirements for function pointers.

<!-- - [Floating-Point Support for Older Code (Visual C++)](../build/floating-point-support-for-older-code-visual-cpp.md) -->
## Floating-Point Support for Older Code (Visual C++)

The MMX and floating-point stack registers (MM0-MM7/ST0-ST7) are preserved across context switches. There is no explicit calling convention for these registers. The use of these registers is strictly prohibited in kernel mode code.

<!-- - [FpCsr](../build/fpcsr.md) -->
## FpCsr

The register state also includes the x87 FPU control word. The calling convention dictates this register to be nonvolatile.

The x87 FPU control word register is set to the following standard values at the start of program execution:

| Register\[bits] | Setting |
|-|-|
| FPCSR\[0:6] | Exception masks all 1's (all exceptions masked) |
| FPCSR\[7] | Reserved - 0 |
| FPCSR\[8:9] | Precision Control - 10B (double precision) |
| FPCSR\[10:11] | Rounding  control - 0 (round to nearest) |
| FPCSR\[12] | Infinity control - 0 (not used) |

A callee that modifies any of the fields within FPCSR must restore them before returning to its caller. Furthermore, a caller that has modified any of these fields must restore them to their standard values before invoking a callee unless by agreement the callee expects the modified values.

There are two exceptions to the rules regarding the non-volatility of the control flags:

1. In functions where the documented purpose of the given function is to modify the nonvolatile FpCsr flags.

1. When it is provably correct that the violation of these rules results in a programs that behaves/means the same as a program where these rules are not violated, for example, through whole-program analysis.

<!-- - [MXCSR](../build/mxcsr.md) -->
## MxCsr

The register state also includes MxCsr. The calling convention divides this register into a volatile portion and a nonvolatile portion. The volatile portion consists of the 6 status flags, MXCSR[0:5], while the remainder of the register, MXCSR[6:15], is considered nonvolatile.

The nonvolatile portion is set to the following standard values at the start of program execution:

| Register\[bits] | Setting |
|-|-|
| MXCSR\[6] | Denormals are zeros - 0 |
| MXCSR\[7:12] | Exception masks all 1's (all exceptions masked) |
| MXCSR\[13:14] | Rounding  control - 0 (round to nearest) |
| MXCSR\[15] | Flush to zero for masked underflow - 0 (off) |

A callee that modifies any of the nonvolatile fields within MXCSR must restore them before returning to its caller. Furthermore, a caller that has modified any of these fields must restore them to their standard values before invoking a callee unless by agreement the callee expects the modified values.

There are two exceptions to the rules regarding the non-volatility of the control flags:

- In functions where the documented purpose of the given function is to modify the nonvolatile MxCsr flags.

- When it is provably correct that the violation of these rules results in a programs that behaves/means the same as a program where these rules are not violated, for example, through whole-program analysis.

No assumptions can be made about the state of the volatile portion of MXCSR across a function boundary, unless specifically described in a function's documentation.

<!-- - [setjmp/longjump](../build/setjmp-longjump.md) -->
## setjmp/longjmp

When you include setjmpex.h or setjmp.h, all calls to [setjmp](../c-runtime-library/reference/setjmp.md) or [longjmp](../c-runtime-library/reference/longjmp.md) will result in an unwind that invokes destructors and `__finally` calls.  This differs from x86, where including setjmp.h results in `__finally` clauses and destructors not being invoked.

A call to `setjmp` preserves the current stack pointer, non-volatile registers, and MxCsr registers.  Calls to `longjmp` return to the most recent `setjmp` call site and resets the stack pointer, non-volatile registers, and MxCsr registers, back to the state as preserved by the most recent `setjmp` call.

## See Also

[x64 Software Conventions](../build/x64-software-conventions.md)