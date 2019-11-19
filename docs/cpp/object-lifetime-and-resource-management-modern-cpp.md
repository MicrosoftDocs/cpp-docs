---
title: "Object lifetime and resource management (RAII)"
description: "Follow the principle of RAII in modern C++ to avoid resource leaks."
ms.date: "11/19/2019"
ms.topic: "conceptual"
ms.assetid: 8aa0e1a1-e04d-46b1-acca-1d548490700f
---
# Object lifetime and resource management (RAII)

Unlike managed languages, C++ has no garbage collection process that releases heap memory and other resources as a program runs. A program is responsible for returning all acquired resources to the operating system. Failure to release a resource results in a *leak* and renders the resource unavailable to other programs. Memory leaks in particular are a common cause of bugs in C-style programming. Modern C++ avoids using heap memory as much as possible by declaring objects on the stack. When an resource is too large for the stack, then it should be *owned* by an object that is responsible for releasing the resource in its destructor. The principle that *objects own resources* is also known as "resource acquisition is initialization" or "RAII". The owning object itself is declared on the stack, so that when the goes out of scope, its destructor is automatically invoked. In this way, garbage collection in C++ is closely related to object lifetime and is deterministic. A resource is always released at a known point in the program, which you can control. Only deterministic destructors like those in C++ can handle memory and non-memory resources equally. 

The following example shows a simple object `w`. It is declared on the stack at function scope, and is destroyed at the end of the function block. The object `w` owns no *resources* (such as heap-allocated memory). Its only member `g` is itself declared on the stack and simply goes out of scope along with `w`. Therefore, no special code is needed in the `widget` destructor.

```cpp
class widget {
private:
    gadget g;   // lifetime automatically tied to enclosing object
public:
    void draw();
};

void functionUsingWidget () {
    widget w;   // lifetime automatically tied to enclosing scope
                // constructs w, including the w.g gadget member
    // ...
    w.draw();
    // ...
} // automatic destruction and deallocation for w and w.g
  // automatic exception safety,
  // as if "finally { w.dispose(); w.g.dispose(); }"
```

In the following example, `w` owns a memory resource and therefore must have code in its destructor to delete the memory.
 
```cpp
class widget
{
private:
    int* data;
public:
    widget(const int size) { data = new int[size]; } // acquire
    ~widget() { delete[] data; } // release
    void do_something() {}
};

void functionUsingWidget() {
    widget w(1000000);   // lifetime automatically tied to enclosing scope
                        // constructs w, including the w.data member
    w.do_something();

} // automatic destruction and deallocation for w and w.data

```

Since C++11, there is a better way to write the previous example, by using a smart pointer from the Standard Library. The smart pointer handles the allocation and deletion of the memory it owns. This eliminates the need for an explicit destructor in the `widget` class.

```cpp
#include <memory>
class widget
{
private:
    std::unique_ptr<int> data;
public:
    widget(const int size) { data = std::make_unique<int>(size); }
    void do_something() {}
};

void functionUsingWidget() {
    widget w(1000000);   // lifetime automatically tied to enclosing scope
                // constructs w, including the w.data gadget member
    // ...
    w.do_something();
    // ...
} // automatic destruction and deallocation for w and w.data

```

By using smart pointers for memory allocation, and handling other resources such as file handles, sockets, and so on in a similar way in your own classes, you can eliminate the potential for memory leaks. For more information, see [Smart pointers](smart-pointers-modern-cpp.md).

C++ is designed to ensure that objects are destroyed at the correct times, that is, as blocks are exited, in reverse order of construction. When an object is destroyed, its bases and members are destroyed in a particular order. When objects are declared outside of any block, at global scope, problems can arise. When the constructor of a global object throws an exception, typically, the app faults in a way that can be difficult to debug.

## See also

[Welcome Back to C++ (Modern C++)](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
