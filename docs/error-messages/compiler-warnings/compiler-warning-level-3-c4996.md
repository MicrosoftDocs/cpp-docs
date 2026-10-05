---
title: "Compiler Warning (level 3) C4996"
description: "Explains why Compiler warning C4996 happens and what to do about it."
ms.date: 05/12/2026
f1_keywords: ["C4996"]
ai-usage: ai-assisted
helpviewer_keywords: ["C4996"]
---
# Compiler Warning (level 3) C4996

Your code uses a function, class member, variable, or typedef that's marked *deprecated*. Symbols are deprecated by using a [`__declspec(deprecated)`](../../cpp/deprecated-cpp.md) modifier, or the C++14 [`[[deprecated]]`](../../cpp/attributes.md) attribute. The actual C4996 warning message is specified by the `deprecated` modifier or attribute of the declaration.

> [!IMPORTANT]
> This warning is always a deliberate message from the author of the header file that declares the symbol. Don't use the deprecated symbol without understanding the consequences.

## Remarks

Many functions, member functions, function templates, and global variables in Visual Studio libraries are *deprecated*. Some, such as POSIX and Microsoft-specific functions, are deprecated because they now have a different preferred name. Some C runtime library functions are deprecated because they're insecure and have a more secure variant. Others are deprecated because they're obsolete. The deprecation messages usually include a suggested replacement for the deprecated function or global variable.

The [`/sdl` (Enable Additional Security Checks)](../../build/reference/sdl-enable-additional-security-checks.md) compiler option elevates this warning to an error.

## Turn off the warning

To fix a C4996 issue, we usually recommend you change your code. Use the suggested functions and global variables instead. If you need to use the existing functions or variables for portability reasons, you can turn off the warning.

### Turn off the warning for a specific line of code

To turn off the warning for a specific line of code, use the [`warning`](../../preprocessor/warning.md) pragma, `#pragma warning(suppress : 4996)`.

### Turn off the warning within a file

To turn off the warning within a file for everything that follows, use the warning pragma, `#pragma warning(disable : 4996)`.

### Turn off the warning in command-line builds

To turn off the warning globally in command-line builds, use the [`/wd4996`](../../build/reference/compiler-option-warning-level.md) command-line option.

### Turn off the warning for a project in Visual Studio

To turn off the warning for an entire project in the Visual Studio IDE:

1. Open the **Property Pages** dialog for your project. For information on how to use the Property Pages dialog, see [Property Pages](../../build/reference/property-pages-visual-cpp.md).
1. Select the **Configuration Properties** > **C/C++** > **Advanced** property page.
1. Edit the **Disable Specific Warnings** property to add *`4996`*. Choose **OK** to apply your changes.

### Disable the warning using preprocessor macros

You can also use preprocessor macros to turn off certain specific classes of deprecation warnings used in the libraries. These macros are described below.

To define a preprocessor macro in Visual Studio:

1. Open the **Property Pages** dialog for your project. For information on how to use the Property Pages dialog, see [Property Pages](../../build/reference/property-pages-visual-cpp.md).
1. Expand **Configuration Properties > C/C++ > Preprocessor**.
1. In the **Preprocessor Definitions** property, add the macro name. Choose **OK** to save, and then rebuild your project.

To define a macro only in specific source files, add a line such as `#define EXAMPLE_MACRO_NAME` before any line that includes a header file.

Here are some of the common sources of C4996 warnings and errors:

> [!NOTE]
> Visual Studio 2017 version 15.8 removed the C4996 warnings controlled by `_SCL_SECURE_NO_WARNINGS` from the Microsoft C++ Standard Library. Current versions of the library don't emit these warnings. For details, see [STL Features and Fixes in VS 2017 15.8](https://devblogs.microsoft.com/cppblog/stl-features-and-fixes-in-vs-2017-15-8/).

## POSIX function names

> The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: *`new-name`*. See online help for details.

Microsoft renamed some POSIX and Microsoft-specific library functions in the CRT to conform with C99 and C++03 constraints on reserved and global implementation-defined names. *Only the names are deprecated, not the functions themselves*. In most cases, a leading underscore was added to the function name to create a conforming name. The compiler issues a deprecation warning for the original function name, and suggests the preferred name.

To fix this issue, we usually recommend you change your code to use the suggested function names instead. However, the updated names are Microsoft-specific. If you need to use the existing function names for portability reasons, you can turn off these warnings. The functions are still available in the library under their original names.

To turn off deprecation warnings for these functions, define the preprocessor macro **`_CRT_NONSTDC_NO_WARNINGS`**. You can define this macro at the command line by including the option `/D_CRT_NONSTDC_NO_WARNINGS`.

## Unsafe CRT Library functions

> This function or variable may be unsafe. Consider using *`safe-version`* instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.

Microsoft deprecated some CRT and C++ Standard Library functions and globals because more secure versions are available. Most of the deprecated functions allow unchecked read or write access to buffers. Their misuse can lead to security problems. The compiler issues a deprecation warning for these functions, and suggests the preferred function.

To fix this issue, we recommend you use the function or variable *`safe-version`* instead. Sometimes you can't, for portability or backwards compatibility reasons. Carefully verify it's not possible for a buffer overwrite or overread to occur in your code. Then, you can turn off the warning.

To turn off deprecation warnings for these functions in the CRT, define **`_CRT_SECURE_NO_WARNINGS`**.

To turn off warnings about deprecated global variables, define **`_CRT_SECURE_NO_WARNINGS_GLOBALS`**.

For more information about these deprecated functions and globals, see [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md) and [Safe Libraries: C++ Standard Library](../../standard-library/safe-libraries-cpp-standard-library.md).

## Unsafe Standard Library functions

> 'std:: *`function_name`* ::_Unchecked_iterators::_Deprecate' call to std:: *`function_name`* with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. To disable this warning, use `-D_SCL_SECURE_NO_WARNINGS`. For more information about how to use Visual C++ 'Checked Iterators', see [Checked iterators](../../standard-library/checked-iterators.md).

This warning comes from certain C++ Standard Library function templates when you call them with iterators the library can't verify. Often, the function doesn't have enough information to check container bounds, or you might be using iterators incorrectly with the function. The warning helps you identify calls that might cause security problems in your program. For more information, see [Checked iterators](../../standard-library/checked-iterators.md).

The library treats pointers you pass to standard algorithms as checked iterators when it can deduce the destination range. This category of C4996 warnings remains for cases the library still can't verify, such as user-defined output iterators that aren't marked as checked.

To fix the warning, use a standard iterator the library already classifies as checked, such as a container iterator, `std::back_inserter`, or an iterator into a `std::array` or `std::span`. If you verify the call can't overrun its destination, you can turn off this warning by defining **`_SCL_SECURE_NO_WARNINGS`**.

## Deprecated C++ Standard Library features

C4996 also occurs when your code uses a Standard Library type, function, or template that a revision of the C++ Standard deprecated. The warning appears at the point of use, and the message identifies the deprecated symbol.

`std::iterator` is the canonical example: The C++17 standard deprecated it and modern conformance modes still include it (only deprecated, not removed). Other features - such as `std::auto_ptr`, `std::random_shuffle`, `std::unary_function`, and `std::binary_function` - were *removed* by C++17. In default `/std:c++17` and later modes, code that names them fails to compile rather than emitting C4996. They only emit C4996 when you explicitly opt them back in (for example, by compiling with `/std:c++14`, or by defining macros such as `_HAS_AUTO_PTR_ETC=1` and `_HAS_FEATURES_REMOVED_IN_CXX17=1` before including any standard headers).

To fix the warning, replace the deprecated symbol with its modern equivalent. For example, instead of deriving an iterator type from `std::iterator`, define the five iterator typedefs (`iterator_category`, `value_type`, `difference_type`, `pointer`, and `reference`) directly on the iterator type:

```cpp
// C4996_iterator.cpp
// compile with: cl /c /EHsc /W4 /std:c++20 C4996_iterator.cpp
#include <iterator>

// std::iterator was deprecated in C++17, generates C4996
struct my_iterator : std::iterator<std::input_iterator_tag, int>  // C4996
{
    int* p;
    my_iterator(int* p) : p(p) {}
    int& operator*() { return *p; }
    my_iterator& operator++() { ++p; return *this; }
    my_iterator operator++(int) { auto tmp = *this; ++p; return tmp; }
    bool operator==(const my_iterator& o) const { return p == o.p; }
};

// Fix: declare the iterator typedefs directly.
struct my_iterator_fixed
{
    using iterator_category = std::input_iterator_tag;
    using value_type        = int;
    using difference_type   = std::ptrdiff_t;
    using pointer           = int*;
    using reference         = int&;

    int* p;
    my_iterator_fixed(int* p) : p(p) {}
    int& operator*() { return *p; }
    my_iterator_fixed& operator++() { ++p; return *this; }
    my_iterator_fixed operator++(int) { auto tmp = *this; ++p; return tmp; }
    bool operator==(const my_iterator_fixed& o) const { return p == o.p; }
};
```

If you can't change the code, you can suppress these warnings by defining the appropriate `_SILENCE_*_DEPRECATION_WARNING` macro before including any standard header. The macro name is specific to the deprecated feature and is included in the warning message. For example, `_SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING` for `std::iterator`. To silence all such warnings for a given standard, define `_SILENCE_ALL_CXX17_DEPRECATION_WARNINGS` or `_SILENCE_ALL_CXX20_DEPRECATION_WARNINGS`. Define these macros project-wide (in **Preprocessor Definitions** or via `/D`), because once a standard header is processed - including via a precompiled header - a later `#define` in user code has no effect on the warnings it already emitted.

## Unsafe MFC or ATL code

C4996 can occur if you use MFC or ATL functions that were deprecated for security reasons.

To fix this issue, we strongly recommend you change your code to use updated functions instead.

For information on how to suppress these warnings, see [`_AFX_SECURE_NO_WARNINGS`](../../mfc/reference/diagnostic-services.md#afx_secure_no_warnings).

## Obsolete CRT functions and variables

> This function or variable has been superseded by newer library or operating system functionality. Consider using *`new_item`* instead. See online help for details.

Some library functions and global variables are deprecated as obsolete. These functions and variables may be removed in a future version of the library. The compiler issues a deprecation warning for these items, and suggests the preferred alternative.

To fix this issue, we recommend you change your code to use the suggested function or variable.

To turn off deprecation warnings for these items, define **`_CRT_OBSOLETE_NO_WARNINGS`**. For more information, see the documentation for the deprecated function or variable.

## Marshaling errors in CLR code

C4996 can also occur when you use the CLR marshaling library. In this case, C4996 is an error, not a warning. The error occurs when you use [`marshal_as`](../../dotnet/marshal-as.md) to convert between two data types that require a [`marshal_context` Class](../../dotnet/marshal-context-class.md). You can also receive this error when the marshaling library doesn't support a conversion. For more information about the marshaling library, see [Overview of marshaling in C++](../../dotnet/overview-of-marshaling-in-cpp.md).

This example generates C4996 because the marshaling library requires a context to convert from a `System::String` to a `const char *`.

```cpp
// C4996_Marshal.cpp
// compile with: /clr
// C4996 expected
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal.h>

using namespace System;
using namespace msclr::interop;

int main() {
   String^ message = gcnew String("Test String to Marshal");
   const char* result;
   result = marshal_as<const char*>( message );
   return 0;
}
```

## Example: User-defined deprecated function

Use the `[[deprecated]]` attribute in your own code to warn callers when you no longer recommend use of certain functions. The attribute on the declaration itself doesn't emit C4996; only uses of the deprecated symbol do. In this example, C4996 is generated at the call site of the deprecated overload.

```cpp
// C4996.cpp
// compile with: /W3
// C4996 warning expected
#include <stdio.h>

// #pragma warning(disable : 4996)
void func1(void) {
   printf_s("\nIn func1");
}

[[deprecated]]
void func1(int) {
   printf_s("\nIn func1(int)");
}

int main() {
   func1();
   func1(1);    // C4996
}
```

## See also

[`__declspec(deprecated)`](../../cpp/deprecated-cpp.md)\
[Safe Libraries: C++ Standard Library](../../standard-library/safe-libraries-cpp-standard-library.md)\
[Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md)
