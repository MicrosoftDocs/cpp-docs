---
title: "Compiler Warning (level 3) C4996"
description: "Explains why Compiler warning C4996 happens, and describes what to do about it."
ms.date: 08/30/2022
f1_keywords: ["C4996"]
helpviewer_keywords: ["C4996"]
ms.assetid: 926c7cc2-921d-43ed-ae75-634f560dd317
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

## POSIX function names

**`The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name:`** _`new-name.`_ **`See online help for details.`**

Microsoft renamed some POSIX and Microsoft-specific library functions in the CRT to conform with C99 and C++03 constraints on reserved and global implementation-defined names. *Only the names are deprecated, not the functions themselves*. In most cases, a leading underscore was added to the function name to create a conforming name. The compiler issues a deprecation warning for the original function name, and suggests the preferred name.

To fix this issue, we usually recommend you change your code to use the suggested function names instead. However, the updated names are Microsoft-specific. If you need to use the existing function names for portability reasons, you can turn off these warnings. The functions are still available in the library under their original names.

To turn off deprecation warnings for these functions, define the preprocessor macro **`_CRT_NONSTDC_NO_WARNINGS`**. You can define this macro at the command line by including the option `/D_CRT_NONSTDC_NO_WARNINGS`.

## Unsafe CRT Library functions

**`This function or variable may be unsafe. Consider using`** _`safe-version`_ **`instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.`**

Microsoft deprecated some CRT and C++ Standard Library functions and globals because more secure versions are available. Most of the deprecated functions allow unchecked read or write access to buffers. Their misuse can lead to serious security issues. The compiler issues a deprecation warning for these functions, and suggests the preferred function.

To fix this issue, we recommend you use the function or variable *`safe-version`* instead. Sometimes you can't, for portability or backwards compatibility reasons. Carefully verify it's not possible for a buffer overwrite or overread to occur in your code. Then, you can turn off the warning.

To turn off deprecation warnings for these functions in the CRT, define **`_CRT_SECURE_NO_WARNINGS`**.

To turn off warnings about deprecated global variables, define **`_CRT_SECURE_NO_WARNINGS_GLOBALS`**.

For more information about these deprecated functions and globals, see [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md) and [Safe Libraries: C++ Standard Library](../../standard-library/safe-libraries-cpp-standard-library.md).

## Unsafe Standard Library functions

**`'std::`** *`function_name`* **`::_Unchecked_iterators::_Deprecate' Call to std::`** *`function_name`* **`with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'`**

In Visual Studio 2015, this warning appears in debug builds because certain C++ Standard Library function templates don't check parameters for correctness. Often it's because not enough information is available to the function to check container bounds. Or, because iterators may be used incorrectly with the function. This warning helps you identify these functions, because they may be a source of serious security holes in your program. For more information, see [Checked iterators](../../standard-library/checked-iterators.md).

For example, this warning appears in Debug mode if you pass an element pointer to `std::copy`, instead of a plain array. To fix this issue, use an appropriately declared array, so the library can check the array extents and do bounds checking.

```cpp
// C4996_copyarray.cpp
// compile with: cl /c /W4 /D_DEBUG C4996_copyarray.cpp
#include <algorithm>

void example(char const * const src) {
    char dest[1234];
    char * pdest3 = dest + 3;
    std::copy(src, src + 42, pdest3); // C4996
    std::copy(src, src + 42, dest);   // OK, copy can tell that dest is 1234 elements
}
```

Several standard library algorithms were updated to have "dual range" versions in C++14. If you use the dual range versions, the second range provides the necessary bounds checking:

```cpp
// C4996_containers.cpp
// compile with: cl /c /W4 /D_DEBUG C4996_containers.cpp
#include <algorithm>

bool example(
    char const * const left,
    const size_t leftSize,
    char const * const right,
    const size_t rightSize)
{
    bool result = false;
    result = std::equal(left, left + leftSize, right); // C4996
    // To fix, try this form instead:
    // result = std::equal(left, left + leftSize, right, right + rightSize); // OK
    return result;
}
```

This example demonstrates several more ways the standard library may be used to check iterator usage, and when unchecked usage may be dangerous:

```cpp
// C4996_standard.cpp
// compile with: cl /EHsc /W4 /MDd C4996_standard.cpp
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

template <typename C> void print(const string& s, const C& c) {
    cout << s;

    for (const auto& e : c) {
        cout << e << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> v(16);
    iota(v.begin(), v.end(), 0);
    print("v: ", v);

    // OK: vector::iterator is checked in debug mode
    // (i.e. an overrun triggers a debug assertion)
    vector<int> v2(16);
    transform(v.begin(), v.end(), v2.begin(), [](int n) { return n * 2; });
    print("v2: ", v2);

    // OK: back_insert_iterator is marked as checked in debug mode
    // (i.e. an overrun is impossible)
    vector<int> v3;
    transform(v.begin(), v.end(), back_inserter(v3), [](int n) { return n * 3; });
    print("v3: ", v3);

    // OK: array::iterator is checked in debug mode
    // (i.e. an overrun triggers a debug assertion)
    array<int, 16> a4;
    transform(v.begin(), v.end(), a4.begin(), [](int n) { return n * 4; });
    print("a4: ", a4);

    // OK: Raw arrays are checked in debug mode
    // (i.e. an overrun triggers a debug assertion)
    // NOTE: This applies only when raw arrays are
    // given to C++ Standard Library algorithms!
    int a5[16];
    transform(v.begin(), v.end(), a5, [](int n) { return n * 5; });
    print("a5: ", a5);

    // WARNING C4996: Pointers cannot be checked in debug mode
    // (i.e. an overrun triggers undefined behavior)
    int a6[16];
    int * p6 = a6;
    transform(v.begin(), v.end(), p6, [](int n) { return n * 6; });
    print("a6: ", a6);

    // OK: stdext::checked_array_iterator is checked in debug mode
    // (i.e. an overrun triggers a debug assertion)
    int a7[16];
    int * p7 = a7;
    transform(v.begin(), v.end(),
        stdext::make_checked_array_iterator(p7, 16),
        [](int n) { return n * 7; });
    print("a7: ", a7);

    // WARNING SILENCED: stdext::unchecked_array_iterator
    // is marked as checked in debug mode, but it performs no checking,
    // so an overrun triggers undefined behavior
    int a8[16];
    int * p8 = a8;
    transform( v.begin(), v.end(),
        stdext::make_unchecked_array_iterator(p8),
        [](int n) { return n * 8; });
    print("a8: ", a8);
}
```

If you've verified that your code can't have a buffer-overrun error, you can turn off this warning. To turn off warnings for these functions, define **`_SCL_SECURE_NO_WARNINGS`**.

## Checked iterators enabled

C4996 can also occur if you don't use a checked iterator when `_ITERATOR_DEBUG_LEVEL` is defined as 1 or 2. It's set to 2 by default for debug mode builds, and to 0 for retail builds. For more information, see [Checked iterators](../../standard-library/checked-iterators.md).

```cpp
// C4996_checked.cpp
// compile with: /EHsc /W4 /MDd C4996_checked.cpp
#define _ITERATOR_DEBUG_LEVEL 2

#include <algorithm>
#include <iterator>

using namespace std;
using namespace stdext;

int main() {
    int a[] = { 1, 2, 3 };
    int b[] = { 10, 11, 12 };
    copy(a, a + 3, b + 1);   // C4996
    // try the following line instead:
    // copy(a, a + 3, checked_array_iterator<int *>(b, 3));   // OK
}
```

## Unsafe MFC or ATL code

C4996 can occur if you use MFC or ATL functions that were deprecated for security reasons.

To fix this issue, we strongly recommend you change your code to use updated functions instead.

For information on how to suppress these warnings, see [`_AFX_SECURE_NO_WARNINGS`](../../mfc/reference/diagnostic-services.md#afx_secure_no_warnings).

## Obsolete CRT functions and variables

**`This function or variable has been superseded by newer library or operating system functionality. Consider using`** *`new_item`* **`instead. See online help for details.`**

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

You can use the `deprecated` attribute in your own code to warn callers when you no longer recommend use of certain functions. In this example, C4996 is generated in two places: One for the line the deprecated function is declared on, and one for the line where the function is used.

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
   printf_s("\nIn func2");
}

int main() {
   func1();
   func1(1);    // C4996
}
```
