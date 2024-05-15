---
description: "Learn more about: /feature (ARM64)"
title: "/feature (ARM64)"
ms.date: 05/15/2024
---
# `/feature` (ARM64)

Optionally specify one or more Arm A-Profile architecture features to enable for an ARM64 extension specified by **`/arch`** (ARM64). For more information on **`/arch`** (ARM64), see [`/arch` (ARM64)](arch-arm64.md).

## Syntax

> **`/feature:<arg1>`**[**`+arg2`**]

## Arguments
Specify one or more of the following available features to enable if a targeted ARM64 extension supports it.

| Feature argument | Feature identifier | Optional from | Enabled by default | Description |
|--|--|--|--|--|
|**`lse`**   | FEAT_LSE | Armv8.0  | Armv8.1 | Large System Extensions. |
|**`rcpc`**  | FEAT_LRCPC | Armv8.2 | Armv8.3 | Load-Acquire RCpc instructions. |

## Remarks

Example usage: to enable FEAT_LSE, use feature argument **`lse`** so that the option is **`/feature:lse`**.

If there are conflicting feature arguments specified by **`/feature`**, the right-most feature is enabled. Enabling a feature that is not supported by a targeted architecture may cause unexpected behavior, especially if a CPU does not implement the feature.

You can use either **`/feature`** or only **`/arch`** (ARM64) to specify features. For example, if you want to enable FEAT_LSE when targeting Armv8.0-A, you can either use both **`/feature:lse`** and **`/arch:armv8.0`** or only use **`/arch:armv8.0+lse`**. **`/feature`** exists as another way to specify features without having to specify them in **`/arch`** (ARM64).

### To set the `/feature` compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add *`/feature:lse`* or replace `lse` with the feature to enable. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[`/arch` (Minimum CPU architecture)](arch-minimum-cpu-architecture.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
