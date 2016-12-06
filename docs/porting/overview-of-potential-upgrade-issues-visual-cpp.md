---
title: "Overview of potential upgrade issues (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 2c99a8cb-098f-4a9d-bf2c-b80fd06ace43
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Overview of potential upgrade issues (Visual C++)
Over the years, the Visual C++ compiler has undergone many changes, along with changes in the C++ language itself, the C++ Standard Library, the C runtime (CRT), and other libraries such as MFC and ATL. As a result, when upgrading an application from an earlier version of Visual C++ you might encounter compiler and linker errors and warnings in code that previously compiled cleanly. The older the original code base, the greater the potential for such errors. This overview summarizes the most common classes of issues you are likely to encounter, and provides links to more detailed information.  
  
 Note: In the past, we have recommended that upgrades that span several versions of Visual Studio should be performed incrementally one version at a time. We no longer recommend this approach. We have found that it is almost always simpler to upgrade to the most current version of Visual Studio no matter how old the code base.  
  
 Questions or comments about the upgrade process can be sent to vcupgrade at microsoft.  
  
## Library and toolset dependencies  
 When upgrading an application to a new version of the Visual C++ compiler, it is strongly advisable and in many cases necessary to also upgrade all libs and DLLs that the application links to. This requires either that you have access to the source code, or that the library vendor can provide new binary files compiled with the same major version of the Visual C++ compiler. If one of these conditions is true, then you can skip this section, which deals with the details of binary compatibility. If neither of these are the case, then you might not be able to use the libraries in your upgraded application. The information in this section will help you understand whether you can proceed with the upgrade.  
  
### Toolset  
 The obj and lib file formats are well-defined and rarely change. Sometimes additions are made to these file formats, but these additions generally do not affect the ability of newer toolsets to consume object files and libraries produced by older toolsets. The one big exception here is if you compile using /GL (Link-Time Code Generation / Whole Program Optimization). If you compile using /GL, the resulting object file can only be linked using the same toolset that was used to produce it. So, if you produce an object file with /GL and using the VC12 compiler, you must link it using the VC12 linker. This is because the internal data structures within the /GL objects are not stable across major versions of the toolset and newer toolsets do not understand the older data formats.  
  
 C++ does not have a stable application binary interface (ABI). Visual C++ maintains a stable ABI for all minor versions of a release. For example, Visual Studio 2015 and all its updates are binary compatible. But the ABI is not necessarily compatible across major versions of Visual C++. That is, we may make breaking changes to C++ type layout, name decoration, exception handling, and other parts of the C++ ABI. Thus, if you have an object file that has external symbols with C++ linkage, that object file may not link correctly with object files produced with a different major version of the Visual C++ toolset. Note that here, “may not work” has many possible outcomes: the link may  fail entirely (e.g. if name decoration changed), the link may succeed and things may not work at runtime (e.g. if type layout changed), or things may happen to work in many cases and nothing will go wrong. Note also that while the C++ ABI is not stable, the C ABI and the subset of the C++ ABI required for COM are stable.  
  
### Libraries  
 If you compile a source file using a particular version of the Visual C++ libraries headers (by #including the headers), the resulting object file must be linked with the same version of the Visual C++ libraries. So, for example, if your source file is compiled with the Visual Studio 2013 \<stdio.h>, you must link with the Visual Studio 2013 CRT library. Similarly, if your source file is compiled with the Visual Studio 2013 \<iostream>, you must link with the Visual Studio 2013 STL library. Mixing-and-matching is not supported.  
  
 For the STL, mixing-and-matching has been explicitly disallowed via use of #pragma detect_mismatch in the STL headers since Visual Studio 2010. If you try to link incompatible object files, or if you try to link with the wrong STL library, the link will fail.  
  
 For the CRT, mixing-and-matching was never supported, but it often just worked, at least until Visual Studio 2015 and the Universal CRT, because the API surface did not change much over time. The Universal CRT broke backwards compatibility so that in the future we can maintain backwards compatibility. In other words, we have no plans to introduce new, versioned Universal CRT binaries in the future. Instead, we will be updating the existing Universal CRT in-place.  
  
 The long-term goal with the libraries stabilization effort (which started with the Universal CRT project) is to make mixing-and-matching possible in some/most cases. To provide partial link compatibility with object files (and libraries) compiled with older versions of the Microsoft C Runtime headers, we provide a library, legacy_stdio_definitions.lib, with Visual Studio 2015. This library provides compatibility symbols for most of the functions and data exports that were removed from the Universal CRT. The set of compatibility symbols provided by legacy_stdio_definitions.lib is sufficient to satisfy most dependencies, including all of the dependencies in libraries included in the Windows SDK. However, there are some symbols that were removed from the Universal CRT for which it is not possible to provide compatibility symbols like this. These symbols include some functions (e.g., __iob_func) and the data exports (e.g., \__imp\_\__iob, \__imp\_\__pctype, \__imp\_\__mb_cur_max).  
  
 If you have a static library that was built with an older version of the C Runtime headers, we recommend the following actions (in this order):  
  
1.  Rebuild the static library using Visual C++ 2015 and the Universal CRT headers to support linking with the Universal CRT. This is the fully supported (and thus best) option.  
  
2.  If you cannot (or do not want to) rebuild the static library, you may try linking with legacy_stdio_definitions.lib. If it satisfies the link-time dependencies of your static library, you will want to thoroughly test the static library as it is used in the binary, to make sure that it is not adversely affected by any of the [behavioral changes that were made to the Universal CRT](visual-cpp-change-history-2003-2015.md#BK_CRT).  
  
3.  If your static library’s dependencies are not satisfied by legacy_stdio_definitions.lib or if the library does not work with the Universal CRT due to the aforementioned behavioral changes, we would recommend encapsulating your static library into a DLL that you link with the correct version of the Microsoft C Runtime. For example, if the static library was built using Visual C++ 2013, you would want to build this DLL using Visual C++ 2013 and the Visual C++ 2013 libraries as well. By building the library into a DLL, you encapsulate the implementation detail that is its dependency on a particular version of the Microsoft C Runtime. (Note that you will want to be careful that the DLL interface does not “leak” details of which C Runtime it uses, e.g. by returning a FILE* across the DLL boundary or by returning a malloc-allocated pointer and expecting the caller to free it.)  
  
 Use of multiple CRTs in a single process is not in and of itself problematic (indeed, most processes will end up loading multiple CRT DLLs; e.g., Windows operating system components will depend on msvcrt.dll and the CLR will depend on its own private CRT). Problems arise when you jumble state from different CRTs. For example, you should not allocate memory using msvcr110.dll!malloc and attempt to deallocate that memory using msvcr120.dll!free, and you should not attempt to open a FILE using msvcr110!fopen and attempt to read from that FILE using msvcr120!fread. As long as you don’t jumble state from different CRTs, you can safely have multiple CRTs loaded in a single process.  
  
## Errors due to project settings  
 To begin the upgrade process, simply open an older project/solution/workspace in the latest version of Visual Studio. Visual Studio will create a new project based on the old project settings. If the older project has library or include paths that are hard-coded to non-standard locations, it is possible that the files in those paths won’t be visible to the compiler when the project uses the default settings. For more information, see [Linker OutputFile setting](porting-guide-spy-increment.md#linker_output_settings) in Porting Guide: Spy++.  
  
 In general, now is a great time to organize your project code properly in order to simplify project maintenance and help get your upgraded code compiling as quickly as possible. If your source code is already well-organized, and your older project is compiled with Visual Studio 2010 or later, you can manually edit the new project file to support compilation on both the old and new compiler. The following example shows how to compile for both Visual Studio 2013 and Visual Studio 2015:  
  
```  
<PlatformToolset Condition="'$(VisualStudioVersion)'=='12.0'">v120</PlatformToolset>  
<PlatformToolset Condition="'$(VisualStudioVersion)'=='14.0'">v140</PlatformToolset>  
  
```  
  
### LNK2019: Unresolved external  
 For unresolved symbols, you might need to fix up your project settings.  
  
-   •   If the source file is in a non-default location, did you add the path to the project’s include directories?  
  
-   •   If the external is defined in a .lib file, have you specified the lib path in the project properties and is the correct version of the .lib file actually located there?  
  
-   •   Are you attempting to link to a .lib file that was compiled with a different version of Visual Studio? If so, see the previous section on library and toolset dependencies.  
  
-   •   Do the types of the arguments at the call site actually match an existing overload of the function? Verify the underlying types for any typedefs in the function’s signature and in the code that calls the function are what you expect them to be.  
  
 To troubleshoot unresolved symbol errors, you can try using dumpbin.exe to examine the symbols defined in a binary. Try the following command line to view symbols defined in a library:  
  
```  
dumpbin.exe /LINKERMEMBER somelibrary.lib  
```  
  
### /Zc:wchar_t (wchar_t Is Native Type)  
 (In Visual C++ 6.0 and earlier, wchar_t was not implemented as a built-in type, but was declared in wchar.h as a typedef for unsigned short.) The C++ standard requires that wchar_t be a built-in type. Using the typedef version can cause portability problems. If you upgrade from earlier versions of Visual C++ and encounter compiler error C2664 because the code is trying to implicitly convert a wchar_t to unsigned short, we recommend that you change the code to fix the error, instead of setting /Zc:wchar_t-. For more information, see [/Zc:wchar_t (wchar_t Is Native Type)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).  
  
### Upgrading with the linker options /NODEFAULTLIB, /ENTRY, and /NOENTRY  
 The /NODEFAULTLIB linker option (or the Ignore All Default Libraries linker property) tells the linker not to automatically link in the default libraries such as the CRT. This means that each library has to be listed as input individually. This list of libraries is given in the Additional Dependencies property in the Linker section of the Project Properties.  
  
 Projects that use this option present a problem when upgrading, because the names of some of the default libraries have changed. Because each library has to be listed in the Additional Dependencies property or on the linker command line, you need to update the list of libraries to use the current names.  
  
 The following table shows the libraries whose names have changed. To upgrade, you need to replace the names in the first column with the names in the second column.  Some of these libraries are import libraries, but that shouldn’t matter.  
  
|||  
|-|-|  
|If you were using:|You need to replace it with:|  
|libcmt.lib|libucrt.lib, libvcruntime.lib|  
|libcmtd.lib|libucrtd.lib, libvcruntimed.lib|  
|msvcrt.lib|ucrt.lib, vcruntime.lib|  
|msvcrtd.lib|ucrtd.lib, vcruntimed.lib|  
  
 The same issue applies also if you use the /ENTRY option or the /NOENTRY option, which also have the effect of bypassing the default libraries.  
  
## Errors due to improved language conformance  
 The Visual C++ compiler has continuously improved its conformance to the C++ standard over the years. Code that compiled in earlier versions of Visual C++ might fail to compile in Visual Studio 2015 because the compiler correctly flags an error that it previously ignored or explicitly allowed.  
  
 For example, the /Zc:forScope switch was introduced early in the history of Visual C++. It permits non-conforming behavior for loop variables. That switch is now deprecated and might be removed in future versions. It is highly recommended to not use that switch when upgrading your code. For more information, see [/Zc:forScope- is deprecated](porting-guide-spy-increment.md#deprecated_forscope) in Porting Guide: Spy++.  
  
 One example of a common compiler error you might see when upgrading is when a non-const argument is passed to a const parameter. Older versions of Visual C++ did not always flag this as an error. For more information, see [The compiler's more strict conversions](porting-guide-spy-increment.md#stricter_conversions) in Porting Guide: Spy++.  
  
 For more information on specific conformance improvements, see [Visual C++ change history 2003 – 2015](visual-cpp-change-history-2003-2015.md).  
  
## Errors involving \<stdint.h> integral types  
 The \<stdint.h> header defines typedefs and macros that, unlike built-in integral types, are guaranteed to have a specified length on all platforms. Some examples are uint32_t and int64_t. Visual C++ added \<stdint.h> in Visual Studio 2010. Code that was written before 2010 might have provided private definitions for those types and those definitions might not always be consistent with the \<stdint.h> definitions.  
  
 If the error is C2371, and a stdint type is involved, it probably means that the type is defined in a header either in your code or a third-party lib file.  When upgrading, you should eliminate any custom definitions of \<stdint.h> types, but first compare the custom definitions to the current standard definitions to ensure you are not introducing new problems.  
  
 You can press F12 “Go to Definition” to see where the type in question is defined.  
  
 The [/showIncludes](../build/reference/showincludes-list-include-files.md) compiler option can be useful here. In the Property Pages dialog box for your project, open the **C/C++**, **Advanced** page and set **Show Includes** to “Yes”. Then rebuild your project and see the list of #includes in the output window.  Each header is indented under the header that includes it.  
  
## Errors involving CRT functions  
 Many changes have been made to the C runtime over the years. Many secure versions of functions have been added, and some have been removed. Also, as described earlier in this article, Microsoft’s implementation of the CRT was refactored in Visual Studio 2015 into new binaries and associated .lib files.  
  
 If an error involves a CRT function, search the [Visual C++ change history 2003 - 2015](visual-cpp-change-history-2003-2015.md) to see if it contains any additional information. If the error is LNK2019, unresolved external, make sure the function has not been removed. Otherwise, if you are sure that the function still exists, and the calling code is correct, check to see whether your project uses /NODEFAULTLIB. If so you need to update the list of libraries so that the project uses the new universal (UCRT) libraries. See the section above on Library and dependencies for more information.  
  
 If the error involves printf or scanf, make sure that you are not privately defining either function without including stdio.h. If so, either remove the private definitions or link to legacy_stdio_definitions.lib (Project &#124; Properties &#124; Linker &#124; Linker Input). If you are linking with Windows SDK 8.1 or earlier, then add legacy_stdio_definitions.lib.  
  
 If the error involves format string arguments, this is because the compiler is stricter about enforcing the standard. See the change history for more information. Please pay close attention to any errors here because they can potentially represent a security risk.  
  
## Errors due to changes in the C++ standard  
 The C++ standard itself has evolved in ways that are not always backward compatible. The introduction in C++11 of move semantics, new keywords, and other language and standard library features can potentially cause compiler errors and even different runtime behavior.  
  
 For example, an old C++ program might include the iostream.h header. This header was deprecated early in the history of C++ and was eventually removed completely from Visual C++. In this case, you will need to use \<iostream> and rewrite your code. For more information, see [Updating old iostreams code](porting-guide-spy-increment.md#updating_iostreams_code) in Porting Guide: Spy++.  
  
### C4838: narrowing conversion warning  
 The C++ standard now specifies that conversions from unsigned to signed integral values are considered as narrowing conversions. The Visual C++ compiler did not raise this warning in earlier versions. You should inspect each occurrence to make sure the narrowing does not impact the correctness of your code.  
  
## Warnings to use secure CRT functions  
 Over the years, secure versions of C runtime functions have been introduced. Although the old, non-secure versions are still available, it is recommended to change your code to use the secure versions. The compiler will issue a warning for usage of the non-secure versions. You can choose to disable or ignore these warnings. To disable the warning for all projects in your solution, open **View &#124; Property Manager**, select all projects for which you want to disable the warning, then right-click on the selected items and choose **Properties &#124; C/C++ &#124; Advanced &#124; Disable Specific Warnings**. Click the drop-down arrow and then click on Edit. Enter 4996 into the text box. (Don't include the 'C' prefix.) For more information, see [Porting to use the Secure CRT](porting-guide-spy-increment.md#porting_to_secure_crt) in Porting Guide: Spy++.  
  
## Errors due to changes in Windows APIs or obsolete SDKs  
 Over the years, Windows APIs and data types have been added, and sometimes changed or removed. Also, other SDKs that did not belong to the core operating system have come and gone. Older programs may therefore contain calls to APIs that no longer exist. They may also contain calls to APIs in other Microsoft SDKs that are no longer supported.  If you see an error involving a Windows API or an API from an older Microsoft SDK, it is possible that an API has been removed and/or superseded by a newer, more secure function.  
  
 For more information about the current API set and the minimum supported operating systems for a specific Windows API, see [Windows API Index](https://msdn.microsoft.com/en-us/library/ff818516\(v=vs.85\).aspx) and navigate to the API in question.  
  
### Windows version  
 When upgrading a program that uses the Windows API either directly or indirectly, you will need to decide the minimum Windows version to support. In most cases Windows 7 is a good choice. For more information see [Header file problems](porting-guide-spy-increment.md#header_file_problems) in Porting Guide: Spy++. The WINVER macro defines the oldest version of Windows that your program is designed to run on. If your MFC program sets WINVER to 0x0501 (Windows XP) you will get a warning because MFC no longer supports XP, even though the compiler itself has an XP mode.  
  
 For more information, see [Updating the Target Windows Version](porting-guide-spy-increment.md#updating_winver) and [More outdated header files](porting-guide-spy-increment.md#outdated_header_files) in Porting Guide: Spy++.  
  
## ATL / MFC  
 ATL and MFC are relatively stable APIs but changes are made occasionally. See the [Visual C++ change history 2003 – 2015](visual-cpp-change-history-2003-2015.md) for more information.  
  
### LNK 2005 _DllMain@12 already defined in MSVCRTD.lib  
 This error can occur in MFC applications. It indicates an ordering issue between the CRT library and the MFC library. MFC needs to be linked first so that it provides new and delete operators. To fix the error, use the /NODEFAULTLIB switch to Ignore these default libraries: MSVCRTD.lib and mfcs140d.lib. Then add these same libs as additional dependencies.  
  
## 32 vs 64 bit  
 If your original code is compiled for 32-bit systems, you have the option of creating a 64-bit version instead of or in addition to a new 32-bit app. In general, you should get your program compiling in 32-bit mode first, and then attempt 64-bit. Compiling for 64-bit is straightforward, but in some cases it can reveal bugs that were hidden by 32-bit builds.  
  
 Also, you should be aware of possible compile-time and runtime issues relating to pointer size, time and size values, and format specifiers in printf and scanf functions. For more information, see [Configuring Programs for 64-Bit (Visual C++)](../build/configuring-programs-for-64-bit-visual-cpp.md) and [Common Visual C++ 64-bit Migration Issues](../build/common-visual-cpp-64-bit-migration-issues.md). For additional migration tips, see [Programming Guide for 64-bit Windows](https://msdn.microsoft.com/library/windows/desktop/bb427430\(v=vs.85\).aspx).  
  
## Unicode vs MBCS/ASCII  
 Before Unicode was standardized, many programs used the Multibyte Character Set (MBCS) to represent characters that were not included in the ASCII character set. In older MFC projects, MBCS was the default setting, and when you upgrade such a program, you will see warnings that advise to use Unicode instead. You may choose to disable or ignore the warning if you decide that converting to Unicode is not worth the development cost. To disable it for all projects in your solution, open **View &#124; Property Manager**, select all projects for which you want to disable the warning, then right-click on the selected items and choose **Properties &#124; C/C++ &#124; Advanced &#124; Disable Specific Warnings**. Click the drop-down arrow and then click on Edit. Enter 4996 into the text box. (Don't include the 'C' prefix.)  
  
 For more information, see [Porting from MBCS to Unicode](porting-guide-spy-increment.md#porting_to_unicode) in Porting Guide: Spy++. For general information about MBCS vs. Unicode, see [Text and Strings in Visual C++](../text/text-and-strings-in-visual-cpp.md) and [Internationalization](../c-runtime-library/internationalization.md) .  
  
## See Also  
 [Upgrading Projects from Earlier Versions of Visual C++](../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md)