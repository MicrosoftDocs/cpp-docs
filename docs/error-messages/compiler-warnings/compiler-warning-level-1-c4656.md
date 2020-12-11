---
description: "Learn more about: Compiler Warning (level 1) C4656"
title: "Compiler Warning (level 1) C4656"
ms.date: "11/04/2016"
f1_keywords: ["C4656"]
helpviewer_keywords: ["C4656"]
ms.assetid: b5aaef74-2320-4345-a6ae-b813881a491c
---
# Compiler Warning (level 1) C4656

'symbol' : data type is new or has changed since the last build, or is defined differently elsewhere

You added or changed a data type, making it new to your source code since the last successful build. Edit and Continue does not support changes to existing data types.

This warning will always be followed by [Fatal Error C1092](../../error-messages/compiler-errors-1/fatal-error-c1092.md). For further information, see the [Supported Code Changes](/visualstudio/debugger/supported-code-changes-cpp).

### To remove this warning without ending the current debug session

1. Change the data type back to its state prior to the error.

1. From the **Debug** menu, choose **Apply Code Changes**.

### To remove this error without changing your source code

1. From the **Debug** menu, choose **Stop Debugging**.

1. From the **Build** menu, choose **Build**.
