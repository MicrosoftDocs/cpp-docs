---
description: "Learn more about: Hint Files"
title: "Hint Files"
ms.date: "02/26/2019"
f1_keywords: ["cpp.hint", "vc.hint.file"]
helpviewer_keywords: ["stop file", "cpp.hint", "hint file", "cpp.stop", "Class View, hint file"]
ms.assetid: 17194f66-cf62-4523-abec-77db0675ab65
---
# Hint Files

A *hint file* contains macros that would otherwise cause regions of code to be skipped by the C++ Browsing Database Parser. When you open a Visual Studio C++ project, the parser analyzes the code in each source file in the project and builds a database with information about every identifier. The IDE uses that information to support code browsing features such as the **Class View** browser and the **Navigation Bar**.

The C++ Browsing Database Parser is a fuzzy parser that can parse large amounts of code in a short amount of time. One reason it's fast is because it skips the content of blocks. For instance, it only records the location and parameters of a function, and ignores its contents. Certain macros can cause issues for the heuristics used to determine the start and end of a block. These issues cause regions of code to be recorded improperly.

These skipped regions can manifest in multiple ways:

- Missing types and functions in **Class View**, **Go To** and **Navigation Bar**

- Incorrect scopes in the **Navigation Bar**

- Suggestions to **Create Declaration/Definition** for functions that are already defined

A hint file contains user-customizable hints, which have the same syntax as C/C++ macro definitions. Visual C++ includes a built-in hint file that is sufficient for most projects. However, you can create your own hint files to improve the parser specifically for your project.

> [!IMPORTANT]
> If you modify or add a hint file, you need to take additional steps in order for the changes to take effect:
>
> - In versions before Visual Studio 2017 version 15.6: Delete the .sdf file and/or VC.db file in the solution for all changes.
> - In Visual Studio 2017 version 15.6 and later: Close and reopen the solution after adding new hint files.

## Scenario

```cpp
#define NOEXCEPT noexcept
void Function() NOEXCEPT
{
}
```

Without a hint file, `Function` doesn't show up in **Class View**, **Go To** or the **Navigation Bar**. After adding a hint file with this macro definition, the parser now understands and replaces the `NOEXCEPT` macro, which allows it to correctly parse the function:

```cpp.hint
#define NOEXCEPT
```

## Disruptive Macros

There are two categories of macros that disrupt the parser:

- Macros that encapsulate keywords that adorn a function

   ```cpp
   #define NOEXCEPT noexcept
   #define STDMETHODCALLTYPE __stdcall
   ```

   For these types of macros, only the macro name is required in the hint file:

   ```cpp.hint
   #define NOEXCEPT
   #define STDMETHODCALLTYPE
   ```

- Macros that contain unbalanced brackets

   ```cpp
   #define BEGIN {
   ```

   For these types of macros, both the macro name and its contents are required in the hint file:

   ```cpp.hint
   #define BEGIN {
   ```

## Editor Support

Starting in Visual Studio 2017 version 15.8 there are several features to identify disruptive macros:

- Macros that are inside regions skipped by the parser are highlighted.

- There's a Quick Action to create a hint file that includes the highlighted macro, or if there's an existing hint file, to add the macro to the hint file.

![Highlighted Macro.](media/hint-squiggle-and-actions.png "Hint squiggle and Quick Actions")

After executing either of the Quick Actions, the parser reparses the files affected by the hint file.

By default, the problem macro is highlighted as a suggestion. The highlight can be changed to something more noticeable, such as a red or green squiggle. Use the **Macros in Skipped Browsing Regions** option in the **Code Squiggles** section under **Tools** > **Options** > **Text Editor** > **C/C++** > **View**.

![Macros in Skipped Browsing Regions Option.](media/skipped-regions-squiggle-option.png "Skipped regions squiggle option.")

## Display Browsing Database Errors

The **Project** > **Display Browsing Database Errors** menu command displays all the regions that failed to parse in the **Error List**. The command is meant to streamline building the initial hint file. However, the parser can't tell if the cause of the error was a disruptive macro, so you must evaluate each error. Run the **Display Browsing Database Errors** command and navigate to each error to load the affected file in the editor. Once the file is loaded, if any macros are inside the region, they're highlighted. You can invoke the Quick Actions to add them to a hint file. After a hint file update, the error list is updated automatically. Alternatively, if you're modifying the hint file manually you can use the **Rescan Solution** command to trigger an update.

## Architecture

Hint files relate to physical directories, not the logical directories shown in **Solution Explorer**. You don't have to add a hint file to your project for the hint file to have an effect. The parsing system uses hint files only when it parses source files.

Every hint file is named **cpp.hint**. Many directories can contain a hint file, but only one hint file can occur in a particular directory.

Your project can be affected by zero or more hint files. If there are no hint files, the parsing system uses error recovery techniques to ignore indecipherable source code. Otherwise, the parsing system uses the following strategy to find and gather hints.

### Search Order

The parsing system searches directories for hint files in the following order.

- The directory that contains the installation package for Visual C++ (**vcpackages**). This directory contains a built-in hint file that describes symbols in frequently used system files, such as **windows.h**. Consequently, your project automatically inherits most of the hints that it needs.

- The path from the root directory of a source file to the directory that contains the source file itself. In a typical Visual Studio C++ project, the root directory contains the solution or project file.

   The exception to this rule is if a *stop file* is in the path to the source file. A stop file is any file that is named **cpp.stop**. A stop file provides additional control over the search order. Instead of starting from the root directory, the parsing system searches from the directory that contains the stop file to the directory that contains the source file. In a typical project, you don't need a stop file.

### Hint Gathering

A hint file contains zero or more *hints*. A hint is defined or deleted just like a C/C++ macro. That is, the `#define` preprocessor directive creates or redefines a hint, and the `#undef` directive deletes a hint.

The parsing system opens each hint file in the search order described earlier. It accumulates each file's hints into a set of *effective hints*, and then uses the effective hints to interpret the identifiers in your code.

The parsing system uses these rules to accumulate hints:

- If the new hint specifies a name that isn't already defined, the new hint adds the name to the effective hints.

- If the new hint specifies a name that is already defined, the new hint redefines the existing hint.

- If the new hint is an `#undef` directive that specifies an existing effective hint, the new hint deletes the existing hint.

The first rule means that effective hints are inherited from previously opened hint files. The last two rules mean that hints later in the search order can override earlier hints. For example, you can override any previous hints if you create a hint file in the directory that contains a source file.

For a depiction of how hints are gathered, see the [Example](#example) section.

### Syntax

You create and delete hints by using the same syntax as the preprocessor directives to create and delete macros. In fact, the parsing system uses the C/C++ preprocessor to evaluate the hints. For more information about the preprocessor directives, see [#define Directive (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md) and [#undef Directive (C/C++)](../../preprocessor/hash-undef-directive-c-cpp.md).

The only unusual syntax elements are the `@<`, `@=`, and `@>` replacement strings. These hint-file specific replacement strings are only used in *map* macros. A map is a set of macros that relate data, functions, or events to other data, functions, or event handlers. For example, `MFC` uses maps to create [message maps](../../mfc/reference/message-maps-mfc.md), and `ATL` uses maps to create [object maps](../../atl/reference/object-map-macros.md). The hint-file specific replacement strings mark the starting, intermediate, and ending elements of a map. Only the name of a map macro is significant. Therefore, each replacement string intentionally hides the implementation of the macro.

Hints use this syntax:

|Syntax|Meaning|
|------------|-------------|
|`#define` *hint-name* *replacement-string*<br /><br /> `#define` *hint-name* `(` *parameter*, ...`)`*replacement-string*|A preprocessor directive that defines a new hint or redefines an existing hint. After the directive, the preprocessor replaces each occurrence of *hint-name* in source code with *replacement-string*.<br /><br /> The second syntax form defines a function-like hint. If a function-like hint occurs in source code, the preprocessor first replaces each occurrence of *parameter* in *replacement-string* with the corresponding argument in source code, and then replaces *hint-name* with *replacement-string*.|
|`@<`|A hint-file specific *replacement-string* that indicates the start of a set of map elements.|
|`@=`|A hint-file specific *replacement-string* that indicates an intermediate map element. A map can have multiple map elements.|
|`@>`|A hint-file specific *replacement-string* that indicates the end of a set of map elements.|
|`#undef` *hint-name*|The preprocessor directive that deletes an existing hint. The name of the hint is provided by the *hint-name* identifier.|
|`//` *comment*|A single-line comment.|
|`/*` *comment* `*/`|A multiline comment.|

## Example

This example shows how hints are accumulated from hint files. Stop files aren't used in this example.

The illustration shows some of the physical directories in a Visual Studio C++ project. There are hint files in the `vcpackages`, `Debug`, `A1`, and `A2` directories.

### Hint File Directories

![Common and project&#45;specific hint file directories.](media/hintfile.png "HintFile")

### Directories and Hint File Contents

This list shows the directories in this project that contain hint files, and the contents of those hint files. Only some of the many hints in the `vcpackages` directory hint file are listed:

- vcpackages

    ```cpp.hint
    // vcpackages (partial list)
    #define _In_
    #define _In_opt_
    #define _In_z_
    #define _In_opt_z_
    #define _In_count_(size)
    ```

- Debug

    ```cpp.hint
    // Debug
    #undef _In_
    #define OBRACE {
    #define CBRACE }
    #define RAISE_EXCEPTION(x) throw (x)
    #define START_NAMESPACE namespace MyProject {
    #define END_NAMESPACE }
    ```

- A1

    ```cpp.hint
    // A1
    #define START_NAMESPACE namespace A1Namespace {
    ```

- A2

    ```cpp.hint
    // A2
    #undef OBRACE
    #undef CBRACE
    ```

### Effective Hints

This table lists the effective hints for the source files in this project:

- Source File: A1_A2_B.cpp

- Effective hints:

    ```cpp.hint
    // vcpackages (partial list)
    #define _In_opt_
    #define _In_z_
    #define _In_opt_z_
    #define _In_count_(size)
    // Debug...
    #define RAISE_EXCEPTION(x) throw (x)
    // A1
    #define START_NAMESPACE namespace A1Namespace {
    // ...Debug
    #define END_NAMESPACE }
    ```

These notes apply to the preceding list:

- The effective hints are from the `vcpackages`, `Debug`, `A1`, and `A2` directories.

- The **#undef** directive in the `Debug` hint file removed the `#define _In_` hint in the `vcpackages` directory hint file.

- The hint file in the `A1` directory redefines `START_NAMESPACE`.

- The `#undef` hint in the `A2` directory removed the hints for `OBRACE` and `CBRACE` in the `Debug` directory hint file.

## See also

[File Types Created for Visual Studio C++ projects](file-types-created-for-visual-cpp-projects.md)<br>
[#define Directive (C/C++)](../../preprocessor/hash-define-directive-c-cpp.md)<br>
[#undef Directive (C/C++)](../../preprocessor/hash-undef-directive-c-cpp.md)<br>
[SAL Annotations](../../c-runtime-library/sal-annotations.md)<br>
