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
- C++ Build insights is enabled by default if you install either the Desktop development with C++ workload or the Game development with C++ workload.

:::image type="complex" source="./media/installer-desktop-cpp-build-insights.png" alt-text="Screenshot of the Visual Studio Installer with the Desktop development with C++ workload selected.":::
The list of installed components is shown. C++ Build Insights is highlighted and is selected to indicate that it is included in the installation.
:::image-end:::

:::image type="complex" source="./media/installer-gamedev-cpp-build-insights.png" alt-text="Screenshot of the Visual Studio Installer with the Game development with C++ workload selected.":::
The list of installed components is shown. C++ Build Insights is highlighted and is selected to indicate that it is included in the installation.
:::image-end:::

## Overview

Build Insights, now integrated into Visual Studio, is designed to help you optimize your build times--especially for large projects like AAA games. When a large header file is repeatedly parsed, there is an impact on build time. Build Insights provides analytics in the **Included Files** view, which helps diagnose the impact of repeatedly parsing `#include` files. It displays the time it takes to parse each header file as well as a view of which header files are included by other header files.

In this article, learn how to use the Build Insights **Included Files** and **INclude Tree** views to identify bottlenecks in your build process and improve build time. We'll use a hypothetical project to demonstrate how to use Build Insights to identify the most expensive header files to parse and how to optimize build time by creating a precompiled header file.

## Set build options

Before gathering Build Insights data, set the build options for the type of build you want to measure. For example, if you are concerned about your x64 debug build time, set the build for **Debug** and **x64**:

- In the **Solution Configurations** dropdown, choose **Debug**.
- In the **Solution Platforms** dropdown, choose **x64**.

:::image type="complex" source="./media/build-options.png" alt-text="Screenshot showing the Solution Configuration dropdowns.":::
The Solution Configuration dropdown is shown with options for Debug and Release. The Solution Platform dropdown is set to x64
:::image-end:::

- Click **OK** to close the dialog.

## Run Build Insights

The solution for this example calculator project consists of several projects and one of them is taking longer to build than we think it should. We suspect that the time is being spent parsing header files. We'll use Build Insights to investigate.

We first clean the project because we want to make sure to measure the build time for the project and not for just the files may be dirty right now. We do this by right-clicking the project in the **Solution Explorer** and choosing **Project only** > **Clean only \<prj name\>**.

We then select the project in the **Solution Explorer** and run Build Insights from the Visual Studio menu by choosing **Build** > **Run Build Insights on Selection** > **Build**.

:::image type="content" source="./media/build-insights-rebuild-project.png" alt-text="Screenshot of the main menu with Run Build Insights on Selection > Rebuild selected.":::

>[!TIP]
> You can also right-click a project in Solution Explorer and select **Run Build Insights on Build Solution**. Or from the main menu choose **Build** > **Run Build Insights on Selection** > **Rebuild**.

When the build finishes, an Event Trace Log (ETL) file opens. It's saved in the `%temp%` folder on your machine. The generated name is based on the collection time.

## Included Files View

The trace file shows the build time--which for this example was 16.404 seconds.

There are tabs for the different Build Insight views. Choose the **Included Files** tab.

This view shows the time spent processing `#include` files. Files that take up 10% or more of the build time are shown with a flame symbol to indicate that it is likely a priority to investigate.

:::image type="complex" source="./media/included-files-before-fix.png" alt-text="Screenshot of the included files view":::
An example ETL file showing the includes files for a sample project. In the file path column, some files are particularly expensive to parse in terms of time. They have a fire icon next to them to indicate that they are worth investigating. The time column shows the time spent parsing each file. The parse count column shows how many time the header file was parsed."
:::image-end:::

In the **File Path** column, some files have a fire icon next to them to indicate that they take up 10% or more of the build time, and thus are worth investigating. The time column shows the time spent parsing each file. The parse count column shows how many time the header file was parsed.

The first header file highlighted in this list is `winrtHeaders.h` It takes 50% of the build time. The next most expensive is `Windows.UI.Xaml.Interop.h` and then `Windows.Xaml.h`.

Click the chevron next to each header to see which file is including it. The **Parse Count** column can also be helpful by pointing out how many times a header file is included by other files.

The **Translation Unit** column shows which translation unit was being processed when the file was included. It will list which file was being processed when the included file was processed. In this example, `winrtHeaders.h` was included when `Grapher.cpp` was being compiled:

:::image type="complex" source="./media/included-files-translation-unit.png" alt-text="Screenshot of the Included Files view":::
An example ETL file showing the includes files for a sample project. In the file path column, winrtHeaders.h is selected and expanded. It takes 8.219 seconds to build which is 50.1% of the build time. It's child node is Grapher.cpp, which is also listed as the tranlsation unit."
:::image-end:::

We know that `winrtHeaders.h` is expensive to parse, but we can find out more. We can use the **Include Tree** view to see which files `winrtHeaders.h` includes.

## Include Tree View

Expanding an entry in the **Include Tree** view shows which files that entry includes. This can help you understand the relationships between header files and identify opportunities to reduce the number of times a header file is parsed.

Select the **Include Tree** tab in the ETL file to see the Include Tree view:

:::image type="complex" source="./media/include-tree-view.png" alt-text="Screenshot of the Include Tree view":::
An example ETL file showing the include tree for a project. In the file path column, each file that includes other files is listed, along with how many files it includes and the time it took to parse it.
:::image-end:::

In this view, we see the header files that are included by other files. The **File Path** column shows each file that includes other files, along with how many files it includes in the **Include Count** and the time it took to parse it.

Earlier, we saw that `winrtHeaders.h` is expensive file to parse. Let's dig in to see what else we can find out about this header.

In the Filter Files text box, enter `winrtHeaders` to filter the view to entries that contain `winrtHeaders` in the name. Click the chevron next to `winrtHeaders` to see which files it includes.

:::image type="complex" source="./media/include-tree-view-expanded.png" alt-text="Screenshot of the Include Tree view":::
An example ETL file showing the include tree for a project. In the file path column, each file that includes other files is listed, along with how many files it includes and the time it took to parse it.
:::image-end:::

We see that `winrtHeaders` includes `Windows.UI.Xaml.Interop.h`. Remember from the **Included Files** view that this was also expensive to parse. Click the chevron next to that to see that it includes `Windows.UI.Xaml.h`. Not only that, we see that this file includes 21 other header files, two of which are also on the hot list. If we improve the time it takes to process `winrtHeaders.h`, that'll address the processing time for multiple expensive headers

The technique we'll use to process it faster is precompiled headers.

## Improve build time with precompiled headers

Because we know from the **Included Files** view that `winrtHeaders` is one of the most expensive headers to parse, and because we know from the **Include Tree** view that `winrtHeaders` also includes several other header files that are expensive3 to parse, we'll build a [Precompiled header file](../../build/creating-precompiled-header-files.md) (PCH) out of those headers to reduce the number of times these files are parsed.

In the example project, we added `pch.h` that includes these headers, and looks like this:

```cpp
#ifndef CALC_PCH
#define CALC_PCH

#include <winrtHeaders.h>

#endif // CALC_PCH
```

PCH files must be compiled before they can be used. So we add a file, arbitrarily named `pch.cpp`, that includes `pch.h`. It looks like this:

```cpp
#include "pch.h"
```

Then we set our project to use the PCH. In the project properties, navigate to **C/C++** > **Precompiled Headers** and set **Precompiled Header** to **Use (/Yu)** and **Precompiled Header File** to **pch.h**.

:::image type="complex" source="./media/precompiled-header-settings.png" alt-text="Screenshot of the project properties dialog with the Precompiled Headers settings open":::

To use the PCH, we add it as the first entry in all the source files. Or, for simplicity, we can do this by modifying the project properties to include `pch.h` at the beginning of every file in the solution even if we don’t explicitly add an include directive. That's done in the project properties: **C/C++** \> **Advanced** \> **Forced Include File** to `pch.h`.

Since the PCH includes `winrtHeaders`, we could remove `winrtHeaders` from all the files that currently include it. It's not strictly necessary, though, because the compiler will realize that `winrtHeaders` is already included and not parse it again. Some developers prefer to keep the includes around for clarity, or in case the PCH changes to no longer include that particular header file.

## Test the changes

We first clean the project to make sure we are comparing the same thing as before. We do this by right-clicking the project in the **Solution Explorer** and choosing **Project only** > **Clean only <prj name>**.

Because this project uses a precompiled header (PCH), we don't want to measure time spent building the PCH because that only happens once. We do this by loading the pch.cpp file and choosing **Ctrl+F7** to build just this file. We could also compile this file by right-clicking `pch.cpp` in the solution explorer and choosing `Compile`.

Now we rerun Build Insights in the **Solution Explorer** by right-clicking the project and choosing **Project Only** >> **Run Build Insights on Build**. When the ETL files appears, we see that build time has gone from 16.404 seconds to 6.615 seconds. Put `winrtHeaders` into the filter box and nothing appears. This is because the time spent parsing it is now negligible since it is being pulled in via the precompiled header.

:::image type="content" source="./media/included-files-after-fix.png" alt-text="Screenshot of the Include Tree pane in the trace file. winrtHeaders is no longer listed.":::

This example uses precompiled headers because they are a common solution for code prior to C++ 20. However, starting with C++20, there are other faster, less brittle ways to include header files such as header units and modules. See [Compare header units, modules, and precompiled headers](../../build/compare-inclusion-methods.md) for more information.

## Navigate between views

right click to go to other view
double-click to go to the file

## Tips

open WPA window
Drag columns to change order
Save as, the ETL file for future use

rt-click, switch between views

double click, or **Enter** to go to a file or right-click context menu

Filter box: One of the files it includes is `Utils.h`. In the filter box, you can search for a specific file to see where what all it includes. In this example, we've searched for `Utils.h` and then selected the chevron next to its name. We see that it includes `iostream` and `chrono`.  include-tree-view-utils-h-expanded.png

Sometimes parse time for the same header will differ. This can be due to the interplay of different `#define`s that may affect which parts of the header are expanded, caching, and other system factors.

If you forget what exactly the view is showing you, hover over the tab to see a tooltip that describes the view. For example, if you hover over the **Include Tree** tab, the tooltip says, "View that shows include statistics for every file where the children nodes are the files included by the parent node."

## Troubleshooting

- If the Build Insights window doesn't appear, do a rebuild instead of a build: **Build** > **Run Build Insights on Solution** > **Rebuild**. It won't appear if nothing actually builds so your build may not be 'dirty'.
- If you closed the Build Insights window, reopen it by finding the `.etl` file in your `%temp%` folder, where `%temp%` is a Windows environment variable that contains the path to your temporary files folder.

## See also

[Compare header units, modules, and precompiled headers](../../build/compare-inclusion-methods.md)\
[Build Insights in Visual Studio video - Pure Virtual C++ 2023](https://learn.microsoft.com/en-us/events/pure-virtual-cpp-2023/build-insights-in-visual-studio)
[Tutorial: vcperf and Windows Performance Analyzer](vcperf-and-wpa.md)\
[Reference: vcperf commands](../reference/vcperf-commands.md)\
[Reference: Windows Performance Analyzer views](../reference/wpa-views.md)\
[Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)
