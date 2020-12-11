---
description: "Learn more about: Safe Libraries: C++ Standard Library"
title: "Safe Libraries: C++ Standard Library"
ms.date: "11/04/2016"
helpviewer_keywords: ["Safe Libraries", "Safe Libraries, C++ Standard Library", "Safe C++ Standard Library"]
ms.assetid: 3993340f-1f29-4d81-b3f5-52a52bc8e148
---
# Safe Libraries: C++ Standard Library

Several enhancements have been made to the libraries that ship with Microsoft C++, including the C++ Standard Library, to make them more secure.

Several methods in the C++ Standard Library have been identified as potentially unsafe because they could lead to a buffer overrun or other code defect. The use of these methods is discouraged, and new, more secure methods have been created to replace them. These new methods all end in `_s`.

Several enhancements have also been made to make iterators and algorithms more secure. For more information, see [Checked Iterators](../standard-library/checked-iterators.md), [Debug Iterator Support](../standard-library/debug-iterator-support.md) and [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).

## Remarks

The following table lists the C++ Standard Library methods that are potentially unsafe, as well as their safer equivalent:

|Potentially unsafe method|Safer equivalent|
|-------------------------------|----------------------|
|[copy](../standard-library/basic-string-class.md#copy)|[basic_string::_Copy_s](../standard-library/basic-string-class.md#copy_s)|
|[copy](../standard-library/char-traits-struct.md#copy)|[char_traits::_Copy_s](../standard-library/char-traits-struct.md#copy_s)|

If you call any one of the potentially unsafe methods above, or if you use iterators incorrectly, the compiler will generate [Compiler Warning (level 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). For information on how to disable these warnings, see [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).

## In This Section

[_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)

[_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md)

[Checked Iterators](../standard-library/checked-iterators.md)

[Debug Iterator Support](../standard-library/debug-iterator-support.md)

## See also

[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)
