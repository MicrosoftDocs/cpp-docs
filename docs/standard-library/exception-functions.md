---
description: "Learn more about: &lt;exception&gt; functions"
title: "&lt;exception&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["exception/std::current_exception", "exception/std::get_terminate", "exception/std::get_unexpected", "exception/std::make_exception_ptr", "exception/std::rethrow_exception", "exception/std::set_terminate", "exception/std::set_unexpected", "exception/std::terminate", "exception/std::uncaught_exception", "exception/std::unexpected"]
ms.assetid: c09ac569-5e35-4fe8-872d-ca5810274dd7
helpviewer_keywords: ["std::current_exception [C++]", "std::get_terminate [C++]", "std::get_unexpected [C++]", "std::make_exception_ptr [C++]", "std::rethrow_exception [C++]", "std::set_terminate [C++]", "std::set_unexpected [C++]", "std::terminate [C++]", "std::uncaught_exception [C++]", "std::unexpected [C++]"]
---
# &lt;exception&gt; functions

## <a name="current_exception"></a> current_exception

Obtains a smart pointer to the current exception.

```cpp
exception_ptr current_exception();
```

### Return Value

An [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) object pointing to the current exception.

### Remarks

Call the `current_exception` function in a catch block. If an exception is in flight and the catch block can catch the exception, the `current_exception` function returns an `exception_ptr` object that references the exception. Otherwise, the function returns a null `exception_ptr` object.

The `current_exception` function captures the exception that is in flight regardless of whether the **`catch`** statement specifies an [exception-declaration](../cpp/try-throw-and-catch-statements-cpp.md) statement.

The destructor for the current exception is called at the end of the **`catch`** block if you do not rethrow the exception. However, even if you call the `current_exception` function in the destructor, the function returns an `exception_ptr` object that references the current exception.

Successive calls to the `current_exception` function return `exception_ptr` objects that refer to different copies of the current exception. Consequently, the objects compare as unequal because they refer to different copies, even though the copies have the same binary value.

## <a name="make_exception_ptr"></a> make_exception_ptr

Creates an [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) object that holds a copy of an exception.

```cpp
template <class E>
    exception_ptr make_exception_ptr(E Except);
```

### Parameters

*Except*\
The class with the exception to copy. Usually, you specify an [exception class](../standard-library/exception-class.md) object as the argument to the `make_exception_ptr` function, although any class object can be the argument.

### Return Value

An [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) object pointing to a copy of the current exception for *Except*.

### Remarks

Calling the `make_exception_ptr` function is equivalent to throwing a C++ exception, catching it in a catch block, and then calling the [current_exception](../standard-library/exception-functions.md#current_exception) function to return an `exception_ptr` object that references the exception. The Microsoft implementation of the `make_exception_ptr` function is more efficient than throwing and then catching an exception.

An application typically does not require the `make_exception_ptr` function, and we discourage its use.

## <a name="rethrow_exception"></a> rethrow_exception

Throws an exception passed as a parameter.

```cpp
void rethrow_exception(exception_ptr P);
```

### Parameters

*P*\
The caught exception to re-throw. If *P* is a null [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr), the function throws [std::bad_exception](../standard-library/bad-exception-class.md).

### Remarks

After you store a caught exception in an `exception_ptr` object, the primary thread can process the object. In your primary thread, call the `rethrow_exception` function together with the `exception_ptr` object as its argument. The `rethrow_exception` function extracts the exception from the `exception_ptr` object and then throws the exception in the context of the primary thread.

## <a name="get_terminate"></a> get_terminate

Obtains the current `terminate_handler` function.

```cpp
terminate_handler get_terminate();
```

## <a name="set_terminate"></a> set_terminate

Establishes a new `terminate_handler` to be called at the termination of the program.

```cpp
terminate_handler set_terminate(terminate_handler fnew) throw();
```

### Parameters

*fnew*\
The function to be called at termination.

### Return Value

The address of the previous function that used to be called at termination.

### Remarks

The function establishes a new [terminate_handler](../standard-library/exception-typedefs.md#terminate_handler) as the function * *fnew*. Thus, *fnew* must not be a null pointer. The function returns the address of the previous terminate handler.

### Example

```cpp
// exception_set_terminate.cpp
// compile with: /EHsc
#include <exception>
#include <iostream>

using namespace std;

void termfunction()
{
    cout << "My terminate function called." << endl;
    abort();
}

int main()
{
    terminate_handler oldHandler = set_terminate(termfunction);

    // Throwing an unhandled exception would also terminate the program
    // or we could explicitly call terminate();

    //throw bad_alloc();
    terminate();
}
```

## <a name="get_unexpected"></a> get_unexpected

Obtains the current `unexpected_handler` function.

```cpp
unexpected_handler get_unexpected();
```

## <a name="rethrow_if_nested"></a> rethrow_if_nested

```cpp
template <class E>
    void rethrow_if_nested(const E& e);
```

### Remarks

If not a polymorphic class type, or if `nested_exception` is inaccessible or ambiguous, there is no effect. Otherwise, performs a dynamic cast.

## <a name="set_unexpected"></a> set_unexpected

Establishes a new `unexpected_handler` to be when an unexpected exception is encountered.

```cpp
unexpected_handler set_unexpected(unexpected_handler fnew) throw();
```

### Parameters

*fnew*\
The function to be called when an unexpected exception is encountered.

### Return Value

The address of the previous `unexpected_handler`.

### Remarks

*fnew* must not be a null pointer.

The C++ Standard requires that `unexpected` is called when a function throws an exception that is not on its throw list. The current implementation does not support this. The following example calls `unexpected` directly, which then calls the `unexpected_handler`.

### Example

```cpp
// exception_set_unexpected.cpp
// compile with: /EHsc
#include <exception>
#include <iostream>

using namespace std;

void uefunction()
{
    cout << "My unhandled exception function called." << endl;
    terminate(); // this is what unexpected() calls by default
}

int main()
{
    unexpected_handler oldHandler = set_unexpected(uefunction);

    unexpected(); // library function to force calling the
                  // current unexpected handler
}
```

## <a name="terminate"></a> terminate

Calls a terminate handler.

```cpp
void terminate();
```

### Remarks

The function calls a terminate handler, a function of type **`void`**. If `terminate` is called directly by the program, the terminate handler is the one most recently set by a call to [set_terminate](../standard-library/exception-functions.md#set_terminate). If `terminate` is called for any of several other reasons during evaluation of a throw expression, the terminate handler is the one in effect immediately after evaluating the throw expression.

A terminate handler may not return to its caller. At program startup, the terminate handler is a function that calls `abort`.

### Example

See [set_unexpected](../standard-library/exception-functions.md#set_unexpected) for an example of the use of `terminate`.

## <a name="throw_with_nested"></a> throw_with_nested

```cpp
template <class T> [[noreturn]]
    void throw_with_nested(T&& t);
```

### Remarks

Throws exception with nested exceptions.

## <a name="uncaught_exception"></a> uncaught_exception

Returns **`true`** only if a thrown exception is being currently processed.

```cpp
bool uncaught_exception();
```

### Return Value

Returns **`true`** after completing evaluation of a throw expression and before completing initialization of the exception declaration in the matching handler or calling [unexpected](../standard-library/exception-functions.md#unexpected) as a result of the throw expression. In particular, `uncaught_exception` will return **`true`** when called from a destructor that is being invoked during an exception unwind. On devices, `uncaught_exception` is only supported on Windows CE 5.00 and higher versions, including Windows Mobile 2005 platforms.

### Example

```cpp
// exception_uncaught_exception.cpp
// compile with: /EHsc
#include <exception>
#include <iostream>
#include <string>

class Test
{
public:
   Test( std::string msg ) : m_msg( msg )
   {
      std::cout << "In Test::Test(\"" << m_msg << "\")" << std::endl;
   }
   ~Test( )
   {
      std::cout << "In Test::~Test(\"" << m_msg << "\")" << std::endl
         << "        std::uncaught_exception( ) = "
         << std::uncaught_exception( )
         << std::endl;
   }
private:
    std::string m_msg;
};

// uncaught_exception will be true in the destructor
// for the object created inside the try block because
// the destructor is being called as part of the unwind.

int main( void )
   {
      Test t1( "outside try block" );
      try
      {
         Test t2( "inside try block" );
         throw 1;
      }
      catch (...) {
   }
}
```

```Output
In Test::Test("outside try block")
In Test::Test("inside try block")
In Test::~Test("inside try block")
        std::uncaught_exception( ) = 1
In Test::~Test("outside try block")
        std::uncaught_exception( ) = 0
```

## <a name="unexpected"></a> unexpected

Calls the unexpected handler.

```cpp
void unexpected();
```

### Remarks

The C++ Standard requires that `unexpected` is called when a function throws an exception that is not on its throw list. The current implementation does not support this. The example calls `unexpected` directly, which calls the unexpected handler.

The function calls an unexpected handler, a function of type **`void`**. If `unexpected` is called directly by the program, the unexpected handler is the one most recently set by a call to [set_unexpected](../standard-library/exception-functions.md#set_unexpected).

An unexpected handler may not return to its caller. It may terminate execution by:

- Throwing an object of a type listed in the exception specification or an object of any type if the unexpected handler is called directly by the program.

- Throwing an object of type [bad_exception](../standard-library/bad-exception-class.md).

- Calling [terminate](../standard-library/exception-functions.md#terminate), `abort` or `exit`.

At program startup, the unexpected handler is a function that calls [terminate](../standard-library/exception-functions.md#terminate).

### Example

See [set_unexpected](../standard-library/exception-functions.md#set_unexpected) for an example of the use of `unexpected`.
