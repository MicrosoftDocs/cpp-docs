---
title: "Algorithms (Modern C++)"
ms.date: "11/04/2016"
ms.topic: "conceptual"
ms.assetid: 6f758d3c-a7c7-4a50-92bb-97b2f6d4ab27
---
# Algorithms (Modern C++)

For modern C++ programming, we recommend that you use the algorithms in the [C++ Standard Library](../standard-library/cpp-standard-library-reference.md). Here are some important examples:

- **for_each**, which is the default traversal algorithm. (Also **transform** for not-in-place semantics.)

- **find_if**, which is the default search algorithm.

- **sort**, **lower_bound**, and the other default sorting and searching algorithms.

To write a comparator, use strict **<** and use *named lambdas* when you can.

```cpp
auto comp = [](const widget& w1, const widget& w2)
     { return w1.weight() < w2.weight(); }

sort( v.begin(), v.end(), comp );

auto i = lower_bound( v.begin(), v.end(), comp );
```

## Loops

When possible, use range-based **for** loops or algorithm calls, or both, instead of hand-written loops. **copy**, **transform**, **count_if**, **remove_if**, and others like them are much better than handwritten loops because their intent is obvious and they make it easier to write bug-free code. Also, many C++ Standard Library algorithms have implementation optimizations that make them more efficient.

Instead of old C++ like this:

```cpp
for ( auto i = strings.begin(); i != strings.end(); ++i ) {
    /* ... */
}

auto i = v.begin();

for ( ; i != v.end(); ++i ) {
    if (*i > x && *i < y) break;
}
```

Use modern C++ like this:

```cpp
for_each( begin(strings), end(strings), [](string& s) {
  // ...
} );

auto i = find_if( begin(v), end(v),  [=](int i) { return i > x && i < y; } );
```

### Range-based for loops

The range-based **for** loop is a C++11 language feature, not a C++ Standard Library algorithm. But it deserves mention in this discussion about loops. Range-based **for** loops are an extension of the **for** keyword and provide a convenient and efficient way to write loops that iterate over a range of values. C++ Standard Library containers, strings, and arrays are ready-made for range-based **for** loops. To enable this new iteration syntax for your user-defined type, add the following support:

- A `begin` method that returns an iterator to the beginning of the structure and an `end` method that returns an iterator to the end of the structure.

- Support in the iterator for these methods: **operator**<strong>\*</strong>, **operator!=**, and **operator++** (prefix version).

These methods can be either members or stand-alone functions.

## Random Numbers

It's no secret that the old CRT `rand()` function has many flaws, which have been discussed at length in the C++ community. In modern C++, you don't have to deal with those shortcomings—nor do you have to invent your own uniformly distributed random number generator—because the tools for quickly and easily creating them are available in the C++ Standard Library, as shown in [\<random>](../standard-library/random.md).

## See also

- [Welcome Back to C++ (Modern C++)](../cpp/welcome-back-to-cpp-modern-cpp.md)
- [C++ Language Reference](../cpp/cpp-language-reference.md)
- [C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
