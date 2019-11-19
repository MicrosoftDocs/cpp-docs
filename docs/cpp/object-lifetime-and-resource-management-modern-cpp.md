---
title: "Object Lifetime And Resource Management (Modern C++)"
ms.date: "11/04/2016"
ms.topic: "conceptual"
ms.assetid: 8aa0e1a1-e04d-46b1-acca-1d548490700f
---
# Object Lifetime And Resource Management (Modern C++)

Unlike managed languages, C++ has no garbage collection (GC) process that releases heap memory and other resources as a program runs. In modern C++, all resources and memory that a program acquires should have an object that owns them. An owning object is responsible for releasing its resources in its destructor. When an object goes out of scope, the destructor is automatically invoked. If the object owns a resource, then its destructor should return the resource, for example by calling [delete](). In this way, garbage collection in C++ is closely related to object lifetime and is deterministic. A resource is always released at a known point in the program, which you can control. Only deterministic destructors like those in C++ can handle memory and non-memory resources equally. C++ is designed to ensure that objects are destroyed at the correct times, that is, as blocks are exited, in reverse order of construction. When an object is destroyed, its bases and members are destroyed in a particular order.

Use static lifetime sparingly (global static, function local static) because problems can arise. When the constructor of a global object throws an exception, typically, the app faults in a way that can be difficult to debug. Construction order is problematic for static lifetime objects, and is not concurrency-safe. In addition, destruction order can be complex, especially where polymorphism is involved. Even if your object or variable isn’t polymorphic and doesn't have complex construction/destruction ordering, there’s still the issue of thread-safe concurrency. A multithreaded app can’t safely modify the data in static objects without having thread-local storage, resource locks, and other special precautions.

The principle that *objects own resources* is also known as "resource acquisition is initialization" or "RAII". The following example shows a simple object `w`. It is declared on the stack at function scope, and is destroyed at the end of the function block. The object `w` owns no *resources* (such as heap-allocated memory). Its only member `g` is itself declared on the stack and simply goes out of scope along with `w`. Therefore, no special code is needed in the `widget` destructor.

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

By using smart pointers for memory allocation, and handling other resources such as file handles, sockets, and so on in a similar way in your own classes, you can eliminate the potential for memory leaks. For more information, see 



## See also

[Welcome Back to C++ (Modern C++)](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
