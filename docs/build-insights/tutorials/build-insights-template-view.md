---
title: "Troubleshoot template instantiation impact on build time"
description: "Tutorial for how to use Build Insights template view to analyze and optimize the impact of template instantiations on build time in your C++ projects."
ms.date: 7/9/2025
helpviewer_keywords: ["C++ Build Insights", "template instantiation analysis", "build time analysis"]
ms.topic: troubleshooting-general
---
# Troubleshoot template instantiation impact on build time

Use Build Insights **Templates** view to analyze the impact of template instantiations on C++ build time. This feature is especially useful for projects that make heavy use of templates, such as those using template metaprogramming or large generic libraries.

Templates view will seem familiar to users of Build Insight's [Functions view](build-insights-function-view.md) due to similar UI and workflow.

## Prerequisites

- Visual Studio 2022 version 17.10 or later.
- The **C++ Build Insights** component must be installed. It's installed as part of either the Desktop development with C++ workload or the Game development with C++ workload. You can ensure that it is installed by following these steps:
  1. Open the Visual Studio Installer.
  1. Choose to modify your Visual Studio installation.
  1. Under the **Individual components** tab, search for and then select **C++ Build Insights**.
  :::image type="complex" source="./media/installer-build-insights.png" alt-text="Screenshot of the Visual Studio Installer":::The search box contains C++ build insights. The item C++ Build Insights is visible and selected.":::image-end:::
  1. Click **Modify** to install the component.

## Overview

Build Insights, integrated into Visual Studio, helps you optimize your build times--especially for large projects like AAA games. Build Insights provides analytics such as **Templates** view, which displays the time it takes to instantiate each template and shows which template instantiations add the most to your build time.

In general, C++ template instantiation happens quickly. In exceptional cases, some template instantiations can noticeably slow down your builds.

In this article, follow along to create a project that demonstrates template instantiation impact on build time, run Build Insights to gather template instantiation times, and analyze the results.

## Create a template test project

1. Open Visual Studio and create a new **C++ Console App** project and name it `TemplateAnalysis`.
1. Create a header file called `Templates.h` and replace its contents with the following code:

    ```cpp
    #pragma once 
    #include <utility>  
    #include <vector>  
    
    template<size_t> struct S1 {}; 
    template<int n> using type = std::vector<S1<n>>; 
    
    template<size_t...> struct S2 {}; 
    
    template<typename> struct S3 {}; 
    
    template<size_t... n> 
    struct S3<std::index_sequence<n...>>
    { 
        using type = S2<sizeof(type<n>)...>; 
    }; 
    
    inline size_t LargeValue()
    { 
        return sizeof(S3<std::make_index_sequence<1000>>); 
    }; 
    
    inline size_t SmallValue()
    { 
        return sizeof(S1<5>); 
    } 
    ```

1. Create a source file called `LargeValue.cpp` and replace its contents with the following code:

    ```cpp
    #include "Templates.h" 

    size_t GetLargeValue()
    { 
        return LargeValue(); 
    } 
    ```

1. Replace the contents of the `TemplateAnalysis.cpp` file with the following code:

    ```cpp
    #include "Templates.h" 

    extern size_t GetLargeValue();

    size_t GetSmallValue()
    { 
        return SmallValue(); 
    }

    int main()
    {
        size_t largeValue = GetLargeValue();
        size_t smallValue = GetSmallValue();
        return 0;
    }
    ```

## Enable build time data collection

Template instantiation time collection is off by default to minimize build overhead. To enable it:

1. In Visual Studio, go to **Tools** > **Options**.
1. In the **Options** dialog, expand **Build Insights** in the left navigation.
1. Select **Collect Template Instantiation**.
1. You can also choose where to save the report by selecting **Store Build Insights reports in this directory** and specifying a directory. By default, it's saved in the folder pointed to by the Windows `TEMP` environment variable.
1. Select **OK**.

:::image type="content" source="./media/tools-options-build-insights.png" alt-text="Screenshot of the project property pages dialog. The settings are open to Build Insights > Trace Collection. The Collect Template Instantion checkbox is selected.":::

> [!Note] 
> Collecting template instantiation times increases build time due to the extra data collected. Only enable it when you want to analyze template instantiation bottlenecks.

## Run Build Insights to get template instantiation data

From the main menu, select **Build** > **Run Build Insights on Selection** > **Rebuild**. You can also right-click a project in the solution explorer and choose **Run Build Insights** > **Rebuild**. Choose **Rebuild** instead of **Build** to measure the build time for the entire project.

:::image type="content" source="./media/build-insights-rebuild-project.png" alt-text="Screenshot of the main menu with Run Build Insights on Selection > Rebuild selected.":::

When the build finishes, an Event Trace Log (ETL) file opens.The generated name is based on the collection time.

## Understanding Templates view results

When interpreting Templates view results, keep these points in mind:

- **Empty view**: If nothing shows up in the Templates view, it means your build time isn't dominated by template instantiations. This is good news because your templates are not a build bottleneck.
- **Duplicate instantiations**: The same template instantiation appearing multiple times with different translation units indicates that multiple source files are causing the same expensive instantiation. This is often the biggest optimization opportunity.
- **Threshold filtering**: The view only shows instantiations whose contribution exceeds a certain threshold to avoid noise from trivial instantiations.
- **Time aggregation**: The time shown represents the total time spent on that specific template instantiation, including any nested instantiations it triggers.

## Use Templates view to optimize build time

The **Templates** view lists the template instantiations that contributed significantly to build time. Columns provide information about:

- **Time [sec, %]** shows how long it took to instantiate each template in [wall clock responsibility time (WCTR)](https://devblogs.microsoft.com/cppblog/faster-cpp-builds-simplified-a-new-metric-for-time/#:~:text=Today%2C%20we%E2%80%99d%20like%20to%20teach%20you%20about%20a,your%20build%2C%20even%20in%20the%20presence%20of%20parallelism). This metric distributes the wall clock time among template instantiations based on their use of parallel compiler threads.
- **Specialization Name** shows each template instantiation, including the template arguments that were used. This helps you identify which template specializations are most expensive.
- **Translation Unit** shows which source file each template instantiation happened in. Multiple files can cause the same template instantiation if they include the same header with the template definition.
- **Instantiation File Path** shows where in your source code the template instantiation happens. This helps you locate the exact line of code responsible for the expensive instantiation.

:::image type="complex" source="./media/templates-view-before-fix.png" alt-text="Screenshot of the Build Insights Templates view showing expensive template instantiations.":::
The Templates view shows two template instantiations of struct S3 taking most (79.4480%) of the build time. The Translation Unit column shows that both LargeValue.cpp and SmallValue.cpp are affected.
:::image-end:::

- Sort by **Time** to find the templates that take the longest to instantiate.
- Expand a template to see its various instantiations and where they happened.
- Use the search box to focus on specific templates.

## Improve build time by optimizing template instantiations

In the example, we can see that two template instantiations of `S3` are taking 83% of the entire build time. The **Translation Unit** column shows that both `SmallValue.cpp` and `LargeValue.cpp` are causing this template instantiation to be included in the build.

Since the **Instantiation File Path** and the **Specialization Name** are the same for both entries, we can infer that there's one expensive template instantiation affecting both of our source files. This explains why the time of each of the two template instantiations are about equal. By including `Templates.h` in both source files, we are causing one template instantiation to add significant time to our build.

From the **Specialization Name** column, we can see that the expensive instantiation is `S3<std::make_index_sequence<1000>>`, which corresponds to this code in `Templates.h`:

```cpp
inline size_t LargeValue()
{
    return sizeof(S3<std::make_index_sequence<1000>>);
};
```

There are three main ways to decrease the cost of template instantiations:

### Remove unused templates

Review the template in question and determine if it's being used. If it's not being used, the easiest solution is to remove the function or template. In the example, `LargeValue()` is being used by `LargeValue.cpp`, so we can't remove it.

You can also consider removing include directives that bring in unnecessary template instantiations. It's easy to forget to remove header files when you're no longer using them, and unused includes can cause significant impact on build time.

### Move template instantiations to source files

For our purposes, let's assume that we need the template instantiation as-is. We can rely on the third approach: moving the definition that causes the expensive template instantiation to a source file.

Since `LargeValue.cpp` is the only source file that calls `LargeValue()`, we can move the definition to `LargeValue.cpp`. This prevents the template instantiation from happening in every translation unit that includes `Templates.h`.

To do this, remove the current definition of `LargeValue()` from `Templates.h` and replace it with a declaration:

```cpp
size_t LargeValue();
```

Then, inside `LargeValue.cpp` add the definition:

```cpp
size_t LargeValue()
{
    return sizeof(S3<std::make_index_sequence<1000>>);
}
```

Now, when you rebuild the project and run Build Insights again, you should see that the expensive template instantiation is no longer listed in the **Templates** view. The build time should also decrease significantly.

:::image type="complex" source="./media/templates-view-after-fix.png" alt-text="Screenshot of the Build Insights Templates view after optimization showing reduced template instantiation time.":::

The Templates view now shows only one instantiation of S3 instead of two, and the total build time has been significantly reduced.

:::image-end:::

The build time has significantly decreased. While the template instantiation of `S3` is still contributing to the build time, we've been able to roughly halve the total time by only including necessary template instantiations. You can see the count of `S3` instantiations is now 1 instead of 2.

This technique scales well to larger projects. If multiple files included `Templates.h`, each of those files would have added the instantiation time of `LargeValue()` to the total build time. By moving the definition of `LargeValue()` to a dedicated source file, we minimize our build time.

### Optimize the template implementation

Look at the template instantiation and determine if there's a way to optimize the code. Some optimization techniques include:

- Using simpler template patterns
- Reducing the complexity of template metaprogramming
- Avoiding recursive template instantiation patterns that lead to exponential growth
- Use `if constexpr` instead of SFINAE where possible

For more advanced template optimization techniques, see [Build Throughput Series: More Efficient Template Metaprogramming](https://devblogs.microsoft.com/cppblog/build-throughput-series-more-efficient-template-metaprogramming/), which provides detailed examples of reducing template instantiation overhead.

## Tips

- You can **File** > **Save As** the ETL file to a more permanent location to keep a record of the build time. You can then compare it to future builds to see if your changes are improving build time.
- If you inadvertently close the Build Insights window, reopen it by finding the `<dateandtime>.etl` file in your temporary folder. The `TEMP` Windows environment variable provides the path of your temporary files folder.
- To dig into the Build Insights data with Windows Performance Analyzer (WPA), click the **Open in WPA** button in the bottom right of the ETL window.
- Drag columns to change the order of the columns. For instance, you may prefer moving the **Time** column to be the first column. You can hide columns by right-clicking on the column header and deselecting the columns you don't want to see.
- The **Templates** view provides a filter box to find a specific template instantiation. It does partial matches on the name you provide.
- If you forget how to interpret what the **Templates** view is trying to show you, hover over the tab to see a tooltip that describes the view.

## Troubleshooting

**Templates view is empty**: This could mean:

- Template data collection is not enabled (check your options settings).
- Your build time is not dominated by template instantiations.
- Do a rebuild instead of a build. The Build Insights window doesn't appear if nothing builds, which may be the case if no files changed since the last build.
- Ensure you are using Visual Studio 2022 17.10 or later and that the C++ Build Insights component is installed.

**Build is much slower with Templates view enabled:** This is expected due to the extra data collection. Disable **Templates** view when not needed.

## See also

- [Build Insights tips and tricks](build-insights-tips.md)
- [#include cleanup in Visual Studio](https://devblogs.microsoft.com/cppblog/include-cleanup-in-visual-studio/)
- [Troubleshoot header file impact on build time](build-insights-included-files-view.md)
- [Troubleshoot function inlining on build time](build-insights-function-view.md)
- [Build Insights now available in Visual Studio 2022](https://devblogs.microsoft.com/cppblog/build-insights-now-available-in-visual-studio-2022)
- [Build throughput series: More efficient template metaprogramming](https://devblogs.microsoft.com/cppblog/build-throughput-series-more-efficient-template-metaprogramming/)