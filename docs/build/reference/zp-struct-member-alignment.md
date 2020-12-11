---
description: "Learn more about: /Zp (Struct Member Alignment)"
title: "/Zp (Struct Member Alignment)"
ms.date: "04/04/2019" 
f1_keywords: ["/zp", "VC.Project.VCCLCompilerTool.StructMemberAlignment", "VC.Project.VCCLWCECompilerTool.StructMemberAlignment"]
helpviewer_keywords: ["Struct Member Alignment compiler option", "Zp compiler option", "/Zp compiler option [C++]", "-Zp compiler option [C++]"]
ms.assetid: 5242f656-ed9b-48a3-bc73-cfcf3ed2520f
---
# /Zp (Struct Member Alignment)

Controls how the members of a structure are packed into memory and specifies the same packing for all structures in a module.

## Syntax

> **`/Zp`**[**`1`**|**`2`**|**`4`**|**`8`**|**`16`**]

## Remarks

The **`/ZpN`** option tells the compiler where to store each structure member. The compiler stores members after the first one on a boundary that's the smaller of either the size of the member type, or an *N*-byte boundary.

The available packing values are described in the following table:

|/Zp argument|Effect|
|-|-|
|1|Packs structures on 1-byte boundaries. Same as **`/Zp`**.|
|2|Packs structures on 2-byte boundaries.|
|4|Packs structures on 4-byte boundaries.|
|8|Packs structures on 8-byte boundaries (default for x86, ARM, and ARM64).|
|16| Packs structures on 16-byte boundaries (default for x64).|

Don't use this option unless you have specific alignment requirements.

> [!WARNING]
> C++ headers in the Windows SDK set and assume **`/Zp8`** packing internally. Memory corruption may occur if the **`/Zp`** setting is changed inside the Windows SDK headers. The headers aren't affected by any **`/Zp`** option you set on the command line.

You can also use [`pack`](../../preprocessor/pack.md) to control structure packing. For more information about alignment, see:

- [`align`](../../cpp/align-cpp.md)

- [`alignof` Operator](../../cpp/alignof-operator.md)

- [`__unaligned`](../../cpp/unaligned.md)

- [`/ALIGN` (Section Alignment)](align-section-alignment.md)

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

1. Modify the **Struct Member Alignment** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StructMemberAlignment%2A>.

## See also

[MSVC Compiler Options](compiler-options.md) \
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
