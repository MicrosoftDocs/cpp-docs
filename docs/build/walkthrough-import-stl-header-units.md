---
description: "Learn to use header units to import C++ Standard Template Library (STL) libraries in Visual Studio."
title: "Walkthrough: Import STL libraries as header units"
ms.date: "4/13/2021"
ms.custom: "conceptual"
author: "tylermsft"
ms.author: "twhitney"
helpviewer_keywords: ["import", "header unit", "ifc", "stl"]
---
# Walkthrough: Import STL libraries as header units

This walkthrough shows two ways to import C++ Standard Template Library (STL) libraries as header units in Visual Studio.

The [first way](#approach1) is to have the build system automatically scan for and build header units based on the STL headers you import in your project.

The [second way](#approach2) is to build a static library project that contains header units for the STL headers you want to use and then reference that project to import the header units.

Importing an STL header as a header unit is a simpler alternative to [precompiled header files](creating-precompiled-header-files.md). Header units are easier to set up and use than a shared precompiled header file (PCH) but still provide similar performance benefits. Unlike a PCH, when a header unit changes, only it and its dependencies are rebuilt.

Before you can import an STL header, it must be compiled into a header unit. A header unit is a binary representation of a header file. A header unit ends with an *`.ifc`* extension.

An important difference between a header unit and a header file is that header units aren't affected by macro definitions. You can't `#define` a symbol that causes the header unit to behave differently when you import it. You can do that with a header file.

A similarity is that everything visible from a header file is also visible from a header unit.

## Prerequisites

To use header units, you need Visual Studio 2019 16.10.0 Preview 2 or later.

## Two approaches

Before you can import an STL header, it must be compiled into a header unit. There are two main approaches:

**Scan for module dependencies**

At a high level, when you use this approach, the build system scans your sources for `import "header";` and `import <header>;` statements. It then attempts to compile those header files and their dependencies into header units. Finally, it imports the compiled header unit files (*`.ifc`*) instead of running the header file through the preprocessor.

This approach might not be the best one for larger projects because it doesn't guarantee optimal build times. That's because the build system needs to scan through the files to find the headers to build into header units. The same header files might be reprocessed repeatedly, which would increase build time. Also, not all header files can be automatically converted to header units. For example, headers that depend on conditional compilation via `#define` symbols might not work as header units. If a header file can't be compiled into a header unit, it's treated as a normal `#include` file.

See [Approach 1: Scan for headers](#approach1), in this article, for a walkthrough of this approach.

**Create a static library project**

The recommended approach, particularly for larger projects or when you want to share a common set of header units across multiple projects, is to create a static library project that contains the header units you want to share. This library project is then referenced by projects that import those header units. It's like using [shared precompiled headers](https://devblogs.microsoft.com/cppblog/shared-pch-usage-sample-in-visual-studio/), but it's easier.

See [Approach 2: Build a static library project](#approach2), in this article, for a walkthrough of this approach.

## <a name="approach1"></a>Approach 1: Scan for imports

We'll start with the easiest way to import STL libraries as header units. This approach might not be appropriate for larger projects because it doesn't guarantee an optimal build time. That's because the sources need to be scanned for `import` statements.

This option is convenient for codebases that use many different headers and when build throughput isn't critical. This option doesn't guarantee that a header unit for a particular header will be built only once. But header units that are part of referenced static library projects are reused.

You can import your STL libraries as header units without changing your code. To do so, enable the Visual C++ project **Scan Sources for Module Dependencies** option. This setting causes the build system to scan your source code for `import` directives and tries to compile the imported header file into a header unit. There are other ways to indicate that a header file should be treated as a header unit besides scanning your entire project. For more information, see [Walkthrough: Build and import header units in Visual C++ projects](walkthrough-header-units.md).

Not all headers can be converted to a header unit. One issue is header files that rely on `#define` symbols to cause the header file to compile differently. If a header file relies on this mechanism, it won't be converted to a header unit. Instead, it's treated as an ordinary `#include`.

To demonstrate this approach, we'll create a project that imports two STL libraries and then change the project properties so that it treats the libraries as header units.

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

Follow these steps to set the options that cause the build system to scan for imported headers that can be compiled into header units.

1. On the main menu, select **Project** > **Properties**. The project property pages open:
:::image type="content" source="media/vs2019-scan-module-dependencies.png" alt-text="Screenshot that shows the scan module dependencies property setting in the project property pages.":::
1. You might want to select **All Configurations** in the **Configuration** list and **All Platforms** in the **Platform** list. Doing so ensures the settings you change apply whether you're building for debug or release, and so on.
1. In the left pane of the project property pages, select **C/C++** > **General**.
1. Set **Scan Sources for Module Dependencies** to **Yes**. Because we're setting the project property, all sources in this project will be scanned.

Change the C++ language standard for the compiler. The [`/std:c++latest`](./reference/std-specify-language-standard-version.md) switch is required if you're using header units.

1. In the left pane of the project property pages, select **Configuration Properties** > **General**.
1. In the **C++ Language Standard** list, select **Preview - Features from the Latest C++ Working Draft (/std:c++latest)**:
:::image type="content" source="media/set-cpp-language-latest.png" alt-text="Screenshot that shows where to set the language standard.":::
1. Select **OK** to close the project property pages. Build the solution by selecting **Build** > **Build Solution** on the main menu.

You can run the solution to verify that it produces the expected output: `1`

The main consideration of this approach is the balance between convenience and the build cost of scanning all your files to determine which header files to build as header units.

You can fine-tune this balance by not scanning for import dependencies. Instead, you can explicitly mark which files should be built as header units. That approach is shown in [Walkthrough: Build and import header units in your Visual C++ projects](walkthrough-header-units.md).

## <a name="approach2"></a>Approach 2: Build a static library project

The more flexible way to consume STL headers is to create one or more static library projects that build the header units from the STL headers you want to reuse. Then reference the library project or projects from the projects that need those STL headers. Modules and header units built in a static library project are automatically available to referencing projects. The project system automatically adds the appropriate [/headerUnit](./reference/headerunit.md) switches to the command line so that the referencing projects can import the header units.

This option ensures that header units for a particular header will be built only once. It's similar to using a shared precompiled header file, but it's much easier.

In this example, you'll create a project that imports `<iostream>` and `<vector>`. After the solution is built, you'll reference this shared header unit project from another C++ project. Everywhere `import <iostream>;` or `import <vector>;` is found in the referencing project, the project will import the built header unit for that library instead of running the contents of the library header through the preprocessor. 

In projects that include the same library header in multiple files, this change will improve build performance similarly to how PCH files do. The header won't have to be processed over and over by the files that include it. Instead, the already processed compiled header unit will be imported.

### Create the shared header unit project

Begin by creating the project for the shared header unit as follows.

1. Create an empty C++ project. For this example, call it **SharedPrj**.\
 Select empty C++ project from the project types available in the **Create a new project** window:
:::image type="content" source="media/empty-project-option.png" alt-text="Screenshot that shows creating a new empty C++ project.":::
1. Add a new (empty) C++ file to the project. Change the file's content to this:

    ```cpp
    import <iostream>;
    import <vector>;
    ```

### Set project properties

Set project properties to share the header units from this project.

1. On the Visual Studio main menu, select **Project** > **Properties**. The project property pages open:
:::image type="content" source="media/set-header-unit-library-settings.png" alt-text="Screenshot that shows settings for Configuration Type and C++ Language Standard.":::
1. You might want to select **All Configurations** in the **Configuration** list and **All Platforms** in the **Platform** list. Doing so ensures the settings you change apply whether you're building for debug or retail, and so on.
1. In the left pane of the project property pages, select **General**.
1. Change the **Configuration Type** option to **Static library (.lib)**.
1. Change **C++ Language Standard** to **Preview - Features from the Latest C++ Working Draft (/std:c++latest)**.
1. In the left pane of the project property pages, select **C/C++** > **General**.

1. In the **Scan Sources for Module Dependencies** list, select **Yes**:
:::image type="content" source="media/vs2019-scan-module-dependencies.png" alt-text="Screenshot that shows the scan module dependencies property setting.":::
1. Select **OK** to close the project property pages. Build the solution by selecting **Build** > **Build Solution** on the main menu.

## Reference the shared header unit project

Next, create a project that will use the built `<vector>` and `<iostream>` shared header project.

1. With the current solution still open, on the Visual Studio menu, select **File** > **Add**  > **New Project**.
1. Add a C++ console app project. For this example, call it **Walkthrough**.
1. Change the content of its source file as follows:

    ```cpp
    import <iostream>;
    import <vector>;
    
    int main()
    {
        std::vector<int> numbers = {0, 1, 2};
        std::cout << numbers[1];
    }
    ```

Change the **C++ Language Standard** for the compiler. To use header units, you need the [`/std:c++latest`](./reference/std-specify-language-standard-version.md) switch.
1. In **Solution Explorer**, right-click the **Walkthrough** project and select **Properties**. The project property pages open:
:::image type="content" source="media/set-cpp-language-latest.png" alt-text="Screenshot that shows setting the language standard to the preview version.":::
1. In the left pane of the **Walkthrough** project property pages, select **Configuration Properties** > **General**.
1. In the **C++ Language Standard** list, select **Preview - Features from the Latest C++ Working Draft (/std:c++latest)**.
1. Select **OK** to close the project property pages.

In the **Walkthrough** project, add a reference to the **SharedPrj** project.

1. In the **Walkthrough** project, select the **References** node, and then select **Add Reference**. Select **SharedPrj** in the list of projects: 
:::image type="content" source="./media/add-reference-to-walkthrough.png" alt-text="Screenshot that shows the Add Reference dialog. It's used to add a reference to the Walkthrough project.":::
Now that you've added this reference, the build system will use the header units built by **SharedPrj** whenever an `import` in the **Walkthrough** project matches one of the built header units in **SharedPrj**.
1. Select **OK** to close the **Add Reference** dialog.
1. Right-click the **Walkthrough** project and select **Set as Startup Project**.

Build the solution. (**Build** > **Build Solution** on the main menu.) Run it to see that it produces the expected output: `1`

The advantage of this approach is that you can reference the static library project from any project to reuse the header units in it. In this example, that's `<vector>` and `<iostream>`.  

You can make a monolithic static library project that contains all the commonly used STL headers that you want to import from your various projects. Or you can create smaller shared library projects for the different groupings of STL libraries that you want to import as header units. Then reference those shared header unit projects as needed.

The result should be increased build throughput because importing a header unit significantly reduces the work the compiler needs to do.

When you use this approach with your own projects, build the static library project with compiler switches that are compatible with the project that will reference it. For example, STL projects should be built with the `/EHsc` compiler switch to turn on exception handling, and so should the projects that reference the static library project.

## `/translateInclude`

The [`/translateInclude`](./reference/translateinclude.md) compiler switch can make it easier for you to use a referenced shared header unit project from your project.

It's useful because you don't have to modify the `#include` directives in your project to take advantage of importing built header units from the referenced shared header unit project.

For example, if you have `#include <vector>` in your project and you reference a shared header unit project that contains a header unit for `<vector>`, you don't need to manually change `#include <vector>` to `import <vector>;` in your source code. If you specify `/translateInclude` (available in the project properties page under **C/C++** > **General** > **Translate Includes to Imports**), the compiler will automatically treat `#include <vector>` as `import <vector>;`. This behavior applies to any `#include` statement that refers to a built header unit in a referenced shared header unit project. Other `#include` statements will be treated in the usual way.

## Reuse header units among projects

Header units built by a static library project are automatically available to all directly and indirectly referencing projects. There are project settings that allow you to select which header units should be automatically available to all referencing projects. The settings are in project settings under **VC++ Directories**.
1. In **Solution Explorer**, right-click the project and select **Properties**.
1. In the left pane of the project properties page, select **VC++ Directories**:
:::image type="content" source="media/public-include-module-directories-setting.png" alt-text="Screenshot that shows public project content properties, like Public Include Directories and All Header Files are Public.":::

These settings control the visibility of header units to the build system:

- **Public Include Directories**. Specifies project directories for header units that should be automatically added to the include path in referencing projects.
- **Public C++ Module Directories**. Specifies which project directories contain header units that should be available to referencing projects. This setting allows you to make some header units public. It provides a place that's visible to other projects where you can put header units that can be shared. If you use this setting, you might also want to specify **Public Include Directories**. If you do, your public headers are automatically added to the include path in referencing projects.
- **All Modules are Public**. When you use header units built as a part of a DLL project, the symbols have to be exported from the DLL. To do so, set this property to **Yes**.

## Use a prebuilt module file

Typically, the easiest way to reuse header units among solutions is to reference the same shared header unit project from each solution.

But if you need to use a built header unit that you don't have the project for, you can specify where the built *`.ifc`* file is so you can import it in your solution.

To access this setting:
1. On the main menu, select **Project** > **Properties**. The project properties page opens.
1. In the left pane of the project properties page, select **C/C++** > **General**.
1. In the **Additional Module Dependencies** list, add the modules to reference. Here's an example of the format to use for **Additional Module Dependencies**: `ModuleName1=Path\To\ModuleName1.ifc; ModuleName2=Path\To\ModuleName2.ifc`
:::image type="content" source="media/vs2019-additional-module-dependencies.png" alt-text="Screenshot showing project properties under C/C++, General, which Additional Module Dependencies selected.":::

## Select among multiple copies of a header unit
 
If you reference two or more projects that built two or more header units with the same name, or that built two or more header units for the same header file, there will be multiple header units to choose from for the same import. You might have different versions of the header unit that were built with different compiler settings, for example, and need to inform the compiler which one to use.

Use  the project properties **C/C++** > **Additional Header Unit Dependencies** setting to resolve collisions by specifying which header unit should be used. Otherwise, you can't predict which one will be picked.

To access this setting:
1. On the main menu, select **Project** > **Properties**. The project properties page opens.
1. In the left pane of the project properties page, select **C/C++** > **General**.
1. Use **Additional Header Unit Dependencies** to resolve collisions by specifying which module or header unit should be used for the project. Use this format for **Additional Header Unit Dependencies**: `Path\To\Header1.h= Path\To\HeaderUnit1.ifc;Path\To\Header2.h= Path\To\ HeaderUnit2.ifc`
:::image type="content" source="media/additional-header-unit-dependencies-setting.png" alt-text="Screenshot that shows the Additional Header Unit Dependencies setting in the project properties page.":::

> [!IMPORTANT]
> Ensure that projects that share header units are built with compatible compilation options. If you use compilation options when you implement the header unit that are different from the ones you used when you created it, the compiler will issue warnings.

> [!NOTE]
> To use header units built as a part of a DLL project, set **All Modules are Public** to **Yes**.

## See also

[Walkthrough: Build and import header units in your Visual C++ projects](walkthrough-header-units.md) \
[`/translateInclude`](./reference/translateinclude.md)
