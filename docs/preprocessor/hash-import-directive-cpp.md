---
title: "#import Directive (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "#import"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - ".tlh files"
  - "#import directive"
  - "import directive (#import)"
  - "tlh files"
  - "tlbid switch"
  - "preprocessor, directives"
  - "COM, type library header file"
ms.assetid: 787d1112-e543-40d7-ab15-a63d43f4030a
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# #import Directive (C++)
**C++ Specific**  
  
 Used to incorporate information from a type library. The content of the type library is converted into C++ classes, mostly describing the COM interfaces.  
  
## Syntax  
  
```  
#import "filename" [attributes]  
#import <filename> [attributes]  
```  
  
#### Parameters  
 *filename*  
 Specifies the type library to import. `filename` can be one of the following:  
  
-   The name of a file that contains a type library, such as an .olb, .tlb, or .dll file. The keyword, **file:**, can precede each filename.  
  
-   The progid of a control in the type library. The keyword, **progid:**, can precede each progid. For example:  
  
    ```  
    #import "progid:my.prog.id.1.5"  
    ```  
  
     For more on progids, see [Specifying the Localization ID and Version Number](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber).  
  
     Note that when compiling with a cross compiler on a 64-bit operating system, the compiler will be able to read only the 32-bit registry hive. You might want to use the native 64-bit compiler to build and register a 64-bit type library.  
  
-   The library ID of the type library. The keyword, **libid:**, can precede each library ID. For example:  
  
    ```  
    #import "libid:12341234-1234-1234-1234-123412341234" version("4.0") lcid("9")  
    ```  
  
     If you do not specify version or lcid, the [rules](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber) that are applied to **progid:** are also applied to **libid:**.  
  
-   An executable (.exe) file.  
  
-   A library (.dll) file containing a type library resource (such as .ocx).  
  
-   A compound document holding a type library.  
  
-   Any other file format that can be understood by the **LoadTypeLib** API.  
  
 `attributes`  
 One or more [#import attributes](#_predir_the_23import_directive_import_attributes). Separate attributes with either a space or comma. For example:  
  
```  
#import "..\drawctl\drawctl.tlb" no_namespace, raw_interfaces_only  
```  
  
 -or-  
  
```  
#import "..\drawctl\drawctl.tlb" no_namespace raw_interfaces_only  
```  
  
## Remarks  
  
##  <a name="_predir_the_23import_directive_searchorderforfilename"></a> Search Order for filename  
 *filename* is optionally preceded by a directory specification. The file name must name an existing file. The difference between the two syntax forms is the order in which the preprocessor searches for the type library files when the path is incompletely specified.  
  
|Syntax form|Action|  
|-----------------|------------|  
|Quoted form|Instructs the preprocessor to look for type library files first in the directory of the file that contains the `#import` statement, and then in the directories of whatever files that include (`#include`) that file. The preprocessor then searches along the paths shown below.|  
|Angle-bracket form|Instructs the preprocessor to search for type library files along the following paths:<br /><br /> 1.  The **PATH** environment variable path list<br />2.  The **LIB** environment variable path list<br />3.  The path specified by the /I (additional include directories) compiler option, except it the compiler is searching for a type library that was referenced from another type library with the [no_registry](../preprocessor/no-registry.md) attribute.|  
  
##  <a name="_predir_the_23import_directive_specifyingthelocalizationidandversionnumber"></a> Specifying the Localization ID and Version Number  
 When you specify a progid, you can also specify the localization ID and version number of the progid. For example:  
  
```  
#import "progid:my.prog.id" lcid("0") version("4.0)  
```  
  
 If you do not specify a localization ID, a progid is chosen according to the following rules:  
  
-   If there is only one localization ID, that one is used.  
  
-   If there is more than one localization ID, the first one with version number 0, 9, or 409 is used.  
  
-   If there is more than one localization ID and none of them are 0, 9, or 409, the last one is used.  
  
-   If you do not specify a version number, the most recent version is used.  
  
##  <a name="_predir_the_23import_directive_header_files_created_by_import"></a> Header Files Created by Import  
 `#import` creates two header files that reconstruct the type library contents in C++ source code. The primary header file is similar to that produced by the Microsoft Interface Definition Language (MIDL) compiler, but with additional compiler-generated code and data. The [primary header file](#_predir_the_primary_type_library_header_file) has the same base name as the type library, plus a .TLH extension. The secondary header file has the same base name as the type library, with a .TLI extension. It contains the implementations for compiler-generated member functions, and is included (`#include`) in the primary header file.  
  
 If importing a dispinterface property that uses byref parameters, #import will not generate __declspec([property](../cpp/property-cpp.md)) statement for the function.  
  
 Both header files are placed in the output directory specified by the /Fo (name object file) option. They are then read and compiled by the compiler as if the primary header file was named by a `#include` directive.  
  
 The following compiler optimizations come with the `#import` directive:  
  
-   The header file, when created, is given the same timestamp as the type library.  
  
-   When `#import` is processed, the compiler first checks if the header exists and is up to date. If yes, then it does not need to be re-created.  
  
 The `#import` directive also participates in minimal rebuild and can be placed in a precompiled header file. See [Creating Precompiled Header Files](../build/reference/creating-precompiled-header-files.md) for more information.  
  
###  <a name="_predir_the_primary_type_library_header_file"></a> Primary Type Library Header File  
 The primary type library header file consists of seven sections:  
  
-   Heading boilerplate: Consists of comments, `#include` statement for COMDEF.H (which defines some standard macros used in the header), and other miscellaneous setup information.  
  
-   Forward references and typedefs: Consists of structure declarations such as `struct IMyInterface` and typedefs.  
  
-   Smart pointer declarations: The template class `_com_ptr_t` is a smart-pointer implementation that encapsulates interface pointers and eliminates the need to call `AddRef`, **Release**, `QueryInterface` functions. In addition, it hides the `CoCreateInstance` call in creating a new COM object. This section uses macro statement **_COM_SMARTPTR_TYPEDEF** to establish typedefs of COM interfaces to be template specializations of the [_com_ptr_t](../cpp/com-ptr-t-class.md) template class. For example, for interface **IMyInterface**, the .TLH file will contain:  
  
    ```  
    _COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));  
    ```  
  
     which the compiler will expand to:  
  
    ```  
    typedef _com_ptr_t<_com_IIID<IMyInterface, __uuidof(IMyInterface)> > IMyInterfacePtr;  
    ```  
  
     Type `IMyInterfacePtr` can then be used in place of the raw interface pointer `IMyInterface*`. Consequently, there is no need to call the various **IUnknown** member functions  
  
-   Typeinfo declarations: Primarily consists of class definitions and other items exposing the individual typeinfo items returned by **ITypeLib:GetTypeInfo**. In this section, each typeinfo from the type library is reflected in the header in a form dependent on the `TYPEKIND` information.  
  
-   Optional old-style GUID definition: Contains initializations of the named GUID constants. These are names of the form **CLSID_CoClass** and **IID_Interface**, similar to those generated by the MIDL compiler.  
  
-   `#include` statement for the secondary type library header.  
  
-   Footer boilerplate: Currently includes `#pragma pack(pop)`.  
  
 All sections, except the heading boilerplate and footer boilerplate section, are enclosed in a namespace with its name specified by the **library** statement in the original IDL file. You can use the names from the type library header either by an explicit qualification with the namespace name or by including the following statement:  
  
```  
using namespace MyLib;  
```  
  
 immediately after the `#import` statement in the source code.  
  
 The namespace can be suppressed by using the [no_namespace](#_predir_no_namespace) attribute of the `#import` directive. However, suppressing the namespace may lead to name collisions. The namespace can also be renamed by the [rename_namespace](#_predir_rename_namespace) attribute.  
  
 The compiler provides the full path to any type library dependency required by the type library it is currently processing. The path is written, in the form of comments, into the type library header (.TLH) that the compiler generates for each processed type library.  
  
 If a type library includes references to types defined in other type libraries, then the .TLH file will include comments of the following sort:  
  
```  
//  
// Cross-referenced type libraries:  
//  
//  #import "c:\path\typelib0.tlb"  
//  
```  
  
 The actual filename in the `#import` comment is the full path of the cross-referenced type library, as stored in the registry. If you encounter errors that are due to missing type definitions, check the comments at the head of the .TLH to see which dependent type libraries may need to be imported first. Likely errors are syntax errors (for example, C2143, C2146, C2321), C2501 (missing decl-specifiers), or C2433 ('inline' not permitted on data declaration) while compiling the .TLI file.  
  
 You must determine which of the dependency comments are not otherwise provided for by system headers and then provide an `#import` directive at some point before the `#import` directive of the dependent type library to resolve the errors.  
  
 For more information, see the Knowledge Base article "#import Wrapper Methods May Cause Access Violation" (Q242527) or "Compiler Errors When You Use #import with XML" (Q269194). You can find Knowledge Base articles on the MSDN Library media or at [http://support.microsoft.com/support/](http://support.microsoft.com/support/).  
  
##  <a name="_predir_the_23import_directive_import_attributes"></a> #import Attributes  
 `#import` can optionally include one or more attributes. These attributes tell the compiler to modify the contents of the type-library headers. A backslash (**\\**) symbol can be used to include additional lines in a single `#import` statement. For example:  
  
```  
#import "test.lib" no_namespace \  
   rename("OldName", "NewName")  
```  
  
 For more information, see [#import Attributes](../preprocessor/hash-import-attributes-cpp.md).  
  
 **END C++ Specific**  
  
## See Also  
 [Preprocessor Directives](../preprocessor/preprocessor-directives.md)   
 [Compiler COM Support](../cpp/compiler-com-support.md)