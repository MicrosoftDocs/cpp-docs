---
title: "Compiler Warning (level 3) C4996 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4996"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4996"
ms.assetid: 926c7cc2-921d-43ed-ae75-634f560dd317
caps.latest.revision: 34
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Warning (level 3) C4996
The compiler encountered a deprecated declaration.  
  
This warning or error has several possible meanings, depending on the context.  
  
C4996 occurs when the compiler encounters a function or variable that is marked as [deprecated](../../cpp/deprecated-cpp.md) by using a `__declspec(deprecated)` modifier. This warning is also issued when you attempt to access a function, class member or typedef that has the C++14 `[[deprecated]]` attribute. For more information, see [C++ Standard Attributes](../../cpp/attributes2.md). You can use this attribute yourself in your libraries to warn your clients about deprecated functions, members, or typedefs.  
  
Several functions, member functions, template functions, and global variables in the libraries in Visual Studio are marked as deprecated. These functions may have a different preferred name, may be insecure or have a more secure variant, or may be obsolete. Many error messages include a suggested replacement for the deprecated function or global variable.  
  
To fix this issue, we usually recommend you change your code to use the suggested safer or updated functions and global variables instead. If you need to use the existing functions or variables for portability reasons, the warning can be turned off.  
  
You can turn off the warning for a specific line of code by using the [warning](../../preprocessor/warning.md) pragma `#pragma warning(suppress : 4996)`. You can turn it off within a file by using the warning pragma `#pragma warning(disable : 4996)`. You can turn it off globally in command line builds by using the **/wd4996** command line option. To turn off the warning for a project in the Visual Studio IDE, open the **Property Pages** dialog, select the **Configuration Properties**, **C/C++**, **Advanced** page and edit the **Disable Specific Warnings** property to add `4996`.  You can also use preprocessor macros to turn off certain specific classes of deprecation warnings used in the libraries. These macros are described below.  
  
Here are some of the library sources of C4996.  
  
## POSIX function names  
  
**The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name:** *new_name*. **See online help for details.**  
  
Microsoft has renamed some POSIX functions in the CRT to conform with C99 and C++03 rules for implementation-defined global function names. Only the original POSIX names are deprecated, not the functions themselves. In most cases, a leading underscore was added to the POSIX function name to create a standard conformant name. The compiler issues a deprecation warning for the original function name, and suggests the preferred name.  
  
To fix this issue, we usually recommend you change your code to use the suggested function names instead. However, the updated names are Microsoft-specific. If you need to use the existing function names for portability reasons, you can turn these warnings off. The POSIX functions are still available in the library under their original names.  
  
To turn off deprecation warnings for these functions, define the preprocessor macro **_CRT_NONSTDC_NO_WARNINGS**. You can define this at the command line by including the option `/D_CRT_NONSTDC_NO_WARNINGS`. To define this macro in Visual Studio, open the **Property Pages** dialog for your project. Expand **Configuration Properties**, **C/C++**, **Preprocessor**. In **Preprocessor Definitions**, add `_CRT_NONSTDC_NO_WARNINGS`. Choose **OK** to save, and then rebuild your project. To define this macro only in specific source files, add the line `#define _CRT_NONSTDC_NO_WARNINGS` before any line that includes a header file.  
  
## Unsafe CRT Library functions  
  
 **This function or variable may be unsafe. Consider using**  *safe_version* **instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS.  See online help for details.**  
  
 Microsoft has deprecated some CRT and C++ Standard Library functions and globals in favor of more secure versions. In most cases, the deprecated functions allow unchecked read or write access to buffers, which can lead to serious security issues. The compiler issues a deprecation warning for these functions, and suggests the preferred function.  
  
 To fix this issue, we recommend you use the function or variable *safe_version* instead. If you have verified that it's not possible for a buffer overwrite or overread to occur in your code, and you cannot change the code for portability reasons, you can turn off the warning.  
   
 To turn off deprecation warnings for these functions in the CRT, define **_CRT_SECURE_NO_WARNINGS**. To turn off warnings about deprecated global variables, define **_CRT_SECURE_NO_WARNINGS_GLOBALS**. For more information about these deprecated functions and globals, see [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md) and [Safe Libraries: C++ Standard Library](../../standard-library/safe-libraries-cpp-standard-library.md).  
  
## Unsafe Standard Library functions  
  
 **'std::** *function_name* **::\_Unchecked\_iterators::\_Deprecate' Call to std::** *function_name* **with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'**  
  
This warning appears in debug builds because certain C++ Standard Library template functions do not check parameters for correctness. In most cases, this is because not enough information is available to the function to check container bounds, or because iterators may be used incorrectly with the function. This warning helps you identify these function uses, because they may be a source of security holes in your program. For more information, see [Checked Iterators](../../standard-library/checked-iterators.md).  
  
For example, this warning appears in Debug mode if you pass an element pointer to `std::copy` instead of a plain array. To fix this issue, use an appropriately declared array, so the library can check the array extents and do bounds checking.  
  
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
  
If you have verified that your code cannot have a buffer overrun error in the Standard Library functions that trigger this warning, you may want to turn this warning off. To turn off warnings for these functions, define **_SCL_SECURE_NO_WARNINGS**.   
  
## Example: Checked iterators enabled  
  
C4996 can also occur if you do not use a checked iterator when compiling with `_ITERATOR_DEBUG_LEVEL` defined as 1 or 2. It is set to 2 by default for debug mode builds, and to 0 for retail builds. See [Checked Iterators](../../standard-library/checked-iterators.md) for more information.  
  
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
  
C4996 can also occur if you use MFC or ATL functions that were deprecated for security reasons.  
  
To fix this issue, we strongly recommend you change your code to use updated functions instead.  
  
For information on how to suppress these warnings, see [_AFX_SECURE_NO_WARNINGS](../../mfc/reference/diagnostic-services.md#afx_secure_no_warnings) and [_ATL_SECURE_NO_WARNINGS](http://msdn.microsoft.com/Library/587d29d8-a75a-44a3-bec8-f724087e5e73).  
  
## Obsolete CRT functions and variables  
  
**This function or variable has been superceded by newer library or operating system functionality. Consider using** *new_item* **instead. See online help for details.**  
  
Some library functions and global variables are deprecated as obsolete. These functions and variables may be removed in a future version of the library. The compiler issues a deprecation warning for these items, and suggests the preferred alternative.  
  
To fix this issue, we recommend you change your code to use the suggested function or variable.  
  
To turn off deprecation warnings for these items, define **_CRT_OBSOLETE_NO_WARNINGS**. For more information, see the documentation for the deprecated function or variable.  
  
## Example: Marshalling errors in CLR code  
  
C4996 can also occur when you use the CLR marshaling library. In this case C4996 is an error, not a warning. This error occurs when you use [marshal_as](../../dotnet/marshal-as.md) to convert between two data types that require a [marshal_context Class](../../dotnet/marshal-context-class.md). You can also receive this error when the marshaling library does not support a conversion. For more information about the marshaling library, see [Overview of Marshaling in C++](../../dotnet/overview-of-marshaling-in-cpp.md).  
  
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
  
You can use the deprecated attribute in your own code to warn callers when you no longer recommend use of certain functions. In this example, C4996 is generated for the line on which the deprecated function is declared, and for the line on which the function is used.  
  
```cpp  
// C4996.cpp  
// compile with: /W3  
// C4996 warning expected  
#include <stdio.h>  
  
// #pragma warning(disable : 4996)  
void func1(void) {  
   printf_s("\nIn func1");  
}  
  
__declspec(deprecated) void func1(int) {  
   printf_s("\nIn func2");  
}  
  
int main() {  
   func1();  
   func1(1);    // C4996  
}  
```  
  
