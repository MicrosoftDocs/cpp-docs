---
description: "Learn more about developing your own delay load helper function"
title: "Develop your own delay load helper function"
ms.date: "01/19/2021"
helpviewer_keywords: ["helper functions"]
---
# Develop your own delay load helper function

You may want to provide your own version of the delay load helper routine. In your own routine, you can do specific processing based on the names of the DLL or imports. There are two ways to insert your own code: Code your own helper function, possibly based on the supplied code. Or, hook the supplied helper to call your own function by using the [notification hooks](notification-hooks.md).

## Code your own helper

Creating your own helper routine is straightforward. You can use the existing code as a guide for your new function. Your function must use the same calling conventions as the existing helper. And, if it returns to the linker-generated thunks, it must return a proper function pointer. Once you've created your code, you may either satisfy the call or get out of the call, however you like.

## Use the start processing notification hook

It's probably easiest to provide a new pointer to a user-supplied notification hook function that takes the same values as the default helper for the `dliStartProcessing` notification. At that point, the hook function can essentially become the new helper function, because a successful return to the default helper bypasses all further processing in the default helper.

## See also

[Linker support for delay-loaded DLLs](linker-support-for-delay-loaded-dlls.md)
