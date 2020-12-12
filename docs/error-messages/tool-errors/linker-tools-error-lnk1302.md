---
description: "Learn more about: Linker Tools Error LNK1302"
title: "Linker Tools Error LNK1302"
ms.date: "11/04/2016"
f1_keywords: ["LNK1302"]
helpviewer_keywords: ["LNK1302"]
ms.assetid: aea3c753-c2c4-4249-bbc3-f2d4f0164b5e
---
# Linker Tools Error LNK1302

only support linking safe .netmodules; unable to link file .netmodule

A .netmodule (compiled with **/LN**) was passed to the linker in a user attempt to invoke MSIL linking.  A C++ module is valid for MSIL linking if it is compiled with **/clr:safe**.

To correct this error, compile with **/clr:safe** to enable MSIL linking, or pass the **/clr** or **/clr:pure** .obj file to the linker instead of the module.

For more information, see

- [/LN (Create MSIL Module)](../../build/reference/ln-create-msil-module.md)

- [.netmodule Files as Linker Input](../../build/reference/netmodule-files-as-linker-input.md)
