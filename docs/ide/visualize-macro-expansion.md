---
title: "Visual C/C++ macro expansion"
description: "Learn how to use Visual Studio to visualize C/C++ macro expansion and configure C/C++ Include Cleanup."
ms.date: 02/01/2024
ms.topic: "how-to"
f1_keywords: ["config include cleanup"]
helpviewer_keywords: ["config include cleanup"]
---
# Configure C/C++ Include Cleanup in Visual Studio

Long macros can be difficult to read. Visual Studio can now expand macros, one step at a time, to make them easier to understand. You can copy the expanded macro if you want. To experiment with these features, follow these steps:

## Prerequisites

The following must be installed:

- Visual Studio version 17.5 or later

### Create the sample

1. Start Visual Studio 2022, version 17.5 or later, and create a C++ Console app.
1. Replace the default code with:

```cpp
#include <iostream>

#define MASS 10.0
#define ACCELERATION 20.0
#define SPEED 5.0
#define TIME 2.0
#define DISTANCE() (SPEED * TIME)
#define FORCE()(MASS * ACCELERATION)
#define WORK()(FORCE() * DISTANCE())
#define POWER()(WORK()/TIME)

int main()
{
	std::cout << "Distance: " << DISTANCE() << std::endl;
	std::cout << "Force: " << FORCE() << std::endl;
	std::cout << "Work: " << WORK() << std::endl;
	std::cout << "Power: " << POWER() << std::endl;
}
```

## Copy an expanded macro

You can easily inspect the expanded value of a macro, even when several preprocessor steps are involved, by using the following steps:

1. Place the cursor on the `POWER` a macro in the previous example.
1. As you hover over the macro, options appear to **Copy**, **Expand Inline**, **Visualize Expansion**, and **Search Online**:

:::image type="complex" source="media/vs2022-hover-macro.png" alt-text="The macro explorer has opened on POWER to show that it expands to (((10.0 * 20.0) * (5.0 * 2.0)) / 2.0). Options to copy, expand inline, visual expansion, and search online appear at the bottom of the window.
:::image-end:::

1. Choose **Copy**. Then create a comment following the `POWER` line and choose paste (`Ctrl+V`). You'll see the expansion of the macro as a comment adjacent to your macro: ```// (((10.0 * 20.0)* (5.0 * 2.0)) / 2.0) ```. The keyboard shortcut for this action is `Ctrl+M` followed by `Ctrl+C`.

## Expand a macro

Use the following steps to expand a macro inline, which replaces the macro with its expansion:

1. Place the cursor on the `POWER` macro in the previous example.
1. As you hover over the macro, options appear to **Copy**, **Expand Inline**, **Visualize Expansion**, and **Search Online**:

:::image type="complex" source="media/vs2022-hover-macro.png" alt-text="The macro explorer has opened on POWER to show that it expands to (((10.0 * 20.0) * (5.0 * 2.0)) / 2.0). Options to copy, expand inline, visual expansion, and search online appear at the bottom of the window.
:::image-end:::

1. Choose **Expand Inline**. The `POWER()` macro is replaced with it's expanded value: ```std::cout << "Power: " << (((10.0 * 20.0) * (5.0 * 2.0)) / 2.0) << std::endl;```. The keyboard shortcut for this action is `Ctrl+M` followed by `Ctrl+I`.

## Visualize macro expansion

You can expand a macro one step at a time. This is useful when there are nested macros and you want to see the expansion step-by-step. To visualize the macro expansion for the `WORK` macro, use the following steps:

1. Place the cursor on the `WORK` macro in the previous example.
1. As you hover over the macro, options appear to **Copy**, **Expand Inline**, **Visualize Expansion**, and **Search Online**:

:::image type="complex" source="media/vs2022-work-macro.expansion" alt-text="The macro visualization explorer has opened on FORCE to show that it initially expands to (FORCE()*DISTANCE()). There are single angle brackets in the window for moving forwards and backwards a single expansion at a time. The double angle brackets fully expand or fully undo the macro expansion.
:::image-end:::

1. Choose **Visualize Expansion**. The keyboard shortcut for this action is `Ctrl+M` followed by `Ctrl+V`.
1. The macro expansion window appears. The first expansion of the `WORK` macro is visible: `(FORCE() * DISTANCE())`.
1. Click the right angle bracket to expand the `FORCE` macro. The window now shows the `FORCE` macro expansion: `(MASS * ACCELERATION) * DISTANCE()`.
1. Click the right angle bracket to expand another step. The window now shows the `FORCE` macro expansion: `((10.0 * ACCELERATION) * DISTANCE())`.

Continue to expand the macro to see the full expansion of the `WORK` macro, which is: ```((10.0 * 20.0) * (5.0 * 2.0))```.
You can use the double angle brackets to fully expand the macro, or to reverse the expansion to the first level of expansion.

## See also

[C/C++ Include Cleanup overview](include-cleanup-overview.md)\
