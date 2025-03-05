---
description: "Learn more about: /feature (ARM64)"
title: "/feature (ARM64)"
ms.date: 05/28/2024
---
# `/feature` (ARM64)

Enable one or more Arm A-Profile architecture features for an ARM64 extension as specified by **`/arch`** (ARM64). For more information about **`/arch`** (ARM64), see [`/arch` (ARM64)](arch-arm64.md).

## Syntax

> **`/feature:<arg1>`**[**`+arg2`**]

## Arguments
To enable one or more features the targeted ARM64 extension supports, specify one or more of the following feature arguments:

| Feature argument | Feature identifier | Optional from | Enabled by default | Description | Supported in version
|--|--|--|--|--|--|
|**`lse`**   | `FEAT_LSE` | Armv8.0  | Armv8.1 | Large System Extensions. | Visual Studio 2022 17.10
|**`rcpc`**  | `FEAT_LRCPC` | Armv8.2 | Armv8.3 | Load-Acquire RCpc instructions. | Visual Studio 2022 17.10
|**`rcpc2`**  | `FEAT_LRCPC2` | Armv8.2 | Armv8.4 | Load-Acquire RCpc instructions v2. | Visual Studio 2022 17.11

## Remarks

Example usage: to enable `FEAT_LSE`, specify **`/feature:lse`**.

If there are conflicting feature arguments specified by **`/feature`**, the right-most feature is enabled. Enabling a feature the targeted ARM64 extension doesn't support may cause unexpected behavior, especially if a CPU doesn't implement the feature.

Use either **`/feature`** or only **`/arch`** (ARM64) to specify features. For example, to enable `FEAT_LSE` when targeting Armv8.0-A, use both **`/feature:lse`** and **`/arch:armv8.0`**, or specify **`/arch:armv8.0+lse`**. **`/feature`** is a way to specify features without specifying them in **`/arch`** (ARM64).

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
