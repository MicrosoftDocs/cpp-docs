---
title: "PROTO"
ms.date: "10/22/2018"
f1_keywords: ["PROTO"]
helpviewer_keywords: ["PROTO directive"]
ms.assetid: 0487ee16-9dc7-43d1-9445-cd1601f5a080
---
# PROTO

Prototypes a function or procedure. You can call the function prototyped by the PROTO directive by using the [INVOKE](invoke.md) directive.

## Syntax

> *label* **PROTO** \[*distance*] \[*langtype*] \[__,__ \[*parameter*]__:__*tag*] ...

### Parameters

*label*<br/>
The name of the prototyped function.

*distance*<br/>
(Optional) Used in 16-bit memory models to override the default and indicate **NEAR** or **FAR** calls.

*langtype*<br/>
(Optional) Sets the calling and naming convention for procedures and public symbols. Supported conventions are:

- 32-bit **FLAT** model: **C**, **STDCALL**

- 16-bit models: **C**, **BASIC**, **FORTRAN**, **PASCAL**, **SYSCALL**, **STDCALL**

*parameter*<br/>
The optional name for a function parameter.

*tag*<br/>
The type of a function parameter.

The *parameter* and *tag* parameters may appear multiple times, once for each passed argument.

## Example

This sample shows a **PROTO** declaration for a function named `addup3` that uses a **NEAR** call to override the 16-bit model default for procedure calls, and uses the **C** calling convention for stack parameters and return values. It takes two arguments, a **WORD** and a **VARARG**.

```MASM
addup3 PROTO NEAR C, argcount:WORD, arg1:VARARG
```

## See also

[Directives Reference](directives-reference.md)<br/>
[.MODEL Reference](dot-model.md)<br/>
