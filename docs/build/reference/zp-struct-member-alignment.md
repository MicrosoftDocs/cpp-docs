---
title: "-Zp (Struct Member Alignment) | Microsoft Docs"
ms.custom: ""
ms.date: "04/30/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/zp", "VC.Project.VCCLCompilerTool.StructMemberAlignment", "VC.Project.VCCLWCECompilerTool.StructMemberAlignment"]
dev_langs: ["C++"]
helpviewer_keywords: ["Struct Member Alignment compiler option", "Zp compiler option", "/Zp compiler option [C++]", "-Zp compiler option [C++]"]
ms.assetid: 5242f656-ed9b-48a3-bc73-cfcf3ed2520f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /Zp (Struct Member Alignment)

Controls how the members of a structure are packed into memory and specifies the same packing for all structures in a module.

## Syntax

> **/Zp**[**1**|**2**|**4**|**8**|**16**]

## Remarks

When you specify the **/Zp**_n_ option, each structure member after the first is stored on either the size of the member type or *n*-byte boundaries (where *n* is 1, 2, 4, 8, or 16), whichever is smaller.

The available packing values are described in the following table:

|/Zp argument|Effect|
|-|-|
|1|Packs structures on 1-byte boundaries. Same as **/Zp**.|
|2|Packs structures on 2-byte boundaries.|
|4|Packs structures on 4-byte boundaries.|
|8|Packs structures on 8-byte boundaries (default).|
|16| Packs structures on 16-byte boundaries.|

You should not use this option unless you have specific alignment requirements.

> [!WARNING]
> C++ headers in the Windows SDK assume **/Zp8** packing. Memory corruption may occur if the **/Zp** setting is changed when using Windows SDK headers.

You can also use [pack](../../preprocessor/pack.md) to control structure packing. For more information about alignment, see:

- [align](../../cpp/align-cpp.md)

- [__alignof Operator](../../cpp/alignof-operator.md)

- [__unaligned](../../cpp/unaligned.md)

- [Examples of Structure Alignment](../../build/examples-of-structure-alignment.md) (x64 specific)

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Select the **C/C++** > **Code Generation** property page.

1. Modify the **Struct Member Alignment** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StructMemberAlignment%2A>.

## See also

- [Compiler Options](../../build/reference/compiler-options.md)
- [Setting Compiler Options](../../build/reference/setting-compiler-options.md)
