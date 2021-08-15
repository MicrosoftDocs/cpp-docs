---
title: "C++ standard library header files"
description: "C++ standard library header files, categorized"
ms.date: "08/31/2020"
helpviewer_keywords: ["header files, C++ Standard Library", "C++ Standard Library, header files"]
ms.assetid: e7bf497a-0f63-48d0-9b54-cb0eef4073c4
---
# C++ standard library header files

Header files for the C++ standard library and extensions, by category.

## Headers by category

::: moniker range=">=msvc-150"

| Category | Headers |
| - | - |
| [Algorithms](./algorithms.md) | [`<algorithm>`](algorithm.md), [`<cstdlib>`](cstdlib.md), [`<numeric>`](numeric.md) |
| Atomic operations |  [`<atomic>`](atomic.md)<sup>11</sup> |
| C library wrappers | [`<cassert>`](cassert.md), [`<ccomplex>`](ccomplex.md)<sup>11 a b</sup>, [`<cctype>`](cctype.md), [`<cerrno>`](cerrno.md), [`<cfenv>`](cfenv.md)<sup>11</sup>, [`<cfloat>`](cfloat.md), [`<cinttypes>`](cinttypes.md)<sup>11</sup>, [`<ciso646>`](ciso646.md)<sup>b</sup>, [`<climits>`](climits.md), [`<clocale>`](clocale.md), [`<cmath>`](cmath.md), [`<csetjmp>`](csetjmp.md), [`<csignal>`](csignal.md), [`<cstdalign>`](cstdalign.md)<sup>11 a b</sup>, [`<cstdarg>`](cstdarg.md), [`<cstdbool>`](cstdbool.md)<sup>11 a b</sup>, [`<cstddef>`](cstddef.md), [`<cstdint>`](cstdint.md)<sup>11</sup>, [`<cstdio>`](cstdio.md), [`<cstdlib>`](cstdlib.md), [`<cstring>`](cstring.md), [`<ctgmath>`](ctgmath.md)<sup>11 a b</sup>, [`<ctime>`](ctime.md), [`<cuchar>`](cuchar.md)<sup>11</sup>, [`<cwchar>`](cwchar.md), [`<cwctype>`](cwctype.md) |
| Concepts | `<concepts>`<sup>20</sup> |
| [Containers](./stl-containers.md) | |
| Sequence containers | [`<array>`](array.md)<sup>11</sup>, [`<deque>`](deque.md), [`<forward_list>`](forward-list.md)<sup>11</sup>, [`<list>`](list.md), [`<vector>`](vector.md) |
| Ordered associative containers| [`<map>`](map.md), [`<set>`](set.md) |
| Unordered associative containers | [`<unordered_map>`](unordered-map.md)<sup>11</sup>, [`<unordered_set>`](unordered-set.md)<sup>11</sup> |
| Container adaptors | [`<queue>`](queue.md), [`<stack>`](stack.md) |
| Container views | [`<span>`](span.md)<sup>20</sup> |
| [Errors and exception handling](../cpp/errors-and-exception-handling-modern-cpp.md) | [`<cassert>`](cassert.md), [`<exception>`](exception.md), [`<stdexcept>`](stdexcept.md), [`<system_error>`](system-error.md)<sup>11</sup> |
| General utilities | `<any>`<sup>17</sup>, [`<bit>`](bit.md)<sup>20</sup>, [`<bitset>`](bitset.md), [`<cstdlib>`](cstdlib.md), `<execution>`<sup>17</sup>, [`<functional>`](functional.md), [`<memory>`](memory.md), `<memory_resource>`<sup>17</sup>, `<optional>`<sup>17</sup>, [`<ratio>`](ratio.md)<sup>11</sup>, [`<scoped_allocator>`](scoped-allocator.md)<sup>11</sup>, [`<tuple>`](tuple.md)<sup>11</sup>, [`<type_traits>`](type-traits.md)<sup>11</sup>, [`<typeindex>`](typeindex.md)<sup>11</sup>, [`<utility>`](utility.md), `<variant>`<sup>17</sup> |
| [I/O and formatting](../text/string-and-i-o-formatting-modern-cpp.md) | [`<cinttypes>`](cinttypes.md)<sup>11</sup>, [`<cstdio>`](cstdio.md), [`<filesystem>`](filesystem.md)<sup>17</sup>, [`<fstream>`](fstream.md), [`<iomanip>`](iomanip.md), [`<ios>`](ios.md), [`<iosfwd>`](iosfwd.md), [`<iostream>`](iostream.md), [`<istream>`](istream.md), [`<ostream>`](ostream.md), [`<sstream>`](sstream.md), [`<streambuf>`](streambuf.md), [`<strstream>`](strstream.md)<sup>c</sup>, `<syncstream>`<sup>20</sup> |
| Iterators | [`<iterator>`](iterator.md) |
| Language support | [`<cfloat>`](cfloat.md), [`<climits>`](climits.md), [`<codecvt>`](codecvt.md)<sup>11 a</sup>, `<compare>`<sup>20</sup>, `<contract>`<sup>20</sup>, `<coroutine>`<sup>20</sup>, [`<csetjmp>`](csetjmp.md), [`<csignal>`](csignal.md), [`<cstdarg>`](cstdarg.md), [`<cstddef>`](cstddef.md), [`<cstdint>`](cstdint.md)<sup>11</sup>, [`<cstdlib>`](cstdlib.md), [`<exception>`](exception.md), [`<initializer_list>`](initializer-list.md)<sup>11</sup>, [`<limits>`](limits.md), [`<new>`](new.md), [`<typeinfo>`](typeinfo.md), `<version>`<sup>20</sup> |
| Localization | [`<clocale>`](clocale.md), [`<codecvt>`](codecvt.md)<sup>11 a</sup>, [`<cvt/wbuffer>`](cvt-wbuffer.md), [`<cvt/wstring>`](cvt-wstring.md), [`<locale>`](locale.md) |
| Math and numerics | `<bit>`<sup>20</sup>, [`<cfenv>`](cfenv.md)<sup>11</sup>, [`<cmath>`](cmath.md), [`<complex>`](complex.md), [`<cstdlib>`](cstdlib.md), [`<limits>`](limits.md), [`<numeric>`](numeric.md), [`<random>`](random.md)<sup>11</sup>, [`<ratio>`](ratio.md)<sup>11</sup>, [`<valarray>`](valarray.md) |
| [Memory management](../cpp/smart-pointers-modern-cpp.md) | [`<allocators>`](allocators-header.md), [`<memory>`](memory.md), `<memory_resource>`<sup>17</sup>, [`<new>`](new.md), [`<scoped_allocator>`](scoped-allocator.md)<sup>11</sup> |
| Multithreading | [`<atomic>`](atomic.md)<sup>11</sup>, [`<condition_variable>`](condition-variable.md)<sup>11</sup>, [`<future>`](future.md)<sup>11</sup>, [`<mutex>`](mutex.md)<sup>11</sup>, [`<shared_mutex>`](shared-mutex.md)<sup>14</sup>, [`<thread>`](thread.md)<sup>11</sup> |
| Ranges | `<ranges>`<sup>20</sup> |
| Regular expressions | [`<regex>`](regex.md)<sup>11</sup> |
| Strings and character data | [`<charconv>`](charconv.md)<sup>17</sup>, [`<cctype>`](cctype.md), [`<cstdlib>`](cstdlib.md), [`<cstring>`](cstring.md), [`<cuchar>`](cuchar.md)<sup>11</sup>, [`<cwchar>`](cwchar.md), [`<cwctype>`](cwctype.md), [`<regex>`](regex.md)<sup>11</sup>, [`<string>`](string.md), [`<string_view>`](string-view.md)<sup>17</sup> |
| Time | [`<chrono>`](chrono.md)<sup>11</sup>, [`<ctime>`](ctime.md) |

<sup>11</sup> Added in the C++11 standard.\
<sup>14</sup> Added in the C++14 standard.\
<sup>17</sup> Added in the C++17 standard.\
<sup>20</sup> Added in the draft C++20 standard.\
<sup>a</sup> Deprecated in the C++17 standard.\
<sup>b</sup> Removed in the draft C++20 standard.\
<sup>c</sup> Deprecated in the C++98 standard.

::: moniker-end

::: moniker range="msvc-140"

|Category|Headers|
|-|-|
|[Algorithms](./algorithms.md)|[`<algorithm>`](algorithm.md)|
|C library wrappers|[`<cassert>`](cassert.md), [`<cctype>`](cctype.md), [`<cerrno>`](cerrno.md), [`<cfenv>`](cfenv.md), [`<cfloat>`](cfloat.md), [`<cinttypes>`](cinttypes.md), [`<ciso646>`](ciso646.md), [`<climits>`](climits.md), [`<clocale>`](clocale.md), [`<cmath>`](cmath.md), [`<csetjmp>`](csetjmp.md), [`<csignal>`](csignal.md), [`<cstdarg>`](cstdarg.md), [`<cstdbool>`](cstdbool.md), [`<cstddef>`](cstddef.md), [`<cstdint>`](cstdint.md), [`<cstdio>`](cstdio.md), [`<cstdlib>`](cstdlib.md), [`<cstring>`](cstring.md), [`<ctgmath>`](ctgmath.md), [`<ctime>`](ctime.md), [`<cwchar>`](cwchar.md), [`<cwctype>`](cwctype.md)|
|[Containers](./stl-containers.md)||
|Sequence containers|[`<array>`](array.md), [`<deque>`](deque.md), [`<forward_list>`](forward-list.md), [`<list>`](list.md), [`<vector>`](vector.md)|
|Ordered associative containers| [`<map>`](map.md), [`<set>`](set.md)|
|Unordered associative containers|[`<unordered_map>`](unordered-map.md), [`<unordered_set>`](unordered-set.md)|
|Adaptor containers|[`<queue>`](queue.md), [`<stack>`](stack.md)|
|[Errors and exception handling](../cpp/errors-and-exception-handling-modern-cpp.md)|[`<exception>`](exception.md), [`<stdexcept>`](stdexcept.md), [`<system_error>`](system-error.md)|
|[I/O and formatting](../text/string-and-i-o-formatting-modern-cpp.md)|[`<filesystem>`](filesystem.md), [`<fstream>`](fstream.md), [`<iomanip>`](iomanip.md), [`<ios>`](ios.md), [`<iosfwd>`](iosfwd.md), [`<iostream>`](iostream.md), [`<istream>`](istream.md), [`<ostream>`](ostream.md), [`<sstream>`](sstream.md), [`<streambuf>`](streambuf.md), [`<strstream>`](strstream.md)|
|Iterators|[`<iterator>`](iterator.md)|
|Localization|[`<codecvt>`](codecvt.md), [`<cvt/wbuffer>`](cvt-wbuffer.md), [`<cvt/wstring>`](cvt-wstring.md), [`<locale>`](locale.md)|
|Math and numerics|[`<complex>`](complex.md), [`<limits>`](limits.md), [`<numeric>`](numeric.md), [`<random>`](random.md), [`<ratio>`](ratio.md), [`<valarray>`](valarray.md)|
|[Memory Management](../cpp/smart-pointers-modern-cpp.md)|[`<allocators>`](allocators-header.md), [`<memory>`](memory.md), [`<new>`](new.md), [`<scoped_allocator>`](scoped-allocator.md)|
|Multithreading|[`<atomic>`](atomic.md), [`<condition_variable>`](condition-variable.md), [`<future>`](future.md), [`<mutex>`](mutex.md), [`<shared_mutex>`](shared-mutex.md), [`<thread>`](thread.md)|
|Other utilities|[`<bitset>`](bitset.md), [`<chrono>`](chrono.md), [`<functional>`](functional.md), [`<initializer_list>`](initializer-list.md), [`<tuple>`](tuple.md), [`<type_traits>`](type-traits.md), [`<typeinfo>`](typeinfo.md), [`<typeindex>`](typeindex.md), [`<utility>`](utility.md)|
|Strings and character data|[`<regex>`](regex.md), [`<string>`](string.md), [`<string_view>`](string-view.md)|

::: moniker-end

## See also

[Using C++ library headers](using-cpp-library-headers.md)\
[C++ standard library](cpp-standard-library-reference.md)
