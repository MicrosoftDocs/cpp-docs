---
description: "Learn more about: hash&lt;string_view&gt; Specialization"
title: "hash&lt;string_view&gt; Specialization"
ms.date: "04/19/2019"
f1_keywords: ["xstring/basic_string_view::hash"]
helpviewer_keywords: ["std::basic_string_view::hash"]
---
# hash&lt;string_view&gt; Specialization

A template specialization that produces a hash value given a string_view.

```cpp
template <class CharType, class Traits>
struct hash<basic_string_view<CharType, Traits>>
{
    typedef basic_string_view<CharType, Traits> argument_type;
    typedef size_t result_type;

    size_t operator()(const basic_string_view<CharType, Traits>) const
        noexcept;
};
```

### Remarks

The hash of a string_view equals the hash of the underlying string object.

### Example

```cpp
//compile with: /std:c++17
#include <string>
#include <string_view>
#include <iostream>

using namespace std;

int main()
{
    string_view sv{ "Hello world" };
    string s{ "Hello world" };
    cout << boolalpha << (hash<string_view>{}(sv)
        == hash<string>{}(s)); // true
}
```
