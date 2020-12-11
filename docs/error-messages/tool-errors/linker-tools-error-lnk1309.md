---
description: "Learn more about: Linker Tools Error LNK1309"
title: "Linker Tools Error LNK1309"
ms.date: "11/04/2016"
f1_keywords: ["LNK1309"]
helpviewer_keywords: ["LNK1309"]
ms.assetid: 10146071-883f-4849-97d1-c7468f90efbb
---
# Linker Tools Error LNK1309

> *type1* module detected; invalid with switch /CLRIMAGETYPE:*type2*

## Remarks

A CLR image type was requested with **/CLRIMAGETYPE** but the linker could not produce an image of that type because one or more modules were incompatible with that type.

For example, you will see LNK1309 if you specify **/CLRIMAGETYPE:safe** and you pass a module built with **/clr:pure**.

The **/clr:pure** and **/clr:safe** compiler options and support libraries are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

You will also see LNK1309 if you attempt to build a partially trusted CLR pure application using ptrustu[d].lib. For information on how to create a partially trusted application, see [How to: Create a Partially Trusted Application by Removing Dependency on the CRT Library DLL](../../dotnet/create-a-partially-trusted-application.md).

For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) and [/CLRIMAGETYPE (Specify Type of CLR Image)](../../build/reference/clrimagetype-specify-type-of-clr-image.md).
