---
description: "Learn more about: Member function templates"
title: "Member function templates"
ms.date: 09/27/2022
helpviewer_keywords: ["function templates, member functions"]
ms.assetid: 83d51835-6a27-40ed-997c-7d90dc9182d8
---
# Member function templates

The term member template refers to both member function templates and nested class templates. Member function templates are function templates that are members of a class or class template.

Member functions can be function templates in several contexts. All functions of class templates are generic but aren't referred to as member templates or member function templates. If these member functions take their own template arguments, they're considered to be member function templates.

## Example: Declare member function templates

Member function templates of non-template classes or class templates are declared as function templates with their template parameters.

```cpp
// member_function_templates.cpp
struct X
{
   template <class T> void mf(T* t) {}
};

int main()
{
   int i;
   X* x = new X();
   x->mf(&i);
}
```

## Example: Member function template of a class template

The following example shows a member function template of a class template.

```cpp
// member_function_templates2.cpp
template<typename T>
class X
{
public:
   template<typename U>
   void mf(const U &u)
   {
   }
};

int main()
{
}
```

## Example: Define member templates outside class

```cpp
// defining_member_templates_outside_class.cpp
template<typename T>
class X
{
public:
   template<typename U>
   void mf(const U &u);
};

template<typename T> template <typename U>
void X<T>::mf(const U &u)
{
}

int main()
{
}
```

## Example: Templated user-defined conversion

Local classes aren't allowed to have member templates.

Member function templates can't be virtual functions. And, they can't override virtual functions from a base class when they're declared with the same name as a base class virtual function.

The following example shows a templated user-defined conversion:

```cpp
// templated_user_defined_conversions.cpp
template <class T>
struct S
{
   template <class U> operator S<U>()
   {
      return S<U>();
   }
};

int main()
{
   S<int> s1;
   S<long> s2 = s1;  // Convert s1 using UDC and copy constructs S<long>.
}
```

## See also

[Function templates](../cpp/function-templates.md)
