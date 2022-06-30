---
title: "/external (External headers diagnostics)"
description: "The Microsoft C++ compiler /external headers diagnostic options syntax and usage."
ms.date: 06/29/2022
f1_keywords: ["/external", "/external:anglebrackets", "/external:env:", "/external:I", "/external:W0", "/external:W1", "/external:W2", "/external:W3", "/external:W4", "/external:templates-", "/experimental:external", "VC.Project.VCCLCompilerTool.ExternalDirectoriesEnv", "VC.Project.VCCLCompilerTool.ExternalIncludeDirectories", "VC.Project.VCCLCompilerTool.ExternalWarningLevel", "VC.Project.VCCLCompilerTool.TreatExternalTemplatesAsInternal"]
helpviewer_keywords: ["/external compiler option [C++]", "-external compiler option [C++]", "external compiler option [C++]"]
---
# `/external` (External headers diagnostics)

The **`/external`** compiler options let you specify compiler diagnostic behavior for certain header files. "External" headers are the natural complement of "Just my code": Header files such as system files or third-party library files that you can't or don't intend to change. Since you aren't going to change these files, you may decide it isn't useful to see diagnostic messages from the compiler about them. The **`/external`** compiler options give you control over these warnings.

The **`/external`** compiler options are available starting in Visual Studio 2017 version 15.6. In versions of Visual Studio before Visual Studio 2019 version 16.10, the **`/external`** options require you also set the **`/experimental:external`** compiler option.

## Syntax

Use external header options (Not required in 16.10 and later):
> **`/experimental:external`**

Specify external headers:
> **`/external:anglebrackets`**\
> **`/external:env:`***`var`*\
> **`/external:I`** *`path`*

Specify diagnostics behavior:
> **`/external:W0`**\
> **`/external:W1`**\
> **`/external:W2`**\
> **`/external:W3`**\
> **`/external:W4`**\
> **`/external:templates-`**

### Arguments

**`/experimental:external`**\
Enables the external headers options. This option isn't required in Visual Studio 2019 version 16.10 and later.

**`/external:anglebrackets`**\
Treats all headers included by `#include <header>`, where the *`header`* file is enclosed in angle brackets (**`< >`**), as external headers.

**`/external:I`** *`path`*\
Defines a root directory that contains external headers. All recursive subdirectories of *`path`* are considered external, but only the *`path`* value is added to the list of directories the compiler searches for include files. The space between **`/external:I`** and *`path`* is optional. Directories that include spaces must be enclosed in double quotes. A directory may be an absolute path or a relative path.

**`/external:env:`***`var`*\
Specifies the name of an environment variable *`var`* that holds a semicolon-separated list of external header directories. It's useful for build systems that rely on environment variables such as `INCLUDE`, which you use to specify the list of external include files. Or, `CAExcludePath`, for files that shouldn't be analyzed by `/analyze`. For example, you can specify `/external:env:INCLUDE` to make every directory in `INCLUDE` an external header directory at once. It's the same as using **`/external:I`** to specify the individual directories, but much less verbose. There should be no space between *`var`* and **`/external:env:`**.

**`/external:Wn`**\
This option sets the default warning level to *`n`* (a value from 0 to 4) for external headers. For example, **`/external:W0`** effectively turns off warnings for external headers. If this option isn't specified, the compiler issues command line warning D9007 for other **`/external`** options. Those options are ignored, because they would have no effect.

The **`/external:Wn`** option has an effect similar to wrapping an included header in a `#pragma warning` directive:

```cpp
#pragma warning (push, 0)
// the global warning level is now 0 here
#include <external_header>
#pragma warning (pop)
```

**`/external:templates-`**\
Allows warnings from external headers when they occur in a template that's instantiated in your code.

## Remarks

By default, the **`/Wn`** warning level you specify for your build applies to all files. The options to specify external headers only define a set of files to which you can apply a different default warning level. So, if you specify external headers, also use **`/external:Wn`** to specify an external warning level to change compiler behavior.

All the existing mechanisms to enable, disable, and suppress warnings still work in both external and non-external files. For example, a [`warning` pragma](../../preprocessor/warning.md) can still override the default warning level you set for external headers.

### Example: Set external warning level

This sample program has two source files, *`program.cpp`* and *`header_file.h`*. The *`header_file.h`* file is in an *`include_dir`* subdirectory of the directory containing the *`program.cpp`* file:

Source file `include_dir/header_file.h`:

```cpp
// External header: include_dir/header_file.h

template <typename T>
struct sample_struct
{
    static const T value = -7; // W4: warning C4245: 'initializing':
    // conversion from 'int' to 'unsigned int', signed/unsigned mismatch
};
```

Source file `program.cpp`:

```cpp
// User code: program.cpp
#include <header_file.h>

int main()
{
    return sample_struct<unsigned int>().value;
}
```

You can build the sample by using this command line:

```cmd
cl /EHsc /I include_dir /W4 program.cpp
```

As expected, this sample generates a warning:

```Output
program.cpp
include_dir\header_file.h(6): warning C4245: 'initializing': conversion from 'int' to 'const T', signed/unsigned mismatch
        with
        [
            T=unsigned int
        ]
program.cpp(6): note: see reference to class template instantiation 'sample_struct<unsigned int>' being compiled
```

To treat the header file as an external file and suppress the warning, you can use this command line instead[\*](#note_experimental):

```cmd
cl /EHsc /I include_dir /external:anglebrackets /external:W0 /W4 program.cpp
```

This command line suppresses the warning inside *`header_file.h`* while preserving warnings inside *`program.cpp`*.

### Warnings across the internal and external boundary

Setting a low warning level for external headers can hide some actionable warnings. In particular, it can turn off warnings emitted on template instantiations in user code. These warnings might indicate a problem in your code that only happens in instantiations for particular types. (For example, if you forgot to apply a type trait removing `const` or `&`.) To avoid silencing warnings inside templates defined in external headers, you can use the **`/external:templates-`** option. The compiler considers both the effective warning level in the file that defines the template, and the warning level where template instantiation occurs. Warnings emitted inside an external template appear if the template is instantiated within non-external code. For example, this command line re-enables warnings from template sources in the sample code[\*](#note_experimental):

```cmd
cl /EHsc /I include_dir /external:anglebrackets /external:W0 /external:templates- /W4 program.cpp
```

The C4245 warning appears again in the output, even though the template code is inside an external header.

### Enable, disable, or suppress warnings

All the existing mechanisms to enable, disable, and suppress warnings still work in external headers. When a warning appears because you use the **`/external:templates-`** option, you can still suppress the warning at the point of instantiation. For example, to explicitly suppress the warning in the sample that reappears because of **`/external:templates-`**, use a `warning` pragma directive:

```cpp
int main()
{
    #pragma warning( suppress : 4245)
    return sample_struct<unsigned int>().value;
}
```

Library writers can use the same mechanisms to enforce certain warnings, or all the warnings at certain level, if they feel those warnings should never be silenced by **`/external:Wn`**. For example, this version of the header file forces warning C4245 to report an error:

```cpp
// External header: include_dir/header_file.h

#pragma warning( push, 4 )
#pragma warning( error : 4245 )

template <typename T>
struct sample_struct
{
    static const T value = -7; // W4: warning C4245: 'initializing': conversion from 'int'
                               // to 'unsigned int', signed/unsigned mismatch
};

#pragma warning( pop )
```

With this change to the library header, the author of the library ensures that the global warning level in this header is 4, no matter what gets specified in **`/external:Wn`**. Now all level 4 and above warnings are reported. The library author can also force certain warnings to be errors, disabled, suppressed, or emitted only once in the header. The **`/external`** options don't override that deliberate choice.

### `system_header` pragma

`#pragma system_header` is an intrusive marker that allows library writers to mark certain headers as external. A file containing `#pragma system_header` is considered external from the point of the pragma to the end of the file, as if it were specified as external on the command line. The compiler emits any diagnostics after the pragma at the warning level specified by **`/external:Wn`**. For more information, see [`system_header` pragma](../../preprocessor/system-header-pragma.md).

### Limitations

Some warnings emitted by the compiler's back-end code generation aren't affected by the **`/external`** options. These warnings usually start with C47XX, though not all C47XX warnings are back-end warnings.  You can still disable these warnings individually by using `/wd47XX`. Code analysis warnings are also unaffected, since they don't have warning levels.

### To set this compiler option in the Visual Studio development environment

In Visual Studio 2019 version 16.10 and later:

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **VC++ Directories** property page.

1. Set the **External Include Directories** property to specify the IDE equivalent of the **`/external:I path`** option for each semicolon-delimited path.

1. Select the **Configuration Properties** > **C/C++** > **External Includes** property page.

1. Set properties:

   - Set **Treat Files Included with Angle Brackets as External** to **Yes** to set the **`/external:anglebrackets`** option.

   - **External Header Warning Level** allows you to set the **`/external:Wn`** option. If this value is set to **Inherit Project Warning Level** or the default, other **`/external`** options are ignored.

   - Set **Template Diagnostics in External Headers** to **Yes** to set the **`/external:templates-`** option.

1. Choose **OK** or **Apply** to save your changes.

In versions of Visual Studio before Visual Studio 2019 version 16.10:

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the **`/experimental:external`** option and other **`/external`** compiler options in the **Additional Options** box.

1. Choose **OK** or **Apply** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

<a name="note_experimental"></a>\* Add the **`/experimental:external`** option to enable the external headers options in versions of Visual Studio before Visual Studio 2019 version 16.10.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
