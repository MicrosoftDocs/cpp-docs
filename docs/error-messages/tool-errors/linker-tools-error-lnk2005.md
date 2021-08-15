---
description: "Learn more about: Linker Tools Error LNK2005"
title: "Linker Tools Error LNK2005"
ms.date: "11/04/2016"
f1_keywords: ["LNK2005"]
helpviewer_keywords: ["LNK2005"]
ms.assetid: d9587adc-68be-425c-8a30-15dbc86717a4
---
# Linker Tools Error LNK2005

> *symbol* already defined in object

The symbol *symbol* was defined more than once.

This error is followed by fatal error [LNK1169](../../error-messages/tool-errors/linker-tools-error-lnk1169.md).

### Possible causes and solutions

Generally, this error means you have broken the *one definition rule*, which allows only one definition for any used template, function, type, or object in a given object file, and only one definition across the entire executable for externally visible objects or functions.

Here are some common causes for this error.

- This error can occur when a header file defines a variable. For example, if you include this header file in more than one source file in your project, an error results:

    ```h
    // LNK2005_global.h
    int global_int;  // LNK2005
    ```

   Possible solutions include:

  - Declare the variable **`extern`** in the header file: `extern int global_int;`, then define it and optionally initialize it in one and only one source file: `int global_int = 17;`. This variable is now a global that you can use in any source file by declaring it **`extern`**, for example, by including the header file. We recommend this solution for variables that must be global, but good software engineering practice minimizes global variables.

  - Declare the variable [static](../../cpp/storage-classes-cpp.md#static): `static int static_int = 17;`. This restricts the scope of the definition to the current object file, and allows multiple object files to have their own copy of the variable. We don't recommend you define static variables in header files because of the potential for confusion with global variables. Prefer to move static variable definitions into the source files that use them.

  - Declare the variable [selectany](../../cpp/selectany.md): `__declspec(selectany) int global_int = 17;`. This tells the linker to pick one definition for use by all external references and to discard the rest. This solution is sometimes useful when combining import libraries. Otherwise, we do not recommend it as a way to avoid linker errors.

- This error can occur when a header file defines a function that isn't **`inline`**. If you include this header file in more than one source file, you get multiple definitions of the function in the executable.

    ```h
    // LNK2005_func.h
    int sample_function(int k) { return 42 * (k % 167); }  // LNK2005
    ```

   Possible solutions include:

  - Add the **`inline`** keyword to the function:

    ```h
    // LNK2005_func_inline.h
    inline int sample_function(int k) { return 42 * (k % 167); }
    ```

  - Remove the function body from the header file and leave only the declaration, then implement the function in one and only one source file:

    ```h
    // LNK2005_func_decl.h
    int sample_function(int);
    ```

    ```cpp
    // LNK2005_func_impl.cpp
    int sample_function(int k) { return 42 * (k % 167); }
    ```

- This error can also occur if you define member functions outside the class declaration in a header file:

    ```h
    // LNK2005_member_outside.h
    class Sample {
    public:
        int sample_function(int);
    };
    int Sample::sample_function(int k) { return 42 * (k % 167); }  // LNK2005
    ```

   To fix this issue, move the member function definitions inside the class. Member functions defined inside a class declaration are implicitly inlined.

    ```h
    // LNK2005_member_inline.h
    class Sample {
    public:
        int sample_function(int k) { return 42 * (k % 167); }
    };
    ```

- This error can occur if you link more than one version of the standard library or CRT. For example, if you attempt to link both the retail and debug CRT libraries, or both the static and dynamic versions of a library, or two different versions of a standard library to your executable, this error may be reported many times. To fix this issue, remove all but one copy of each library from the link command. We do not recommend you mix retail and debug libraries, or different versions of a library, in the same executable.

   To tell the linker to use libraries other than the defaults, on the command line, specify the libraries to use, and use the [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) option to disable the default libraries. In the IDE, add references to your project to specify the libraries to use, and then open the **Property Pages** dialog for your project, and in the **Linker**, **Input** property page, set either **Ignore All Default Libraries**, or **Ignore Specific Default Libraries** properties to disable the default libraries.

- This error can occur if you mix use of static and dynamic libraries when you use the [/clr](../../build/reference/clr-common-language-runtime-compilation.md) option. For example, this error can occur if you build a DLL for use in your executable that links in the static CRT. To fix this issue, use only static libraries or only dynamic libraries for the entire executable and for any libraries you build to use in the executable.

- This error can occur if the symbol is a packaged function (created by compiling with [/Gy](../../build/reference/gy-enable-function-level-linking.md)) and it was included in more than one file, but was changed between compilations. To fix this issue, recompile all files that include the packaged function.

- This error can occur if the symbol is defined differently in two member objects in different libraries, and both member objects are used. One way to fix this issue when the libraries are statically linked is to use the member object from only one library, and include that library first on the linker command line. To use both symbols, you must create a way to distinguish them. For example, if you can build the libraries from source, you can wrap each library in a unique namespace. Alternatively, you can create a new wrapper library that uses unique names to wrap references to one of the original libraries, link the new library to the original library, then link the executable to your new library instead of the original library.

- This error can occur if an `extern const` variable is defined twice, and has a different value in each definition. To fix this issue, define the constant only once, or use namespaces or **`enum class`** definitions to distinguish the constants.

- This error can occur if you use uuid.lib in combination with other .lib files that define GUIDs (for example, oledb.lib and adsiid.lib). For example:

    ```Output
    oledb.lib(oledb_i.obj) : error LNK2005: _IID_ITransactionObject
    already defined in uuid.lib(go7.obj)
    ```

   To fix this issue, add [/FORCE:MULTIPLE](../../build/reference/force-force-file-output.md) to the linker command line options, and make sure that uuid.lib is the first library referenced.
