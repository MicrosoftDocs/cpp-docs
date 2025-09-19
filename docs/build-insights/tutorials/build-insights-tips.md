---
title: "Build Insights tips and tricks"
description: "Learn time-saving tips for using Build Insights."
ms.date: 1/8/2025
author: tylermsft
ms.author: twhitney
ms.topic: article
helpviewer_keywords: ["C++ Build Insights tips and tricks"]
---
# Build Insights tips and tricks

Learn time-saving tips for using Build Insights.

## Run Build Insights on selected files

This feature requires Visual Studio 2022 17.12 or later.

If you're working on a specific file or files, and want to see how they impact your build time, you can run Build Insights on just those files. This feature is useful when you want to focus on a subset of files in your project.

To try it, in **Solution Explorer** select the files in your project you want to profile, right-click, and choose **Run Build Insights on Selected Files**:

  :::image type="content" source="./media/build-insights-run-on-selected-files.png" alt-text="A screenshot of files in the Solution Explorer. The context menu is open and the option to Run Build Insights on Selected Files is highlighted.":::

## Filter Build Insights results

This feature requires Visual Studio 2022 17.12 or later.

If you have a large solution with many projects, you can filter the Build Insights results to see files only the projects you're interested in. This feature is useful when you want to focus on a subset of projects in your solution.

To try it, click the filter button on the filter column header and select the projects you want to see results for:

  :::image type="complex" source="./media/build-insights-filter-by-project.png" alt-text="A screenshot of the Build Insights window with the Included Files tab open.":::
  The filter button is selected and a list of projects appears. Checkboxes next to two projects are checked.
  :::image-end:::

You can also use file wildcards to filter results. The search is case-insensitive and you should use forward slashes (`/`) as path separators:

  :::image type="content" source="./media/build-insights-glob-filter.png" alt-text="A screenshot of the build insights filter dialog. There's a files to include text box and a files to exclude text box.":::

This allows you to exclude files from a specific folder or only include files from a specific folder. For example, if your source is located at `C:\src\`, you could include files only from the renderer directory and its subdirectories by putting `C:/src/dev/renderer/**` into the **files to include** text box. Use forward slashes (`/`) as path separators.

Here are some other examples:

- All files in the renderer directory: `C:/src/dev/renderer/*`
- All files in the `C:/src/dev/renderer/` directory *and all its subdirectories*: `C:/src/dev/renderer/**`
- All header files in the `C:/src/dev/renderer/` directory *and all its subdirectories*: `C:/src/dev/renderer/**/*.h`

For more examples, see the [online glob pattern tester](https://globster.xyz/).

The filter you enter into either text box persists per solution. Filtering by wildcards isn't supported for CMAKE projects.

## Save Build Insights reports to a designated folder

This feature requires Visual Studio 2022 17.12 or later.

Now you can designate a folder to automatically save Build Insight reports to so you can easily access them.

To set the designated folder, go to **Tools** > **Options** > **C++ Build Insights** > **Trace Collection**. Set a path in the **Store Build Insights reports in this directory** textbox:

  :::image type="complex" source="./media/build-insights-reports-directory.png" alt-text="A screenshot of the options window.":::
  In the left pane, Build Insights > Trace Collection is selected. In the collection settings, the checkbox for Store Build Insights reports in this directory is selected, and the directory text box contains the path c:\users\contoso\workspace as an example.
  :::image-end:::

Reports are automatically saved to this folder when you run Build Insights. If a path isn't set, the `TEMP` folder is used.

## Get help about the Build Insight window

This feature requires Visual Studio 2022 17.12 or later.

To see a short description for the tabs in the Build Insights window, along with a link to the documentation for a detailed explanation, click the question mark icon in the Build Insights window:

  :::image type="content" source="./media/build-insights-view-explanations.png" alt-text="A screenshot of the Build Insights window with the view explanations button (a question mark in a circle) highlighted.":::

## See also

[Build Insights in Visual Studio video - Pure Virtual C++ 2023](/shows/pure-virtual-cpp-2023/build-insights-in-visual-studio)\
[Improving code generation time with C++ Build Insights](https://devblogs.microsoft.com/cppblog/improving-code-generation-time-with-cpp-build-insights)\
[Troubleshoot header file impact on build time](build-insights-included-files-view.md)\
[Tutorial: Troubleshoot function inlining on build time](build-insights-function-view.md)
