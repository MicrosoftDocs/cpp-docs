---
title: "# Tutorial: Troubleshoot function inlining on build time"
description: "Tutorial on how to use Build Insights function view to troubleshoot the impact of function inlining on build time in your C++ projects."
ms.date: 5/1/2024
helpviewer_keywords: ["C++ Build Insights", "inline function analysis", "build time analysis", "__forceinline analysis", "inlines analysis"]
---
# Tutorial: Troubleshoot function inlining on build time

Use Build Insights **Functions** view to troubleshoot the impact of function inlining on build time in your C++ projects.

## Prerequisites

- Visual Studio 2022 17.8 or greater.
- C++ Build insights is enabled by default if you install either the Desktop development with C++ workload or the Game development with C++ workload.

:::image type="complex" source="./media/installer-desktop-cpp-build-insights.png" alt-text="Screenshot of the Visual Studio Installer with the Desktop development with C++ workload selected.":::
The list of installed components is shown. C++ Build Insights is highlighted and is selected to indicate it's installed.
:::image-end:::

:::image type="complex" source="./media/installer-gamedev-cpp-build-insights.png" alt-text="Screenshot of the Visual Studio Installer with the Game development with C++ workload selected.":::
The list of installed components is shown. C++ Build Insights is highlighted and is selected to indicate it's installed.
:::image-end:::

## Overview

Build Insights, now integrated into Visual Studio, helps you optimize your build times--especially for large projects like AAA games. Build Insights provides analytics such as **Functions** view, which helps diagnose slow code generation time. It displays the time it takes to generate code for each function, and shows the impact of [`__forceinline`](../../cpp/inline-functions-cpp.md#inline-__inline-and-__forceinline).

The `__forceinline` directive tells the compiler to inline a function regardless of its size or complexity. Inlining a function can improve runtime performance by reducing the overhead of calling the function, but it can increase the size of the binary and impact your build times.

For optimized builds, the time spent generating code contributes significantly to the total build time. In general, C++ function optimization happens quickly. But in exceptional cases, some functions can become large enough and complex enough to put pressure on the optimizer and noticeably slow down your builds.

In this article, learn how to use the Build Insights **Functions** view to inlining bottlenecks in your build.

## Set build options

To measure the results of `__forceinline`, use a **Release** build because optimizations for `__forceinline` impact release build times the most. Set the build for **Release** and **x64**:

- In the **Solution Configurations** dropdown, choose **Release**.
- In the **Solution Platforms** dropdown, choose **x64**.

:::image type="content" source="./media/build-options-release.png" alt-text="Screenshot showing the Solution Configuration dropdown set to Release, and the Solution Platform dropdown set to x64":::

Set the optimization level to maximum optimizations:

- In the **Solution Explorer**, right-click the project name and select **Properties**.
- In the project properties, navigate to **C/C++** > **Optimization**.
- Set the **Optimization** dropdown to **Maximum Optimization (Favor Speed) (/O2)**.

:::image type="content" source="./media/max-optimization-setting.png" alt-text="Screenshot showing the project property pages dialog. The settings are open to Configuration Properties > C/C++ > Optimization. The Optimization dropdown is set to Maximum Optimization (Favor Speed) (/O2)":::

- Click **OK** to close the dialog.

## Run Build Insights

On a project of your choosing, and using the **Release** build options set in the previous section, run Build Insights by choosing from the main menu **Build** > **Run Build Insights on Selection** > **Rebuild**. We choose **Rebuild** instead of **Build** to measure the build time for the entire project and not for just the few files may be dirty right now.

When the build finishes, an Event Trace Log (ETL) file opens. It's saved in the folder pointed to by the `TEMP` environment variable. The generated name is based on the collection time.

This file shows the time spent processing `#include` files, the build time for each function, and how `__forceinline` impacted the size of each function.

:::image type="complex" source="./media/build-" alt-text="alt text stuff":::
big ole’ long description
:::image-end:::

## Function view

In the window for the ETL file, choose the **Functions** tab. It shows the functions that were compiled and the time it took to compile each function. If a function's code generation time is too small, it won't be displayed because build events with negligible impact are discarded to avoid degrading build event collection performance.

:::image type="complex" source="./media/functions-view-before-fix.png" alt-text="Screenshot of the Functions view.":::
In the Function Name column, performPhysicsCalcuations() is highlighted and marked with a fire icon.:::
:::image-end:::

, indicating that the cost of generating that function is high and is worth investigating. The Time column shows how long it took to compile each function. The Forceinline Size column shows the impact of each `__forceinline` function in terms of roughly how many intermediate instructions were generated for the inlined function.


The **Time [sec, %]** column shows how long it took to compile each function. The **Forceinline Size** column shows how roughly how many intermediate instructions were generated for the function. If you click the chevron before the function nameThese numbers are summed, and the impact for all the inlined functions is listed for the containing function. You can sort the list by clicking on the **Time** column to see which functions are taking the most time to compile. A 'fire' icon indicates that cost of generating that function is high and is worth investigating.

The `Project` column indicates which project the function belongs to. Double click the **File** column to go to the source file where the function is defined.

Select the chevron next to a function to expand the function and see the list of inline functions that were expanded inside it. The functions that were inlined inside this function are listed and their individual size is shown in terms of generated instructions. Higher is worse. Highlighting `__forceinline` information is important because excessive use of `__forceinline` functions can significantly slow compilation.

You can search for a specific function by using the **Filter Functions** box. If a function's code generation time is too small, it doesn't appear in the Functions View.

## Improve build time and function inlining

We can see that the `foo` function is taking the most time to compile. Investigating further, by opening the function, we see that the `foo2` function is marked with `__forceinline`. This function is inlined into many other functions, which is causing the build time to increase. We can remove the `__forceinline` directive from the `foo` function to reduce the build time.

## Troubleshooting

- If the Functions view doesn't show any functions, you may not be building with the right optimization settings. Ensure that you're building Release with full optimizations, as described in [Set build options](#set-build-options). Also, if a function's code generation time is too small, it doesn't appear in the list.
- If the Build Insights window doesn't appear, do a rebuild instead of a build: **Build** > **Run Build Insights on Solution** > **Rebuild**.
- If you closed the Build Insights window, reopen it by finding the `.etl` file in your `%temp%` folder, where `%temp%` is a Windows environment variable that contains the path to your temporary files folder.

## See also

[Inline functions (C++)](../../cpp/inline-functions-cpp.md)\
[Troubleshoot header file impact on build time](build-insights-included-files-view.md)