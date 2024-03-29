---
description: "Learn more about: Compiler Error C2248"
title: "Compiler Error C2248"
ms.date: 09/27/2022
f1_keywords: ["C2248"]
helpviewer_keywords: ["C2248"]
ms.assetid: 7a3ba0e8-d3b9-4bb9-95db-81ef17e31d23
---
# Compiler Error C2248

> '*member*': can't access '*access_level*' member declared in class '*class*'

## Remarks

Members of a derived class can't access **`private`** members of a base class. You can't access **`private`** or **`protected`** members of class instances.

## Example

The following sample generates C2248 when `private` or `protected` members of a class are accessed from outside the class. To fix this issue, don't access these members directly outside the class. Use `public` member data and member functions to interact with the class.

```cpp
// C2248_access.cpp
// compile with: cl /EHsc /W4 C2248_access.cpp
#include <stdio.h>

class X {
public:
    int  m_publicMember;
    void setPrivateMember( int i ) {
        m_privateMember = i;
        printf_s("\n%d", m_privateMember);
    }
protected:
    int  m_protectedMember;

private:
    int  m_privateMember;
} x;

int main() {
    x.m_publicMember = 4;
    printf_s("\n%d", x.m_publicMember);
    x.m_protectedMember = 2; // C2248 m_protectedMember is protected
    x.m_privateMember = 3;   // C2248  m_privMemb is private
    x.setPrivateMember(0);   // OK uses public access function
}
```

Another conformance issue that exposes C2248 is the use of template friends and specialization. To fix this issue, declare friend function templates by using either an empty template parameter list `<>` or specific template parameters.

```cpp
// C2248_template.cpp
// compile with: cl /EHsc /W4 C2248_template.cpp
template<class T>
void f(T t) {
    t.i;   // C2248
}

struct S {
private:
    int i;

public:
    S() {}
    friend void f(S);   // refer to the non-template function void f(S)
    // To fix, comment out the previous line and
    // uncomment the following line.
    // friend void f<S>(S);
};

int main() {
    S s;
    f<S>(s);
}
```

Here's another conformance issue that exposes C2248: You attempt to declare a friend of a class, but the class isn't visible to the friend declaration in the scope of the class. To fix this issue, grant friendship to the enclosing class.

```cpp
// C2248_enclose.cpp
// compile with: cl /W4 /c C2248_enclose.cpp
class T {
    class S {
        class E {};
    };
    friend class S::E;   // C2248
};

class A {
    class S {
        class E {};
        friend class A;  // grant friendship to enclosing class
    };
    friend class S::E;   // OK
};
```
