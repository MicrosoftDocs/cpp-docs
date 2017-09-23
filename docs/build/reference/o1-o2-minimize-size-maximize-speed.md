---
title: "-O1, -O2 (Minimize Size, Maximize Speed) | Microsoft Docs"
ms.custom: ""
ms.date: "09/22/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/o2"
  - "/o1"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "maximize speed compiler option [C++]"
  - "minimize size compiler option [C++]"
  - "-O2 compiler option [C++]"
  - "fast code"
  - "small code"
  - "O2 compiler option [C++]"
  - "/O2 compiler option [C++]"
  - "-O1 compiler option [C++]"
  - "O1 compiler option [C++]"
  - "/O1 compiler option [C++]"
ms.assetid: 2d1423f5-53d9-44da-8908-b33a351656c2
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /O1, /O2 (Minimize Size, Maximize Speed)

Selects a predefined set of options that affect the size and speed of generated code.

## Syntax

> /O1
> /O2

## Remarks

The following table describes **/O1** and **/O2**.

|Option|Equivalent to|Comment|
|------------|-------------------|-------------|  
|**/O1** (Minimize Size)|**/Og /Os /Oy /Ob2 /Gs /GF /Gy**|Creates the smallest code in the majority of cases.|
|**/O2** (Maximize Speed)|**/Og /Oi /Ot /Oy /Ob2 /Gs /GF /Gy**|Creates the fastest code in the majority of cases. (default setting for release builds)|

**/O1** and **/O2** are mutually exclusive.

> [!NOTE] **x86 Specific**  
> These options imply the use of the Frame-Pointer Omission ([/Oy](../../build/reference/oy-frame-pointer-omission.md)) option.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Optimization** property page.

1. Modify the **Optimization** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## See Also

[/O Options (Optimize Code)](../../build/reference/o-options-optimize-code.md)

[Compiler Options](../../build/reference/compiler-options.md)

[Setting Compiler Options](../../build/reference/setting-compiler-options.md)

[/EH (Exception Handling Model)](../../build/reference/eh-exception-handling-model.md)