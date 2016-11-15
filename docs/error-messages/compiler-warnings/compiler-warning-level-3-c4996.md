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
  
 This warning or error has several possible meanings.  
  
 `C4996` occurs when the compiler encounters a function or variable that is marked as [deprecated](../../cpp/deprecated-cpp.md). Several functions, member functions, template functions, and global variables in the libraries in Visual Studio are marked as deprecated. These functions may have a different preferred name, may be insecure or have a more secure variant, or may be obsolete. The error message may include a suggested replacement for the deprecated function or global variable. You can turn this warning off with the [warning](../../preprocessor/warning.md) pragma or the **/wd4996** command line option. You can also use preprocessor macros to turn off certain classes of deprecation warnings.  
  
 **The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name:** new_name**. See online help for details.**  
  
 Some POSIX functions in the CRT have been renamed to conform with C99 and C++03 rules for implementation-defined global function names. In most cases, a leading underscore was added to the POSIX function name to create a standard conformant name. The compiler issues a deprecation warning for the original function names, and suggests the preferred name. Only the original names are deprecated, not the functions themselves. To turn off deprecation warnings for these functions, define the preprocessor macro **_CRT_NONSTDC_NO_WARNINGS**. You can define this at the command line by including the option `/D_CRT_NONSTDC_NO_WARNINGS`. To define this macro in Visual Studio, open the **Property Pages** dialog for your project. Expand **Configuration Properties**, **C/C++**, **Preprocessor**. In **Preprocessor Definitions**, add `_CRT_NONSTDC_NO_WARNINGS`. Choose **OK** to save, and then rebuild your project. To define this macro only in specific source files, add the line `#define _CRT_NONSTDC_NO_WARNINGS` before any line that includes a header file.  
  
 **This function or variable may be unsafe. Consider using**  safe_version **instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS.  See online help for details.**  
  
 Some CRT and Standard C++ Library functions and globals have been deprecated in favor of new, more secure functions. The compiler issues a deprecation warning for these functions, and suggests the preferred function. To turn off deprecation warnings for these functions in the CRT, define **_CRT_SECURE_NO_WARNINGS**. To turn off warnings about deprecated global variables, define **_CRT_SECURE_NO_WARNINGS_GLOBALS**. For more information about these deprecated functions and globals, see [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md) and [Safe Libraries: C++ Standard Library](../../standard-library/safe-libraries-cpp-standard-library.md).  
  
 **Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'**  
  
 Certain C++ Standard Library template functions do not check parameters for correctness. This warning helps you identify the use of these functions. To turn off warnings for these functions, define **_SCL_SECURE_NO_WARNINGS**. For more information, see [Checked Iterators](../../standard-library/checked-iterators.md).  
  
 **This function or variable has been superceded by newer library or operating system functionality. Consider using** new_item **instead. See online help for details.**  
  
 Some library functions and global variables are deprecated as obsolete. These functions and variables may be removed in a future version of the library. The compiler issues a deprecation warning for these items, and suggests the preferred alternative. To turn off deprecation warnings for these items, define **_CRT_OBSOLETE_NO_WARNINGS**. For more information, see the documentation for the deprecated function or variable.  
  
 **Various messages in MFC or ATL code**  
  
 `C4996` can also occur if you use MFC or ATL functions that were deprecated for security reasons. To suppress these warnings, see [_AFX_SECURE_NO_WARNINGS](http://msdn.microsoft.com/Library/97dcfd41-1e56-41d5-bf7e-d240b950134b) and [_ATL_SECURE_NO_WARNINGS](http://msdn.microsoft.com/Library/587d29d8-a75a-44a3-bec8-f724087e5e73).  
  
 **Marshalling errors in CLR code**  
  
 `C4996` can also occur when you use the marshaling library. In this case C4996 is an error, not a warning. This error will occur when you use [marshal_as](../../dotnet/marshal-as.md) to convert between two data types that require a [marshal_context Class](../../dotnet/marshal-context-class.md). You will also receive this error when the marshaling library does not support a conversion. For more information about the marshaling library, see [Overview of Marshaling in C++](../../dotnet/overview-of-marshaling-in-cpp.md).  
  
 **Examples that generate C4996**  
  
 In the first example, `C4996` is generated for the line on which the function is declared and for the line on which the function is used.  
  
## Example  
 The following sample generates C4996.  
  
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
   func1(1);  
}  
```  
  
## Example  
 C4996 can also occur if you do not use a checked iterator when compiling with `_ITERATOR_DEBUG_LEVEL` defined (set to 1 by default for debug mode builds).  See [Checked Iterators](../../standard-library/checked-iterators.md) for more information.  
  
 The following STL code example generates C4996.  
  
```cpp  
// C4996_b.cpp  
// compile with: /EHsc /W3 /c  
#define _ITERATOR_DEBUG_LEVEL 1  
  
#include <algorithm>  
#include <iterator>  
  
using namespace std;  
using namespace stdext;  
  
int main() {  
    int a[] = { 1, 2, 3 };  
    int b[] = { 10, 11, 12 };  
    copy(a, a + 3, b + 1);   // C4996  
    // try the following line instead  
    //   copy(a, a + 3, b);  
    copy(a, a + 3, checked_array_iterator<int *>(b, 3));   // OK  
}  
  
```  
  
## Example  
 The following STL code example generates C4996 as a warning. Comments are inline.  
  
```cpp  
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
    // (i.e. an overrun will trigger a debug assertion)  
    vector<int> v2(16);  
    transform(v.begin(), v.end(), v2.begin(), [](int n) { return n * 2; });  
    print("v2: ", v2);  
  
    // OK: back_insert_iterator is marked as checked in debug mode  
    // (i.e. an overrun is impossible)  
    vector<int> v3;  
    transform(v.begin(), v.end(), back_inserter(v3), [](int n) { return n * 3; });  
    print("v3: ", v3);  
  
    // OK: array::iterator is checked in debug mode  
    // (i.e. an overrun will trigger a debug assertion)  
    array<int, 16> a4;  
    transform(v.begin(), v.end(), a4.begin(), [](int n) { return n * 4; });  
    print("a4: ", a4);  
  
    // OK: Raw arrays are checked in debug mode  
    // (i.e. an overrun will trigger a debug assertion)  
    // NOTE: This applies only when raw arrays are given to STL algorithms!  
    int a5[16];  
    transform(v.begin(), v.end(), a5, [](int n) { return n * 5; });  
    print("a5: ", a5);  
  
    // WARNING C4996: Pointers cannot be checked in debug mode  
    // (i.e. an overrun will trigger undefined behavior)  
    int a6[16];  
    int * p6 = a6;  
    transform(v.begin(), v.end(), p6, [](int n) { return n * 6; });  
    print("a6: ", a6);  
  
    // OK: stdext::checked_array_iterator is checked in debug mode  
    // (i.e. an overrun will trigger a debug assertion)  
    int a7[16];  
    int * p7 = a7;  
    transform(v.begin(), v.end(), stdext::make_checked_array_iterator(p7, 16), [](int n) { return n * 7; });  
    print("a7: ", a7);  
  
    // WARNING SILENCED: stdext::unchecked_array_iterator is marked as checked in debug mode  
    // (i.e. it performs no checking, so an overrun will trigger undefined behavior)  
    int a8[16];  
    int * p8 = a8;  
    transform(v.begin(), v.end(), stdext::make_unchecked_array_iterator(p8), [](int n) { return n * 8; });  
    print("a8: ", a8);  
}  
  
```  
  
## Example  
 The following sample generates C4996 because the marshaling library requires a context to convert from a `System::String` to a `const char *`.  
  
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