---
description: "Learn more about: SECTIONS (C/C++)"
title: "SECTIONS (C/C++)"
ms.date: "11/04/2016"
f1_keywords: ["SECTIONS"]
helpviewer_keywords: ["SECTIONS .def file statement"]
ms.assetid: 7b974366-9ef5-4e57-bbcc-73a1df6f8857
---
# SECTIONS (C/C++)

Introduces a section of one or more `definitions` that are access specifiers on sections in your project's output file.

```
SECTIONS
definitions
```

## Remarks

Each definition must be on a separate line. The `SECTIONS` keyword can be on the same line as the first definition or on a preceding line. The .def file can contain one or more `SECTIONS` statements.

This `SECTIONS` statement sets attributes for one or more sections in the image file, and can be used to override the default attributes for each type of section.

The format for `definitions` is:

`.section_name specifier`

where `.section_name` is the name of a section in your program image and `specifier` is one or more of the following access modifiers:

|Modifier|Description|
|--------------|-----------------|
|`EXECUTE`|The section is executable|
|`READ`|Allows read operations on data|
|`SHARED`|Shares the section among all processes that load the image|
|`WRITE`|Allows write operations on data|

Separate specifier names with a space. For example:

```
SECTIONS
.rdata READ WRITE
```

`SECTIONS` marks the beginning of a list of section `definitions`. Each `definition` must be on a separate line. The `SECTIONS` keyword can be on the same line as the first `definition` or on a preceding line. The .def file can contain one or more `SECTIONS` statements. The `SEGMENTS` keyword is supported as a synonym for `SECTIONS`.

Older versions of Visual C++ supported:

```
section [CLASS 'classname'] specifier
```

The `CLASS` keyword is supported for compatibility, but is ignored.

An equivalent way to specify section attributes is with the [/SECTION](section-specify-section-attributes.md) option.

## See also

[Rules for Module-Definition Statements](rules-for-module-definition-statements.md)
