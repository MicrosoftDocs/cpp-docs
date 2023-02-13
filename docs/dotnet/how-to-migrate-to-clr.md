---
description: "Learn more about: How to: Migrate to /clr"
title: "How to: Migrate to /clr"
ms.custom: "get-started-article"
ms.date: "09/18/2018"
helpviewer_keywords: ["upgrading Visual C++ applications, /clr compiler option", "compiling native code [C++]", "interoperability [C++], /clr compiler option", "interop [C++], /clr compiler option", "migration [C++], /clr compiler option", "/clr compiler option [C++], porting to"]
ms.assetid: c9290b8b-436a-4510-8b56-eae51f4a9afc
---
# How to: Migrate to `/clr`

This article discusses issues that arise when compiling native code with **`/clr`**. (For more information, see [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md).) **`/clr`** allows native C++ code to invoke and be invoked from .NET assemblies in addition to other native C++ code. For more information on the advantages of compiling with **`/clr`**, see [Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md) and [Native and .NET Interoperability](../dotnet/native-and-dotnet-interoperability.md).

## Known issues compiling library projects with `/clr`

Visual Studio contains some known issues when compiling library projects with **`/clr`**:

- Your code may query types at runtime with [`CRuntimeClass::FromName`](../mfc/reference/cruntimeclass-structure.md#fromname). However, if a type is in an MSIL DLL (compiled with **`/clr`**), the call to `FromName` may fail if it occurs before the static constructors run in the managed DLL. (You won't see this problem if the `FromName` call happens after code has executed in the managed DLL.) To work around this problem, you can force the construction of the managed static constructor: define a function in the managed DLL, export it, and invoke it from the native MFC application. For example:

    ```cpp
    // MFC extension DLL Header file:
    __declspec( dllexport ) void EnsureManagedInitialization () {
       // managed code that won't be optimized away
       System::GC::KeepAlive(System::Int32::MaxValue);
    }
    ```

## Compile with Visual C++

Before you use **`/clr`** on any module in your project, first compile and link your native project with Visual Studio.

The following steps, followed in order, provide the easiest path to a **`/clr`** compilation. It's important to compile and run your project after each of these steps.

### Upgrading from earlier versions of Visual Studio

If you're upgrading Visual Studio from an earlier version, you may see compiler errors related to the enhanced Standard C++ conformance in Visual Studio.

Projects built with earlier versions of Visual Studio should also first be compiled without **`/clr`**. Visual Studio now has increased Standard C++ conformance and some breaking changes. The changes that are likely to require the most attention are [Security Features in the CRT](../c-runtime-library/security-features-in-the-crt.md). Code that uses the CRT is likely to produce deprecation warnings. These warnings can be suppressed, but migrating to the new [Security-enhanced versions of CRT functions](../c-runtime-library/security-enhanced-versions-of-crt-functions.md) is preferred, as they provide better security and may reveal security issues in your code.

### Upgrading from Managed Extensions for C++

In Visual Studio 2005 and later versions, code written with Managed Extensions for C++ won't compile under **`/clr`**.

## Convert C code to C++

Although Visual Studio will compile C files, it's necessary to convert them to C++ for a **`/clr`** compilation. The actual filename doesn't have to be changed; you can use **`/Tp`** (see [`/Tc`, `/Tp`, `/TC`, `/TP` (Specify source file type)](../build/reference/tc-tp-tc-tp-specify-source-file-type.md).) Although C++ source code files are required for **`/clr`**, it isn't necessary to refactor your code to use object-oriented paradigms.

C code is likely to require changes when compiled as a C++ file. The C++ type-safety rules are strict, so type conversions must be made explicit with casts. For example, malloc returns a void pointer, but can be assigned to a pointer to any type in C with a cast:

```cpp
int* a = malloc(sizeof(int));   // C code
int* b = (int*)malloc(sizeof(int));   // C++ equivalent
```

Function pointers are also strictly type-safe in C++, so the following C code requires modification. In C++, it's best to create a **`typedef`** that defines the function pointer type, and then use that type to cast function pointers:

```cpp
NewFunc1 = GetProcAddress( hLib, "Func1" );   // C code
typedef int(*MYPROC)(int);   // C++ equivalent
NewFunc2 = (MYPROC)GetProcAddress( hLib, "Func2" );
```

C++ also requires that functions either be prototyped or fully defined before they can be referenced or invoked.

Identifiers used in C code that happen to be keywords in C++ (such as **`virtual`**, **`new`**, **`delete`**, **`bool`**, **`true`**, **`false`**, etc.) must be renamed. This change can generally be done with simple search-and-replace operations.

```cpp
COMObj1->lpVtbl->Method(COMObj, args);  // C code
COMObj2->Method(args);  // C++ equivalent
```

## Reconfigure project settings

After your project compiles and runs in Visual Studio, you should create new project configurations for **`/clr`** rather than modifying the default configurations. **`/clr`** is incompatible with some compiler options. Creating separate configurations lets you build your project as native or managed. When **`/clr`** is selected in the property pages dialog box, project settings not compatible with **`/clr`** are disabled. (Disabled options aren't automatically restored if **`/clr`** is later unselected.)

### Create new project configurations

You can use **Copy Settings From** option in the **New Project Configuration Dialog Box** (**Build** > **Configuration Manager** > **Active Solution Configuration** > **New**) to create a project configuration based on your existing project settings. Create a copy of your configuration once for the Debug configuration, and once for Release configuration. Subsequent changes can then be applied to the **`/clr`**-specific configurations only, leaving the original project configurations intact.

Projects that use custom build rules may require extra attention.

This step has different implications for projects that use makefiles. In this case, a separate build-target can be configured, or a version specific to **`/clr`** compilation can be created from a copy of the original.

### Change project settings

**`/clr`** can be selected in the development environment by following the instructions in [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md). As mentioned previously, this step will automatically disable conflicting project settings.

> [!NOTE]
> When upgrading a managed library or web service project from Visual Studio 2003, the **`/Zl`** compiler option is added to the **Command Line** property page. This causes LNK2001 errors. Remove **`/Zl`** from the **Command Line** property page to resolve the errors. For more information, see [`/Zl` (Omit default library name)](../build/reference/zl-omit-default-library-name.md) and [Set compiler and build properties](../build/working-with-project-properties.md).

For projects built with makefiles, incompatible compiler options must be disabled manually once **`/clr`** is added. For information on compiler options that aren't compatible with **`/clr`**, see [`/clr` restrictions](../build/reference/clr-restrictions.md).

### Precompiled headers

Precompiled headers are supported under **`/clr`**. However, if you only compile some of your CPP files with **`/clr`** (compiling the rest as native), some changes are required. Precompiled headers generated with **`/clr`** aren't compatible with precompiled headers generated without **`/clr`**, because **`/clr`** generates and requires metadata. Modules compiled with **`/clr`** can't use precompiled headers that don't include metadata, and non-**`/clr`** modules can't use precompiled header files that do contain metadata.

The easiest way to compile a project where some modules are compiled with **`/clr`** is to disable precompiled headers entirely. (In the project Property Pages dialog, open the **C/C++** node, and select **Precompiled Headers**. Then change the **Create/Use Precompiled Headers** property to "Not Using Precompiled Headers".)

However, particularly for large projects, precompiled headers provide much better compilation speed, so disabling this feature isn't desirable. In this case, it's best to configure the **`/clr`** and non-**`/clr`** files to use separate precompiled headers. You can configure them in one step: Multi-select the modules to compile with **`/clr`** by using **Solution Explorer**. Right-click on the group, and select **Properties**. Then, change both the **Create/Use PCH Through File** and **Precompiled Header File** properties to use a different header file name and PCH file, respectively.

## Fix errors

Compiling your code with **`/clr`** may result in compiler, linker or runtime errors. This section discusses the most common problems.

### Metadata merge

Differing versions of data types can cause the linker to fail because the metadata generated for the two types doesn't match. (Errors occur when you conditionally define members of a type, but the conditions aren't the same for all CPP files that use the type.) In this case, the linker fails, reporting only the symbol name and the name of the second OBJ file where the type was defined. You may find it's useful to rotate the order that OBJ files are sent to the linker, to discover the location of the other version of the data type.

### Loader lock deadlock

The "loader lock deadlock" can occur, but is deterministic and is detected and reported at runtime. See [Initialization of Mixed Assemblies](../dotnet/initialization-of-mixed-assemblies.md) for detailed background, guidance, and solutions.

### Data exports

Exporting DLL data is error-prone, and not recommended in **`/clr`** code. It's because initialization of the data section of a DLL isn't guaranteed until some managed portion of the DLL is executed. Reference metadata with [`#using` directives](../preprocessor/hash-using-directive-cpp.md).

### Type visibility

Native types are **`private`** by default. A **`private`** native type isn't visible outside the DLL. Resolve this error by adding **`public`** to these types.

### Floating point and alignment issues

`__controlfp` isn't supported in the common language runtime. (For more information, see [`_control87`, `_controlfp`, `__control87_2`](../c-runtime-library/reference/control87-controlfp-control87-2.md).) The CLR also doesn't respect [`align`](../cpp/align-cpp.md).

### COM initialization

The Common Language Runtime initializes COM automatically when a module is initialized (when COM is initialized automatically it's done so as MTA). As a result, explicitly initializing COM yields return codes indicating that COM is already initialized. Attempting to explicitly initialize COM with one threading model when the CLR has already initialized COM to another threading model can cause your application to fail.

The common language runtime starts COM as MTA by default; use [`/CLRTHREADATTRIBUTE` (Set CLR thread attribute)](../build/reference/clrthreadattribute-set-clr-thread-attribute.md) to modify the COM model.

### Performance issues

You may see decreased performance when native C++ methods generated to MSIL are called indirectly (through virtual function calls or by using function pointers). To learn more, see [Double Thunking](../dotnet/double-thunking-cpp.md).

When you move from native to MSIL, you'll notice an increase in the size of your working set. This increase happens because the common language runtime provides many features to ensure that programs run correctly. If your **`/clr`** application isn't running correctly, you may want to enable off-by-default [Compiler Warning (level 1 and 3) C4793](../error-messages/compiler-warnings/compiler-warning-level-1-and-3-c4793.md).

### Program crashes on shutdown

In some cases, the CLR can shut down before your managed code is finished running. Use of `std::set_terminate` and `SIGTERM` can cause the shutdown. For more information, see [`signal` constants](../c-runtime-library/signal-constants.md) and [`set_terminate`](../c-runtime-library/abnormal-termination.md).

## Using new Visual C++ features

After your application compiles, links, and runs, you can begin using .NET features in any module compiled with **`/clr`**. For more information, see [Component Extensions for Runtime Platforms](../extensions/component-extensions-for-runtime-platforms.md).

For more information on .NET programming in Visual C++, see:

- [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

- [Native and .NET Interoperability](../dotnet/native-and-dotnet-interoperability.md)

- [Component Extensions for Runtime Platforms](../extensions/component-extensions-for-runtime-platforms.md)

## See also

[Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md)
