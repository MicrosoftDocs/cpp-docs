---
title: "Intrinsics and Inline Assembly"
ms.date: "11/04/2016"
ms.assetid: 8affd4bb-279d-46f3-851f-8be0a9c5ed3f
---
# Intrinsics and Inline Assembly

One of the constraints for the x64 compiler is to have no inline assembler support. This means that functions that cannot be written in C or C++ will either have to be written as subroutines or as intrinsic functions supported by the compiler. Certain functions are performance sensitive while others are not. Performance-sensitive functions should be implemented as intrinsic functions.

The intrinsics supported by the compiler are described in [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md).

## See Also

[x64 Software Conventions](../build/x64-software-conventions.md)