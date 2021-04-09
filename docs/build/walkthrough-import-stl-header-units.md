---
description: "Learn to use header units to import C++ Standard Template Library (STL) libraries."
title: "Walkthrough: Import Standard Template Library (STL) libraries as header units"
ms.date: "4/13/2021"
ms.custom: "conceptual"
author: "tylermsft"
ms.author: "twhitney"
helpviewer_keywords: ["import"]
---
# Walkthrough: Import STL libraries as header units

This walkthrough shows two different ways to import C++ Standard Template Library (STL) libraries as header units in Visual Studio.

The [first way](#approach1) has the build system automatically scan for, and build, header units based on what STL headers you import in your project.

The [second way](#approach2) demonstrates how to build a static library project containing header units for the STL headers you want to use, and then reference that project to import the header units.

Importing a STL header as a header unit is a simpler alternative to [precompiled header files](creating-precompiled-header-files.md). Header units are easier to set up and easier to use than a shared precompiled header file (PCH), while providing similar performance benefits. Unlike a PCH, when a header unit changes, only it and its dependencies are rebuilt.

Before you can import an STL header, it must be compiled into a header unit. Header units are a binary representation of a header file, and end with an *`.ifc`* extension.

One important difference between a header unit and a header file is that header units are not affected by macro definitions the way header files are. You can't `#define` a symbol that causes the header unit to behave differently when you import it as you can with a header file. 

Everything visible from a header file is also visible from a header unit.

## Prerequisites

Support for header units requires at least Visual Studio 2019 16.10.0 Preview 2.

## Two different approaches

Before an STL header can be imported, it must be compiled into a header unit. There are two main approaches, demonstrated below.

**Scan for module dependencies**

At a high level, this works by scanning your sources for `import "header";` and `import <header>;` statements, and tries to compile those header files and their dependencies into header units. It then imports the compiled header unit files (*`.ifc`*) instead of running the header file through the preprocessor.

It may not be the optimal approach for larger projects because it doesn't guarantee optimal build times as it needs to scan through the files to find the headers to build into header units. It may result in reprocessing the same header files repeatedly, increasing build time. Also, not all header files can be automatically converted to header units. For example, headers that depend on conditional compilation via `#define` symbols, may not work as header units. If a header file can't be compiled into a header unit, it will be treated as a normal `#include` file.

See [Approach 1: Scan for headers](#approach1), in this article, for a walkthrough of this approach.

**Create a static library project**

The recommended approach, particularly for larger projects, or in cases where you want to share a common set of header units across multiple projects, is to create a static library project containing the header units you want to use. This library project is then referenced by projects that import those header units. It's like using [shared precompiled headers](https://devblogs.microsoft.com/cppblog/shared-pch-usage-sample-in-visual-studio/), but easier.

See [Approach 2: Build a static library project](#approach2), in this article, for a walkthrough of this approach.

## <a name="approach1"></a>Approach 1: Scan for imports

We'll begin with the easiest way to import STL libraries as header units. This approach may not be appropriate for larger projects because it doesn't guarantee the most optimal build time due to scanning the sources for `import` statements.

This option is convenient for codebases that use many different headers, and where build throughput isn't critical. This option doesn't guarantee a header unit for a particular header will be built only once, whereas header units built into referenced static libraries projects are reused.

You can import your STL libraries as header units without modifying your code by setting a Visual C++ project option:
- **Scan Sources for Module Dependencies**

This setting causes the build system to scan your source code for `import` directives and tries to compile the imported header file into a header unit. There are other ways to indicate that a header file should be treated as a header unit besides scanning your entire project. That is covered in [Walkthrough: Build and import header units in Visual C++ projects](walkthrough-header-units.md).

Not all headers can be converted to a header unit. One issue is `#define` symbols that cause a header file to compile differently. If a header file relies on this mechanism, it won't be converted to a header unit. Instead, it is treated as an ordinary `#include`.

To demonstrate this approach, we'll create a project that imports two STL libraries, and then change the project properties so that it treats the library includes as header imports.

### Create a C++ console app project

This step creates a project that includes two libraries: `<iostream>` and `<vector>`. You'll modify the project settings so that the project is scanned for potential header files that can be compiled into header units.
1. With Visual Studio, create a new C++ console app project.
1. Modify the source file as follows:
    ```cpp
    import <iostream>;
    import <vector>;
    
    int main()
    {
        std::vector<int> numbers = {0, 1, 2};
        std::cout << numbers[1];
    }
    ```
    
### Set project options and run the project

Follow these steps to set the options that cause the build system to scan for imported headers to compile into header units:

1. From the main menu, choose **Project** > **Properties**. The project properties window appears:
![Scan module dependencies property setting](media/vs2019-scan-module-dependencies.png)
1. You may want to set the **Configuration** dropdown to **All Configurations** and **Platform** dropdown to **All Platforms**. This propagates the settings we will change so they apply whether you are building for debug or release, and so on.
1. In the left-hand pane of the project property page, select **C/C++** > **General**
1. Set **Scan Sources for Module Dependencies** to **Yes**  Because we're setting the project property, all sources in this project will be scanned. This could be set at the file level, but here we scan the entire project.

Change the C++ language standard for the compiler. The latest preview setting is necessary to use header units:

1. In the left-hand pane of the project property pages, select **Configuration Properties** > **General**
1. Change the **C++ Language Standard** dropdown to **Preview-Features from the Latest C++ Working Draft**
![Set language standard to preview version](media/set-cpp-language-latest.png)
1. Click **OK** to close the project properties pages, and then build the solution: **Build** > **Build Solution** from the main menu.

You can run the solution to verify that it produces the expected output: `1`

The primary consideration of this approach is the balance between convenience and the build cost of scanning all of your files to determine which header files to build as header units.

You can fine-tune this balance by not scanning for import dependencies, and instead explicitly marking which files should be built as header units. That approach is shown in [Walkthrough: Build and import header units in your Visual C++ projects](walkthrough-header-units.md)

## <a name="approach2"></a>Approach 2: Build a static library project

The more flexible way to consume STL headers is to create one or more static library projects that build header units from the STL headers you want to reuse. Then reference the library project, or library projects, from the projects that need those STL headers. Modules and header units built in a static library project are automatically available to referencing projects. The project system automatically adds the appropriate [`/headerUnit](./reference/headerunit.md) switches to the command line so that the header units can be imported by the referencing projects.

This option ensures that header units for a particular header will be built only once. It's similar to using a shared precompiled header file, but is much easier.

In this example, you'll create a project that imports `<iostream>` and `<vector>`. Once built, you'll reference this shared header unit project from another C++ project. Then, in the referencing project, everywhere `import <iostream>;` or `import <vector>;` is found, it will import the built header unit for that library instead of running the contents of the library header through the preprocessor. In projects that include the same library header in multiple files, this will improve build performance similarly to how PCH files do because the header won't have to be processed over and over by the files that include it. Instead, the already processed compiled header unit will be imported.

### Create the shared header unit project

Begin by creating the project for the shared header unit as follows:

1. Create an Empty C++ project. Call it, for the sake of this example, **SharedPrj**.\
 **Empty C++ project** is one of the project types available on the **Create a new project** window:
:::image type="content" source="media/empty-project-option.png" alt-text="Screenshot showing creating a new empty C++ project.":::
1. Add a new (empty) C++ file to the project. Change the file's contents to the following:

    ```cpp
    import <iostream>;
    import <vector>;
    ```

### Set project properties

Set project properties to share the header units from this project:

1. From the Visual Studio main menu, choose **Project** > **Properties**. The project properties window appears:
![Settings for Configuration type and C++ language standard](media/set-header-unit-library-settings.png)
1. You may want to set the **Configuration** dropdown to **All Configurations** and **Platform** dropdown to **All Platforms**. This propagates the settings we will change so they apply whether you are building for debug or retail, and so on.
1. In the left-hand pane of the project property page, select **General**
1. Change the **Configuration Type** option to **Static library (.lib)**
1. Change **C++ Language Standard** to **Preview-Features from the Latest C++ Working Draft**
1. In the left-hand pane of the project property page, select **C/C++** > **General**
:::image type="content" source="media/vs2019-scan-module-dependencies.png" alt-text="Screenshot showing the scan module dependencies property setting.":::
1. Set the **Scan Sources for Module Dependencies** dropdown to **Yes**
1. Click **OK** to close the project properties pages and then build the solution: **Build** > **Build Solution** from the main menu.

## Reference the shared header unit project

Next, create a project that will use the built `<vector>` and `<iostream>` shared header project:

1. With the current solution still open, from the Visual Studio menu select **File** > **Add**  > **New Project**
1. Add a C++ Console app project. Call it **Walkthrough**, for this example
1. Change the contents of its source file as follows:

    ```cpp
    import <iostream>;
    import <vector>;
    
    int main()
    {
        std::vector<int> numbers = {0, 1, 2};
        std::cout << numbers[1];
    }
    ```

Change the C++ language standard for the compiler. The latest preview setting is necessary to use header units:
1. In the **Solution Explorer**, select right-click the **Walkthrough** project and select **Properties**. The project properties window appears.
:::image type="content" source="media/set-cpp-language-latest.png" alt-text="Screenshot showing setting the language standard to preview version":::
1. In the left-hand pane of the **Walkthrough** project property pages, select **Configuration Properties** > **General**
1. Change **C++ Language Standard** to **Preview-Features from the Latest C++ Working Draft**
1. Click **OK** to close the project properties pages
1. Add a reference from the **Walkthrough** project to the **SharedPrj** project. To do so, under the **Walkthrough** project, click on the **References** node, and select **Add Reference**. Select **SharedPrj** from the list of projects. 
:::image type="content" source="./media/add-reference-to-walkthrough.png" alt-text="Screenshot showing the add reference dialog. Used to add a reference to the Walkthough project.":::
What this reference accomplishes is that the build system will use the header units built into **SharedPrj** whenever an `import` in the **Walkthrough** project matches one of the built header units in **SharedPrj**
1. Click **OK** to close the **Add Reference** dialog
1. Right-click the **Walkthrough** project and select **Set as Startup Project**

Then you can build the solution (**Build** > **Build Solution** from the main menu) and run it to see that it produces the expected output: `1`

The advantage of this approach is that you can reference the static library project from any project to reuse the header units in it. In this example, that's `<vector>` and `<iostream>`.  

You can make a monolithic library project containing all the commonly used STL headers that you want to import from your various projects. Or, you can produce smaller shared library projects that have different groupings of STL libraries that you want to import as header units. Then reference those shared header unit projects as needed.

The result should be increased build throughput because importing a header unit significantly reduces the work the compiler must do.

It's important when you do this with your own projects that you build the static library project using compiler switches that are compatible with the project that will consume it. For example, STL projects should be built with the `/EHsc` compiler switch to turn on exception handling, and so should the projects that consume the static library project.

## `/translateInclude`

The [`/translateInclude`](./reference/translateinclude.md) compiler switch can make it easier for you to use a referenced shared header unit project from your project.

It is useful because you don't have to modify the `#include` directives in your project to take advantage of importing built header units in a referenced shared header unit project.

For example, if you `#include <vector>` in your project, and you reference a shared header unit project that contains a header unit for `<vector>`, you don't need to manually change `#include <vector>` to `import <vector>;` in your source code. If you specify `/translateInclude` (available in the project properties dialog under **C/C++** > **General** > **Translate Includes to Imports**) the compiler will automatically treat `#include <vector>` as  `import <vector>;`. This applies to any `#include` statement that refers to a built header unit in a referenced shared header unit project. Otherwise, it will be treated as a normal `#include`.

## Reuse header units between projects

Header units built as part of a static library project are automatically available to all directly and indirectly referencing projects. There are project settings you can use to control which header units should be automatically available to all referencing projects. The settings are in project settings under **VC++ Directories**:
1. Select the project in the **Solution Explorer**, then right-click the project and select **Properties**.
1. In the left-hand pane of the project properties window, select **VC++ Directories**
:::image type="content" source="media/public-include-module-directories-setting.png" alt-text="Screenshot showing public project content properties such as public include directories, all header files are public, etc.":::

The following settings control the visibility of header units to the build system:

- **Public Include Directories**: specify project directories for header units that should be automatically added to the include path in referencing projects.
- **Public C++ Module directories**: specify which project directories contain header units that should be available to referencing projects. This is a way of making some header units public, by putting those that can be shared in a directory that is visible to other projects. If you set this, you may also want to specify **Public Include Directories** so your public headers are automatically added to the include path in referencing projects.
- **All Modules are Public** - To use header units built as a part of a DLL project, the symbols have to be exported from the DLL. To do so, set this property to **Yes**.

## Use a prebuilt module file

Normally, the easiest way to reuse header units between solutions is to include the same shared header unit project in each solution.

But if you have a need to use a built header unit that you don't have the project for, you can specify where the built *`.ifc`* file is so that you can import it in your solution.

To access this setting:
1. Select the project in the **Solution Explorer**, then right-click the project and select **Properties**.
1. In the left-hand pane of the project properties window, select **C/C++** > **General**.
1. Add the modules to reference in the **Additional Module Dependencies** dropdown.
![Project properties under C/C++, General, which Additional Module Dependencies selected](media/vs2019-additional-module-dependencies.png)

Here's an example of the format to use for **Additional Module Dependencies**: `ModuleName1=Path\To\ModuleName1.ifc; ModuleName2=Path\To\ModuleName2.ifc`

## Select among multiple copies of a header unit
 
If you reference two or more projects that built two or more header units with the same name, or that built two or more header units for the same header file, you'll end up in a situation where there are multiple header units to choose from for the same import. You might have different versions of the header unit that were built with different compiler settings, for instance, and need to tell the compiler which one to use.

Use  the project properties **C/C++** >  **Additional Header Unit Dependencies** to resolve collisions by specifying which header unit should be used. Otherwise, you can't predict which one gets picked.

To access this setting:
1. Select the project in the **Solution Explorer**, then right-click the project and select **Properties**.
1. In the left-hand pane of the project properties window, select **C/C++** > **General**.
1. Use **Additional Header Unit Dependencies** to resolve collisions by specifying which module or header unit should be used for this project:
:::image type="content" source="media/additional-header-unit-dependencies-setting.png" alt-text="Screenshot showing the Additional Header Unit Dependencies setting in the project properties dialog.":::

This is the format to use for **Additional Header Unit Dependencies**: `Path\To\Header1.h= Path\To\HeaderUnit1.ifc;Path\To\Header2.h= Path\To\ HeaderUnit2.ifc`

> [!IMPORTANT]
> Ensure that projects that share header units are built with compatible compilation options. The compiler will issue warnings if it detects different compilation options used for how the header unit was produced versus how it's used.

> [!NOTE]
> To use header units built as a part of a **DLL** project, the project property setting **All Modules arePublic** should be set to **Yes**.

## See also

[Walkthrough: Build and import header units in your Visual C++ projects](walkthrough-header-units.md) \
[`/translateInclude`](./reference/translateinclude.md)