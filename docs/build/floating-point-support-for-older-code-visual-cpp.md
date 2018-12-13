---
title: "Floating-Point Support for Older C++ Code - Visual Studio"
ms.date: "12/14/2018"
ms.assetid: a2a26b96-7bc2-418a-981a-51aa1a0294a2
---
# Floating-Point Support for Older Code (Visual C++)

The MMX and floating-point stack registers (MM0-MM7/ST0-ST7) are preserved across context switches.  There is no explicit calling convention for these registers.  The use of these registers is strictly prohibited in kernel mode code.

## See Also

[Calling Convention](calling-convention.md)