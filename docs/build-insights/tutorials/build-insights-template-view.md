---
title: "Troubleshoot template instantiation impact on build time"
description: "Tutorial for how to use Build Insights template view to analyze and optimize the impact of template instantiations on build time in your C++ projects."
ms.date: 7/9/2025
helpviewer_keywords: ["C++ Build Insights", "template instantiation analysis", "build time analysis"]
ms.topic: troubleshooting-general
---
# Troubleshoot template instantiation impact on build time

Use Build Insights **Templates** view to analyze the impact of template instantiations on build time in your C++ projects. This feature is especially useful for projects that make heavy use of templates, such as those using template metaprogramming or large generic libraries.

## Prerequisites

- Visual Studio 2022 version 17.10 or later.
- The **C++ Build Insights** component must be installed. It's enabled by default if you install either the Desktop development with C++ workload or the Game development with C++ workload. You can ensure that it is installed by following these steps:
  1. Open the Visual Studio Installer.
  1. Modify your Visual Studio installation.
  1. Under the **Individual components** tab, search for and select **C++ Build Insights**.
  :::image type="complex" source="./media/installer-build-insights.png" alt-text="Screenshot of the Visual Studio Installer":::The search box contains C++ build insights. The item C++ Build Insights is visible and selected.":::image-end:::
  1. Click **Modify** to install the component.

## Overview

Build Insights, integrated into Visual Studio, helps you optimize your build times--especially for large projects like AAA games. Build Insights provides analytics such as **Templates** view, which helps diagnose expensive template instantiations during build time. It displays the time it takes to instantiate each template and shows which template instantiations add the most to your build time.

For optimized builds, the time spent on template instantiation contributes significantly to the total build time. In general, C++ template instantiation happens quickly. In exceptional cases, some template instantiations can become complex enough to noticeably slow down your builds.

In this article, learn how to use the Build Insights **Templates** view to find template instantiation bottlenecks in your build.

To try out Build Insights Templates view, follow along to create a project, set the build options, do a build, and analyze the results.

## Create a test project

1. Open Visual Studio and create a new **C++ Console App** project and name it `TemplateAnalysis`.
1. Create a header file called `Templates.h`.
1. Replace the contents of the `Templates.h` file with the following code:

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

1. Create a source file called `LargeValue.cpp`
1. Replace the contents of the `LargeValue.cpp` file with the following code:

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

1. ## Enable template instantiation data collection

Template instantiation time collection is off by default to minimize build overhead. To enable it:

1. In Visual Studio, go to **Tools** > **Options**.
1. In the Options dialog, expand **Build Insights** in the left navigation.
1. Select **Collect Template Instantiation**.
1. You can also choose where to save the report by selecting **Store Build Insights reports in this directory:** and specifying a directory. By default, it's saved in the folder pointed to by the Windows `TEMP` environment variable.

:::image type="content" source="./media/tools-options-build-insights.png" alt-text="Screenshot of the project property pages dialog. The settings are open to Build Insights > Trace Collection. The Collect Template Instantion checkbox is selected.":::

1. Select **OK**.

> [!Note] 
> Enabling Templates view may increase build time due to the extra data collected. Only enable it when you need to analyze template instantiations.

## Build the project

Run Build Insights by choosing from the main menu **Build** > **Run Build Insights on Selection** > **Rebuild**. You can also right-click a project in the solution explorer and choose **Run Build Insights** > **Rebuild**. Choose **Rebuild** instead of **Build** to measure the build time for the entire project and not for just the few files may be dirty right now.

:::image type="content" source="./media/build-insights-rebuild-project.png" alt-text="Screenshot of the main menu with Run Build Insights on Selection > Rebuild selected.":::

When the build finishes, an Event Trace Log (ETL) file opens.The generated name is based on the collection time.

## Use Templates View to Optimize Build Time

The Templates view lists all template instantiations that contributed significantly to build time. Columns include the template name, instantiation time, and the file where the instantiation occurred.

- **Sort by Instantiation Time** to find the templates that take the longest to instantiate.
- **Expand a template** to see which code triggered the instantiation and how much time each instance took.
- **Filter templates** using the search box to focus on specific types or functions.

If you see that a particular template instantiation dominates build time, consider:
- Refactoring code to reduce the number of instantiations.
- Moving expensive template code out of headers.
- Using explicit instantiation declarations where possible.

> **Screenshot suggestion:** Insert a screenshot of the Templates view showing a template instantiation with high build time. **Alt-text:** "Screenshot of the Build Insights Templates view highlighting a template instantiation with high build time."

## Interpreting Results

- If the Templates view is empty, your build is likely not dominated by template instantiations.
- The view only shows templates that take a significant amount of time to instantiate, to avoid clutter and reduce data collection overhead.
- Collecting template instantiation data increases build time. Disable the feature when not actively analyzing templates.

## Improving Build Times

For more strategies on improving build times in template-heavy code, see:
- [Templates View for Build Insights in Visual Studio](https://devblogs.microsoft.com/cppblog/templates-view-for-build-insights-in-visual-studio-2/)
- [Build throughput series: More efficient template metaprogramming](https://devblogs.microsoft.com/cppblog/build-throughput-series-more-efficient-template-metaprogramming/)

The first article provides an overview of the Templates view and how to use it. The second article dives deeper into template metaprogramming techniques that can reduce build time, with practical examples.

## Troubleshooting

- **Templates view does not appear:** Ensure you are using Visual Studio 2022 17.10 or later and that the C++ Build Insights component is installed. Also, make sure Templates view is enabled in the options.
- **No templates listed:** Your project may not have template instantiations that take significant build time, or you may need to build in Release mode with optimizations enabled.
- **Build is much slower with Templates view enabled:** This is expected due to the extra data collection. Disable Templates view when not needed.

## See also

- [Build Insights tips and tricks](build-insights-tips.md)
- [Troubleshoot function inlining on build time](build-insights-function-view.md)
- [Build Insights now available in Visual Studio 2022](build-insights-now-available-in-visual-studio-2022.md)
- [Functions View for Build Insights in Visual Studio 2022 17.8](functions-view-for-build-insights-in-visual-studio-2022-17-8.md)
- [Build throughput series: More efficient template metaprogramming](https://devblogs.microsoft.com/cppblog/build-throughput-series-more-efficient-template-metaprogramming/)

---

**Summary of additional important points from the blog post:**
- The Templates view helps identify which template instantiations are most expensive, making it easier to target optimizations.
- The feature is especially useful for codebases that use heavy metaprogramming or generic libraries.
- The blog post provides more advanced examples, such as using SFINAE and type traits, which can be referenced for deeper dives but are not included in this basic walkthrough.
- The performance impact of enabling Templates view is non-trivial; only enable it when needed.
- The Templates view is designed to be familiar to users of the Functions view, with similar UI and workflow.
