---
description: "Learn more about: /GUARD (Enable Guard Checks)"
title: "/GUARD (Enable Guard Checks)"
ms.date: "11/04/2016"
ms.assetid: 72758e23-70ac-4616-94d7-d767477406d1
---
# /GUARD (Enable Guard Checks)

Specifies support for Control Flow Guard checks in the executable image.

## Syntax

```
/GUARD:{CF|NO}
```

## Remarks

When /GUARD:CF is specified, the linker modifies the header of a .dll or .exe to indicate support for Control Flow Guard (CFG) runtime checks. The linker also adds the required control flow target address data to the header. By default, /GUARD:CF is disabled. It can be explicitly disabled by using /GUARD:NO. To be effective, /GUARD:CF also requires the [/DYNAMICBASE (Use address space layout randomization)](dynamicbase-use-address-space-layout-randomization.md) linker option, which is on by default.

When source code is compiled by using the [/guard:cf](guard-enable-control-flow-guard.md) option, the compiler analyzes the control flow by examining all indirect calls for possible target addresses. The compiler inserts code to verify the target address of an indirect call instruction is in the list of known target addresses at runtime. Operating systems that support CFG stop a program that fails a CFG runtime check. This makes it more difficult for an attacker to execute malicious code by using data corruption to change a call target.

The /GUARD:CF option must be specified to both the compiler and linker to create CFG-enabled executable images. Code compiled but not linked by using /GUARD:CF incurs the cost of runtime checks, but does not enable CFG protection. When the /GUARD:CF option is specified to the `cl` command to compile and link in one step, the compiler passes the flag to the linker. When the **Control Flow Guard** property is set in Visual Studio, the /GUARD:CF option is passed to both the compiler and linker. When object files or libraries have been compiled separately, the option must be explicitly specified in the `link` command.

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Expand **Configuration Properties**, **Linker**, **Command Line**.

1. In **Additional Options**, enter `/GUARD:CF`.

## See also

[/guard (Enable Control Flow Guard)](guard-enable-control-flow-guard.md)<br/>
[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
