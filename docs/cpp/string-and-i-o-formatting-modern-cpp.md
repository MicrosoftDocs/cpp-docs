---
title: "String and I-O Formatting (Modern C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 3954e8de-a59b-4175-89c9-4ee842ab89ed
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
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
# String and I/O Formatting (Modern C++)
C++ [iostreams](../standard-library/iostream.md) are capable of formatted string I/O. For example, the following code shows how to set cout to format an integer to output in hexadecimal, first saving off the current state and re-setting afterwards, because once state formatting is passed to cout, it stays that way until changed, not just for the one line of code.  
  
```fortran  
#include <iostream>  
#include <iomanip>  
  
using namespace std;  
  
int main()   
{  
    ios state(nullptr);  
  
    cout << "The answer in decimal is: " << 42 << endl;  
  
    state.copyfmt(cout); // save current formatting  
    cout << "In hex: 0x" // now load up a bunch of formatting modifiers  
        << hex   
        << uppercase   
        << setw(8)   
        << setfill('0')   
        << 42            // the actual value we wanted to print out  
        << endl;  
    cout.copyfmt(state); // restore previous formatting  
}  
  
```  
  
 This can be entirely too cumbersome in many cases. As an alternative, you can use Boost.Format from the Boost C++ libraries, even though it’s nonstandard. You can download any Boost library from the [Boost](http://www.boost.org/) website.  
  
 Some advantages of Boost.Format are:  
  
-   Safe: Type-safe, and throws an exception for errors—for example, the specification of too few or too many items.  
  
-   Extensible: Works for any type that can be streamed.  
  
-   Convenient: Standard Posix and similar format strings.  
  
 Although Boost.Format is built on C++ [iostreams](../standard-library/iostream-programming.md), which are safe and extensible, they aren't performance-optimized. When you require performance optimization, consider C [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) and [sprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md), which are fast and easy to use. However, they are not extensible or safe from vulnerabilities. (Safe versions exist, but they incur a slight performance penalty. For more information, see [printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md) and [sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)).  
  
 The following code demonstrates some of the Boost formatting features.  
  
```cpp  
    string s = str( format("%2% %2% %1%\n") % "world" % "hello" );  
    // s contains "hello hello world"    
  
    for( auto i = 0; i < names.size(); ++i )  
        cout << format("%1% %2% %|40t|%3%\n") % first[i] % last[i] % tel[i];  
    // Georges Benjamin Clemenceau             +33 (0) 123 456 789  
    // Jean de Lattre de Tassigny              +33 (0) 987 654 321  
  
```  
  
## See Also  
 [Welcome Back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [C++ Standard Library](../standard-library/cpp-standard-library-reference.md)   
 [\<iostream>](../standard-library/iostream.md)   
 [\<limits>](../standard-library/limits.md)   
 [\<iomanip>](../standard-library/iomanip.md)