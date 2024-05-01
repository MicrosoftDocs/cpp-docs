---
title: "Tutorial: Build Insights included files view"
description: "Tutorial on how to use Build Insights function view to troubleshoot the impact of #include files on build time."
ms.date: 4/25/2024
helpviewer_keywords: ["C++ Build Insights", "included files view", "include tree view", "#include analysis", "build time analysis"]
---
# Tutorial: Use Build Insights to troubleshoot #include files build time

Use Build Insights **Included Files** and **Include Tree** views to troubleshoot the impact of `#include` files on C and C++ build times.

## Prerequisites

- Visual Studio 2022 17.8 or greater.
- C++ Build Insights is enabled by default if you install either the Desktop development with C++ workload or the Game development with C++ workload.

:::image type="complex" source="./media/installer-desktop-cpp-build-insights.png" alt-text="Screenshot of the Visual Studio Installer with the Desktop development with C++ workload selected.":::
The list of installed components is shown. C++ Build Insights is highlighted and is selected to indicate it's included in the installation.
:::image-end:::

:::image type="complex" source="./media/installer-gamedev-cpp-build-insights.png" alt-text="Screenshot of the Visual Studio Installer with the Game development with C++ workload selected.":::
The list of installed components is shown. C++ Build Insights is highlighted and is selected to indicate it's included in the installation.
:::image-end:::

## Overview

Build Insights, now integrated into Visual Studio, is designed to help you optimize your build times--especially for large projects like triple-A games. When a large header file is repeatedly parsed, there's an impact on build time. Build Insights provides analytics in the **Included Files** view, which helps diagnose the impact of repeatedly parsing `#include` files. It displays the time it takes to parse each header file and a view of the relationships between header files.

In this article, learn how to use the Build Insights **Included Files** and **Include Tree** views to identify bottlenecks in your build process and improve build time. We use a hypothetical project to demonstrate how to use Build Insights to identify the most expensive header files to parse and how to optimize build time by creating a precompiled header file.

## Set build options

Before gathering Build Insights data, set the build options for the type of build you want to measure. For example, if you're concerned about your x64 debug build time, set the build for **Debug** and **x64**:

- In the **Solution Configurations** dropdown, choose **Debug**.
- In the **Solution Platforms** dropdown, choose **x64**.

    :::image type="complex" source="./media/build-options.png" alt-text="Screenshot showing the Solution Configuration dropdowns.":::
    The Solution Configuration dropdown is shown. It has options for Debug, Release, and Configuration manager. The Solution Platform dropdown is set to x64
    :::image-end:::

- Click **OK** to close the dialog.

## Run Build Insights

The story for this article is about a solution consisting of several projects for a calculator project. One of the projects takes suspiciously long to build. We use Build Insights to investigate by selecting the slow building project in the **Solution Explorer** and run Build Insights from the Visual Studio main menu by choosing **Build** > **Run Build Insights on Selection** > **Rebuild**. We choose rebuild instead of build to make sure to measure the build time for the entire project and not for just the few files may be dirty right now.

:::image type="content" source="./media/build-insights-rebuild-project.png" alt-text="Screenshot of the main menu with Run Build Insights on Selection > Rebuild selected.":::

>[!TIP]
> You can also right-click a project in Solution Explorer and select **Run Build Insights on Build Solution**. Or from the main menu choose **Build** > **Run Build Insights on Selection** > **Rebuild**.

When the build finishes, an Event Trace Log (ETL) file opens. It's saved in the `%temp%` folder. The generated name is based on the collection time.

## Included Files View

The trace file shows the build time--which for the example was 16.404 seconds. The **Diagnostics Session** is the overall time to run the Build Insights session. Choose the **Included Files** tab.

This view shows the time spent processing `#include` files. The children nodes are the files that included the parent node. Files that take up 10% or more of the build time are shown with a flame symbol to indicate that they're a likely candidate to investigate.

:::image type="complex" source="./media/included-files-before-fix.png" alt-text="Screenshot of the included files view":::
In the file path column, several files with a fire icon are highlighted because they take over 10% of the build time to parse. winrtHeaders.h is the biggest one at 8.581 seconds or 52.3% of the 16.404 second build time."
:::image-end:::

In the **File Path** column, some files have a fire icon next to them to indicate that they take up 10% or more of the build time. The time column shows the time spent parsing each file. The parse count column shows how many time the header file was parsed.

The first header file highlighted in this list is `winrtHeaders.h` It takes 8.581 seconds of the overall 16.404-second build time, or 52.3% of the build time. The next most expensive is `Windows.UI.Xaml.Interop.h` and then `Windows.Xaml.h`.

To see which file includes it, click the chevron next to the header. The **Parse Count** column can be helpful by pointing out how many times a header file is included by other files. Perhaps a header file is included multiple times, which could be a sign that it's a good candidate for a precompiled header file.

The **Translation Unit** column shows which translation unit was being processed when the file was included. It lists which file was being processed when the included file was processed. In this example, `winrtHeaders.h` was included while `Grapher.cpp` was compiled:

:::image type="complex" source="./media/included-files-translation-unit.png" alt-text="Screenshot of the Included Files view":::
An example ETL file showing the includes files for a sample project. In the file path column, winrtHeaders.h is selected and expanded. It takes 8.219 seconds to build which is 50.1% of the build time. Its child node is Grapher.cpp, which is also listed as the translation unit."
:::image-end:::

We know that `winrtHeaders.h` is expensive to parse, but we can find out more. We can use the **Include Tree** view to see which files `winrtHeaders.h` includes. Choose the **Include Tree** tab to see this view.

## Include Tree view

This view shows include statistics for every file where the children nodes are the files included by the parent node. Expanding an entry in the **Include Tree** view shows which files that entry includes. This can help you understand the relationships between header files and identify opportunities to reduce the number of times a header file is parsed.

Select the **Include Tree** tab in the ETL file to see the Include Tree view:

:::image type="complex" source="./media/include-tree-view.png" alt-text="Screenshot of the Include Tree view":::
Shows the include tree for a project. In the file path column, each file that includes other files is listed, along with how many files it includes and the time it took to parse it.
:::image-end:::

In this view, the **File Path** column shows each file that includes other files. The **Include Count** lists how many files this header file includes. The time to parse this file is listed, and when expanded, lists the time it took to parse each individual header file that this header file includes.

Earlier, we saw that `winrtHeaders.h` is expensive to parse. In the **Filter Files** text box, if we enter `winrtHeaders` we can filter the view to only the entries that contain `winrtHeaders` in the name. Clicking the chevron next to `winrtHeaders` shows which files it includes:

:::image type="complex" source="./media/include-tree-view-expanded.png" alt-text="Screenshot of the expanded Include Tree view":::
The file path column lists each file that includes other files, along with how many files it includes and the time it took to parse it. winrtHeaders.h is selected and expanded to show the files it includes. Windows.UI.Xaml.Interop.h is one of those files and is expanded to show `Windows.UI.Xaml.Interop.h` that is expanded to show the header files it includes.
:::image-end:::

We see that `winrtHeaders` includes `Windows.UI.Xaml.Interop.h`. Remember from the **Included Files** view that this was also expensive to parse. Click the chevron next to that to see that it includes `Windows.UI.Xaml.h`, which includes 21 other header files, two of which are also on the hot list. The technique we use to process it faster is precompiled headers.

## Improve build time with precompiled headers

Because we know from the **Included Files** view that `winrtHeaders` is expensive header to parse, and because we know from the **Include Tree** view that `winrtHeaders` includes several other header files that are expensive to parse, we build a [Precompiled header file](../../build/creating-precompiled-header-files.md) (PCH) to reduce the number of times these files are parsed.

In the example project, we added a `pch.h` to include these headers, which looks like this:

```cpp
#ifndef CALC_PCH
#define CALC_PCH

#include <winrtHeaders.h>

#endif // CALC_PCH
```

PCH files must be compiled before they can be used. So we add a file to the project, arbitrarily named `pch.cpp`, that includes `pch.h`. It looks like this:

```cpp
#include "pch.h"
```

Then we set our project to use the PCH. In the project properties, navigate to **C/C++** > **Precompiled Headers** and set **Precompiled Header** to **Use (/Yu)** and **Precompiled Header File** to **pch.h**.

:::image type="complex" source="./media/precompiled-header-settings.png" alt-text="Screenshot of the project properties dialog with the Precompiled Headers settings open":::
Precompiled Header is set to: Use (/Yu). The Precompiled Header File is set to pch.h.
:::image-end:::

To use the PCH, we include it as the first line in the source files that use `winrtHeaders` because it must come before any other include files. Or, for simplicity, we could modify the project properties to include `pch.h` at the beginning of every file in the solution by setting the project property: **C/C++** \> **Advanced** \> **Forced Include File** to `pch.h`:

:::image type="complex" source="./media/precompiled-header-settings-force-include.png" alt-text="Screenshot of the project properties dialog with the Advanced settings open":::
Forced Include File is set to pch.h.
:::image-end:::

Since the PCH includes `winrtHeaders`, we could remove `winrtHeaders` from all the files that currently include it. It's not strictly necessary because the compiler realizes that `winrtHeaders` is already included and not parse it again. Some developers prefer to keep the includes in the source file for clarity, or in case the PCH changes to no longer include that particular header file.

## Test the changes

We first clean the project to make sure we're comparing the same thing as before. To clean just one project, right-click the project in the **Solution Explorer** and choose **Project only** \> **Clean only \<prj name\>**.

Because this project uses a precompiled header (PCH), we don't want to measure the time spent building the PCH because that only happens once. We do this by loading the `pch.cpp` file and choosing **Ctrl+F7** to build just that file. We could also compile this file by right-clicking `pch.cpp` in the Solution Explorer and choosing `Compile`.

Now we rerun Build Insights in the **Solution Explorer** by right-clicking the project and choosing **Project Only** > **Run Build Insights on Build**. When the ETL files appears, we see that build time went from 16.404 seconds to 6.615 seconds. Put `winrtHeaders` into the filter box and nothing appears. This is because the time spent parsing it is now negligible since it's being pulled in via the precompiled header.

:::image type="content" source="./media/included-files-after-fix.png" alt-text="Screenshot of the Include Tree pane in the trace file. winrtHeaders is no longer listed.":::

This example uses precompiled headers because they're a common solution before C++ 20. However, starting with C++20, there are other faster, less brittle ways to include header files such as header units and modules. For more information, see [Compare header units, modules, and precompiled headers](../../build/compare-inclusion-methods.md).

## Navigate between views

Some navigation tips for the **Included Files** and **Include Tree** views:

- Double-click a file (or press **Enter**) in either the **Included Files** or **Include Tree** view the source code for that file.
- Right click on a header file to find that file to go to other view. For example, in the **Included File**s view, right-click on `winrtHeaders.h` and choose **Find in Include Tree** to see it in that view. Conversely, you can right-click a file in the **Include Tree** view to jump to it in the **Included Files** view.

:::image type="content" source="./media/included-files-show-in-include-tree.png" alt-text="Screenshot of a right-click on a file in the Included Files view. The menu option Show in Include Tree View is highlighted.":::

## Tips

- You can **Save As** the ETL file to keep a record of the build time. You can compare it to future builds to see if your changes are improving build time.
- Click the Open in WPA button in the bottom right of the ETL window to dig deeper into the data with Windows Performance Analyzer.
- Drag columns to change the order of the columns. For instance, you may prefer moving the Time column to be the first column.
- double click, or **Enter** to go to a file or right-click context menu
- **Included Files** and **Include Tree** views, use the Use the filter box to find a particular header file that you're interested in.
- Sometimes the parse time reported for a header file differs depending on the file that includes it. This can be due to the interplay of different `#define`s that may affect which parts of the header are expanded, file caching, and other system factors.
- If you forget what the **Included Files** or **Include Tree** views shows, hover over the tab to see a tooltip that describes the view. For example, if you hover over the **Include Tree** tab, the tooltip says, "View that shows include statistics for every file where the children nodes are the files included by the parent node."
- If you closed the Build Insights window, reopen it by finding the `.etl` file in your `%temp%` folder, where `%temp%` is a Windows environment variable that contains the path to your temporary files folder.

## Troubleshooting

- If the Build Insights window doesn't appear, do a rebuild instead of a build: **Build** > **Run Build Insights on Solution** > **Rebuild**. The Build Insights window doesn't appear if nothing actually builds.
- If a header file you're interested in doesn't appear in the **Included Files** or **Include Tree** views, its build time isn't significant enough to be listed.

## See also

[Compare header units, modules, and precompiled headers](../../build/compare-inclusion-methods.md)\
[Build Insights in Visual Studio video - Pure Virtual C++ 2023](/events/pure-virtual-cpp-2023/build-insights-in-visual-studio)\
[Tutorial: vcperf and Windows Performance Analyzer](vcperf-and-wpa.md)\
[Reference: vcperf commands](../reference/vcperf-commands.md)\
[Reference: Windows Performance Analyzer views](../reference/wpa-views.md)\
[Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)
