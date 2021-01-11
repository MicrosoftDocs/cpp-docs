---
description: "Learn more about: &lt;iomanip&gt;"
title: "&lt;iomanip&gt;"
ms.date: "11/04/2016"
f1_keywords: ["iomanip/std::<iomanip>", "<iomanip>"]
helpviewer_keywords: ["iomanip header"]
ms.assetid: 3681c346-4763-4037-bba4-cf0dc3447974
---
# &lt;iomanip&gt;

Include the `iostreams` standard header \<iomanip> to define several manipulators that each take a single argument.

## Syntax

```cpp
#include <iomanip>
```

## Remarks

Each of these manipulators returns an unspecified type, called `T1` through `T10`, that overloads both `basic_istream`\<**Elem**, **Tr**>`::`[operator>>](../standard-library/istream-operators.md#op_gt_gt) and `basic_ostream`\<**Elem**, **Tr**>`::`[operator<<](../standard-library/ostream-operators.md#op_lt_lt).

### Manipulators

|Name|Description|
|-|-|
|[get_money](../standard-library/iomanip-functions.md#iomanip_get_money)|Obtains a monetary amount, optionally in international format.|
|[get_time](../standard-library/iomanip-functions.md#iomanip_get_time)|Obtains a time in a time structure by using a specified format.|
|[put_money](../standard-library/iomanip-functions.md#iomanip_put_money)|Provides a monetary amount, optionally in international format.|
|[put_time](../standard-library/iomanip-functions.md#iomanip_put_time)|Provides a time in a time structure and a format string to use.|
|[quoted](../standard-library/iomanip-functions.md#quoted)|Enables convenient round-tripping of strings with insertion and extraction operators.|
|[resetiosflags](../standard-library/iomanip-functions.md#resetiosflags)|Clears the specified flags.|
|[setbase](../standard-library/iomanip-functions.md#setbase)|Set base for integers.|
|[setfill](../standard-library/iomanip-functions.md#setfill)|Sets the character that will be used to fill spaces in a right-justified display.|
|[setiosflags](../standard-library/iomanip-functions.md#setiosflags)|Sets the specified flags.|
|[setprecision](../standard-library/iomanip-functions.md#setprecision)|Sets the precision for floating-point values.|
|[setw](../standard-library/iomanip-functions.md#setw)|Specifies the width of the display field.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
