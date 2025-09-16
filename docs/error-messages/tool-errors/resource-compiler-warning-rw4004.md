---
title: "Resource Compiler Warning RW4004"
description: "Learn more about: Resource Compiler Warning RW4004"
ms.date: 11/04/2016
f1_keywords: ["RW4004"]
helpviewer_keywords: ["RW4004"]
---
# Resource Compiler Warning RW4004

> ASCII character not equivalent to virtual key code

## Remarks

A string literal was used for the virtual key code in a VIRTKEY type accelerator.

This warning allows you to continue, but be aware that the accelerator keys generated may not match the string you indicated. (VIRTKEYs use different key codes than ASCII accelerators.)

While string literals are syntactically valid, you can only ensure that you get the accelerator you want by using the **VK_\* #define** values in WINDOWS.h.
