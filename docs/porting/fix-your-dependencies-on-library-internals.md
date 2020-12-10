---
description: "Learn more about: Fix your dependencies on C++ library internals"
title: "Fix your dependencies on C++ library internals"
ms.date: "05/24/2017"
helpviewer_keywords: ["library internals in an upgraded Visual Studio C++ project", "_Hash_seq in an upgraded Visual Studio C++ project"]
ms.assetid: 493e0452-6ecb-4edc-ae20-b6fce2d7d3c5
---
# Fix your dependencies on C++ library internals

Microsoft has published the source code for the Standard Library, most of the C Runtime Library, and other Microsoft libraries in many versions of Visual Studio. The intent is to help you understand library behavior and to debug your code. One side-effect of publishing the library source code is that some internal values, data structures, and functions are exposed, even though they are not part of the library interface. They usually have names that begin with two underscores, or an underscore followed by a capital letter, names that the C++ Standard reserves to implementations. These values, structures, and functions are implementation details that may change as the libraries evolve over time, and so we strongly recommend against taking any dependencies on them. If you do, you risk non-portable code and issues when you try to migrate your code to new versions of the libraries.

In most cases, the What's New or Breaking Changes document for each release of Visual Studio doesn't mention changes to library internals. After all, you're not supposed to be affected by these implementation details. However, sometimes the temptation to use some code you can see inside the library is too great. This topic discusses dependencies on CRT or Standard Library internals you may have relied on, and how to update your code to remove those dependencies so you can make it more portable or migrate to new versions of the library.

## _Hash_seq

The internal hash function `std::_Hash_seq(const unsigned char *, size_t)`, used to implement `std::hash` on some string types, was visible in recent versions of the Standard Library. This function implemented an [FNV-1a hash]( https://en.wikipedia.org/wiki/Fowler%E2%80%93Noll%E2%80%93Vo_hash_function) on a character sequence.

To remove this dependency, you have a couple of options.

- If your intent is to put a `const char *` sequence into an unordered container by using the same hash code machinery as `basic_string`, you can do that by using the `std::hash` template overload that takes a `std::string_view`, which returns that hash code in a portable way. The string library code may or may not rely on use of an FNV-1a hash in the future, so this is the best way to avoid a dependency on a particular hash algorithm.

- If your intent is to generate an FNV-1a hash over arbitrary memory, we've made that code available on GitHub in the [VCSamples]( https://github.com/Microsoft/vcsamples) repository in a stand-alone header file, [fnv1a.hpp](https://github.com/Microsoft/VCSamples/tree/master/VC2015Samples/_Hash_seq), under an [MIT license](https://github.com/Microsoft/VCSamples/blob/master/license.txt). We've also included a copy here for your convenience. You can copy this code into a header file, add the header to any affected code, and then find and replace `_Hash_seq` by `fnv1a_hash_bytes`. You'll get identical behavior to the internal implementation in `_Hash_seq`.

```cpp
/*
VCSamples
Copyright (c) Microsoft Corporation
All rights reserved.
MIT License
Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include <stddef.h>

inline size_t fnv1a_hash_bytes(const unsigned char * first, size_t count) {
#if defined(_WIN64)
    static_assert(sizeof(size_t) == 8, "This code is for 64-bit size_t.");
    const size_t fnv_offset_basis = 14695981039346656037ULL;
    const size_t fnv_prime = 1099511628211ULL;
#else /* defined(_WIN64) */
    static_assert(sizeof(size_t) == 4, "This code is for 32-bit size_t.");
    const size_t fnv_offset_basis = 2166136261U;
    const size_t fnv_prime = 16777619U;
#endif /* defined(_WIN64) */

    size_t result = fnv_offset_basis;
    for (size_t next = 0; next < count; ++next)
    {
        // fold in another byte
        result ^= (size_t)first[next];
        result *= fnv_prime;
    }
    return (result);
}
```

## See also

[Upgrading projects from earlier versions of Visual C++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)<br/>
[Overview of potential upgrade issues (Visual C++)](overview-of-potential-upgrade-issues-visual-cpp.md)<br/>
[Upgrade your code to the Universal CRT](upgrade-your-code-to-the-universal-crt.md)
