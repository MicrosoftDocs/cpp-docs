---
description: "Learn more about: #import directive (C++)"
title: "#import directive (C++)"
ms.date: "08/29/2019"
f1_keywords: ["#import"]
helpviewer_keywords: [".tlh files", "#import directive", "import directive (#import)", "tlh files", "tlbid switch", "preprocessor, directives", "COM, type library header file"]
ms.assetid: 787d1112-e543-40d7-ab15-a63d43f4030a
---
# #import directive (C++)

**C++ Specific**

Used to incorporate information from a type library. The content of the type library is converted into C++ classes, mostly describing the COM interfaces.

## Syntax

> **#import** "*filename*" \[*attributes*]\
> **#import** \<*filename*> \[*attributes*]

### Parameters

*filename*\
Specifies the type library to import. The *filename* can be one of the following kinds:

- The name of a file that contains a type library, such as an .olb, .tlb, or .dll file. The keyword, `file:`, can precede each filename.

- The progid of a control in the type library. The keyword, `progid:`, can precede each progid. For example:

    ```cpp
    #import "progid:my.prog.id.1.5"
    ```

   For more on progids, see [Specifying the Localization ID and Version Number](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber).

   When you use a 32-bit cross compiler on a 64-bit operating system, the compiler can only read the 32-bit registry hive. You might want to use the native 64-bit compiler to build and register a 64-bit type library.

- The library ID of the type library. The keyword, `libid:`, can precede each library ID. For example:

    ```cpp
    #import "libid:12341234-1234-1234-1234-123412341234" version("4.0") lcid("9")
    ```

   If you don't specify `version` or `lcid`, the [rules](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber) applied to `progid:` are also applied to `libid:`.

- An executable (.exe) file.

- A library (.dll) file containing a type library resource (such as an .ocx).

- A compound document holding a type library.

- Any other file format that can be understood by the **LoadTypeLib** API.

*attributes*\
One or more [#import attributes](#_predir_the_23import_directive_import_attributes). Separate attributes with either a space or comma. For example:

```cpp
#import "..\drawctl\drawctl.tlb" no_namespace, raw_interfaces_only
```

\-or-

```cpp
#import "..\drawctl\drawctl.tlb" no_namespace raw_interfaces_only
```

## Remarks

### <a name="_predir_the_23import_directive_searchorderforfilename"></a> Search order for filename

*filename* is optionally preceded by a directory specification. The file name must name an existing file. The difference between the two syntax forms is the order in which the preprocessor searches for the type library files when the path is incompletely specified.

|Syntax form|Action|
|-----------------|------------|
|Quoted form|Instructs the preprocessor to look for type library files first in the directory of the file that contains the **#import** statement, and then in the directories of whatever files include (`#include`) that file. The preprocessor then searches along the paths shown below.|
|Angle-bracket form|Instructs the preprocessor to search for type library files along the following paths:<br /><br /> 1.  The `PATH` environment variable path list<br />2.  The `LIB` environment variable path list<br />3.  The path specified by the [/I](../build/reference/i-additional-include-directories.md) compiler option, except it the compiler is searching for a type library that was referenced from another type library with the [no_registry](../preprocessor/no-registry.md) attribute.|

### <a name="_predir_the_23import_directive_specifyingthelocalizationidandversionnumber"></a> Specify the localization ID and version number

When you specify a progid, you can also specify the localization ID and version number of the progid. For example:

```cpp
#import "progid:my.prog.id" lcid("0") version("4.0)
```

If you don't specify a localization ID, a progid is chosen according to the following rules:

- If there's only one localization ID, that one is used.

- If there's more than one localization ID, the first one with version number 0, 9, or 409 is used.

- If there's more than one localization ID and none of them are 0, 9, or 409, the last one is used.

- If you don't specify a version number, the most recent version is used.

### <a name="_predir_the_23import_directive_header_files_created_by_import"></a> Header files created by import

**#import** creates two header files that reconstruct the type library contents in C++ source code. The primary header file is similar to the one produced by the Microsoft Interface Definition Language (MIDL) compiler, but with additional compiler-generated code and data. The [primary header file](#_predir_the_primary_type_library_header_file) has the same base name as the type library, plus a .TLH extension. The secondary header file has the same base name as the type library, with a .TLI extension. It contains the implementations for compiler-generated member functions, and is included (`#include`) in the primary header file.

If importing a dispinterface property that uses `byref` parameters, **#import** doesn't generate a [__declspec(property)](../cpp/property-cpp.md) statement for the function.

Both header files are placed in the output directory specified by the [/Fo (name object file)](../build/reference/fo-object-file-name.md) option. They're then read and compiled by the compiler as if the primary header file was named by a `#include` directive.

The following compiler optimizations come with the **#import** directive:

- The header file, when created, is given the same timestamp as the type library.

- When **#import** is processed, the compiler first checks if the header exists and is up-to-date. If yes, then it doesn't need to be re-created.

The **#import** directive also participates in minimal rebuild and can be placed in a precompiled header file.  For more information, see [Creating precompiled header files](../build/creating-precompiled-header-files.md).

### <a name="_predir_the_primary_type_library_header_file"></a> Primary type library header file

The primary type library header file consists of seven sections:

- Heading boilerplate: Consists of comments, `#include` statement for COMDEF.H (which defines some standard macros used in the header), and other miscellaneous setup information.

- Forward references and typedefs: Consists of structure declarations such as `struct IMyInterface` and typedefs.

- Smart pointer declarations: The template class `_com_ptr_t` is a smart pointer. It encapsulates interface pointers, and eliminates the need to call `AddRef`, `Release`, and `QueryInterface` functions. It also hides the `CoCreateInstance` call when creating a new COM object. This section uses the macro statement `_COM_SMARTPTR_TYPEDEF` to establish typedefs of COM interfaces as template specializations of the [_com_ptr_t](../cpp/com-ptr-t-class.md) template class. For example, for interface `IMyInterface`, the .TLH file will contain:

    ```TLH
    _COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));
    ```

   which the compiler will expand to:

    ```cpp
    typedef _com_ptr_t<_com_IIID<IMyInterface, __uuidof(IMyInterface)> > IMyInterfacePtr;
    ```

   Type `IMyInterfacePtr` can then be used in place of the raw interface pointer `IMyInterface*`. Consequently, there's no need to call the various `IUnknown` member functions

- Typeinfo declarations: Primarily consists of class definitions and other items exposing the individual typeinfo items returned by `ITypeLib:GetTypeInfo`. In this section, each typeinfo from the type library is reflected in the header in a form dependent on the `TYPEKIND` information.

- Optional old-style GUID definition: Contains initializations of the named GUID constants. These names have the form `CLSID_CoClass` and `IID_Interface`, similar to the ones generated by the MIDL compiler.

- `#include` statement for the secondary type library header.

- Footer boilerplate: Currently includes `#pragma pack(pop)`.

All sections, except the heading boilerplate and footer boilerplate section, are enclosed in a namespace with its name specified by the `library` statement in the original IDL file. You can use the names from the type library header by an explicit qualification using the namespace name. Or, you can include the following statement:

```cpp
using namespace MyLib;
```

immediately after the **#import** statement in the source code.

The namespace can be suppressed by using the [no_namespace](no-namespace.md)) attribute of the **#import** directive. However, suppressing the namespace may lead to name collisions. The namespace can also be renamed by the [rename_namespace](rename-namespace.md) attribute.

The compiler provides the full path to any type library dependency required by the type library it's currently processing. The path is written, in the form of comments, into the type library header (.TLH) that the compiler generates for each processed type library.

If a type library includes references to types defined in other type libraries, then the .TLH file will include comments of the following sort:

```TLH
//
// Cross-referenced type libraries:
//
//  #import "c:\path\typelib0.tlb"
//
```

The actual filename in the **#import** comment is the full path of the cross-referenced type library, as stored in the registry. If you encounter errors that are caused by missing type definitions, check the comments at the head of the .TLH to see which dependent type libraries may need to be imported first. Likely errors are syntax errors (for example, C2143, C2146, C2321), C2501 (missing decl-specifiers), or C2433 ('inline' not permitted on data declaration) while compiling the .TLI file.

To resolve dependency errors, determine which of the dependency comments aren't otherwise provided for by system headers, and then provide an **#import** directive at some point before the **#import** directive of the dependent type library.

### <a name="_predir_the_23import_directive_import_attributes"></a> #import attributes

**#import** can optionally include one or more attributes. These attributes tell the compiler to modify the contents of the type-library headers. A backslash (**\\**) symbol can be used to include additional lines in a single **#import** statement. For example:

```cpp
#import "test.lib" no_namespace \
   rename("OldName", "NewName")
```

For more information, see [#import attributes](../preprocessor/hash-import-attributes-cpp.md).

**END C++ Specific**

## See also

[Preprocessor directives](../preprocessor/preprocessor-directives.md)\
[Compiler COM support](../cpp/compiler-com-support.md)
