---
description: "Learn more about: Resource Compiler Warning RC4093"
title: "Resource Compiler Warning RC4093"
ms.date: "11/04/2016"
f1_keywords: ["RC4093"]
helpviewer_keywords: ["RC4093"]
ms.assetid: 3c61b4a4-b418-465b-a4fd-cb1ff0adb8dd
---
# Resource Compiler Warning RC4093

unescaped newline in character constant in inactive code

The constant expression of an `#if`, `#elif`, **#ifdef**, or **#ifndef** preprocessor directive evaluated to zero, making the code that follows inactive. Within that inactive code, a newline character appeared within a set of single or double quotation marks.

All text until the next double quotation mark was considered to be within a character constant.
