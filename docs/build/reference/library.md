---
description: "Learn more about: LIBRARY"
title: "LIBRARY"
ms.date: "11/04/2016"
f1_keywords: ["LIBRARY"]
helpviewer_keywords: ["LIBRARY .def file statement"]
ms.assetid: 1d7ccc92-e088-4ef7-9ef0-25c3862cc051
---
# LIBRARY

Tells LINK to create a DLL. At the same time, LINK creates an import library, unless an .exp file is used in the build.

```
LIBRARY [library][BASE=address]
```

## Remarks

The *library* argument specifies the name of the DLL. You can also use the [/OUT](out-output-file-name.md) linker option to specify the DLL's output name.

The BASE=*address* argument sets the base address that the operating system uses to load the DLL. This argument overrides the default DLL location of 0x10000000. See the description of the [/BASE](base-base-address.md) option for details about base addresses.

Remember to use the [/DLL](dll-build-a-dll.md) linker option when you build a DLL.

## See also

[Rules for Module-Definition Statements](rules-for-module-definition-statements.md)
