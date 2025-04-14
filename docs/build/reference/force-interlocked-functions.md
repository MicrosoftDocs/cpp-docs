---
title:       "/forceInterlockedFunctions"
description: "Learn more about /forceInterlockedFunctions"
ms.date:     03/07/2025
---
# `/forceInterlockedFunctions`

Dynamically selects between Armv8.0 load, store exclusive instructions or Armv8.1 Large System Extension (LSE) atomic instructions based on CPU capability at runtime.

## Syntax

> **`/forceInterlockedFunctions`**[**`-`**]

## Remarks
When possible, this flag avoids using Armv8.0 load and store exclusive instructions, as these instructions can result in livelocks.
This flag forces the following interlocked intrinsics to be generated as out-of-line functions:

|Operation|8|16|32|64|128|Pointer|
|-|-------|--------|--------|--------|-------|-------|
|Add|None|None|Full|Full|None|None|
|And|Full|Full|Full|Full|None|None|
|CompareExchange|Full|Full|Full|Full|Full|Full|
|Decrement|None|Full|Full|Full|None|None|
|Exchange|Full|Full|Full|Full|None|Full|
|ExchangeAdd|Full|Full|Full|Full|None|None|
|Increment|None|Full|Full|Full|None|None|
|Or|Full|Full|Full|Full|None|None|
|Xor|Full|Full|Full|Full|None|None|
|bittestandreset|None|None|Full|Full|None|None|
|bittestandset|None|None|Full|Full|None|None|

Key:

- **Full**: supports plain, `_acq`, `_rel`, and `_nf` forms.

- **None**: Not supported

For more information about interlocked intrinsics, see the "Interlocked intrinsics" section in [Arm64 Intrinsics](../../intrinsics/arm64-intrinsics.md).

### To set the `/forceInterlockedFunctions` compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add *`/forceInterlockedFunctions`* to enable. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also
[Arm64 Intrinsics](../../intrinsics/arm64-intrinsics.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
