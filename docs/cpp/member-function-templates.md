---
description: "Learn more about: Member Function Templates"
title: "Member Function Templates"
ms.date: "11/04/2016"
helpviewer_keywords: ["function templates, member functions"]
ms.assetid: 83d51835-6a27-40ed-997c-7d90dc9182d8
---
# Member Function Templates

The term member template refers to both member function templates and nested class templates. Member function templates are template functions that are members of a class or class template.

Member functions can be function templates in several contexts. All functions of class templates are generic but are not referred to as member templates or member function templates. If these member functions take their own template arguments, they are considered to be member function templates.

## Example: Declare member function templates

Member function templates of nontemplate or template classes are declared as function templates with their template parameters.

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

## Example: Member function template of template class

The following example shows a member function template of a template class.

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

Local classes are not allowed to have member templates.

Member template functions cannot be virtual functions and cannot override virtual functions from a base class when they are declared with the same name as a base class virtual function.

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

[Function Templates](../cpp/function-templates.md)
