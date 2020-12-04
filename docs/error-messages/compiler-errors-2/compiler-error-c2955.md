---
description: "Learn more about: Compiler Error C2955"
title: "Compiler Error C2955"
ms.date: "03/28/2017"
f1_keywords: ["C2955"]
helpviewer_keywords: ["C2955"]
ms.assetid: 77709fb6-d69b-46fd-a62f-e8564563d01b
---
# Compiler Error C2955

'identifier' : use of class template or alias generic requires template or generic argument list

You cannot use a class template or class generic as an identifier without a template or generic argument list.

For more information, see [Class Templates](../../cpp/class-templates.md).

The following sample generates C2955 and shows how to fix it:

```cpp
// C2955.cpp
// compile with: /c
template<class T>
class X {};

X x1;   // C2955
X<int> x2;   // OK - this is how to fix it.
```

C2955 can also occur when attempting an out-of-line definition for a function declared in a class template:

```cpp
// C2955_b.cpp
// compile with: /c
template <class T>
class CT {
public:
   void CTFunc();
   void CTFunc2();
};

void CT::CTFunc() {}   // C2955

// OK - this is how to fix it
template <class T>
void CT<T>::CTFunc2() {}
```

C2955 can also occur when using generics:

```cpp
// C2955_c.cpp
// compile with: /clr
generic <class T>
ref struct GC {
   T t;
};

int main() {
   GC^ g;   // C2955
   GC <int>^ g;
}
```

## Example

**Visual Studio 2017 and later:** The compiler correctly diagnoses missing template argument lists when the template appears in a template parameter list (for example as part of a default template argument or a non-type template parameter). The following code compiles in Visual Studio 2015 but produces an error in Visual Studio 2017.

```
template <class T> class ListNode;
template <class T> using ListNodeMember = ListNode<T> T::*;
template <class T, ListNodeMember M> class ListHead; // C2955: 'ListNodeMember': use of alias
                                                     // template requires template argument list

// correct:  template <class T, ListNodeMember<T> M> class ListHead;
```
