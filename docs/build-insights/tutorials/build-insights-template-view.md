---
title: "Troubleshoot template instantiation impact on build time"
description: "Tutorial for how to use Build Insights template view to analyze and optimize the impact of template instantiations on build time in your C++ projects."
ms.date: 07/14/2025
helpviewer_keywords: ["C++ Build Insights", "template instantiation analysis", "build time analysis"]
ms.topic: troubleshooting-general
---

# Troubleshoot template instantiation impact on build time

Use the Build Insights **Templates** view to see how template instantiation affects C++ build time. It's especially helpful for projects that use lots of templates, like those with template metaprogramming or large generic libraries.

The **Templates** view works like the Build Insights [Functions view](build-insights-function-view.md).

## Prerequisites

- Visual Studio 2022 version 17.10 or later.
- The **C++ Build Insights** component must be installed. It's included in either the Desktop development with C++ workload or the Game development with C++ workload. To check if it's installed, follow these steps:
  1. Open the Visual Studio Installer.
  1. Select **Modify** to change your Visual Studio installation.
  1. On the **Individual components** tab, search for and select **C++ Build Insights**, then select **Close** to finish installing the component.
  :::image type="content" source="./media/installer-build-insights.png" alt-text="Screenshot of the Visual Studio Installer. The search box contains C++ Build Insights. The item C++ Build Insights is visible and selected.":::
  
## Overview

Build Insights, integrated into Visual Studio, helps you optimize your build times--especially for large projects like AAA games. Build Insights provides analytics such as the **Templates** view, which shows the time it takes to instantiate each template and which template instantiations add the most to your build time.

In general, C++ template instantiation happens quickly. In rare cases, some template instantiations can noticeably slow down your build.

In this article, you create a project that shows how template instantiation affects build time, run Build Insights to analyze the impact, and use those insights to make the build faster.

## Create a test project

1. Open Visual Studio and create a new **C++ Console App** project. Name it `TemplateAnalysis`.
1. Create a header file named `Templates.h`, then replace its contents with the following code:

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

1. Create a source file named `LargeValue.cpp`, then replace its contents with the following code:

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

Template instantiation time collection is off by default to minimize build overhead. To turn it on:

1. In Visual Studio, go to **Tools** > **Options**.
1. In the **Options** dialog, expand **Build Insights** in the left navigation.
1. Select **Collect Template Instantiation**.
1. To choose where to save the report, select **Store Build Insights reports in this directory** and enter a directory. By default, it's saved in the folder pointed to by the Windows `TEMP` environment variable.
1. Select **OK**.

:::image type="content" source="./media/tools-options-build-insights.png" alt-text="Screenshot of the project property pages dialog. The settings are open to Build Insights > Trace Collection. The Collect Template Instantiation checkbox is selected.":::

> [!Note] 
> Collecting template instantiation times increases build time due to the extra data collected. Only enable it when you want to analyze template instantiation bottlenecks.

## Run Build Insights to get template instantiation data

From the main menu, select **Build** > **Run Build Insights on Selection** > **Rebuild**. You can also right-click a project in Solution Explorer and select **Run Build Insights** > **Rebuild**. Choose **Rebuild** instead of **Build** to measure the build time for the entire project.

:::image type="content" source="./media/build-insights-rebuild-project.png" alt-text="Screenshot of the main menu with Run Build Insights on Selection > Rebuild selected.":::

When the build finishes, an Event Trace Log (ETL) file opens. The file name is based on the collection time.

## Use Templates view to optimize build time

The **Templates** view lists the template instantiations that contributed significantly to build time. The columns provide information about:

- **Time [sec, %]** shows how long it takes to instantiate each template in [wall clock responsibility time (WCTR)](https://devblogs.microsoft.com/cppblog/faster-cpp-builds-simplified-a-new-metric-for-time/#:~:text=Today%2C%20we%E2%80%99d%20like%20to%20teach%20you%20about%20a,your%20build%2C%20even%20in%20the%20presence%20of%20parallelism). This metric distributes the wall clock time among template instantiations based on their use of parallel compiler threads.
- **Specialization Name** shows each template instantiation, including the template arguments used. This helps you find which template specializations are most expensive.
- **Translation Unit** shows the source files where each template instantiation happens. Different files can cause the same template instantiation if they include the same header with the template definition.
- **Instantiation File Name** shows where the template is defined.

:::image type="complex" source="./media/templates-view-before-fix.png" alt-text="Screenshot of the Build Insights Templates view showing expensive template instantiations.":::
The Templates view shows two template instantiations of struct S3 taking most (79.448 percent) of the build time. The Translation Unit column shows that both LargeValue.cpp and SmallValue.cpp are affected. The build time is 4.066 seconds.
:::image-end:::

- Sort by **Time** to find the templates that take the longest to instantiate.
- Expand a template to see its instantiations and where they happened.
- Use the search box to focus on specific templates.

### Understanding Templates view results

When interpreting Templates view results, keep this in mind:

- **Empty view**: If nothing shows up in the **Templates** view, template instantiations don't dominate your build time. That's good news because your templates aren't a build bottleneck.
- **Duplicate instantiations**: If the same template instantiation appears multiple times across different translation units, different source files are causing the same expensive instantiation. This is often the biggest optimization opportunity.
- **Threshold filtering**: The view only shows instantiations whose contribution exceeds a certain threshold, so you can focus on the most impactful ones and avoid noise from trivial instantiations.
- **Time aggregation**: The time shown is the total time spent on that specific template instantiation, including any nested instantiations.

## Improve build time by optimizing template instantiations

In this example, two template instantiations of `S3` take 79 percent of the build time. The **Translation Unit** column shows that both `SmallValue.cpp` and `LargeValue.cpp` cause this template instantiation.

Because the **Instantiation File Name** and the **Specialization Name** are the same for both entries, there's one expensive template instantiation that affects both source files. That's why the time for each of the two template instantiations is roughly equal. Including `Templates.h` in both source files causes one template instantiation to add significant time to the build.

From the **Specialization Name** column, the expensive instantiation is `S3<std::make_index_sequence<1000>>`, which is instantiated in this code in `Templates.h`:

```cpp
inline size_t LargeValue()
{
    return sizeof(S3<std::make_index_sequence<1000>>);
};
```

Here are three main ways to decrease the cost of template instantiations.

### Remove unused templates

Check if the expensive template is used. If it isn't, the easiest solution is to remove the function or template. In the example, `LargeValue()` is used in `LargeValue.cpp`, so you can't remove it.

Consider removing include directives that bring in unnecessary template instantiations. It's easy to forget to remove header files when you aren't using them, and unused includes can significantly affect build time.

### Move template instantiations to source files

In this example, rely on the third approach: move the definition that causes the expensive template instantiation to a source file.

Because `LargeValue.cpp` is the only source file that calls `LargeValue()`, move the definition to `LargeValue.cpp`. This change prevents the template instantiation from happening in every translation unit that includes `Templates.h`. Remove the current definition of `LargeValue()` from `Templates.h` and replace it with a declaration:

```cpp
size_t LargeValue();
```

Inside `LargeValue.cpp` add the definition:

```cpp
size_t LargeValue()
{
    return sizeof(S3<std::make_index_sequence<1000>>);
}
```

Rebuild the project and run Build Insights again from the main menu. Select **Build** > **Run Build Insights on Selection** > **Rebuild**.

The build time decreases. While the template instantiation of `S3` still contributes to the build time, including only necessary template instantiations cuts the build time nearly in half. The count of `S3` instantiations is now one instead of two.

:::image type="complex" source="./media/templates-view-after-fix.png" alt-text="Screenshot of the Build Insights Templates view after optimization. The view shows reduced template instantiation time.":::
The Templates view now shows only one instantiation of S3 instead of two, and the total build time is significantly less at 3.152 seconds.
:::image-end:::

This technique works well for larger projects. If multiple files include `Templates.h`, each file adds the instantiation time of `LargeValue()` to the total build time. By moving the definition of `LargeValue()` to a dedicated source file, you minimize build time.

### Optimize the template implementation

Other optimization techniques include:

- Use simpler template patterns
- Use `if constexpr` instead of Substitution Failure Is Not An Error (SFINAE) when possible
- Avoid recursive template instantiation patterns that lead to exponential growth

For more advanced template optimization techniques, see [Build Throughput Series: More Efficient Template Metaprogramming](https://devblogs.microsoft.com/cppblog/build-throughput-series-more-efficient-template-metaprogramming/), which provides detailed examples of reducing template instantiation overhead.

## Tips

- Use **File** > **Save As** to save the ETL file to a more permanent location to keep a record of the build time information. You can then compare it to future builds to see how your changes are improving things.
- If you close the Build Insights window, reopen it by finding the `<dateandtime>.etl` file either where you specified it should be saved, or in your temporary folder. The `TEMP` Windows environment variable provides the path of your temporary files folder.
- Drag columns to change the order of the columns. For example, you might want to move the **Wall Time Responsibility** column to the first column. You can add or hide columns by right-clicking the column header and selecting or deselecting the columns you want.
- The **Templates** view has a filter box to help you find a specific template instantiation. It does partial matches on the name you provide.

## Troubleshooting

**Templates view is empty**: This can mean:

- Your build time isn't dominated by template instantiations.
- Template data collection isn't enabled. To turn it on, see [Enable build time data collection](#enable-build-time-data-collection).
- Do a rebuild instead of a build. The Build Insights window doesn't appear if nothing builds, which can be the case if no files changed since the last build.
- Make sure you're using Visual Studio 2022 17.10 or later, and that the C++ Build Insights component is installed.

**Build is much slower with Templates view enabled:** This is expected because of the extra data collection. Turn off template instantiation collection when you don't need it. For more information, see [Enable build time data collection](#enable-build-time-data-collection).

## See also

- [Build Insights tips and tricks](build-insights-tips.md)
- [#include cleanup in Visual Studio](https://devblogs.microsoft.com/cppblog/include-cleanup-in-visual-studio)
- [Troubleshoot header file impact on build time](build-insights-included-files-view.md)
- [Troubleshoot function inlining on build time](build-insights-function-view.md)
- [Build Insights now available in Visual Studio 2022](https://devblogs.microsoft.com/cppblog/build-insights-now-available-in-visual-studio-2022)
- [Build throughput series: More efficient template metaprogramming](https://devblogs.microsoft.com/cppblog/build-throughput-series-more-efficient-template-metaprogramming)