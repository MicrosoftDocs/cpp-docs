---
title: "Tutorial: Build Insights included files view"
description: "Tutorial on how to use Build Insights function view to troubleshoot the impact of #include files on build time."
ms.date: 4/25/2024
helpviewer_keywords: ["C++ Build Insights", "included files view", "include tree view", "#include analysis", "build time analysis"]
---
# Tutorial: Use Build Insights to troubleshoot #include files on build time

Use Build Insights **Included Files** and **Include Tree** views to troubleshoot the impact of `#include` files on build time in your C and C++ projects.

## Prerequisites

- Visual Studio 2022 17.8 or greater.
- C++ Build insights is enabled by default if you installed either the Desktop development with C++ workload or the Game development with C++ workload.

:::image type="complex" source="./media/installer-desktop-cpp-build-insights.png" alt-text="Screenshot of the Visual Studio Installer with the Desktop development with C++ workload selected.":::
The list of installed components is shown. C++ Build Insights is highlighted and is selected to indicate that it is included in the installation.
:::image-end:::

:::image type="complex" source="./media/installer-gamedev-cpp-build-insights.png" alt-text="Screenshot of the Visual Studio Installer with the Game development with C++ workload selected.":::
The list of installed components is shown. C++ Build Insights is highlighted and is selected to indicate that it is included in the installation.
:::image-end:::

## Overview

Build Insights, now integrated into Visual Studio, is designed to help you optimize your build times--especially for large projects like AAA games. When a large header file is repeatedly parsed, there is an impact on build time. Build Insights provides analytics in the **Included Files** view, which helps diagnose the impact of repeatedly parsing `#include` files. It displays the time it takes to parse each header file as well as a view of which header files are included by other header files.

In this article, learn how to use the Build Insights **Included Files** view to identify bottlenecks in your build process and improve build time.

## Set build options

First, set the build options for the type of build you want to measure. For example, if you are most concerned about your x64 debug build times set the build for **Debug** and **x64**:

- In the **Solution Configurations** dropdown, choose **Debug**.
- In the **Solution Platforms** dropdown, choose **x64**.

:::image type="complex" source="./media/build-options.png" alt-text="Screenshot showing the Solution Configuration dropdowns" with options for Debug, Release. The Solution Platform dropdown is set to x64":::
The Solution Configuration dropdown is shown with options for Debug and Release. The Solution Platform dropdown is set to x64
:::image-end:::

- Click **OK** to close the dialog.

## Run build insights

On a project of your choosing, run Build Insights by choosing **Build** > **Run Build Insights on Solution** > **Build**. You can run Build Insights on a specific project in a multi-project solution by right-clicking the project in Solution Explorer and selecting **Run Build Insights**.

When the build finishes, an Event Trace Log (ETL) file opens that will be resemble the example that follows. It's saved in the `%temp%` folder on your machine. The generated name is based on the time of collection.

## Included Files View

The ETL file has tabs for the different Build Insight views. Choose the **Include Files** tab. This view shows the time spent processing `#include` files. For this example, the first file, `iostream`, is particularly expensive to parse in terms of time. Files that take up 10% or more of the build time are marked with a flame symbol to indicate that it is priority file to investigate. The **Time** column shows that 2.937 seconds were spent parsing this file altogether, which is 11.1% of the overall time spent parsing files. It was parsed 6 times.

:::image type="complex" source="./media/included-files-view.png" alt-text="Screenshot of the included files view":::
An example ETL file showing the includes files for a sample project. In the file path column, some files are shown as being particularly expensive to parse in terms of time. They have a fire icon next to them to indicate that they are worth investigating. The time column shows the time spent parsing each file. The parse count column shows how many time the header file was parsed."
:::image-end:::

Click the chevron next to a file to expand the view to show which files include this file. This can give you an idea about how 'popular' this header file is. In this example, `iostream` is included by `main.cpp`, `renderer.cpp`, and it was included 4 times by `Utils.h` What this suggests is that `iostream` is a common header file that is included by many other files. If you can reduce the number of times `iostream` is parsed, you can improve your build time.  We'll talk about how to do that in the next section.

The next file in the list is `istream`. Expand that file to see that it is included by `iostream` six times. This increases our desire to find a way to reduce how many times `iostream` is parsed, because that would also reduce the number of times `istream` is parsed, which would improve build time given that parsing it also consumes 11.1% of the overall build time.

:::image type="complex" source="./media/included-files-expanded-view.png" alt-text="Screenshot of the included files view":::
An example ETL file showing the includes files for a sample project. In the file path column, some files are shown as being particularly expensive to parse in terms of time. They have a fire icon next to them to indicate that they are worth investigating. The time column shows the time spent parsing each file. The parse count column shows how many time the header file was parsed."
:::image-end:::

We could likewise examine the other files in the list to see if there are other common header files that are parsed multiple times, and consider ways to reduce the number of times they are parsed.

## Include Tree View

The **Include Tree** view shows the hierarchy of `#include` files. It shows which files include other files, and which files are included by other files. This can help you understand the relationships between header files and identify opportunities to reduce the number of times a header file is parsed. Select the **Include Tree** tab in the ETL file to see the Include Tree view:

:::image type="complex" source="./media/include-tree-view.png" alt-text="Screenshot of the Include Tree view":::
An example ETL file showing the include tree for a project. In the file path column, each file that includes other files is listed, along with how many files it includes and the time it took to parse it.
:::image-end:::

In this example, we see that the file `CollisionDetector.cpp` includes two files (as indicated in the **Include Count** column) and took 1.439 seconds (or 5.4% of the overall build time) to parse. Select the chevron next to `CollisionDetector.cpp` to see what files it includes. We can do this recursively. For example, `CollisionDetector.cpp` includes `CollisionDetector.h`, which includes `PhysicsObject.h` and `vector`. This can help you understand the relationships between header files and identify opportunities to reduce the number of times a header file is parsed:

:::image type="complex" source="./media/include-tree-view-expanded.png" alt-text="Screenshot of the Include Tree view with an expanded node":::
The include tree for a project with CollisionDetector.cpp expanded showing that it includes Utils.h and CollisionDector.h.  CollisionDetector.h is also expanded, showing that it includes PhysicsObject.h and vector.
:::image-end:::


The example ETL file shows the include tree for a project. In the file path column, each file that includes other files is listed, along with how many times it was included. The project that it was included in is also listed. Select the chevron next to a file to expand the view to see which files include this file. This can help you understand the relationships between header files and identify opportunities to reduce the number of times a header file is parsed.

## Improve build time with precompiled headers

Because we know that `iostream` is 

show how to build a precompiled header or link to topic for it
    - this topic shows how to build PCH: https://devblogs.microsoft.com/cppblog/faster-builds-with-pch-suggestions-from-c-build-insights/
Talk about header units

In the window for the ETL file, choose the **Functions** tab. It shows the functions that were compiled and the time it took to compile each function. If a function's code generation time is too small, it won't be displayed because build events with negligible impact are discarded to avoid degrading build event collection performance.

:::image type="complex" source="./media/" alt-text="alt text stuff":::
Just show the functions tab portion of the dialog with the forceinline size column, time column
:::image-end:::

The **Time [sec, %]** column shows how long it took to compile each function. The **Forceinline Size** column shows the impact of each `__forceinline` function in terms of roughly how many intermediate instructions were generated for the inlined function. These numbers are summed, and the impact for all the inlined functions is listed for the containing function. You can sort the list by clicking on the **Time** column to see which functions are taking the most time to compile. A 'fire' icon indicates that cost of generating that function is particularly high and is worth investigating.

The `Project` column indicates which project the function belongs to. Double click the **File** column to go to the source file where the function is defined.

Select the chevron next to a function to expand the function and see the list of inline functions that were expanded inside it. The functions that were inlined inside this function are listed and their individual size is shown in terms of generated instructions. Higher is worse. Highlighting `__forceinline` information is important because excessive use of `__forceinline` functions can significantly slow compilation.

You can search for a specific function by using the **Filter Functions** box. If a function's code generation time is too small, it doesn't appear in the Functions View.

## Navigate between views

right click to go to other view
double-click to go to the file

## Tips

open WPA window
Drag columns to change order

Filter box: One of the files it includes is `Utils.h`. In the filter box, you can search for a specific file to see where what all it includes. In this example, we've searched for `Utils.h` and then selected the chevron next to its name. We see that it includes `iostream` and `chrono`.  include-tree-view-utils-h-expanded.png

Sometimes parse time for the same header will differ. This can be due to the interplay of different `#define`s that may affect which parts of the header are expanded, caching, and other system factors.

If you forget what exactly the view is showing you, hover over the tab to see a tooltip that describes the view. For example, if you hover over the **Include Tree** tab, the tooltip says, "View that shows include statistics for every file where the children nodes are the files included by the parent node."

## Troubleshooting

- If the Build Insights window doesn't appear, do a rebuild instead of a build: **Build** > **Run Build Insights on Solution** > **Rebuild**.
- If you closed the Build Insights window, reopen it by finding the `.etl` file in your `%temp%` folder, where `%temp%` is a Windows environment variable that contains the path to your temporary files folder.

## See also

video pure virtual c++ 2023: https://youtu.be/P63jEa85pFg

[Inline functions (C++)](../../cpp/inline-functions-cpp.md)\
[Tutorial: vcperf and Windows Performance Analyzer](vcperf-and-wpa.md)\
[Reference: vcperf commands](../reference/vcperf-commands.md)\
[Reference: Windows Performance Analyzer views](../reference/wpa-views.md)\
[Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)
