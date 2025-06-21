---
title: "Visualize C/C++ macro expansion"
description: "Learn how to use Visual Studio to visualize C/C++ macro expansion."
ms.date: 03/07/2024
ms.topic: "how-to"
f1_keywords: ["macro expansion", "macro visualization"]
helpviewer_keywords: ["macro expansion", "macro visualization"]
---
# Visualize C/C++ macro expansion

Long macros can be difficult to read. Visual Studio can now expand C and C++ macros. You can get a copy on the clipboard of what the expanded macro looks like, replace the macro inline with its expansion, and step-by-step expand a macro to see what it looks like at each stage of expansion. In this article, you experiment with all of these features.

## Prerequisites

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

You can inspect a macro's expanded value, even when several preprocessor steps are involved, by using the following steps:

1. Place the cursor on the `POWER` macro inside `main()` in the example.
1. As you hover over the macro, options appear to **Copy**, **Expand Inline**, **Visualize Expansion**, and **Search Online**:

    :::image type="complex" source="media/visual-studio-2022-hover-macro.png" alt-text="Screenshot of the macro window, showing the POWER macro expansion.":::
    The macro window is open on POWER to show that it expands to (((10.0 * 20.0) * (5.0 * 2.0)) / 2.0). Options to copy, expand inline, visual expansion, and search online appear at the bottom of the window.
    :::image-end:::

1. Choose **Copy**.
1. Create a comment following the `POWER` line and choose paste (CTRL+V). The expansion of the macro, as a comment near your macro, looks like: `// (((10.0 * 20.0)* (5.0 * 2.0)) / 2.0)`. The keyboard shortcut for this action is CTRL+M, CTRL+C.

## Expand a macro inline

Use the following steps to expand a macro inline, which replaces the macro with its expansion:

1. Place the cursor on the `POWER` macro inside `main()` in the example.
1. As you hover over the macro, options appear to **Copy**, **Expand Inline**, **Visualize Expansion**, and **Search Online**
1. Choose **Expand Inline**. The `POWER()` macro is replaced with its expanded value: ```std::cout << "Power: " << (((10.0 * 20.0) * (5.0 * 2.0)) / 2.0) << std::endl;```. The keyboard shortcut for this action is CTRL+M, CTRL+I.

## Visualize macro expansion

You can expand a macro one step at a time. This is useful when there are nested macros and you want to see the expansion step-by-step. To visualize the macro expansion for the `WORK` macro, use the following steps:

1. Place the cursor on the `WORK` macro inside `main()` in the example.
1. As you hover over the macro, options appear to **Copy**, **Expand Inline**, **Visualize Expansion**, and **Search Online**.
1. Choose **Visualize Expansion**. The keyboard shortcut for this action is CTRL+M followed by CTRL+V.
1. The macro expansion window appears. The first expansion of the `WORK` macro is visible: `(FORCE() * DISTANCE())`:

    :::image type="complex" source="media/visual-studio-2022-work-macro-expansion.png" alt-text="Screenshot of the macro expansion window, which allows you to step through the WORK macro expansion one step at a time.":::
    The macro visualization window is open on FORCE to show that it initially expands to (FORCE()*DISTANCE()). There are single angle brackets in the window for moving forwards and backwards a single expansion at a time. The double angle brackets fully expand or fully undo the macro expansion.
    :::image-end:::

1. Click the right angle bracket to expand the `FORCE` macro. The window now shows the `FORCE` macro expansion: `(MASS * ACCELERATION) * DISTANCE()`.
1. Click the right angle bracket to expand another step. The window now shows the `FORCE` macro expansion: `((10.0 * ACCELERATION) * DISTANCE())`.

Continue to expand the macro to see the full expansion of the `WORK` macro, which is: ```((10.0 * 20.0) * (5.0 * 2.0))```.
You can use the double angle brackets to fully expand the macro, or to reverse the expansion to the first level of expansion.

## See also

[View UE macros in Visual Studio](/visualstudio/gamedev/unreal/get-started/vs-tools-unreal-quickstart#view-ue-macros-in-visual-studio)