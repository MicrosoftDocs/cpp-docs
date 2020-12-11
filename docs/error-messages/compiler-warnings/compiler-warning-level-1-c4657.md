---
description: "Learn more about: Compiler Warning (level 1) C4657"
title: "Compiler Warning (level 1) C4657"
ms.date: "11/04/2016"
f1_keywords: ["C4657"]
helpviewer_keywords: ["C4657"]
ms.assetid: eb750050-cea6-4ead-b80c-d5dcd4971cfc
---
# Compiler Warning (level 1) C4657

expression involves a data type that is new since the last build

You added or changed a data type, making it new to your source code since the last successful build. Edit and Continue does not support changes to existing data types.

This warning will always be followed by [Fatal Error C1092](../../error-messages/compiler-errors-1/fatal-error-c1092.md). For further information, see the [Supported Code Changes](/visualstudio/debugger/supported-code-changes-cpp).

### To remove this warning without ending the current debug session

1. Change the data type back to its state prior to the error.

1. From the **Debug** menu, choose **Apply Code Changes**.

### To remove this error without changing your source code

1. From the **Debug** menu, choose **Stop Debugging**.

1. From the **Build** menu, choose **Build**.
