---
description: "Learn more about: Visual C++ What&#39;s New 2003 through 2015"
title: "Visual C++ What&#39;s New 2003 through 2015"
ms.date: "07/02/2019"
ms.assetid: c4afde6f-3d75-40bf-986f-be57e3818e26
---
# Visual C++ What&#39;s New 2003 through 2015

This page gathers all the "What's New" pages for all versions of Visual C++ from Visual Studio 2015 back to 2003. This information is provided as a convenience in case it might be useful when upgrading from earlier versions of Visual Studio.

> [!NOTE]
> For information about the current version of Visual Studio, see [What's new for Visual C++ in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md) and [Conformance Improvements in Visual C++ in Visual Studio](../overview/cpp-conformance-improvements.md).

## What's New for C++ in Visual Studio 2015

In Visual Studio 2015 and later, ongoing improvements to compiler conformance can sometimes change how the compiler understands your existing source code. When this happens, you might encounter new or different errors during your build, or even behavioral differences in code that previously built and seemed to run correctly.

Fortunately, these differences  have little or no impact on most of your source code and when source code or other changes are needed to address these differences,  fixes are usually small and straight-forward. We've included many examples of previously-acceptable source code that might need to be changed *(before)* and the fixes to correct them *(after)*.

Although these differences can affect your source code or other build artifacts, they don't affect binary compatibility between updates to Visual C++ versions. A more-severe kind of change, the  *breaking change* can affect binary compatibility, but these kinds of binary compatibility breaks only occur between major versions of Visual C++. For example, between Visual C++ 2013 and Visual C++ 2015. For information on the breaking changes that occurred between Visual C++ 2013 and Visual C++ 2015, see [Visual C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-2015.md).

- [Conformance Improvements in Visual Studio 2015](#VS_RTM)

- [Conformance Improvements in Visual Studio 2015 Update 1](#VS_Update1)

- [Conformance Improvements in Visual Studio 2015 Update 2](#VS_Update2)

- [Conformance Improvements in Visual Studio 2015 Update 3](#VS_Update3)

### <a name="VS_RTM"></a> Conformance Improvements in Visual Studio 2015

- **/Zc:forScope- option**

   The compiler option `/Zc:forScope-` is deprecated and will be removed in a future release.

   ```output
    Command line warning  D9035: option 'Zc:forScope-' has been deprecated and will be removed in a future release
   ```

   The option was usually used in order to allow nonstandard code that uses loop variables after the point where, according to the standard, they should have gone out of scope. It was only necessary when you are compiling with the `/Za` option, since without `/Za`, using a for loop variable after the end of the loop is always allowed. If you don't care about standards conformance (for example, if your code isn't meant to portable to other compilers), you could turn off the `/Za` option (or set the **Disable Language Extensions** property to **No**). If you do care about writing portable, standards-compliant code, you should rewrite your code so that it conforms to the standard by moving the declaration of such variables to a point outside the loop.

   ```cpp
    // zc_forScope.cpp
    // compile with: /Zc:forScope- /Za
    // C2065 expected
    int main() {
       // Uncomment the following line to resolve.
       // int i;
       for (int i =0; i < 1; i++)
          ;
       i = 20;   // i has already gone out of scope under /Za
    }
   ```

- **Zg compiler option.**

   The `/Zg` compiler option (Generate Function Prototypes) is no longer available. This compiler option was previously deprecated.

- You can no longer run unit tests with C++/CLI from the command-line with mstest.exe. Instead, use vstest.console.exe

- **mutable keyword.**

   The **`mutable`** storage class specifier is no longer allowed in places where previously it compiled without error. Now, the compiler gives error C2071 (illegal storage class). According to the standard, the mutable specifier can be applied only to names of class data members, and cannot be applied to names declared const or static, and cannot be applied to reference members.

   For example, consider the following code:

   ```cpp
    struct S {
        mutable int &r;
    };
   ```

   Previous versions of the Microsoft C++ compiler accepted this, but now the compiler gives the following error:

   ```Output
    error C2071: 'S::r': illegal storage class
   ```

   To fix the error, simply remove the redundant **`mutable`** keyword.

- **char_16_t and char32_t**

   You can no longer use **`char16_t`** or **`char32_t`** as aliases in a typedef, because these types are now treated as built-in. It was common for users and library authors to define **`char16_t`** and **`char32_t`** as aliases of `uint16_t` and `uint32_t`, respectively.

   ```cpp
    #include <cstdint>

    typedef uint16_t char16_t; //C2628
    typedef uint32_t char32_t; //C2628

    int main(int argc, char* argv[])
    {
    uint16_t x = 1; uint32_t y = 2;
    char16_t a = x;
    char32_t b = y;
    return 0;
    }
   ```

   To update your code, remove the **`typedef`** declarations and rename any other identifiers that collide with these names.

- **Non-type template parameters**

   Certain code that involves non-type template parameters is now correctly checked for type compatibility when you provide explicit template arguments. For example, the following code compiled without error in previous versions of Visual C++.

   ```cpp
    struct S1
    {
        void f(int);
        void f(int, int);
    };

    struct S2
    {
        template <class C, void (C::*Function)(int) const> void f() {}
    };

    void f()
    {
        S2 s2;
        s2.f<S1, &S1::f>();
    }
   ```

   The current compiler correctly gives an error, because the template parameter type doesn't match the template argument (the parameter is a pointer to a const member, but the function f is non-const):

   ```Output
    error C2893: Failed to specialize function template 'void S2::f(void)'note: With the following template arguments:note: 'C=S1'note: 'Function=S1::f'
   ```

   To address this error in your code, make sure that the type of the template argument you use matches the declared type of the template parameter.

- **`__declspec(align)`**

   The compiler no longer accepts `__declspec(align)` on functions. This was always ignored, but now it produces a compiler error.

   ```cpp
    error C3323: 'alignas' and '__declspec(align)' are not allowed on function declarations
   ```

   To fix this problem, remove `__declspec(align)` from the function declaration. Since it had no effect, removing it does not change anything.

- **Exception handling**

   There are a couple of changes to exception handling. First, exception objects have to be either copyable or movable. The following code compiled in Visual Studio 2013, but does not compile in Visual Studio 2015:

   ```cpp
    struct S {
    public:
        S();
    private:
        S(const S &);
    };

    int main()
    {
        throw S(); // error
    }
   ```

   The problem is that the copy constructor is private, so the object cannot be copied as happens in the normal course of handling an exception. The same applies when the copy constructor is declared **`explicit`**.

   ```cpp
    struct S {
        S();
        explicit S(const S &);
    };

    int main()
    {
        throw S(); // error
    }
   ```

   To update your code, make sure that the copy constructor for your exception object is public and not marked **`explicit`**.

   Catching an exception by value also requires the exception object to be copyable. The following code compiled in Visual Studio 2013, but does not compile in Visual Studio 2015:

   ```cpp
    struct B {
    public:
        B();
    private:
        B(const B &);
    };

    struct D : public B {
    };

    int main()
    {
        try
        {
        }
        catch (D d) // error
        {
        }
    }
   ```

   You can fix this issue by changing the parameter type for the **`catch`** to a reference.

   ```cpp
    catch(D& d)
    {
    }
   ```

- **String literals followed by macros**

   The compiler now supports user defined literals. As a consequence, string literals followed by macros without any intervening whitespace are interpreted as user-defined literals, which might produce errors or unexpected results. For example, in previous compilers the following code compiled successfully:

   ```cpp
    #define _x "there"
    char* func() {
        return "hello"_x;
    }
    int main()
    {
        char * p = func();
        return 0;
    }
   ```

   The compiler interpreted this as a string literal "hello" followed by a macro, which is expanded "there", and then the two string literals were concatenated into one. In Visual Studio 2015, the compiler interprets this as a user-defined literal, but since there is no matching user-defined literal _x defined, it gives an error.

   ```cpp
    error C3688: invalid literal suffix '_x'; literal operator or literal operator template 'operator ""_x' not found
    note: Did you forget a space between the string literal and the prefix of the following string literal?

   ```

   To fix this problem, add a space between the string literal and the macro.

- **Adjacent string literals**

   Similarly to the previous, due to related changes in string parsing, adjacent string literals (either wide or narrow character string literals) without any whitespace were interpreted as a single concatenated string in previous releases of Visaul C++. In Visual Studio 2015, you must now add whitespace between the two strings. For example, the following code must be changed:

   ```cpp
    char * str = "abc""def";
   ```

   Simply add a space in between the two strings.

   ```cpp
    char * str = "abc" "def";
   ```

- **Placement new and delete**

   A change has been made to the **`delete`** operator in order to bring it into conformance with C++14 standard. Details of the standards change can be found at [C++ Sized Deallocation](https://isocpp.org/files/papers/n3778.html). The changes add a form of the global **`delete`** operator that takes a size parameter. The breaking change is that if you were previously using an operator **`delete`** with the same signature (to correspond with a **placement new** operator), you will receive a compiler error (C2956, which occurs at the point where the **placement new** is used, since that's the position in code where the compiler tries to identify an appropriate matching **`delete`** operator).

   The function `void operator delete(void *, size_t)` was a **placement delete** operator corresponding to the **placement new** function `void * operator new(size_t, size_t)` in C++11. With C++14 sized deallocation, this **`delete`** function is now a *usual deallocation function* (global **`delete`** operator). The standard requires that if the use of a **placement new** looks up a corresponding **`delete`** function and finds a usual deallocation function, the program is ill-formed.

   For example, suppose your code defines both a **placement new** and a **placement delete**:

   ```cpp
    void * operator new(std::size_t, std::size_t);
    void operator delete(void*, std::size_t) noexcept;
   ```

   The problem occurs because of the match in function signatures between a **placement delete** operator you've defined, and the new global sized **`delete`** operator. Consider whether you can use a different type other than `size_t` for any **placement new** and **`delete`** operators.  Note that the type of the `size_t` **`typedef`** is compiler-dependent; it is a **`typedef`** for **`unsigned int`** in Visual C++. A good solution is to use an enumerated type such as this:

   ```cpp
    enum class my_type : size_t {};
   ```

   Then, change your definition of placement **`new`** and **`delete`** to use this type as the second argument instead of `size_t`. You'll also need to update the calls to **placement new** to pass the new type (for example, by using `static_cast<my_type>` to convert from the integer value) and update the definition of **`new`** and **`delete`** to cast back to the integer type. You don't need to use an **`enum`** for this; a class type with a `size_t` member would also work.

   An alternative solution is that you might be able to eliminate the **placement new** altogether. If your code uses **placement new** to implement a memory pool where the placement argument is the size of the object being allocated or deleted, then sized deallocation feature might be suitable to replace your own custom memory pool code, and you can get rid of the placement functions and just use your own two-argument **`delete`** operator instead of the placement functions.

   If you don't want to update your code immediately, you can revert to the old behavior by using the compiler option `/Zc:sizedDealloc-`. If you use this option, the two-argument **`delete`** functions don't exist and won't cause a conflict with your **placement delete** operator.

- **Union data members**

   Data members of unions can no longer have reference types. The following code compiled successfully in Visual Studio 2013, but produces an error in Visual Studio 2015.

   ```cpp
    union U1 {
        const int i;
    };
    union U2 {
       int &i;
    };
    union U3 {
        struct {int &i;};
    };
   ```

   The preceding code produces the following errors:

   ```Output
    test.cpp(67): error C2625: 'U2::i': illegal union member; type 'int &' is reference type
    test.cpp(70): error C2625: 'U3::i': illegal union member; type 'int &' is reference type
   ```

   To address this issue, change reference types either to a pointer or a value. Changing the type to a pointer requires changes in the code that uses the union field. Changing the code to a value would change the data stored in the union, which affects other fields since fields in union types share the same memory. Depending on the size of the value, it might also change the size of the union.

- **Anonymous unions**

   are now more conformant to the standard. Previous versions of the compiler generated an explicit constructor and destructor for anonymous unions. These are deleted in Visual Studio 2015.

   ```cpp
   struct S {
      S();
   };

   union {
      struct {
         S s;
      };
   } u; // C2280
   ```

   The preceding code generates the following error in Visual Studio 2015:

   ```cpp
    error C2280: '<unnamed-type-u>::<unnamed-type-u>(void)': attempting to reference a deleted function
    note: compiler has generated '<unnamed-type-u>::<unnamed-type-u>' here
   ```

   To resolve this issue, provide your own definitions of the constructor and/or destructor.

   ```cpp
    struct S {
       // Provide a default constructor by adding an empty function body.
       S() {}
    };

    union {
       struct {
          S s;
       };
    } u;
   ```

- **Unions with anonymous structs**

   In order to conform with the standard, the runtime behavior has changed for members of anonymous structures in unions. The constructor for anonymous structure members in a union is no longer implicitly called when such a union is created. Also, the destructor for anonymous structure members in a union is no longer implicitly called when the union goes out of scope. Consider the following code, in which a union U contains an anonymous structure that contains a member which is a named structure S that has a destructor.

   ```cpp
    #include <stdio.h>
    struct S {
        S() { printf("Creating S\n"); }
        ~S(){ printf("Destroying S\n"); }
    };
    union U {
        struct {
        S s;
    };
        U() {}
        ~U(){}
    };

    void f()
    {
        U u;
        // Destructor implicitly called here.
    }

    int main()
    {
        f();

        char s[1024];
        printf("Press any key.\n");
        gets_s(s);
        return 0;
    }
   ```

   In Visual Studio 2013, the constructor for S is called when the union is created, and the destructor for S is called when the stack for function f is cleaned up. But in Visual Studio 2015, the constructor and destructor are not called. The compiler gives a warning about this behavior change.

   ```Output
    warning C4587: 'U::s': behavior change: constructor is no longer implicitly calledwarning C4588: 'U::s': behavior change: destructor is no longer implicitly called
   ```

   To restore the original behavior, give the anonymous structure a name. The runtime behavior of non-anonymous structures is the same, regardless of the compiler version.

   ```cpp
    #include <stdio.h>

    struct S {
        S() { printf("Creating S.\n"); }
        ~S() { printf("Destroying S\n"); }
    };
    union U {
        struct {
            S s;
        } namedStruct;
        U() {}
        ~U() {}
    };

    void f()
    {
        U u;
    }

    int main()
    {
        f();

        char s[1024];
        printf("Press any key.\n");
        gets_s(s);
        return 0;
    }
   ```

   Alternatively, try moving the constructor and destructor code into new functions, and add calls to these functions from the constructor and destructor for the union.

   ```cpp
    #include <stdio.h>

    struct S {
        void Create() { printf("Creating S.\n"); }
        void Destroy() { printf("Destroying S\n"); }
    };
    union U {
        struct {
            S s;
        };
        U() { s.Create();  }
        ~U() { s.Destroy(); }
    };

    void f()
    {
        U u;
    }

    int main()
    {
        f();

    char s[1024];
    printf("Press any key.\n");
    gets_s(s);
    return 0;
    }
   ```

- **Template resolution**

   Changes have been made to name resolution for templates. In C++, when considering candidates for the resolution of a name, it can be the case that one or more names under consideration as potential matches produces an invalid template instantiation. These invalid instantiations do not normally cause compiler errors, a principle which is known as SFINAE (Substitution Failure Is Not An Error).

   Now, if SFINAE requires the compiler to instantiate the specialization of a class template, then any errors that occur during this process are compiler errors. In previous versions, the compiler would ignore such errors. For example, consider the following code:

   ```cpp
    #include <type_traits>

    template<typename T>
    struct S
    {
    S() = default;
    S(const S&);
    S(S&&);

    template<typename U, typename = typename std::enable_if<std::is_base_of<T, U>::value>::type>
    S(S<U>&&);
    };

    struct D;

    void f1()
    {
    S<D> s1;
        S<D> s2(s1);
    }

    struct B
    {
    };

    struct D : public B
    {
    };

    void f2()
    {
    S<D> s1;
        S<D> s2(s1);
    }
   ```

   If you compile with the current compiler, you get the following error:

   ```Output
    type_traits(1110): error C2139: 'D': an undefined class is not allowed as an argument to compiler intrinsic type trait '__is_base_of'
    ..\t331.cpp(14): note: see declaration of 'D'
    ..\t331.cpp(10): note: see reference to class template instantiation 'std::is_base_of<T,U>' being compiled
            with
            [
                T=D,
                U=D
            ]
   ```

   This is because at the point of the first invocation of the is_base_of the class 'D' has not yet been defined.

   In this case, the fix is not to use such type traits until the class has been defined. If you move the definitions of B and D to the beginning of the code file, the error is resolved. If the definitions are in header files, check the order of the include statements for the header files to make sure that any class definitions are compiled before the problematic templates are used.

- **Copy constructors**

   In both Visual Studio 2013 and Visual Studio 2015, the compiler generates a copy constructor for a class if that class has a user-defined move constructor but no user-defined copy constructor. In Dev14, this implicitly generated copy constructor is also marked "= delete".

### <a name="VS_Update1"></a> Conformance Improvements in Visual Studio 2015 Update 1

- **Private virtual base classes and indirect inheritance**

   Previous versions of the compiler allowed a derived class to call member functions of its *indirectly-derived* `private virtual` base classes. This old behavior was incorrect and does not conform to the C++ standard. The compiler no longer accepts code written in this way and issues compiler error C2280 as a result.

   ```Output
    error C2280: 'void *S3::__delDtor(unsigned int)': attempting to reference a deleted function
   ```

   Example (before)

   ```cpp
    class base
    {
    protected:
        base();
        ~base();
    };

    class middle: private virtual base {};class top: public virtual middle {};

    void destroy(top *p)
    {
        delete p;  //
    }
   ```

   Example (after)

   ```cpp
    class base;  // as above

    class middle: protected virtual base {};
    class top: public virtual middle {};

    void destroy(top *p)
    {
        delete p;
    }
   ```

  \-or-

   ```cpp
    class base;  // as above

    class middle: private virtual base {};
    class top: public virtual middle, private virtual bottom {};

    void destroy(top *p)
    {
        delete p;
    }
   ```

- **Overloaded operator new and operator delete**

   Previous versions of the compiler allowed non-member **operator new** and non-member **operator delete** to be declared static, and to be declared in namespaces other than the global namespace.  This old behavior created a risk that the program would not call the **`new`** or **`delete`** operator implementation that the programmer intended, resulting in silent bad runtime behavior. The compiler no longer accepts code written in this way and issues compiler error C2323 instead.

   ```Output
    error C2323: 'operator new': non-member operator new or delete functions may not be declared static or in a namespace other than the global namespace.
   ```

   Example (before)

   ```cpp
    static inline void * __cdecl operator new(size_t cb, const std::nothrow_t&)  // error C2323
   ```

   Example (after)

   ```cpp
    void * __cdecl operator new(size_t cb, const std::nothrow_t&)  // removed 'static inline'
   ```

   Additionally, although the compiler doesn't give a specific diagnostic, inline operator new is considered ill-formed.

- **Calling 'operator *type*()' (user-defined conversion) on non-class types**  Previous versions of the compiler allowed 'operator *type*()' to be called on non-class types while silently ignoring it. This old behavior created a risk of silent bad code generation, resulting in unpredictable runtime behavior. The compiler no longer accepts code written in this way and issues compiler error C2228 instead.

   ```Output
    error C2228: left of '.operator type' must have class/struct/union
   ```

   Example (before)

   ```cpp
    typedef int index_t;

    void bounds_check(index_t index);

    void login(int column)
    {
        bounds_check(column.operator index_t());  // error C2228
    }
   ```

   Example (after)

   ```cpp
    typedef int index_t;

    void bounds_check(index_t index);

    void login(int column)
    {
         bounds_check(column);  // removed cast to 'index_t', 'index_t' is an alias of 'int'
    }
   ```

- **Redundant typename in elaborated type specifiers**  Previous versions of the compiler allowed **`typename`** in an elaborated type specifiers; code written in this way is semantically incorrect. The compiler no longer accepts code written in this way and issues compiler error C3406 instead.

   ```Output
    error C3406: 'typename' cannot be used in an elaborated type specifier
   ```

   Example (before)

   ```cpp
    template <typename class T>
    class container;
   ```

   Example (after)

   ```cpp
    template <class T>  // alternatively, could be 'template <typename T>'; 'typename' is not elaborating a type specifier in this case
    class container;
   ```

- **Type deduction of arrays from an initializer list**  Previous versions of the compiler did not support type deduction of arrays from an initializer list. The compiler now supports this form of type deduction and, as a result, calls to function templates using initializer lists might now be ambiguous or a different overload might be chosen than in previous versions of the compiler. To resolve these issues, the program must now explicitly specify the overload that the programmer intended.

   When this new behavior causes overload resolution to consider an additional candidate that is equally as good as the historic candidate, the call becomes ambiguous and the compiler issues compiler error C2668 as a result.

   ```Output
    error C2668: 'function' : ambiguous call to overloaded function.
   ```

   Example 1: Ambiguous call to overloaded function (before)

   ```cpp
    // In previous versions of the compiler, code written in this way would unambiguously call f(int, Args...)
    template <typename... Args>
    void f(int, Args...);  //

    template <int N, typename... Args>
    void f(const int (&)[N], Args...);

    int main()
    {
        // The compiler now considers this call ambiguous, and issues a compiler error
        f({3});  error C2668: 'f' ambiguous call to overloaded function
    }
   ```

   Example 1: ambiguous call to overloaded function (after)

   ```cpp
    template <typename... Args>
    void f(int, Args...);  //

    template <int N, typename... Args>
    void f(const int (&)[N], Args...);

    int main()
    {
        // To call f(int, Args...) when there is just one expression in the initializer list, remove the braces from it.
        f(3);
    }
   ```

   When this new behavior causes overload resolution to consider an additional candidate that is a better match than the historic candidate, the call resolves unambiguously to the new candidate, causing a change in program behavior that is probably different than the programmer intended.

   Example 2: change in overload resolution (before)

   ```cpp
    // In previous versions of the compiler, code written in this way would unambiguously call f(S, Args...)
    struct S
    {
        int i;
        int j;
    };

    template <typename... Args>
    void f(S, Args...);

    template <int N, typename... Args>
    void f(const int *&)[N], Args...);

    int main()
    {
        // The compiler now resolves this call to f(const int (&)[N], Args...) instead
        f({1, 2});
    }
   ```

   Example 2: change in overload resolution (after)

   ```cpp
    struct S;  // as before

    template <typename... Args>
    void f(S, Args...);

    template <int N, typename... Args>
    void f(const int *&)[N], Args...);

    int main()
    {
        // To call f(S, Args...), perform an explicit cast to S on the initializer list.
        f(S{1, 2});
    }
   ```

- **Restoration of switch statement warnings**

   A Previous version of the compiler removed previously-existing warnings related to **`switch`** statements; these warnings have now been restored. The compiler now issues the restored warnings, and warnings related to specific cases (including the default case) are now issued on the line containing the offending case, rather than on the last line of the switch statement. As a result of now issuing those warnings on different lines than in the past, warnings previously suppressed by using `#pragma warning(disable:####)` may no longer be suppressed as intended. To suppress these warnings as intended, it might be necessary to move the `#pragma warning(disable:####)` directive to a line above the first potentially-offending case. The following are the restored warnings.

   ```Output
    warning C4060: switch statement contains no 'case' or 'default' labels
   ```

   ```Output
    warning C4061: enumerator 'bit1' in switch of enum 'flags' is not explicitly handled by a case label
   ```

   ```Output
    warning C4062: enumerator 'bit1' in switch of enum 'flags' is not handled
   ```

   ```Output
    warning C4063: case 'bit32' is not a valid value for switch of enum 'flags'
   ```

   ```Output
    warning C4064: switch of incomplete enum 'flags'
   ```

   ```Output
    warning C4065: switch statement contains 'default' but no 'case' labels
   ```

   ```Output
    warning C4808: case 'value' is not a valid value for switch condition of type 'bool'
   ```

   ```Output
    Warning C4809: switch statement has redundant 'default' label; all possible 'case' labels are given
   ```

   Example of C4063 (before)

   ```cpp
    class settings
    {
    public:
        enum flags
        {
            bit0 = 0x1,
            bit1 = 0x2,
            ...
        };
        ...
    };

    int main()
    {
        auto val = settings::bit1;

        switch (val)
        {
        case settings::bit0:
            break;

        case settings::bit1:
            break;

        case settings::bit0 | settings::bit1:  // warning C4063
            break;
        }
    };
   ```

   Example of C4063 (after)

   ```cpp
    class settings {...};  // as above

    int main()
    {
        // since C++11, use std::underlying_type to determine the underlying type of an enum
        typedef std::underlying_type<settings::flags>::type flags_t;

        auto val = settings::bit1;

        switch (static_cast<flags_t>(val))
        {
        case settings::bit0:
            break;

        case settings::bit1:
            break;

        case settings::bit0 | settings::bit1:  // ok
            break;
        }
    };
   ```

   Examples of the other restored warnings are provided in their documentation.

- **#include: use of parent-directory specifier '..' in pathname** (only affects `/Wall` `/WX`)

   Previous versions of the compiler did not detect the use of the parent-directory specifier '..' in the pathname of  `#include` directives. Code written in this way is usually intended to include headers that exist outside of the project by incorrectly using project-relative paths. This old behavior created a risk that the program could be compiled by including a different source file than the programmer intended, or that these relative paths would not be portable to other build environments. The compiler now detects and notifies the programmer of code written in this way and issues an optional compiler warning C4464, if enabled.

   ```Output
    warning C4464: relative include path contains '..'
   ```

   Example (before)

   ```cpp
    #include "..\headers\C4426.h"  // emits warning C4464
   ```

   Example (after)

   ```cpp
    #include "C4426.h"  // add absolute path to 'headers\' to your project's include directories
   ```

   Additionally, although the compiler does not give a specific diagnostic, we also recommend that the parent-directory specifier ".." should note be used to specify your project's include directories.

- **#pragma optimize() extends past end of header file** (only affects `/Wall` `/WX`)

   Previous versions of the compiler did not detect changes to  optimization flag settings that escape a header file included within a translation unit. The compiler now detects and notifies the programmer of code written in this way and issues an optional compiler warning C4426 at the location of the offending `#include`, if enabled. This warning is only issued if the changes conflict with the optimization flags set by command-line arguments to the compiler.

   ```Output
    warning C4426: optimization flags changed after including header, may be due to #pragma optimize()
   ```

   Example (before)

   ```cpp
    // C4426.h
    #pragma optimize("g", off)
    ...
    // C4426.h ends

    // C4426.cpp
    #include "C4426.h"  // warning C4426
   ```

   Example (after)

   ```cpp
    // C4426.h
    #pragma optimize("g", off)
    ...
    #pragma optimize("", on)  // restores optimization flags set via command-line arguments
    // C4426.h ends

    // C4426.cpp
    #include "C4426.h"
   ```

- **Mismatched #pragma warning(push)** and **#pragma warning(pop)** (only affects `/Wall` `/WX`)

   Previous versions of the compiler did not detect `#pragma warning(push)` state changes being paired with `#pragma warning(pop)` state changes in a different source file, which is rarely intended. This old behavior created a risk that the program would be compiled with a different set of warnings enabled than the programmer intended, possibly resulting in silent bad runtime behavior. The compiler now detects and notifies the programmer of code written in this way and issues an optional compiler warning C5031 at the location of the matching `#pragma warning(pop)`, if enabled. This warning includes a note referencing the location of the corresponding `#pragma warning(push)`.

   ```Output
    warning C5031: #pragma warning(pop): likely mismatch, popping warning state pushed in different file
   ```

   Example (before)

   ```cpp
    // C5031_part1.h
    #pragma warning(push)
    #pragma warning(disable:####)
    ...
    // C5031_part1.h ends without #pragma warning(pop)

    // C5031_part2.h
    ...
    #pragma warning(pop)  // pops a warning state not pushed in this source file
    ...
    // C5031_part1.h ends

    // C5031.cpp
    #include "C5031_part1.h" // leaves #pragma warning(push) 'dangling'
    ...
    #include "C5031_part2.h" // matches 'dangling' #pragma warning(push), resulting in warning C5031
    ...
   ```

   Example (after)

   ```cpp
    // C5031_part1.h
    #pragma warning(push)
    #pragma warning(disable:####)
    ...
    #pragma warning(pop)  // pops the warning state pushed in this source file
    // C5031_part1.h ends without #pragma warning(pop)

    // C5031_part2.h
    #pragma warning(push)  // pushes the warning state pushed in this source file
    #pragma warning(disable:####)
    ...
    #pragma warning(pop)
    // C5031_part1.h ends

    // C5031.cpp
    #include "C5031_part1.h" // #pragma warning state changes are self-contained and independent of other source files or their #include order.
    ...
    #include "C5031_part2.h"
    ...
   ```

   Though uncommon, code written in this way is sometimes intentional. Code written in this way is sensitive to changes in `#include` order; when possible, we recommend that source code files manage warning state in a self-contained way.

- **Unmatched #pragma warning(push)** (only affects `/Wall` `/WX`)

   Previous versions of the compiler did not detect unmatched `#pragma warning(push)` state changes at the end of a translation unit. The compiler now detects and notifies the programmer of code written in this way and issues an optional compiler warning C5032 at the location of the unmatched `#pragma warning(push)`, if enabled. This warning is only issued if there are no compilation errors in the translation unit.

   ```Output
    warning C5032: detected #pragma warning(push) with no corresponding #pragma warning(pop)
   ```

   Example (before)

   ```cpp
    // C5032.h
    #pragma warning(push)
    #pragma warning(disable:####)
    ...
    // C5032.h ends without #pragma warning(pop)

    // C5032.cpp
    #include "C5032.h"
    ...
    // C5032.cpp ends -- the translation unit is completed without #pragma warning(pop), resulting in warning C5032 on line 1 of C5032.h
   ```

   Example (after)

   ```cpp
    // C5032.h
    #pragma warning(push)
    #pragma warning(disable:####)
    ...
    #pragma warning(pop) // matches #pragma warning (push) on line 1
    // C5032.h ends

    // C5032.cpp
    #include "C5032.h"
    ...
    // C5032.cpp ends -- the translation unit is completed without unmatched #pragma warning(push)
   ```

- **Additional warnings might be issued as a result of improved #pragma warning state tracking**

   Previous versions of the compiler tracked `#pragma warning` state changes insufficiently well to issue all intended warnings. This behavior created a risk that certain warnings would be effectively suppressed in circumstances different than the programmer intended. The compiler now tracks `#pragma warning` state more robustly -- especially related to `#pragma warning` state changes inside of templates -- and optionally issues new warnings C5031 and C5032 which are intended to help the programmer locate unintended uses of `#pragma warning(push)` and `#pragma warning(pop)`.

   As a result of improved `#pragma warning` state change tracking, warnings formerly incorrectly suppressed or warnings related to issues formerly misdiagnosed might now be issued.

- **Improved identification of unreachable code**

   C++ Standard Library changes and improved ability to inline function calls over previous versions of the compiler might allow the compiler to prove that certain code is now unreachable. This new behavior can result in new and more-frequently issued instances of warning C4720.

   ```Output
    warning C4720: unreachable code
   ```

   In many cases, this warning might only be issued when compiling with optimizations enabled, since optimizations may inline more function calls, eliminate redundant code, or otherwise make it possible to determine that certain code is unreachable. We have observed that new instances of warning C4720 have frequently occurred in **try/catch** blocks, especially in relation to use of [std::find](../standard-library/algorithm-functions.md#find).

   Example (before)

   ```cpp
    try
    {
        auto iter = std::find(v.begin(), v.end(), 5);
    }
    catch(...)
    {
        do_something();  // ok
    }
   ```

   Example (after)

   ```cpp
    try
    {
        auto iter = std::find(v.begin(), v.end(), 5);
    }
    catch(...)
    {
        do_something();  // warning C4702: unreachable code
    }
   ```

### <a name="VS_Update2"></a> Conformance Improvements in Visual Studio 2015 Update 2

- **Additional warnings and errors might be issued as a result of partial support for expression SFINAE**

   Previous versions of the compiler did not parse certain kinds of expressions inside **`decltype`** specifiers due to lack of  support for expression SFINAE. This old behavior was incorrect and does not conform to the C++ standard. The compiler now parses these expressions and has partial support for expression SFINAE due to  ongoing conformance improvements. As a result, the compiler now issues warnings and errors found in  expressions that previous versions of the compiler did not parse.

   When this new behavior parses a **`decltype`** expression that includes a type that has not yet been declared, the compiler issues compiler error C2039 as a result.

   ```Output
    error C2039: 'type': is not a member of '`global namespace''
   ```

   Example 1:  use of an undeclared type (before)

   ```cpp
    struct s1
    {
      template <typename T>
      auto f() -> decltype(s2<T>::type::f());  // error C2039

      template<typename>
      struct s2 {};
    }
   ```

   Example 1 (after)

   ```cpp
    struct s1
    {
      template <typename>  // forward declare s2struct s2;

      template <typename T>
      auto f() -> decltype(s2<T>::type::f());

      template<typename>
      struct s2 {};
    }
   ```

   When this new behavior parses a **`decltype`** expression that is missing a necessary use of the **`typename`** keyword to specify that a dependent name is a type, the compiler issues  compiler warning C4346 together with compiler error C2923.

   ```Output
    warning C4346: 'S2<T>::Type': dependent name is not a type
   ```

   ```Output
    error C2923: 's1': 'S2<T>::Type' is not a valid template type argument for parameter 'T'
   ```

   Example 2: dependent name is not a type (before)

   ```cpp
    template <typename T>
    struct s1
    {
      typedef T type;
    };

    template <typename T>
    struct s2
    {
      typedef T type;
    };

    template <typename T>
    T declval();

    struct s
    {
      template <typename T>
      auto f(T t) -> decltype(t(declval<S1<S2<T>::type>::type>()));  // warning C4346, error C2923
    };
   ```

   Example 2 (after)

   ```cpp
    template <typename T> struct s1 {...};  // as above
    template <typename T> struct s2 {...};  // as above

    template <typename T>
    T declval();

    struct s
    {
      template <typename T>
      auto f(T t) -> decltype(t(declval<S1<typename S2<T>::type>::type>()));
    };
   ```

- **`volatile`** **member variables prevent implicitly defined constructors and assignment operators** Previous versions of the compiler allowed a class that has **`volatile`** member variables to have default copy/move constructors and default copy/move assignment operators automatically generated. This old behavior was incorrect and does not conform to the C++ standard. The compiler now considers a class that has volatile member variables to have non-trivial construction and assignment operators which prevents default implementations of these operators from being automatically generated. When such a class is a member of a union (or an anonymous union inside of a class), the copy/move constructors and copy/move assignment operators of the union (or the class containing the unonymous union) will be implicitly defined as deleted. Attempting to construct or copy the union (or class containing the anonymous union) without explicitly defining them is an error and the compiler issues compiler error C2280 as a result.

   ```Output
    error C2280: 'B::B(const B &)': attempting to reference a deleted function
   ```

   Example (before)

   ```cpp
    struct A
    {
      volatile int i;
      volatile int j;
    };

    extern A* pa;

    struct B
    {
      union
      {
        A a;
        int i;
      };
    };

    B b1 {*pa};
    B b2 (b1);  // error C2280
   ```

   Example (after)

   ```cpp
    struct A
    {
      int i;int j;
    };

    extern volatile A* pa;

    A getA()  // returns an A instance copied from contents of pa
    {
      A a;
      a.i = pa->i;
      a.j = pa->j;
      return a;
    }

    struct B;  // as above

    B b1 {GetA()};
    B b2 (b1);  // error C2280
   ```

- **Static member functions do not support cv-qualifiers.**

   Previous versions of Visual C++ 2015 allowed static member functions to have cv-qualifiers. This behavior is due to a regression in Visual C++ 2015 and Visual C++ 2015 Update 1; Visual C++ 2013 and previous versions of Visual C++ reject code written in this way. The behavior of Visual C++ 2015 and Visual C++ 2015 Update 1 is incorrect and does not conform to the C++ standard.  Visual Studio 2015 Update 2 rejects code written in this way and issues compiler error C2511 instead.

   ```Output
    error C2511: 'void A::func(void) const': overloaded member function not found in 'A'
   ```

   Example (before)

   ```cpp
    struct A
    {
      static void func();
    };

    void A::func() const {}  // C2511
   ```

   Example (after)

   ```cpp
    struct A
    {
      static void func();
    };

    void A::func() {}  // removed const
   ```

- **Forward declaration of enum is not allowed in WinRT code** (affects `/ZW` only)

   Code compiled for the Windows Runtime (WinRT) doesn't allow **`enum`** types to be forward declared, similarly to when managed C++ code is compiled for the .Net Framework using the `/clr` compiler switch. This behavior is ensures that the size of an enumeration is always known and can be correctly projected to the WinRT type system. The compiler rejects code written in this way and  issues compiler error C2599 together with compiler error C3197.

   ```Output
    error C2599: 'CustomEnum': the forward declaration of a WinRT enum is not allowed
   ```

   ```Output
    error C3197: 'public': can only be used in definitions
   ```

   Example (before)

   ```cpp
    namespace A {
      public enum class CustomEnum: int32;  // forward declaration; error C2599, error C3197
    }

    namespace A {
      public enum class CustomEnum: int32
      {
        Value1
      };
    }

    public ref class Component sealed
    {
    public:
      CustomEnum f()
      {
        return CustomEnum::Value1;
      }
    };
   ```

   Example (after)

   ```cpp
              // forward declaration of CustomEnum removed
    namespace A {
      public enum class CustomEnum: int32
      {
        Value1
      };
    }

    public ref class Component sealed
    {
    public:
      CustomEnum f()
      {
        return CustomEnum::Value1;
      }
    };
   ```

- **Overloaded non-member operator new and operator delete may not be declared inline** (Level 1 (`/W1`) on-by-default)

   Previous versions of the compiler do not issue a warning when non-member **operator new** and **operator delete** functions are declared inline. Code written in this way is ill-formed (no diagnostic required) and can cause memory issues resulting from mismatched new and delete operators (especially when used together with sized deallocation) that can be difficult to diagnose. The compiler now issues compiler warning C4595 to help identify code written in this way.

   ```Output
    warning C4595: 'operator new': non-member operator new or delete functions may not be declared inline
   ```

   Example (before)

   ```cpp
    inline void* operator new(size_t sz)  // warning C4595
    {
      ...
    }
   ```

   Example (after)

   ```cpp
    void* operator new(size_t sz)  // removed inline
    {
      ...
    }
   ```

   Fixing code that's written in this way might require that the operator definitions be moved out of a header file and into a corresponding source file.

### <a name="VS_Update3"></a> Conformance Improvements in Visual Studio 2015 Update 3

- **std::is_convertable now detects self-assignment**  (standard library) Previous versions of the `std::is_convertable` type-trait did not correctly detect self-assignment of a class type when its copy constructor is deleted or private. Now, `std::is_convertable<>::value` is correctly set to **`false`** when applied to a class type with a deleted or private copy constructor.

   There is no compiler diagnostic associated with this change.

   Example

   ```cpp
    #include <type_traits>

    class X1
    {
    public:
        X1(const X1&) = delete;
    };

    class X2
    {
    private:
        X2(const X2&);
    };

    static_assert(std::is_convertible<X1&, X1>::value, "BOOM");static_assert(std::is_convertible<X2&, X2>::value, "BOOM");
   ```

   In previous versions of Visual C++, the static assertions at the bottom of this example pass because `std::is_convertable<>::value` was incorrectly set to **`true`**. Now, `std::is_convertable<>::value` is correctly set to **`false`**, causing the static assertions to fail.

- **Defaulted or deleted trivial copy and move constructors respect access specifiers**

   Previous versions of the compiler did not check the access specifier of defaulted or deleted trivial copy and move constructors before allowing them to be called. This old behavior was incorrect and does not conform to the C++ standard. In some cases, this old behavior created a risk of silent bad code generation, resulting in unpredictable runtime behavior. The compiler now checks the access specifier of defaulted or deleted trivial copy and move constructors to determine whether it can be called, and if not, issues compiler warning C2248 as a result.

   ```Output
    error C2248: 'S::S' cannot access private member declared in class 'S'
   ```

   Example (before)

   ```cpp
    class S {
    public:
       S() = default;
    private:
        S(const S&) = default;
    };

    void f(S);  // pass S by value

    int main()
    {
        S s;
        f(s);  // error C2248, can't invoke private copy constructor
    }
   ```

   Example (after)

   ```cpp
    class S {
    public:
       S() = default;
    private:
        S(const S&) = default;
    };

    void f(const S&);  // pass S by reference

    int main()
    {
        S s;
        f(s);
    }
   ```

- **Deprecation of attributed ATL code support** (Level 1 (`/W1`) on-by-default)

   Previous versions of the compiler supported attributed ATL code. As the next phase of removing support for attributed ATL code that [began in Visual C++ 2008](#whats-new-for-c-in-visual-studio-2008), attributed ATL code has been deprecated. The compiler now issues compiler warning C4467 to help identify this kind of deprecated code.

   ```Output
    warning C4467: Usage of ATL attributes is deprecated
   ```

   If you want to continue using attributed ATL code until support is removed from the compiler, you can disable this warning by passing the `/Wv:18` or `/wd4467` command line arguments to the compiler, or by adding  `#pragma warning(disable:4467)` in your source code.

   Example 1 (before)

   ```cpp
              [uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")]
    class A {};
   ```

   Example 1 (after)

   ```cpp
    __declspec(uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")) A {};
   ```

   Sometimes you might need or want to create an IDL file to avoid the use deprecated ATL attributes, as in the example code below

   Example 2 (before)

   ```cpp
    [emitidl];
    [module(name="Foo")];

    [object, local, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb")]
    __interface ICustom {
        HRESULT Custom([in] long l, [out, retval] long *pLong);
        [local] HRESULT CustomLocal([in] long l, [out, retval] long *pLong);
    };

    [coclass, appobject, uuid("9e66a294-4365-11d2-a997-00c04fa37ddb")]
    class CFoo : public ICustom
    {
        // ...
    };
   ```

   First, create the *.idl file; the vc140.idl generated file can be used to obtain an \*.idl file containing the interfaces and annotations.

   Next, add a MIDL step to your build to make sure that the C++ interface definitions are generated.

   Example 2 IDL (after)

   ```cpp
    import "docobj.idl";

    [
        object,local,uuid(9e66a290-4365-11d2-a997-00c04fa37ddb)
    ]

    interface ICustom : IUnknown {
        HRESULT  Custom([in] long l, [out,retval] long *pLong);
        [local] HRESULT  CustomLocal([in] long l, [out,retval] long *pLong);
    };

    [ version(1.0), uuid(29079a2c-5f3f-3325-99a1-3ec9c40988bb) ]
    library Foo
    {
        importlib("stdole2.tlb");
        importlib("olepro32.dll");
            [
                version(1.0),
                appobject,uuid(9e66a294-4365-11d2-a997-00c04fa37ddb)
            ]

        coclass CFoo {
            interface ICustom;
        };
    }
   ```

   Then, use ATL directly in the implementation file, as in the example code below.

   Example 2  Implementation (after)

   ```cpp
    #include <idl.header.h>
    #include <atlbase.h>

    class ATL_NO_VTABLE CFooImpl :
        public ICustom,
        public ATL::CComObjectRootEx<CComMultiThreadModel>
    {
    public:
        BEGIN_COM_MAP(CFooImpl)
        COM_INTERFACE_ENTRY(ICustom)
        END_COM_MAP()
    };
   ```

- **Precompiled header (PCH) files and mismatched #include directives** (only affects `/Wall` `/WX`)

   Previous versions of the compiler accepted mismatched `#include` directives in source files between `-Yc` and `-Yu` compilations when using precompiled header (PCH)  files. Code written in this way is no longer accepted by the compiler. The compiler now issues compiler warning CC4598 to help identify mismatched `#include` directives when using PCH files.

   ```Output
    warning C4598: 'b.h': included header file specified for Ycc.h at position 2 does not match Yuc.h at that position
   ```

   Example (before):

   X.cpp (-Ycc.h)

   ```cpp
    #include "a.h"
    #include "b.h"
    #include "c.h"
   ```

   Z.cpp (-Yuc.h)

   ```cpp
    #include "b.h"
    #include "a.h"  // mismatched order relative to X.cpp
    #include "c.h"
   ```

   Example (after)

   X.cpp (-Ycc.h)

   ```cpp
    #include "a.h"
    #include "b.h"
    #include "c.h"
   ```

   Z.cpp (-Yuc.h)

   ```cpp
    #include "a.h"
    #include "b.h" // matched order relative to X.cpp
    #include "c.h"
   ```

- **Precompiled header (PCH) files and mismatched include directories** (only affects `/Wall` `/WX`)

   Previous versions of the compiler accepted mismatched include directory (`-I`) command line arguments to the compiler between `-Yc` and `-Yu` compilations when using precompiled header (PCH)  files. Code written in this way is no longer accepted by the compiler.   The compiler now issues compiler warning CC4599 to help identify mismatched include directory (`-I`) command line arguments when using PCH files.

   ```Output
    warning C4599: '-I..' : specified for Ycc.h at position 1 does not match Yuc.h at that position
   ```

   Example (before)

   ```ms-dos
    cl /c /Wall /Ycc.h -I.. X.cpp
    cl /c /Wall /Yuc.h Z.cpp
   ```

   Example (after)

   ```ms-dos
    cl /c /Wall /Ycc.h -I.. X.cpp
    cl /c /Wall /Yuc.h -I.. Z.cpp
   ```

## What's New for C++ in Visual Studio 2013

### Improved ISO C/C++ Standards Support

#### Compiler

MSVC supports these ISO C++11 language features:

- Default template arguments for function templates.
- Delegating constructors
- Explicit conversion operators.
- Initializer lists and uniform initialization.
- Raw string literals.
- Variadic templates.
- Alias templates.
- Deleted functions.
- Non-static data member initializers (NSDMIs).
- Defaulted functions. \*
- Supports these ISO C99 language features:
- _Bool
- Compound literals.
- Designated initializers.
- Mixing declarations with code.
- String literal conversion to modifiable values can be disallowed by using the new compiler option `/Zc:strictStrings`. In C++98, conversion from string literals to **`char*`** (and wide string literals to `wchar_t*`) was deprecated. In C++11, the conversion was removed entirely. Although the compiler could strictly conform to the standard, instead it provides the `/Zc:strictStrings` option so that you can control conversion. By default, the option is off. Note that when you are using this option in debug mode, the STL will not compile.
- rvalue/lvalue Reference Casts. With rvalue references, C++11 can clearly distinguish between lvalues and rvalues. Previously, the compiler did not provide this in specific casting scenarios. A new compiler option, `/Zc:rvalueCast`, has been added to make the compiler conformant with the C++ Language Working Paper(see section 5.4, [expr.cast]/1). The default behavior when this option is not specified is the same as in Visual Studio 2012.

> [!NOTE]
> For defaulted functions, using =default to request memberwise move constructors and move assignment operators is not supported.

### C99 Libraries

Declarations and implementations are added for missing functions in these headers: math.h, ctype.h, wctype.h, stdio.h, stdlib.h, and wchar.h. Also added are the new headers complex.h, stdbool.h, fenv.h, and inttypes.h, and implementations for all the functions declared in them. There are new C++ wrapper headers (ccomplex, cfenv, cinttypes, ctgmath) and a number of others are updated (ccomplex, cctype, clocale, cmath, cstdint, cstdio, cstring, cwchar, and cwctype).

### Standard Template Library

Support for the C++11 explicit conversion operators, initializer lists, scoped enums, and variadic templates.
All containers now support the C++11 fine-grained element requirements.
Support for these C++14 features:

- "Transparent operator functors" less<>, greater<>, plus<>, multiplies<>, and so on.
- make_unique\<T>(args...) and make_unique<T[]>(n)
- cbegin()/cend(), rbegin()/rend(), and crbegin()/crend() non-member functions.
- \<atomic> received numerous performance enhancements.
- \<type_traits> received major stabilization and code fixes.

### Breaking Changes

This improved support for ISO C/C++ standards may require changes to existing code so that it conforms to C++11 and compiles correctly in Visual C++ in Visual Studio 2013.

### Visual C++ Library Enhancements

- C++ REST SDK is added. It has a modern C++ implementation of REST services.
- C++ AMP Texture support is enhanced. It now includes support for mipmaps and new sampling modes.
- PPL tasks support multiple scheduling technologies and asynchronous debugging. New APIs enable the creation of PPL tasks for both normal results and exception conditions.

### C++ Application Performance

- Auto-Vectorizer now recognizes and optimizes more C++ patterns to make your code run faster.
- ARM platform and Atom micro-architecture code quality improvements.
- __vectorcall calling convention is added. Pass vector type arguments by using the __vectorcall calling convention to use vector registers.
- New Linker Options. The `/Gw` (compiler) and `/Gy` (assembler) switches enable linker optimizations to produce leaner binaries.
- C++ AMP shared memory support to reduce or eliminate data copying between CPU and GPU.

### Profile Guided Optimization (PGO) enhancements

- Performance improvements from a reduction in the working set of apps that are optimized by using PGO.
- New PGO for Windows Runtime app development.

### Windows Runtime App Development Support

- **Support For Boxed Types In Value structs.**

   You can now define value types by using fields that can be null—for example, `IBox<int>^` as opposed to **`int`**. This means that the fields can either have a value, or be equal to **`nullptr`**.

- **Richer Exception Information.**

   C++/CX supports the new Windows error model that enables the capture and propagation of rich exception information across the application binary interface (ABI); this includes call stacks and custom message strings.

- **Object::ToString() Is Now Virtual.**

   You can now override ToString in user-defined Windows Runtime ref types.

- **Support For Deprecated APIs.**

   Public Windows Runtime APIs can now be marked as deprecated and given a custom message that appears as a build warning and can provide migration guidance.

- **Debugger Improvements.**

   Support for native/JavaScript interop debugging, Windows Runtime exception diagnosis, and async code debugging (both Windows Runtime and PPL).

> [!NOTE]
> In addition to the C++-specific features and enhancements that are described in this section, other enhancements in Visual Studio also can help you write better Windows Runtime apps.

### Diagnostics Enhancements

- Debugger Improvements. Support for async debugging and Just My Code debugging.
- Code Analysis Categories. You can now view categorized output from the Code Analyzer to help you find and fix code defects.
- XAML Diagnostics. You can now diagnose UI-responsiveness and battery-usage issues in your XAML.
- Graphics and GPU Debugging Improvements.
- Remote capture and playback on real devices.
- Simultaneous C++ AMP and CPU debugging.
- Improved C++ AMP runtime diagnostics.
- HLSL Compute shader trace debugging.

### 3-D Graphics Enhancements

- Image Content Pipeline support for pre-multiplied alpha DDS format.
- Image Editor uses internally pre-multiplied alpha for rendering, and thereby avoids rendering artifacts such as dark halos.
- Image and Model Editors. User-defined filter creation is now supported in Shader Designer in Image Editor and Model Editor.

### IDE and Productivity

**Improved Code Formatting**. You can apply more formatting settings to your C++ code. By using these settings, you can control new-line placement of braces and keywords, indentation, spacing, and line wrapping. Code is automatically formatted when you complete statements and blocks, and when you paste code into a file.

**Brace Completion.** C++ code now auto-completes the closing characters that correspond to these opening characters:

- { (curly brace)
- [ (square bracket)
- ( (parentheses)
- ' (single quote)
- " (double quote)

**Additional C++ Auto-completion Features.**

- Adds semicolon for class types.
- Completes parentheses for raw string literals.
- Completes multi-line comments (/\* \*/)

**Find All References** now automatically resolves and filters references in the background after it displays the list of textual matches.

**Context-Based Member List Filtering.** Inaccessible members are filtered out of the IntelliSense member lists. For example, private members are not displayed in the member list unless you are modifying the code that implements the type. While the member list is open, you can press **Ctrl**+**J** to remove one level of filtering (applies only to the current member list window). You can press **Ctrl**+**J** again to remove the textual filtering and show every member.

**Parameter Help Scrolling.** The displayed function signature in the parameter-help tooltip now changes based on the number of parameters you've actually typed, rather than just showing an arbitrary signature and not updating it based on the current context. Parameter help also functions correctly when it's displayed on nested functions.

**Toggle Header/Code File.** You can now toggle between a header and its corresponding code file by using a command on the shortcut menu, or a keyboard shortcut.

**Resizable C++ Project Properties Window**

**Auto-generation of Event Handler Code in C++/CX and C++/CLI.**  When you are typing code to add an event handler in a C++/CX or C++/CLI code file, the editor can automatically generate the delegate instance and event-handler definition. A tooltip window appears when event-handler code can be auto-generated.

**DPI Awareness Enhancement.** The DPI Awareness setting for application manifest files now supports the "Per Monitor High DPI Aware" setting.

**Faster Configuration Switching.** For large applications, switching configurations—especially subsequent switching operations—execute much more quickly.

**Build Time Efficiency.** Numerous optimizations and multi-core utilization make builds faster, especially for large projects. Incremental builds for C++ applications that have references to C++ WinMD are also much faster.

## What's New for C++ in Visual Studio 2012

### Improved C++11 Standards Support

#### Standard Template Library

- Support for new STL headers: \<atomic>, \<chrono>, \<condition_variable>, \<filesystem>, \<future>, \<mutex>, \<ratio>, and \<thread>.
- To optimize memory resource usage, containers are now smaller. For example, in x86 release mode with default settings, `std::vector` has shrunk from 16 bytes in Visual Studio 2010 to 12 bytes in Visual Studio 2012, and `std::map` has shrunk from 16 bytes in Visual Studio 2010 to 8 bytes in Visual Studio 2012.
- As permitted but not required by the C++11 Standard, SCARY iterators have been implemented.

#### Other C++11 Enhancements

- Range-based for loops. You can write more robust loops that work with arrays, STL containers, and Windows Runtime collections in the form for ( for-range-declaration : expression ). This is part of the Core Language support.
- Stateless lambdas, which are blocks of code that begin with an empty lambda introducer [] and capture no local variables, are now implicitly convertible to function pointers as required by the C++11 Standard.
- Scoped enumerations support. The C++ enum class enum-key is now supported. The following code demonstrates how this enum-key differs from previous enum behavior.

   ```cpp
  enum class Element { Hydrogen, Helium, Lithium, Beryllium };
  void func1(Element e);
  func1(Hydrogen); // error C2065: 'Hydrogen' : undeclared identifier
  func1(Element::Helium); // OK
   ```

### Windows Runtime App Development Support

- **Native XAML-based UI model**. For Windows Runtime apps, you can use the new native XAML-based UI model.
- **Visual C++ Component Extensions**. These extensions simplify consumption of Windows Runtime objects, which are a necessary part of Windows Runtime apps. For more information, see [Roadmap for Windows Runtime apps using C++](../cppcx/universal-windows-apps-cpp.md) and [Visual C++ language reference (C++/CX)](../cppcx/visual-c-language-reference-c-cx.md)
- **DirectX games**. You can develop engaging games by using the new DirectX support for Windows Runtime apps.
- **XAML/DirectX interop**. Windows Runtime apps that use both XAML and DirectX now interoperate efficiently.
- **Windows Runtime Component DLL development**. Component DLL development makes the Windows Runtime environment extensible.

### Compiler and Linker

- **Auto-vectorizer**. The compiler analyzes loops in your code and, where possible, emits instructions that use the vector registers and instructions that are present in all modern processors. This makes the loops run faster. (The processor instructions are known as SSE, for Streaming SIMD Extensions). You do not have to enable or request this optimization because it is applied automatically.
- **Auto-parallelizer**. The compiler can analyze loops in your code and emit instructions that spread the calculations across multiple cores or processors. This can make the loops run faster. You must request this optimization because it is not enabled by default. In many cases, it helps to include a `#pragma loop(hint_parallel(N))` in your code immediately before the loops that you want parallelized.
- The auto-vectorizer and auto-parallelizer can work together so that calculations are spread across multiple cores and the code on each core uses its vector registers.

### New in Visual Studio 2012 Update 1

Target Windows XP when you build your C++ code.
You can use the Microsoft C++ compiler and libraries to target Windows XP and Windows Server 2003.

#### Parallel Programming Support

##### C++ Accelerated Massive Parallelism (AMP)

C++ AMP accelerates the execution of your C++ code by taking advantage of the data-parallel hardware that's ordinarily present as a GPU on a discrete graphics card. The C++ AMP programming model includes multidimensional arrays, indexing, memory transfer, tiling, and a mathematical function library. By using C++ AMP language extensions and compiler restrictions, you can control how data is moved from the CPU to the GPU and back.

**Debugging.** The debugging experience for apps that use C++ AMP to target the GPU is just like debugging for other C++ apps. This includes the new parallel debugging additions that were mentioned earlier.

**Profiling.** There is now profiling support for GPU activity that's based on C++ AMP and other Direct3D-based programming models.

#### General Parallel Programming Enhancements

With hardware moving to multi-core and many-core architectures, developers can no longer rely on ever-increasing clock speeds from single-cores. The parallel programming support in the Concurrency Runtime enables developers to take advantage of these new architectures.
In Visual Studio 2010, powerful C++ parallelization libraries such as the Parallel Patterns Library were introduced, together with features to take advantage of concurrency by expressing sophisticated dataflow pipelines. In Visual Studio 2012, these libraries have been extended to provide better performance, more control, and richer support for the parallel patterns that developers need most. The breadth of the offering now includes:

- A rich task-based programming model that supports asynchrony and continuations.
- Parallel Algorithms, which support fork-join parallelism (parallel_for, parallel_for with affinity, parallel_for_each, parallel_sort, parallel_reduce, parallel_transform).
- Concurrency-safe containers, which provide thread-safe versions of std data structures such as priority_queue, queue, vector, and map.
- The Asynchronous Agents Library, which developers can use to express dataflow pipelines that naturally decompose into concurrent units.
- A customizable scheduler and resource manager to facilitate the smooth composition of the patterns in this list.

##### General Parallel Debugging Enhancements

In addition to the **Parallel Tasks** window and **Parallel Stacks** window, Visual Studio 2012 offers a new **Parallel Watch** window so that you can examine the values of an expression across all threads and processes, and perform sorting and filtering on the result. You can also use your own visualizers to extend the window, and you can take advantage of the new multi-process support across all tool windows.

### IDE

**Visual Studio Templates support.** You can now use the Visual Studio Templates technology to author C++ project and item templates.

**Asynchronous Solution Load.** Projects are now loaded asynchronously—the key parts of the solution first—so that you can start working faster.

**Automated deployment for remote debugging.** Deployment of files for remote debugging in Visual C++ has been simplified. The **Deploy** option on the project context menu automatically copies to the remote computer the files that are specified in the debugging configuration properties. Copying files manually to the remote computer is no longer required.

**C++/CLI IntelliSense.** C++/CLI now has full IntelliSense support. IntelliSense features such as Quick Info, Parameter Help, List Members, and Auto Completion now work for C++/CLI. In addition, the other IntelliSense and IDE enhancements listed in this document also work for C++/CLI.

**Richer IntelliSense Tooltips.** C++ IntelliSense Quick Info tooltips now show richer XML documentation comments style information. If you are using an API from a library—for example, C++ AMP—that has XML documentation comments, then the IntelliSense tooltip shows more information than just the declaration. Also, if your code has the XML documentation comments, IntelliSense tooltips will show the richer information.

**C++ Code Constructs.** Skeleton code is available for switch, if-else, for loop, and other basic code constructs, in the List Members drop-down list. Select a piece of code from the list to insert it into your code and then fill in the required logic. You can also create your own custom pieces of code for use in the editor.

**List Members Enhancements.** The **List Members** drop-down list appears automatically as you type code into the code editor. Results are filtered, so that only relevant members are displayed as you type. You can control the kind of filtering logic that's used by the Member List—in the **Options** dialog box under **Text Editor** > **C/C++** > **Advanced**.

**Semantic Colorization.** Types, enumerations, macros, and other C++ tokens now have colorization by default.

**Reference Highlighting.** Selecting a symbol now highlights all instances of the symbol in the current file. Press **Ctrl**+**Shift**+**Up Arrow** or **Ctrl**+**Shift**+**Down Arrow** to move among the highlighted references. You can turn this feature off in the **Options** dialog box, under **Text Editor** > **C/C++** > **Advanced**.

### Application Lifecycle Management Tools

#### Static Code Analysis

Static analysis for C++ has been updated to provide richer error context information, more analysis rules, and better analysis results. In the new Code Analysis window, you can filter messages by keyword, project, and severity. When you select a message in the window, the line in the code where the message was triggered is highlighted in the code editor. For certain C++ warnings, the message lists source lines that show the execution path that leads to the warning; decision points and the reasons for taking that specific path are highlighted.
Code analysis is included in most editions of Visual Studio 2012. In the Professional, Premium, and Ultimate editions, all rules are included. In the Express editions for Windows 8 and Windows Phone, just the most critical warnings are included. Code analysis is not included in the Express edition for Web.
Here are some other code analysis enhancements:

- New concurrency warnings help you avoid concurrency bugs by making sure that you are using the correct locking disciplines in multithreaded C/C++ programs. The analyzer detects potential race conditions, lock order inversions, caller/callee locking contract violations, mismatched synchronization operations, and other concurrency bugs.
- You can specify the C++ rules that you want to apply to code analysis runs by using rule sets.
- In the **Code Analysis** window, you can insert into the source code a pragma that suppresses a selected warning.
- You can enhance the accuracy and completeness of static code analysis by using the new version of the Microsoft source-code annotation language (SAL) to describe how a function uses its parameters, the assumptions that it makes about them, and the guarantees that it makes when it finishes.
- Support for 64bit C++ projects.

#### Updated Unit Test Framework

Use the new C++ unit test framework in Visual Studio to write C++ unit tests. Add a new unit test project to your existing C++ solution by locating the C++ Unit Test Project template under the Visual C++ category in the New Project dialog box. Start writing your unit tests in the generated TEST_METHOD code stub in the Unittest1.cpp file. When the test code is written, build the solution. When you want to run the tests, open a **Unit Test Explorer** window by choosing **View** > **Other Windows** > **Unit Test Explorer**, and then, on the shortcut menu for the test case you want, choose **Run selected test**. After the test run finishes, you can view test results and additional stack trace information in the same window.

#### Architecture Dependency Graphs

To understand your code better, you can now generate dependency graphs for the binary, class, namespace, and include files in a solution. On the menu bar, choose **Architecture** > **Generate Dependency Graph**, and then **For Solution** or **For Include File** to generate a dependency graph. When the graph generation is complete, you can explore it by expanding each node, learn dependency relationships by moving between nodes, and browse source code by choosing **View Content** on the shortcut menu for a node. To generate a dependency graph for include files, on the shortcut menu for a \*.cpp source code file or \*.h header file, choose **Generate Graph of Include Files**.

#### Architecture Explorer

By using the **Architecture Explorer**, you can explore the assets in your C++ solution, projects, or files. On the menu bar, choose **Architecture** > **Windows** > **Architecture Explorer**. You can select a node you are interested in, for example, **Class View**. In this case, the right side of the tool window is expanded with a list of namespaces. If you select a namespace, a new column shows a list of the classes, structs, and enums in this namespace. You can continue to explore these assets, or go back to the column on the far left to start another query. See **Find Code with Architecture Explorer**.

#### Code Coverage

Code coverage has been updated to dynamically instrument binaries at runtime. This lowers the configuration overhead and provides better performance. You can also collect code-coverage data from unit tests for C++ apps. When you have created C++ unit tests, you can use **Unit Test Explorer** to discover tests in your solution. To run the unit tests and collect code coverage data for them, in **Unit Test Explorer**, choose **Analyze Code Coverage**. You can examine the code coverage results in the **Code Coverage Results** window—on the menu bar, choose **Test** > **Windows** > **Code Coverage Results**.

## What's New for C++ in Visual Studio 2010

### C++ Compiler and Linker

**auto Keyword.** The **`auto`** keyword has a new purpose. Use the default meaning of the **`auto`** keyword to declare a variable whose type is deduced from the initialization expression in the declaration of the variable. The `/Zc:auto` compiler option invokes either the new or the previous meaning of the **`auto`** keyword.

**decltype Type Specifier.** The **`decltype`** type specifier returns the type of a specified expression. Use the **`decltype`** type specifier in combination with the **`auto`** keyword to declare a type that is either complex or known only to the compiler. For example, use the combination to declare a template function whose return type depends on the types of its template arguments. Or, declare a template function that calls another function, and then returns the return type of the called function.

**Lambda Expressions.** Lambda functions have a function body but no name. Lambda functions combine the best characteristics of function pointers and function objects. Use a lambda function by itself, as a template function parameter instead of a function object, or together with the **`auto`** keyword to declare a variable whose type is a lambda.

**Rvalue Reference.** The rvalue reference declarator (&&) declares a reference to an rvalue. An rvalue reference lets you use move semantics and perfect forwarding to write more efficient constructors, functions, and templates.

**static_assert Declaration.** A **`static_assert`** declaration tests a software assertion at compile time, unlike other assertion mechanisms that test at run time. If the assertion fails, the compilation fails and a specified error message is issued.

**nullptr and __nullptr Keywords.** MSVC lets you use the **`nullptr`** keyword with native code or with managed code. The **`nullptr`** keyword indicates that an object handle, interior pointer, or native pointer type does not point to an object. The compiler interprets **`nullptr`** to be managed code when you use the `/clr` compiler option, and native code when you do not use the `/clr` option.
The Microsoft-specific **__nullptr** keyword has the same meaning as **`nullptr`**, but it applies to native code only. If you compile native C/C++ code by using the `/clr` compiler option, the compiler cannot determine whether the **`nullptr`** keyword is a native or a managed term. To make your intention clear to the compiler, use the nullptr keyword to specify the managed term, and **__nullptr** to specify the native term.

**`/Zc:trigraphs` Compiler Option.** By default, support for trigraphs is disabled. Use the **`/Zc:trigraphs`** compiler option to enable trigraphs support.
A trigraph consists of two consecutive question marks (??) followed by a unique third character. The compiler replaces a trigraph with the corresponding punctuation character. For example, the compiler replaces the ??= trigraph with the # (number sign) character. Use trigraphs in C source files that use a character set that does not contain certain punctuation characters.

**New Profile-Guided Optimization Option.** PogoSafeMode is a new profile-guided optimization option that lets you specify whether to use safe mode or fast mode when you optimize your application. Safe mode is thread-safe, but it is slower than fast mode. Fast mode is the default behavior.

**New Common Language Runtime (CLR) Option /clr:nostdlib.** A new option is added for `/clr` (Common Language Runtime Compilation). If different versions of the same libraries are included, a compile error is issued. The new option lets you exclude the default CLR libraries so that your program can use a specified version.

**New pragma directive detect_mismatch.** The pragma directive detect_mismatch lets you put a tag in your files that is compared to other tags that have the same name. If there are multiple values for the same name, the linker issues an error.

**XOP Intrinsics, FMA4 Intrinsics, and LWP Intrinsics.** New intrinsic functions have been added to support the XOP Intrinsics Added for Visual Studio 2010 SP1, FMA4 Intrinsics Added for Visual Studio 2010 SP1, and LWP Intrinsics Added for Visual Studio 2010 SP1 processor technologies. Use __cpuid, __cpuidex to determine which processor technologies are supported on a particular computer.

### Visual Studio C++ projects and the Build System

**MSBuild.** Visual C++ solutions and projects are now built by using MSBuild.exe, which replaces VCBuild.exe. MSBuild is the same flexible, extensible, XML-based build tool that is used by the other Visual Studio languages and project types. Because of this change, Visual Studio C++ project files now use an XML file format and have the .vcxproj file name extension. Visual Studio C++ project files from earlier versions of Visual Studio are automatically converted to the new file format.

**VC++ Directories.** The VC++ directories setting is now located in two places. Use project property pages to set per-project values for VC++ directories. Use the **Property Manager** and a property sheet to set global, per-configuration values for VC++ directories.

**Project-to-Project Dependencies.** In earlier releases, defined dependencies between projects were stored in the solution file. When these solutions are converted to the new project file format, dependencies are converted to project-to-project references. This change can affect applications because the concepts of solution dependencies and project-to-project references are different.

**Macros and Environment Variables.** The new _ITERATOR_DEBUG_LEVEL macro invokes debugging support for iterators. Use this macro instead of the older _SECURE_SCL and _HAS_ITERATOR_DEBUGGING macros.

### Visual C++ Libraries

**Concurrency Runtime Libraries.** The Concurrency Runtime framework supports applications and components that run simultaneously, and is the framework for programming concurrent applications in Visual C++. To support concurrent-application programming, the Parallel Patterns Library (PPL) provides general-purpose containers and algorithms for performing fine-grained parallelism. The Asynchronous Agents Library provides an actor-based programming model and message passing interfaces for coarse-grained dataflow and pipelining tasks.

**Standard C++ Library.** The following list describes many of the changes that have been made to the Standard C++ Library.

- The new rvalue reference C++ language feature has been used to implement move semantics and perfect forwarding for many functions in the Standard Template Library. Move semantics and perfect forwarding greatly improve the performance of operations that allocate or assign variables or parameters.
- Rvalue references are also used to implement the new `unique_ptr` class, which is a safer smart pointer type than the `auto_ptr` class. The `unique_ptr` class is movable but not copyable, implements strict ownership semantics without affecting safety, and works well with containers that are aware of rvalue references. The `auto_ptr` class is deprecated.
- Fifteen new functions, for example, `find_if_not`, `copy_if`, and `is_sorted`, have been added to the \<algorithm> header.
- In the \<memory> header, the new make_shared function is a convenient, robust, and efficient way to make a shared pointer to an object at the same time the object is constructed.
- Singly linked lists are supported by the \<forward_list> header.
- The new `cbegin`, `cend`, `crbegin`, and `crend` member functions provide a `const_iterator` that moves forward or backward through a container.
- The \<system_error> header and related templates support the processing of low-level system errors. Members of the `exception_ptr` class can be used to transport exceptions between threads.
- The \<codecvt> header supports converting various encodings of Unicode characters to other encodings.
- The \<allocators> header defines several templates that help allocate and free memory blocks for node-based containers.
- There are numerous updates to the \<random> header.

### Microsoft Foundation Class (MFC) Library

**Windows 7 Features.** MFC supports many Windows 7 features, for example, the Ribbon user interface (UI), the Taskbar, jump lists, tabbed thumbnails, thumbnail previews, the progress bar, icon overlay, and search indexing. Because MFC automatically supports many Windows 7 features, you may not have to modify your existing application. To support other features in new applications, use the MFC Application Wizard to specify the functionality you want to use.

**Multi-touch Awareness.** MFC supports applications that have a multi-touch user interface, for example, applications that are written for the Microsoft Surface operating system. A multi-touch application can handle Windows touch messages and gesture messages, which are combinations of touch messages. Just register your application for touch and gesture events and the operating system will route multi-touch events to your event handlers.

**High-DPI Awareness.** By default, MFC applications are now High-DPI-aware. If an application is High-DPI (high dots per inch) aware, the operating system can scale windows, text, and other UI elements to the current screen resolution. This means that a scaled image is more likely to be correctly laid out, and not clipped or pixelated.

**Restart Manager.** The restart manager automatically saves documents and restarts your application if it unexpectedly closes or restarts. For example, you can use the restart manager to start your application after it is closed by an automatic update. For more information about how to configure your application to use the restart manager, see **How to: Add Restart Manager Support**.

**CTaskDialog.** The `CTaskDialog` class can be used instead of the standard `AfxMessageBox` message box. The `CTaskDialog` class displays and gathers more information than the standard message box does.

#### SafeInt Library

The new SafeInt Library performs safe arithmetic operations that account for integer overflow. This library also compares different kinds of integers.

#### New Active Template Library (ATL) macros

New macros have been added to ATL to expand the functionality of PROP_ENTRY_TYPE and PROP_ENTRY_TYPE_EX. PROP_ENTRY_INTERFACE and PROP_ENTRY_INTERFACE_EX let you add a list of valid CLSIDs. PROP_ENTRY_INTERFACE_CALLBACK and PROP_ENTRY_INTERFACE_CALLBACK_EX let you specify a callback function to determine whether a CLSID is valid.

#### /analyze Warnings

Most **`/analyze`** (Enterprise Code Analysis) warnings have been removed from the C Run-Time (CRT), MFC, and ATL libraries.

#### Animation and D2D support

MFC now supports animation and Direct2D graphics. The MFC library has several new MFC classes and functions to support this functionality. There are also two new walkthroughs to show how to add a D2D object and an animation object to a project. These walkthroughs are **Walkthrough: Adding a D2D Object to an MFC Project** and **Walkthrough: Adding Animation to an MFC Project**.

### IDE

**Improved IntelliSense.** IntelliSense for Visual C++ has been completely redesigned to be faster, more accurate, and able to handle larger projects. To achieve this improvement, the IDE makes a distinction between how a developer views and modifies source code, and how the IDE uses source code and project settings to build a solution.
Because of this separation of duties, browsing features such as **Class View** and the new **Navigate To** dialog box are handled by a system that is based on a new SQL Server desktop database (.sdf) file that replaces the old no compile browse (.ncb) file. IntelliSense features such as Quick Information, Auto Completion, and Parameter Help parse translation units only when required. Hybrid features such as the new **Call Hierarchy** window use a combination of the browse and IntelliSense features.
Because IntelliSense processes only the information that you require at the moment, the IDE is more responsive. Also, because information is more up to date, IDE views and windows are more accurate. Finally, because the IDE infrastructure is better organized, more capable, and more scalable, it can handle larger projects.

**Improved IntelliSense Errors.** The IDE better detects errors that could cause a loss of IntelliSense and displays red wavy underlines under them. In addition, the IDE reports IntelliSense errors to the **Error List Window**. To display the code that is causing the problem, double-click the error in the **Error List Window**.

**#include Auto-Complete Feature.** The IDE supports auto-completion for the `#include` keyword. When you type `#include`, the IDE creates a drop-down list box of valid header files. If you continue by typing a file name, the IDE filters the list based on your entry. At any point, you can select from the list the file you want to include. This lets you quickly include files without knowing the exact file name.

**Navigate To.** The **Navigate To** dialog box lets you search for all symbols and files in your project that match a specified string. Search results are immediately revised as you type additional characters in your search string. The **Results** feedback field tells you the number of items found and helps you decide whether to constrain your search. The **Kind/Scope**, **Location**, and **Preview** feedback fields help you disambiguate items that have similar names. In addition, you can extend this feature to support other programming languages.

**Parallel Debugging and Profiling.** The Visual Studio debugger is aware of the Concurrency Runtime and helps you troubleshoot parallel processing applications. You can use the new concurrency profiler tool to visualize the overall behavior of your application. Also, you can use new tool windows to visualize the state of tasks and their call stacks.

**Ribbon Designer.** The **Ribbon Designer** is a graphical editor that lets you create and modify an MFC ribbon UI. The final ribbon UI is represented by an XML-based resource file (.mfcribbon-ms). For existing applications, you can capture your current ribbon UI by temporarily adding a few lines of code and then invoking the **Ribbon Designer**. After the ribbon resource file is created, you can replace your handwritten ribbon UI code with a few statements that load the ribbon resource.

**Call Hierarchy.** The **Call Hierarchy** window lets you navigate to all functions that are called by a particular function, or to all functions that call a particular function.

### Tools

**MFC Class Wizard.** Visual C++ 2010 brings back the well-regarded MFC Class Wizard tool. The MFC Class Wizard is a convenient way to add classes, messages, and variables to a project without having to manually modify sets of source files.

**ATL Control Wizard.** The ATL Control Wizard no longer automatically populates the `ProgID` field. If an ATL control does not have a `ProgID`, other tools may not work with it. One example of a tool that requires controls to have a `ProgID` is the **Insert Active Control** dialog box. For more information about the dialog box, see [Insert ActiveX controls](../windows/adding-editing-or-deleting-controls.md#insert-activex-controls).

### Microsoft Macro Assembler Reference

The addition of the YMMWORD data type supports the 256-bit multimedia operands that are included in the Intel Advanced Vector Extensions (AVX) instructions.

## What's New for C++ in Visual Studio 2008

### Visual C++ Integrated Development Environment (IDE)

- Dialog boxes that are created in ATL, MFC, and Win32 applications now comply with the Windows Vista style guidelines. When you create a new project by using Visual Studio 2008, all dialog boxes that you insert into your application will comply with the Windows Vista style guideline. If you recompile a project that you created with an earlier version of Visual Studio, any existing dialog boxes will maintain the same look that they previously had. For more information about how to insert dialog boxes into your application, see **Dialog Editor**.

- The **ATL Project** wizard now has an option to register components for all users. Beginning with Visual Studio 2008, the COM components and type libraries that are created by the **ATL Project** wizard are registered in the HKEY_CURRENT_USER node of the registry unless you select **Register component for all users**.
- The **ATL Project** wizard no longer provides an option to create attributed ATL projects. Beginning with Visual Studio 2008, the **ATL Project** wizard does not have an option to change the attributed status of a new project. All new ATL projects that the wizard creates are now unattributed.
- Writing to the registry can be redirected. With the introduction of Windows Vista, writing to certain areas of the registry requires a program to run in elevated mode. It is not desirable to always run Visual Studio in elevated mode. Per-user redirection automatically redirects registry writes from HKEY_CLASSES_ROOT to HKEY_CURRENT_USER without any programming changes.
- The **Class Designer** now has limited support for native C++ code. In earlier versions of Visual Studio, the **Class Designer** worked only with Visual C# and Visual Basic. C++ users can now use the **Class Designer**, but only in read-only mode. For more information about how to use the **Class Designer** with C++, see **Working with Visual C++ Code in Class Designer**.
- The project wizard no longer has an option to create a C++ SQL Server project. Beginning with Visual Studio 2008, the new project wizard does not have an option to create a C++ SQL Server project. SQL Server projects created by using an earlier version of Visual Studio will still compile and work correctly.

### Visual C++ Libraries

#### General

- Applications can be bound to specific versions of the Visual C++ libraries. Sometimes an application depends on updates that were made to the Visual C++ libraries after a release. In this case, running the application on a computer that has earlier versions of the libraries can cause unexpected behavior. You can now bind an application to a specific version of the libraries so that it will not run on a computer that has an earlier version of the libraries.

#### STL/CLR Library

- Visual C++ now includes the STL/CLR Library. The STL/CLR Library is a packaging of the Standard Template Library (STL), a subset of the Standard C++ Library, for use with C++ and the .NET Framework common language runtime (CLR). With STL/CLR, you can now use all the containers, iterators, and algorithms of STL in a managed environment.

#### MFC Library

- Windows Vista supports Common Controls. Over 150 methods in 18 new or existing classes have been added to support features in Windows Vista, or to improve functionality in current MFC classes.
- The new `CNetAddressCtrl` class enables you to input and validate IPv4 and IPv6 addresses or DNS names.
- The new `CPagerCtrl` class simplifies use of the Windows pager control.
- The new `CSplitButton` class simplifies the use of the Windows splitbutton control to select a default or optional action.

#### C++ Support Library

- C++ introduces the marshaling library. The marshaling library provides an easy and optimized way to marshal data between native and managed environments. The library is an alternative to more complex and less efficient approaches such as Using PInvoke. See **Overview of Marshaling in C++** for more information.

#### ATL Server

- ATL Server is released as a shared source project.
- Most of the ATL Server code base has been released as a shared source project on CodePlex and is not installed as part of Visual Studio 2008. Several files associated with ATL Server are no longer part of Visual Studio. For the list of removed files, see **Removed ATL Server Files**.
- Data encoding and decoding classes from atlenc.h and utility functions and classes from atlutil.h and atlpath.h are now part of the ATL library.
- Microsoft will continue to support versions of ATL Server that are included in earlier releases of Visual Studio as long as those versions of Visual Studio are supported. CodePlex will continue development of the ATL Server code as a community project. Microsoft does not support a CodePlex version of ATL Server.

### Visual C++ Compiler and Linker

#### Compiler Changes

- The compiler supports managed incremental builds. When you specify this option, the compiler will not recompile code when a referenced assembly changes. Instead it will perform an incremental build. Files are recompiled only if the changes affect the dependent code.
- Attributes related to ATL Server are no longer supported. The compiler no longer supports several attributes that were directly related to ATL Server. For a complete list of the removed attributes, see Breaking Changes.
- The compiler supports Intel Core microarchitecture. The compiler contains tuning for the Intel Core microarchitecture during code generation. By default, this tuning is on and cannot be disabled as it also helps Pentium 4 and other processors.
- Intrinsics support newer AMD and Intel processors. Several new intrinsic instructions support the greater functionality in more recent AMD and Intel processors. For more information about the new intrinsics, see **Supplemental Streaming SIMD Extensions 3 Instructions**, **Streaming SIMD Extensions 4 Instructions**, **SSE4A and Advanced Bit Manipulation Intrinsics**, **AES Intrinsics**, **_mm_clmulepi64_si128**, and **__rdtscp**.
- The `__cpuid` function is updated. The `__cpuid`, `__cpuidex` functions now support several new features from the latest revisions of AMD and Intel processors. The `__cpuidex` intrinsic is new and gathers more information from recent processors.
- The `/MP` compiler option reduces total build time. The `/MP` option can significantly reduce the total time to compile several source files by creating several processes that compile the files simultaneously. This option is especially useful on computers that support hyperthreading, multiple processors, or multiple cores.
- The `/Wp64` compiler option and **`__w64`** keyword are deprecated. The `/Wp64` compiler option and **`__w64`** keyword, which detect 64-bit portability issues, are deprecated and will be removed in a future version of the compiler. Instead of this compiler option and keyword, use a MSVC that targets a 64-bit platform.
- `/Qfast_transcendentals` generates inline code for transcendental functions.
- `/Qimprecise_fwaits` removes the fwait commands internal to try blocks when you use the `/fp:except` compiler option.

### Linker Changes

- User Account Control information is now embedded into manifest files for executables by the Visual C++ linker (link.exe). This feature is enabled by default. For more information about how to disable this feature, or how to modify the default behavior, see `/MANIFESTUAC` (Embeds UAC information in manifest).
- The linker now has the `/DYNAMICBASE` option to enable the Address Space Layout Randomization feature of Windows Vista. This option modifies the header of an executable to indicate whether the application should be randomly rebased at load time.

## What's New for C++ in Visual Studio 2005

The following features were new in Visual C++ 2005 Service Pack 1:

### Intrinsics for x86 and x64

- __halt
- __lidt
- __nop
- __readcr8
- __sidt
- __svm_clgi
- __svm_invlpga
- __svm_skinit
- __svm_stgi
- __svm_vmload
- __svm_vmrun
- __svm_vmsave
- __ud2
- __vmx_off
- __vmx_vmptrst
- __writecr8

### Intrinsics for x64 Only

- __vmx_on
- __vmx_vmclear
- __vmx_vmlaunch
- __vmx_vmptrld
- __vmx_vmread
- __vmx_vmresume
- __vmx_vmwrite

### New Language Keywords

__sptr, __uptr

### New Compiler Features

The compiler has breaking changes in this release.

- `64-bit native and cross-compilers.
- `/analyze` (Enterprise Code Analysis) compiler option has been added.
- `/bigobj` compiler option has been added.
- `/clr:pure`, `/clr:safe`, and `/clr:oldSyntax` have been added. (Later deprecated in Visual Studio 2015 and removed in Visual Studio 2017.)
- Deprecated compiler options: many compiler options have been deprecated in this release; see **Deprecated Compiler Options** for more information.
- Double thunking in `/clr` code is reduced; see **Double Thunking (C++)** for more information.
- `/EH` (Exception Handling Model) or `/EHs` can no longer be used to catch an exception that is raised with something other than a throw; use `/EHa`.
- `/errorReport` (Report Internal Compiler Errors) compiler option has been added.
- `/favor` (Optimize for 64) compiler option has been added.
- `/FA`, `/Fa` (Listing File) compiler option has been added.
- `/FC` (Full Path of Source Code File in Diagnostics) compiler option has been added.
- `/fp` (Specify Floating-Point Behavior) compiler option has been added.
- `/G` (Optimize for Processor) Options compiler option has been added.
- `/G` (Optimize for Processor) Options compiler option has been added.
- `/G3`, `/G4`, `/G5`, `/G6`, `/G7`, and `/GB` compiler options have been removed. The compiler now uses a "blended model" that attempts to create the best output file for all architectures.
- `/Gf` has been removed. Use `/GF` (Eliminate Duplicate Strings) instead.
- `/GL` (Whole Program Optimization) is now compatible with `/CLRHEADER`.
- `/GR` is now on by default.
- `/GS` (Buffer Security Check) now provides security protection for vulnerable pointer parameters. `/GS` is now on by default. `/GS` now also works on functions compiled to MSIL with `/clr` (Common Language Runtime Compilation).
- `/homeparams` (Copy Register Parameters to Stack) compiler option has been added.
- `/hotpatch` (Create Hotpatchable Image) compiler option has been added.
- Inline function heuristics have been updated; see **`inline`**, **`__inline`**, **`__forceinline`** and **inline_depth** for more information
- Many new intrinsic functions have been added, and many previously undocumented intrinsics are now documented.
- By default, any call to new that fails will throw an exception.
- `/ML` and `/MLd` compiler options have been removed. Visual C++ no longer supports single-threaded, statically linked CRT library support.
- The compiler implemented the Named Return Value Optimization, which is enabled when you compile with `/O1`, `/O2` (Minimize Size, Maximize Speed), `/Og` (Global Optimizations), and `/Ox` (Full Optimization).
- `/Oa` compiler option has been removed but will be silently ignored; use the `noalias` or `restrict__declspec` modifiers to specify how the compiler does aliasing.
- `/Op` compiler option had been removed. Use `/fp` (Specify Floating-Point Behavior) instead.
- OpenMP is now supported by Visual C++.
- `/openmp` (Enable OpenMP 2.0 Support) compiler option has been added.
- `/Ow` compiler option has been removed but will be silently ignored. Use the `noalias` or `restrict__declspec` modifiers to specify how the compiler does aliasing.

### Profile-Guided Optimizations

- `/QI0f` has been removed.
- `/QIfdiv` has been removed.
- `/QIPF_B` (Errata for B CPU Stepping) compiler option has been added.
- `/QIPF_C` (Errata for C CPU Stepping) compiler option has been added.
- `/QIPF_fr32` (Do Not Use Upper 96 Floating Point Registers) compiler option has been added.
- `/QIPF_noPIC` (Generate Position Dependent Code) compiler option has been added.
- `/QIPF_restrict_plabels` (Assume No Functions Created at Run Time) compiler option has been added.

### Unicode Support in the Compiler and Linker

- `/vd` (Disable Construction Displacements) now allows you to use dynamic_cast Operator on an object being constructed (/vd2)
- `/YX` compiler option has been removed. Use `/Yc` (Create Precompiled Header File) or `/Yu` (Use Precompiled Header File) instead. If you remove `/YX` from your build configurations and replace it with nothing, it can result in faster builds.
- `/Zc:forScope` is now on by default.
- `/Zc:wchar_t` is now on by default.
- `/Zd` compiler option has been removed. Line-number only debugging information is no longer supported. Use `/Zi` instead (see **/Z7, /Zi, /ZI (Debug Information Format)** for more information).
- `/Zg` is now only valid on C source code files, and not on C++ source code files.
- `/Zx` (Debug Optimized Itanium Code) compiler option has been added.

### New Language Features

- The attributeattribute is now deprecated.
- `appdomain__declspec` modifier has been added.
- `__clrcall` calling convention has been added.
- deprecated (C++) **declspec** modifier now allows you to specify a string that will be displayed at compile time, when a user tries to access a deprecated class or function.
- **`dynamic_cast`** Operator has breaking changes.
- Native enums now allow you to specify the underlying type.
- `jitintrinsicdeclspec` modifier has been added.
- `noaliasdeclspec` modifier has been added.
- `process__declspec` modifier has been added.
- **abstract**, **override**, and **sealed** are valid for native compilations.
- **`__restrict`** keyword has been added.
- `restrictdeclspec` modifier has been added.
- **`__thiscall`** is now a keyword.
- **`__unaligned`** keyword is now documented.
- **`volatile`** (C++) has updated behavior with respect to optimizations.

### New Preprocessor Features

- __CLR_VER predefined macro added.
- The comment (C/C++) pragma now accepts `/MANIFESTDEPENDENCY` as a linker comment. The exestr option to comment is now deprecated.
- `embedded_idl` attribute (The `#import` Directive) now takes an optional parameter.
- `fenv_access` pragma
- `float_control` pragma
- `fp_contract` pragma
- Global variables will not be initialized in the order they are declared if you have global variables in pragma managed, unmanaged and unmanaged sections. This is a potential breaking change if, for example, an unmanaged global variable is initialized with a managed global variables, and a fully constructed managed object is required.
- Sections specified with init_seg are now read only, and not read/write as in previous versions.
- inline_depth default is now 16. A default of 16 was also in effect in Visual C++ .NET 2003.
- _INTEGRAL_MAX_BITS predefined macro added, see Predefined Macros.
- _M_CEE, _M_CEE_PURE, and _M_CEE_SAFE predefined macros added, see Predefined Macros.
- _M_IX86_FP predefined macro added.
- _M_X64 predefined macro added.
- `make_public` pragma
- `managed`, `unmanaged` pragma syntax updated (now has `push` and `pop`)
- mscorlib.dll is now implicitly referenced by The `#using` Directive in all `/clr` compilations.
- _OPENMP predefined macro added.
- optimize pragma has been updated, a and w are no longer valid parameters.
- no_registry#import attribute has been added.
- `region`, `endregion` pragmas added
- _VC_NODEFAULTLIB predefined macro added.
- Variadic Macros are now implemented.
- `vtordisp` is deprecated and will be removed in a future release of Visual C++.
- The `warning` pragma now has the suppress specifier.

### New Linker Features

- Modules (non-assembly MSIL output files) are now allowed as input to the linker.
- `/ALLOWISOLATION` (Manifest Lookup) linker option has been added.
- `/ASSEMBLYRESOURCE` (Embed a Managed Resource) has been updated to now allow you to specify the name of the resource in the assembly, and to specify that the resource is private in the assembly.
- `/CLRIMAGETYPE` (Specify Type of CLR Image) linker option has been added.
- `/CLRSUPPORTLASTERROR` (Preserve Last Error Code for PInvoke Calls) linker option has been added.
- `/CLRTHREADATTRIBUTE` (Set CLR Thread Attribute) linker option has been added.
- `/CLRUNMANAGEDCODECHECK` (Add SuppressUnmanagedCodeSecurityAttribute) linker option has been added.
- `/ERRORREPORT` (Report Internal Linker Errors) linker option has been added.
- `/EXETYPE` linker option has been removed. The linker no longer supports creating Windows 95 and Windows 98 device drivers. Use an appropriate DDK to create these device drivers. The EXETYPE keyword is no longer valid for module definition files.
- `/FUNCTIONPADMIN` (Create Hotpatchable Image) linker option has been added.
- `/LTCG` linker option is now supported on modules compiled with `/clr`. `/LTCG` has also been updated to support profile-guided optimizations.
- `/MANIFEST` (Create Side-by-Side Assembly Manifest) linker option has been added.
- `/MANIFESTDEPENDENCY` (Specify Manifest Dependencies) linker option has been added.
- `/MANIFESTFILE` (Name Manifest File) linker option has been added.
- `/MAPINFO:LINES` linker option has been removed.
- `/NXCOMPAT` (Compatible with Data Execution Prevention) linker option has been added.
- `/PGD` (Specify Database for Profile-Guided Optimizations) linker option has been added.
- `/PROFILE` (Performance Tools Profiler) linker option has been added.
- `/SECTION` (Specify Section Attributes) linker option now supports attribute negation and no longer supports the L or D (VxD-related) attributes.
- Unicode Support in the Compiler and Linker
- `/VERBOSE` (Print Progress Messages) linker option now also accepts ICF and REF.
- `/VXD` linker option has been removed. The linker no longer supports creating Windows 95 and Windows 98 device drivers. Use an appropriate DDK to create these device drivers. The VXD keyword is no longer valid for module definition files.
- `/WS` linker option has been removed. `/WS` was used to modify images targeted for Windows NT 4.0. IMAGECFG.exe -R filename can be used instead of `/WS`. IMAGECFG.exe can be found on the Windows NT 4.0 CD-ROM in SUPPORT\DEBUG\I386\IMAGECFG.EXE.
- `/WX` (Treat Linker Warnings as Errors) linker option is now documented.

### New Linker Utility Features

- `/ALLOWISOLATION` editbin option had been added
- DESCRIPTION module definition file statement is removed. The linker no longer supports building virtual device drivers.
- `/ERRORREPORT` option has been added to bscmake.exe, dumpbin.exe, editbin.exe, and lib.exe.
- `/LTCG` lib option has been added.
- `/NXCOMPAT` editbin option has been added.
- `/RANGE` dumpbin option has been added.
- `/TLS` dumpbin option has been added.
- `/WS` editbin option has been removed. `/WS` was used to modify images targeted for Windows NT 4.0. IMAGECFG.exe -R filename can be used instead of `/WS`. IMAGECFG.exe can be found on the Windows NT 4.0 CD-ROM in SUPPORT\DEBUG\I386\IMAGECFG.EXE.
- /WX[:NO] lib option has been added.

### New NMAKE Features

- `/ERRORREPORT` has been added.
- `/G` has been added.
- The predefined rules have been updated.
- The $(MAKE) macro, which is documented in Recursion Macros, now gives the full path to nmake.exe.

### New MASM Features

- MASM expressions are now 64-bit values. In previous versions MASM expressions were 32-bit values.
- The instruction __asm int 3 now causes a function to be compiled to native.
- ALIAS (MASM) is now documented.
- `/ERRORREPORT` ml.exe and ml64.exe option is added.
- .FPO is now documented.
- H2INC.exe will not ship in Visual C++ 2005. If you need to continue to use H2INC, use H2INC.exe from a previous version of Visual C++.
- operator IMAGEREL has been added.
- operator HIGH32 has been added.
- operator LOW32 has been added.
- ml64.exe is a version of MASM for the x64 architecture. It assembles x64 .asm files into x64 object files. Inline assembly language is not supported in the x64 compiler. The following MASM directives have been added for ml64.exe (x64):
- .ALLOCSTACK
- .ENDPROLOG
- .PUSHFRAME
- .PUSHREG
- .SAVEREG
- .SAVEXMM128
- .SETFRAME In addition, the PROC directive was updated with x64-only syntax.
- MMWORD directive has been added
- `/omf` (ML.exe command line option) now implies `/c`. ML.exe does not support linking OMF format objects.
- The SEGMENT directive now supports additional attributes.
- operator SECTIONREL has been added.
- XMMWORD directive has been added

### New CRT Features

- Secure versions of several functions have been added. These functions handle errors in a better way and enforce stricter controls on buffers to help avoid common security flaws. The new secure versions are identified by the **_s** suffix.
- Existing less secure versions of many functions have been deprecated. To disable the deprecation warnings, define _CRT_SECURE_NO_WARNINGS.
- Many existing functions now validate their parameters and invoke the invalid parameter handler when an invalid parameter is passed.
- Many existing functions now set `errno` where they did not before.
- The typedef `errno_t` with type integer was added. `errno_t` is used whenever a function return type or parameter deals with error codes from `errno`. `errno_t` replaces `errcode`.
- Locale-dependent functions now have versions which take the locale as a parameter rather than using the current locale. These new functions have the **_l** suffix. Several new functions were added to work with locale objects. New functions include `_get_current_locale`, `_create_locale` and `_free_locale`.
- New functions were added to support locking and unlocking file handles.
- The `_spawn` family of functions does not reset errno to zero on success, as it did in previous versions.
- Versions of the `printf` family of functions that allow you to specify the order in which the arguments are used are available.
- Unicode is now a supported text format. The function `_open` supports _O_TEXTW, _O_UTF8 and _O_UTF16 attributes. The `fopen` function supports the "ccs=ENCODING" method of specifying a Unicode format.
- A new version of the CRT libraries built in managed code (MSIL) is now available and is used when compiling with the `/clr` (Common Language Runtime Compilation) option.
- _fileinfo has been removed.
- The default size for `time_t` is now 64 bits, which expands the range of `time_t` and several of the time functions out to the year 3000.
- The CRT now supports setting the locale on a per thread basis. The function `_configthreadlocale` was added to support this feature.
- The `_statusfp2` and `__control87_2` functions were added to allow access to and control of the floating point control word on both the x87 and SSE2 floating point processor.
- The `_mkgmtime` and `_mkgmtime64` functions were added to provide support for converting times (struct tm) to Greenwich Mean Time (GMT).
- Changes were made to `swprintf` and `vswprintf` to better conform with the standard.
- A new header file, INTRIN.H, provides prototypes for some intrinsic functions.
- The `fopen` function now has an N attribute.
- The `_open` function now has an _O_NOINHERIT attribute.
- The `atoi` function now returns INT_MAX and sets `errno` to ERANGE on overflow. In previous versions, the overflow behavior was undefined.
- The `printf` family of functions supports hexadecimal floating point output implemented according to the ANSI C99 standard using the format type specifiers %a and %A.
- The `printf` family now supports the "ll" (long long) size prefix.
- The `_controlfp` function has been optimized for better performance.
- Debug versions of some functions have been added.
- Added `_chgsignl` and `_cpysignl` (long double versions).
- Added `_locale_t` type to type table.
- New macro `_countof` Macro added for computing number of elements in an array.
- In each function topic, a section on .NET Framework equivalents has been added.
- Several string functions now have the option of truncating strings rather than failing when output buffers are too small; see **_TRUNCATE**.
- `_set_se_translator` now requires the use of the `/EHa` compiler option.
- `fpos_t` is now **`__int64`** under `/Za` (for C code) and when __STDC__ is set manually (for C++ code). It used to be a **`struct`**.
- _CRT_DISABLE_PERFCRIT_LOCKS can improve the I/O performance of single-threaded programs.
- POSIX names have been deprecated in favor of ISO C++ conformant names (for example, use `_getch` rather than `getch`).
- New link options .obj files are available for pure mode
- `_recalloc` combines features of `realloc` and `calloc`.

## What's New for C++ in Visual Studio 2003

### Compiler

- Information on how to run a Managed Extensions for C++ application built with the current version's compiler on a previous version of the runtime.
- Managed Extensions for C++ Frequently Asked Questions.
- A walkthrough has been added showing how to port an existing, native application to use Managed Extensions for C++: Walkthrough: Porting an Existing Native C++ Application to Interoperate with .NET Framework Components.
- You can now create a delegate on a method of a value type.
- The compiler's conformance with the C++ standard has been significantly enhanced for Visual C++ .NET 2003.
- `/arch` compiler option is added.
- `/Gf` is deprecated and will be removed in the next version of Visual C++.
- `/G7` compiler option is added.
- The `/GS` compiler option has been enhanced to help protect local variables from direct buffer overruns.
- The `/noBool` compiler option has been removed. The compiler now allows **`bool`** to appear only as a keyword (and not an identifier) in a C++ source code file.
- The **`long long`** type is now available as a **`typedef`** of **`__int64`** Note that there is not yet support for **`long long`** in the CRT.
- The `/Zm` compiler option now specifies the precompiled header memory allocation limit.
- _InterlockedCompareExchange intrinsic now documented.
- _InterlockedDecrement intrinsic now documented.
- _InterlockedExchange intrinsic now documented.
- _InterlockedExchangeAdd intrinsic now documented.
- _InterlockedIncrement intrinsic now documented.
- _ReadWriteBarrier intrinsic added.

### Attributes

- `implements` attribute is now documented.

### Linker features

The following linker switches have been added:

- /ASSEMBLYDEBUG
- /ASSEMBLYLINKRESOURCE
- DELAYSIGN
- /KEYFILE
- /KEYCONTAINER
- /SAFESEH

### MASM

The .SAFESEH directive and `/safeseh` ml.exe option were added.

## See also

[Visual C++ Porting and Upgrading Guide](visual-cpp-porting-and-upgrading-guide.md)
