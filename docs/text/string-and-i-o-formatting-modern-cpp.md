---
title: "String and I/O Formatting (Modern C++)"
description: "Choices for formatted string I/O available in modern C++."
ms.date: "05/30/2019"
ms.topic: "conceptual"
ms.assetid: 3954e8de-a59b-4175-89c9-4ee842ab89ed
---
# String and I/O Formatting (Modern C++)

C++ [\<iostream>](../standard-library/iostream.md) classes, functions, and operators support formatted string I/O. For example, the following code shows how to set `cout` to format an integer to output in hexadecimal. First, it saves the current state to reset it afterwards, because once format state is passed to `cout`, it stays that way until changed. It doesn't just apply to the one line of code.

```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios state(nullptr);

    cout << "The answer in decimal is: " << 42 << endl;

    state.copyfmt(cout); // save current formatting
    cout << "In hex: 0x" // now load up a bunch of formatting modifiers
        << hex
        << uppercase
        << setw(8)
        << setfill('0')
        << 42            // the actual value we wanted to print out
        << endl;
    cout.copyfmt(state); // restore previous formatting
}
```

This approach is type-safe and extensible, but it's also complex and verbose.

## Alternative format options

As an alternative, you can use `Boost.Format` from the Boost C++ libraries, even though it's nonstandard. You can download any Boost library from the [Boost](https://www.boost.org/) website.

Some advantages of `Boost.Format` are:

- Safe: Type-safe, and throws an exception for errors, for example, the specification of too few or too many items.

- Extensible: Works for any type that can be streamed.

- Convenient: Standard POSIX and similar format strings.

Although `Boost.Format` is built on C++ [\<iostream>](../standard-library/iostream-programming.md) facilities, which are safe and extensible, they aren't performance-optimized. When you require performance optimization, consider C [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) and [sprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md), which are fast and easy to use. However, they aren't extensible or safe from vulnerabilities. (Safe versions exist, but they incur a slight performance penalty. For more information, see [printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md) and [sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)).

The following code demonstrates some of the Boost formatting features.

```cpp
    string s = str( format("%2% %2% %1%\n") % "world" % "hello" );
    // s contains "hello hello world"

    for( auto i = 0; i < names.size(); ++i )
        cout << format("%1% %2% %|40t|%3%\n") % first[i] % last[i] % tel[i];
    // Georges Benjamin Clemenceau             +33 (0) 123 456 789
    // Jean de Lattre de Tassigny              +33 (0) 987 654 321
```

## See also

[Welcome back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)<br/>
[\<iostream>](../standard-library/iostream.md)<br/>
[\<limits>](../standard-library/limits.md)<br/>
[\<iomanip>](../standard-library/iomanip.md)
