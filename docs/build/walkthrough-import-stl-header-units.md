---
description: "Learn to use header units to import C++ Standard Template Library (STL) libraries in Visual Studio."
title: "Walkthrough: Import STL libraries as header units"
ms.date: 01/12/2022
ms.custom: "conceptual"
author: "tylermsft"
ms.author: "twhitney"
helpviewer_keywords: ["import", "header unit", "ifc", "stl"]
---
# Walkthrough: Import STL libraries as header units

This walkthrough shows two ways to import C++ Standard Template Library (STL) libraries as header units in Visual Studio.

The [first way](#approach1) shows how to have the build system automatically scan for and build header units for the STL headers you include in your project.

The [second way](#approach2) shows how to build a static library project that contains header units for the STL headers you want to use, and then reference that project to import the header units.

Importing an STL header as a header unit is simpler than using [precompiled header files](creating-precompiled-header-files.md). Header units are easier to set up and use than a shared precompiled header file (PCH), but still provide similar performance benefits. Unlike a PCH, when a header unit changes, only it and what depends on it are rebuilt.

Everything visible from a header file is also visible from a header unit. An important difference between a header unit and a header file is that header units aren't affected by macro definitions. You can't `#define` a symbol that causes the header unit to behave differently when you import it as you can with a header file.

## Prerequisites

To use header units, you need Visual Studio 2019 16.10 or later.

## Two approaches

Before you can import an STL header, it must be compiled into a header unit. A header unit is a binary representation of a header file. A header unit ends with an *`.ifc`* extension.

There are two approaches to compiling the STL header files you use into a header unit. You can have Visual Studio scan for the STL headers you use, compile them into header units, and import rather than include those headers. Or you can create a static library that contains the STL header files compiled as header units. Both approaches are described below.

**Scan for module dependencies**

With this approach, the build system scans your sources for `#import "header";` and `import <header>;` statements. Although if you don't want to first modify your code to change `#include` directives to `import` statements, you can use the `/translateIncludes` compiler switch so that `#include` directives are treated as if they were `import` statements. That is, `#include <library>` will be treated as if you had written `import <library>;`, as long as the compiler built a header unit for the included file.

 The header files and their dependencies are compiled into header units. Then, the compiler imports the compiled header unit files (*`.ifc`*) instead of running the header file through the preprocessor.

This approach might not be the best for larger projects because it doesn't guarantee optimal build times. That's because the build system needs to scan through the files to find the headers to build into header units. The same header files may be encountered and reprocessed repeatedly, which will increase build time. 

Not all header files can be automatically converted to header units. For example, headers that depend on conditional compilation via `#define` values might not work as header units. If a header file fails to be compiled into a header unit, it's treated as a normal `#include` file.

There's an allowlist for the STL headers that the build system uses when `/translateInclude` is specified to determine which STL headers can be compiled into header units. You can see this `header-units.json` file under the installation directory for Visual Studio. For example, `%ProgramFiles%\Microsoft Visual Studio\2022\Enterprise\VC\Tools\MSVC\14.30.30705\include\header-units.json` It's consulted when the build system attempts to create a header unit for an STL header file, and when dependencies are resolved for an STL header file. If the STL header file isn't on the list, it's treated as a normal `#include` instead of importing it as a header unit.

See [Approach 1: Scan for headers](#approach1) in this article to walk through this approach.

**Create a static library project**

The recommended approach, particularly for larger projects or when you want to share a common set of header units across multiple projects, is to create a static library project that contains the header units you want to share. Then reference the library project from the projects that import the header units. It's like using [shared precompiled headers](https://devblogs.microsoft.com/cppblog/shared-pch-usage-sample-in-visual-studio/), but easier.

See [Approach 2: Build a static library project](#approach2) in this article to walk through this approach.

## <a name="approach1"></a>Approach 1: Scan for imports

We'll start with the easiest way to import STL libraries as header units. This approach might not be appropriate for larger projects because it doesn't guarantee an optimal build time because all of the sources need to be scanned for `import` statements.

This option is convenient when there are many header files or when build throughput isn't critical. This option doesn't guarantee that a header unit for a particular header will be built only once. Though header units that are part of referenced static library projects are reused.

You can import your STL libraries as header units without changing your code. To do so, enable the Visual C++ project **Scan Sources for Module Dependencies** option. This setting causes the build system to scan your source code for `#include` directives and tries to compile the imported header file into a header unit. There are other ways to indicate that a header file should be treated as a header unit besides scanning your entire project. For more information, see [Walkthrough: Build and import header units in Visual C++ projects](walkthrough-header-units.md).

Not all headers can be converted to a header unit. Header files that rely on `#define`  to cause the header file to compile differently. If a header file relies on this, it won't be converted to a header unit. Instead, it's treated as an ordinary `#include`.

To demonstrate this approach, we'll create a project that imports two STL libraries and then change the project properties so that it imports the libraries as header units.

### Create a C++ console app project

This step creates a project that imports two libraries: `<iostream>` and `<vector>`. You'll modify the project settings to scan for header files that can be compiled into header units.

1. In Visual Studio, create a new C++ console app project.
1. Modify the source file as follows:

    ```cpp
    #include <iostream>;
    #include <vector>;
    
    int main()
    {
        std::vector<int> numbers = {0, 1, 2};
        std::cout << numbers[1];
    }
    ```

### Set project options and run the project

Follow these steps to set the options that cause the build system to scan for imported headers that can be compiled into header units. And also the option that causes the compiler to treat `#include` as if you had written `import` for those header files that can be treated as header units.

1. On the main menu, select **Project** > **Properties**. The project property pages dialog opens:
:::image type="content" source="media/vs2019-scan-module-dependencies.png" alt-text="Screenshot that shows the scan module dependencies property setting in the project property pages.":::
1. Select **All Configurations** in the **Configuration** list and **All Platforms** in the **Platform** list. Doing so ensures the settings you change apply whether you're building for debug or release, and other configurations.
1. In the left pane of the project property pages dialog, select **C/C++** > **General**.
1. Set **Scan Sources for Module Dependencies** to **Yes**. Because we're setting the project property, all source files in this project will be scanned.
1. Set **Translate Includes to Imports** to **Yes**

:::image type="content" source="media/vs2019-scan-module-dependencies.png" alt-text="Screenshot that shows the Scan Sources for Module Dependencies, and Translate Includes to Imports settings, in the project properties page under Configuration Properties > C/C++ > General.":::

Change the C++ language standard used by the compiler. The [`/std:c++20`](./reference/std-specify-language-standard-version.md) or later option is required to use header units.

1. In the left pane of the project property pages dialog, select **Configuration Properties** > **General**.
1. In the **C++ Language Standard** list, select **ISO C++20 Standard (/std:c++20)** or later. In versions before Visual Studio 2019 version 16.11, select **Preview - Features from the Latest C++ Working Draft (/std:c++latest)**.
1. Choose **OK** to close the project property pages dialog. From the main menu, build the solution by selecting **Build** > **Build Solution**.

Run the solution to verify that it produces the expected output: `1`

The main consideration when using this approach is the balance between convenience and the cost of scanning all your files to determine which header files to build as header units.

You can fine-tune this balance by not scanning every file for import dependencies. Instead, you can indicate which files should be built as header units. That approach is shown in [Walkthrough: Build and import header units in your Visual C++ projects](walkthrough-header-units.md).

## <a name="approach2"></a>Approach 2: Build a static library project

A more flexible way to consume STL headers is to create one or more static library projects that build header units from the STL headers you want to reuse. Then, reference the library project or projects from your projects that will consume those STL headers. Modules and header units built in a static library project are automatically available to referencing projects. The project system automatically adds the appropriate [`/headerUnit`](./reference/headerunit.md) command-line options to the compiler so that the referencing projects will import the header units.

This approach ensures that header units for a particular header will be built only once. It's similar to using a shared precompiled header file, but is much easier.

In this example, you'll create a project that imports `<iostream>` and `<vector>`. After the solution is built, you'll reference this shared header unit project from another C++ project. Everywhere `import <iostream>;` or `import <vector>;` is found, the project will import the built header unit for that library instead of running the library header through the preprocessor.

In projects that include the same library header in multiple files, this change will improve build performance like PCH files do. The header won't have to be processed over and over by the files that include it. Instead, the already processed compiled header unit will be imported.

### Create the shared header unit project

Create the project for the shared header unit as follows:

1. Create an empty C++ project. For this example, call it **SharedPrj**.\
 Select empty C++ project from the project types available in the **Create a new project** window:
:::image type="content" source="media/empty-project-option.png" alt-text="Screenshot that shows creating a new empty C++ project.":::
1. Add a new (empty) C++ file to the project. Change the file's content to this:

    ```cpp
    import <iostream>;
    import <vector>;
    ```

### Set project properties

Set project properties to share the header units from this project:

1. On the Visual Studio main menu, select **Project** > **Properties**. The project property pages dialog opens:
:::image type="content" source="media/set-header-unit-library-settings.png" alt-text="Screenshot that shows settings for Configuration Type and C++ Language Standard.":::
1.Select **All Configurations** in the **Configuration** list and **All Platforms** in the **Platform** list. Doing so ensures the settings you change apply whether you're building for debug or retail, and so on.
1. In the left pane of the project property pages dialog, select **General**.
1. Change the **Configuration Type** option to **Static library (.lib)**.
1. Change **C++ Language Standard** to **ISO C++20 Standard (/std:c++20)** or later. In versions before Visual Studio 2019 version 16.11, select **Preview - Features from the Latest C++ Working Draft (/std:c++latest)**.
1. In the left pane of the project property pages dialog, select **C/C++** > **General**.

1. In the **Scan Sources for Module Dependencies** list, select **Yes**:
:::image type="content" source="media/vs2019-scan-module-dependencies.png" alt-text="Screenshot that shows the scan module dependencies property setting.":::
1. Choose **OK** to close the project property pages dialog. Build the solution by selecting **Build** > **Build Solution** on the main menu.

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

Change the **C++ Language Standard** used by the compiler. To use header units, you need the [`/std:c++20`](./reference/std-specify-language-standard-version.md) or later option. In versions before Visual Studio 2019 version 16.11, use **`/std:c++latest`**.

1. In **Solution Explorer**, right-click the **Walkthrough** project and select **Properties**. The project property pages dialog opens:
:::image type="content" source="media/set-cpp-language-latest.png" alt-text="Screenshot that shows setting the language standard to the preview version.":::
1. In the left pane of the **Walkthrough** project property pages dialog, select **Configuration Properties** > **General**.
1. In the **C++ Language Standard** list, select **ISO C++20 Standard (/std:c++20)** or later. In versions before Visual Studio 2019 version 16.11, select **Preview - Features from the Latest C++ Working Draft (/std:c++latest)**.
1. Select **OK** to close the project property pages dialog.

In the **Walkthrough** project, add a reference to the **SharedPrj** project with the following steps:

1. In the **Walkthrough** project, select the **References** node, and then select **Add Reference**. Select **SharedPrj** in the list of projects:
:::image type="content" source="./media/add-reference-to-walkthrough.png" alt-text="Screenshot that shows the Add Reference dialog. It's used to add a reference to the Walkthrough project.":::
Now that you've added this reference, the build system will use the header units built by **SharedPrj** whenever an `import` in the **Walkthrough** project matches one of the built header units in **SharedPrj**.
1. Select **OK** to close the **Add Reference** dialog.
1. Right-click the **Walkthrough** project and select **Set as Startup Project**.

Build the solution. (**Build** > **Build Solution** on the main menu.) Run it to see that it produces the expected output: `1`

The advantage of this approach is that you can reference the static library project from any project to reuse the header units in it. In this example, the static library contains the `<vector>` and `<iostream>` header units.

You can make a monolithic static library project that contains all the commonly used STL headers that you want to import from your various projects. Or you can create smaller shared library projects for the different groupings of STL libraries that you want to import as header units. Then reference those shared header unit projects as needed.

The result should be increased build throughput because importing a header unit significantly reduces the work the compiler needs to do.

When you use this approach with your own projects, build the static library project with compiler options that are compatible with the project that will reference it. For example, STL projects should be built with the **`/EHsc`** compiler option to turn on exception handling, and so should the projects that reference the static library project.

## `/translateInclude`

The [`/translateInclude`](./reference/translateinclude.md) compiler option (available in the project properties dialog under **C/C++** > **General** > **Translate Includes to Imports**) makes it easier for you to use a referenced shared header unit project from your project. It does this by making it unnecessary to change `#include` directives to `import` in your project to take advantage of importing built header units from the referenced shared header unit project.

For example, if you have `#include <vector>` in your project and you reference a shared header unit project that contains a header unit for `<vector>`, you don't need to manually change `#include <vector>` to `import <vector>;` in your source code. Instead, the compiler will automatically treat `#include <vector>` as `import <vector>;`. This behavior applies to any `#include` statement that refers to a built header unit in a referenced shared header unit project. An `#include` statement that doesn't refer to a header unit is treated as a normal `#include#`.

## Reuse header units among projects

Header units built by a static library project are automatically available to all directly and indirectly referencing projects. There are project settings that allow you to select which header units should be automatically available to all referencing projects. The settings are in project settings under **VC++ Directories**.

1. In **Solution Explorer**, right-click the project and select **Properties**.
1. In the left pane of the project properties page, select **VC++ Directories**:
:::image type="content" source="media/public-include-module-directories-setting.png" alt-text="Screenshot that shows public project content properties, like Public Include Directories and All Header Files are Public.":::

The following settings control the visibility of header units to the build system:

- **Public Include Directories**. Specifies project directories for header units that should be automatically added to the include path in referencing projects.
- **Public C++ Module Directories**. Specifies which project directories contain header units that should be available to referencing projects. This setting allows you to make some header units public. It's visible to other projects so this is where you put header units that you want to share. If you use this setting, for convenience, specify **Public Include Directories** to automatically add your public headers to the include path in referencing projects.
- **All Modules are Public**. When you use header units built as a part of a DLL project, the symbols have to be exported from the DLL. To do so, set this property to **Yes**.

## Use a prebuilt module file

Typically, the easiest way to reuse header units among solutions is to reference a shared header unit project from each solution.

But if you need to use a built header unit that you don't have the project for, you can specify where the built *`.ifc`* file is so you can import it in your solution. To access this setting:

1. On the main menu, select **Project** > **Properties**. The project properties dialog opens.
1. In the left pane of the project properties page, select **C/C++** > **General**.
1. In the **Additional Module Dependencies** list, add the modules to reference. Here's an example of the format to use for **Additional Module Dependencies**: `ModuleName1=Path\To\ModuleName1.ifc; ModuleName2=Path\To\ModuleName2.ifc`
:::image type="content" source="media/vs2019-additional-module-dependencies.png" alt-text="Screenshot showing project properties under C/C++, General, which Additional Module Dependencies selected.":::

## Select among multiple copies of a header unit

If you reference two or more projects that built two or more header units with the same name, or that built two or more header units for the same header file, there will be multiple header units to choose from for the same import. You might have different versions of the header unit built with different compiler settings, for example, and need to specify which one to use.

Use  the project properties **C/C++** > **Additional Header Unit Dependencies** setting to resolve collisions by specifying which header unit to use. Otherwise, you can't predict which one will be picked.

To access this setting:

1. On the main menu, select **Project** > **Properties**. The project properties dialog opens.
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
