---
description: "Learn more about: __interface"
title: "__interface"
ms.date: "05/07/2019"
f1_keywords: ["__interface_cpp"]
helpviewer_keywords: ["__interface keyword [C++]"]
ms.assetid: ca5d400b-d6d8-4ba2-89af-73f67e5ec056
---
# __interface

**Microsoft Specific**

A Microsoft C++ interface can be defined as follows:

- Can inherit from zero or more base interfaces.

- Cannot inherit from a base class.

- Can only contain public, pure virtual methods.

- Cannot contain constructors, destructors, or operators.

- Cannot contain static methods.

- Cannot contain data members; properties are allowed.

## Syntax

```
modifier __interface interface-name {interface-definition};
```

## Remarks

A C++ [class](../cpp/class-cpp.md) or [struct](../cpp/struct-cpp.md) could be implemented with these rules, but **`__interface`** enforces them.

For example, the following is a sample interface definition:

```cpp
__interface IMyInterface {
   HRESULT CommitX();
   HRESULT get_X(BSTR* pbstrName);
};
```

For information on managed interfaces, see [interface class](../extensions/interface-class-cpp-component-extensions.md).

Notice that you do not have to explicitly indicate that the `CommitX` and `get_X` functions are pure virtual. An equivalent declaration for the first function would be:

```cpp
virtual HRESULT CommitX() = 0;
```

**`__interface`** implies the [novtable](../cpp/novtable.md) **`__declspec`** modifier.

## Example

The following sample shows how to use properties declared in an interface.

```cpp
// deriv_interface.cpp
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>
#include <string.h>
#include <comdef.h>
#include <stdio.h>

[module(name="test")];

[ object, uuid("00000000-0000-0000-0000-000000000001"), library_block ]
__interface IFace {
   [ id(0) ] int int_data;
   [ id(5) ] BSTR bstr_data;
};

[ coclass, uuid("00000000-0000-0000-0000-000000000002") ]
class MyClass : public IFace {
private:
    int m_i;
    BSTR m_bstr;

public:
    MyClass()
    {
        m_i = 0;
        m_bstr = 0;
    }

    ~MyClass()
    {
        if (m_bstr)
            ::SysFreeString(m_bstr);
    }

    int get_int_data()
    {
        return m_i;
    }

    void put_int_data(int _i)
    {
        m_i = _i;
    }

    BSTR get_bstr_data()
    {
        BSTR bstr = ::SysAllocString(m_bstr);
        return bstr;
    }

    void put_bstr_data(BSTR bstr)
    {
        if (m_bstr)
            ::SysFreeString(m_bstr);
        m_bstr = ::SysAllocString(bstr);
    }
};

int main()
{
    _bstr_t bstr("Testing");
    CoInitialize(NULL);
    CComObject<MyClass>* p;
    CComObject<MyClass>::CreateInstance(&p);
    p->int_data = 100;
    printf_s("p->int_data = %d\n", p->int_data);
    p->bstr_data = bstr;
    printf_s("bstr_data = %S\n", p->bstr_data);
}
```

```Output
p->int_data = 100
bstr_data = Testing
```

**END Microsoft Specific**

## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[Interface Attributes](../windows/attributes/interface-attributes.md)
