---
description: "Learn more about: Input Stream Manipulators"
title: "Input Stream Manipulators"
ms.date: "11/04/2016"
helpviewer_keywords: ["input streams, manipulators", "input stream objects"]
ms.assetid: 0addcacb-7b7b-4d70-9775-a59abc400fb3
---
# Input Stream Manipulators

Many manipulators, such as [setprecision](../standard-library/iomanip-functions.md#setprecision), are defined for the `ios` class and thus apply to input streams. Few manipulators, however, actually affect input stream objects. Of those that do, the most important are the radix manipulators, `dec`, `oct`, and `hex`, which determine the conversion base used with numbers from the input stream.

On extraction, the `hex` manipulator enables processing of various input formats. For example, c, C, 0xc, 0xC, 0Xc, and 0XC are all interpreted as the decimal integer 12. Any character other than 0 through 9, A through F, a through f, x, and X terminates the numeric conversion. Thus the sequence `"124n5"` is converted to the number 124 with the [basic_ios::fail](../standard-library/basic-ios-class.md#fail) bit set.

## See also

[Input Streams](../standard-library/input-streams.md)
