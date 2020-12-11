---
description: "Learn more about: Developing Your Own Helper Function"
title: "Developing Your Own Helper Function"
ms.date: "11/04/2016"
helpviewer_keywords: ["helper functions"]
ms.assetid: a845429d-68b1-4e14-aa88-f3f5343bd490
---
# Developing Your Own Helper Function

You may want to provide your own version of the routine to do specific processing based on the names of the DLL or imports. There are two methods of doing this: coding your own, possibly based on the supplied code, or merely hooking the supplied version using the notification hooks detailed previously.

## Code Your Own

This is fairly simple since you can essentially use the supplied code as a guideline for the new one. Of course, it must adhere to the calling conventions and if it returns to the linker-generated thunks, it must return a proper function pointer. Once in your code, you can do pretty much whatever you want in order to satisfy the call or get out of the call.

## Use the Start Processing Notification Hook

It will probably be easiest to simply provide a new pointer to a user-supplied notification hook function that receives the same values as the default helper on the notification dliStartProcessing. At that point, the hook function can essentially become the new helper function, as a successful return to the default helper will bypass all further processing in the default helper.

## See also

[Linker Support for Delay-Loaded DLLs](linker-support-for-delay-loaded-dlls.md)
