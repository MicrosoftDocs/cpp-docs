---
title: "What's New for Visual C++ in Visual Studio | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev15"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
    - "vs-ide-general"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 8801dbdb-ca0b-491f-9e33-01618bff5ae9
author: "BrianPeek"
ms.author: "brpeek"
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

# What's New for Visual C++ in [!INCLUDE[vs_dev15_md](../misc/includes/vs_dev15_md.md)]

[!INCLUDE[vs_dev15_md](../misc/includes/vs_dev15_md.md)] brings many updates and fixes to the Visual C++ environment. We've fixed over 250 bugs and reported issues in the compiler and tools, many submitted by customers through [Microsoft Connect](https://connect.microsoft.com/VisualStudio "Microsoft Connect"). Thank you for reporting bugs!  For more more information on what's new in all of Visual Studio, please visit [What's new in [!INCLUDE[vs_dev15_md](../misc/includes/vs_dev15_md.md)]](https://go.microsoft.com/fwlink/?linkid=834481).

The compiler and tools version number in [!INCLUDE[vs_dev15_md](../misc/includes/vs_dev15_md.md)] RC is 14.10.24629.  

## C++ Code Analysis

The C++ Core Checkers for enforcing the [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines) are now distributed with Visual Studio. Simply enable the checkers in the Code Analysis Extensions dialog in the project's property pages and the extensions will be included when you run code analysis. 

![CppCoreCheck](media/CppCoreCheck.png "CppCoreCheck properties page") 

## C++ Compiler

In this release, we've updated the C++ compiler and standard library with enhanced support for C++11 and C++14 features, as well as preliminary support for certain features expected to be in the C++17 standard. With support for generalized constexpr and NSDMI for aggregates, the compiler is complete for features added in the C++14 Standard. Note that the compiler still lacks a few features from the C++11 and C++98 Standards.
[!INCLUDE[vs_dev15_md](../misc/includes/vs_dev15_md.md)] RC allows using /sdl with /await. We removed /rtc limitation with Coroutines.
This release brings several improvements in optimization and code generation. Some notable improvements include:  

- Improved code generation of loops: Support for automatic vectorization of division of constant integers, better identification of memset patterns.
- Improved code security: Improved emission of buffer overrun compiler diagnostics, and /guard:cf now guards switch statements that generate jump tables.

The /debug:fastlink option has been improved to provide 30% faster link times on large components than in VS 2015.

## C++ Libraries

### Standard Template Library:

* Minor basic_string _ITERATOR_DEBUG_LEVEL != 0 diagnostics improvements. Tripping an IDL check in string machinery will now report the specific behavior that caused the trip. For example, instead of "string iterator not dereferencable" you'll get "cannot dereference string iterator because it is out of range (e.g. an end iterator)".
* Performance improvement: made basic_string::find(char) overloads only call traits::find once. Previously this was implemented as a general string search for a string of length 1.
* Performance improvement: basic_string::operator== now checks the string's size before comparing the strings' contents.
* Performance improvement: removed control coupling in basic_string which was difficult for the compiler optimizer to analyze. Resolves VSO# 262848 "<string>: reserve() does too much work". Note that for all short strings, calling reserve still has nonzero cost to do nothing.
* We added \<any\>, \<string_view\>, apply(), make_from_tuple().
* std::vector has been overhauled for correctness and performance: aliasing during insertion/emplacement is now correctly handled as required by the Standard, the strong exception guarantee is now provided when required by the Standard via move_if_noexcept() and other logic, and insertion/emplacement perform fewer element operations.
* The STL now avoids dereferencing null fancy pointers.
* Added \<optional\>, \<variant\>, shared_ptr::weak_type, and \<cstdalign\>.
* Enabled C++14 constexpr in min/max/minmax(initializer_list) and min_element/max_element/minmax_element().
* Improved weak_ptr::lock() performance.
* Fixed std::promise's move assignment operator, which previously could cause code to block forever.
* Fixed compiler errors with atomic\<T \*\>'s implicit conversion to T \*.
* pointer_traits\<Ptr\> now correctly detects Ptr::rebind\<U\>.
* Fixed a missing const qualifier in move_iterator's subtraction operator.
* Fixed silent bad codegen for stateful user-defined allocators requesting propagate_on_container_copy_assignment and propagate_on_container_move_assignment.
* atomic\<T\> now tolerates overloaded operator&().
* To increase compiler throughput, STL headers now avoid including declarations for unnecessary compiler intrinsics.
* Slightly improved compiler diagnostics for incorrect bind() calls.

## C++ IDE

* The new SQLite-based database engine is now being used by default. This will speed up database operations like Go To Definition and Find All References, and will significantly improve initial solution parse time. The setting has been moved to Tools > Options > Text Editor > C/C++ > Advanced (it was formerly under ...C/C++ > Experimental).

* We've improved IntelliSense performance on projects and files not using precompiled headers – an Automatic Precompiled Header will be created for headers in the current file.

* We've added error filtering and help for IntelliSense errors in the error list. Clicking on the error column now allows for filtering. Also, clicking on the specific errors or pressing F1 will launch an online search for the error message.

  ![Error List](media/ErrorList1.png "Error List")

  ![Error List Filtered](media/ErrorList2.png "Error List Filtered")

* Added the ability to filter Member List items by kind.

  ![Member List Filtering](media/mlfiltering.png "Member List Filtering")

* Added a new experimental Predictive IntelliSense feature that provides contextually-aware filtering of what appears in the Member List.

* The new Find All References UI includes information about whether we are reading from or writing to a variable in the results for C++ code.

* _**New in RC**_ The Dot-to-Arrow IntelliSense feature has been moved from experimental to advanced, and is now enabled by default. The editor features Expand Scopes and Expand Precedence have also been moved from experimental to advanced.

* _**New in RC**_ The experimental refactoring features Change Signature and Extract Function are now available by default.

* _**New in RC**_ We've enabled the new experimental feature for C++ projects ‘Faster project load’. The next time you open a C++ project it will load faster, and the time after that it will load really fast!

* _**New in RC**_ Improvements to the Open Folder experience. 
Edit, build and debug your non-MSBuild C++ project by loading your sources through “Open Folder”.
Customize the experience through these json files:
  -	CppProperties.json to customize the IntelliSense and browsing experience.
  -	Tasks.json to customize the build steps. 
  -	Launch.json to customize the debugging experience.

* _**New in RC**_ C++ IntelliSense will work without the need to create a CppProperties.json file in the root folder. Along with this, we've added a new dropdown to allow users to easily switch between configurations provided by CMake and CppProperties.json files.
CMake support in Open Folder
Opening CMake projects with “Open Folder” will automatically configure the environment for C++ editing, building and debugging.

* _**New in RC**_ Further configuration is supported via a CMakeSettings.json file that sits in the same folder as the CMakeLists.txt file.

  ![Cmake Open Folder](media/cmake_cpp.png "CMake Open Folder")

## C++ Installation Workloads 

### Windows Desktop Development with C++:  
We now provide a more granular installation experience for installing the original C++ workload. We have added selectable components that enable you to install just the tools that you need.  Please note that the indicated installation sizes for the components listed in the installer UI are not accurate and underestimate the total size.  

### Linux Development with C++:  
The popular extension [Visual C++ for Linux Development](https://visualstudiogallery.msdn.microsoft.com/725025cf-7067-45c2-8d01-1e0fd359ae6e) is now part of Visual Studio. This installation provides everything you need to develop and debug C++ applications running on a Linux environment.  

### Game Development with C++:  
Use the full power of C++ to build professional games powered by DirectX or Cocos2d.  

### Mobile Development with C++ (Android and iOS):  
You can now create and debug mobile apps using Visual Studio that can target Android and iOS.  

### Universal Windows App:  
C++ comes as an optional component for the Universal Windows App workload.  

## Clang/C2 Platform Toolset
The Clang/C2 toolset that ships with [!INCLUDE[vs_dev15_md](../misc/includes/vs_dev15_md.md)] RC now supports the /bigobj switch, which is crucial for building large projects. It also includes several important bug fixes, both in the front-end and the back-end of the compiler.
