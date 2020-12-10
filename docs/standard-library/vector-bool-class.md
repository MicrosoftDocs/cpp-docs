---
description: "Learn more about: vector&lt;bool&gt; Class"
title: "vector&lt;bool&gt; Class"
ms.date: "11/04/2016"
f1_keywords: ["vector<bool>", "vector/std::vector::flip"]
helpviewer_keywords: ["std::vector [C++], const_pointer", "std::vector [C++], const_reference", "std::vector [C++], pointer", "std::vector [C++], flip", "std::vector [C++], swap"]
ms.assetid: 8028c8ed-ac9c-4f06-aba1-5de45c00aafb
---
# vector&lt;bool&gt; Class

The `vector<bool>` class is a partial specialization of [vector](../standard-library/vector-class.md) for elements of type **`bool`**. It has an allocator for the underlying type that's used by the specialization, which provides space optimization by storing one **`bool`** value per bit.

## Syntax

```cpp
template <class Allocator = allocator<bool>>
class vector<bool, Allocator>
```

## Remarks

This class template specialization behaves like vector, except for the differences explained in this article.

Operations that deal with the **`bool`** type correspond to values in the container storage. `allocator_traits::construct` is not used to construct these values.

### Typedefs

|Type name|Description|
|-|-|
|[const_pointer](#const_pointer)|A typedef to a `const_iterator` that can serve as a constant pointer to a Boolean element of the `vector<bool>`.|
|[const_reference](#const_reference)|A typedef for **`bool`**. After initialization, it does not observe updates to the original value.|
|[pointer](#pointer)|A typedef to an `iterator` that can serve as a pointer to a Boolean element of the `vector<bool>`.|

### Member functions

|Member function|Description|
|-|-|
|[flip](#flip)|Reverses all bits in the `vector<bool>`.|
|[swap](#swap)|Exchanges the elements of two `vector<bool>`s.|
|[operator&#91;&#93;](#op_at)|Returns a simulated reference to the `vector<bool>` element at a specified position.|
|`at`|Functions the same as the unspecialized [vector](../standard-library/vector-class.md)::at function, except that it uses the proxy class [vector\<bool>::reference](#reference_class). Also see [operator&#91;&#93;](#op_at).|
|`front`|Functions the same as the unspecialized [vector](../standard-library/vector-class.md)::front function, except that it uses the proxy class [vector\<bool>::reference](#reference_class). Also see [operator&#91;&#93;](#op_at).|
|`back`|Functions the same as the unspecialized [vector](../standard-library/vector-class.md)::back function, except that it uses the proxy class [vector\<bool>::reference](#reference_class). Also see [operator&#91;&#93;](#op_at).|

### Proxy Class

|Name|Description|
|-|-|
|[vector\<bool> reference Class](#reference_class)|A class that acts as a proxy to simulate `bool&` behavior, and whose objects can provide references to elements (single bits) within a `vector<bool>` object.|

## Requirements

**Header**: \<vector>

**Namespace:** std

## <a name="const_pointer"></a> vector\<bool>::const_pointer

A type that describes an object that can serve as a constant pointer to a Boolean element of the sequence contained by the `vector<bool>` object.

```cpp
typedef const_iterator const_pointer;
```

## <a name="const_reference"></a> vector\<bool>::const_reference

A type that describes an object that can serve as a constant reference to a Boolean element of the sequence contained by the `vector<bool>` object.

```cpp
typedef bool const_reference;
```

### Remarks

For more information and code examples, see [vector&lt;bool&gt;::reference::operator=](#reference_operator_eq).

## <a name="flip"></a> vector\<bool>::flip

Reverses all bits in a `vector<bool>`.

```cpp
void flip();
```

### Example

```cpp
// vector_bool_flip.cpp
// compile with: /EHsc /W4
#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    cout << boolalpha; // format output for subsequent code

    vector<bool> vb = { true, false, false, true, true };
    cout << "The vector is:" << endl << "    ";
    for (const auto& b : vb) {
        cout << b << " ";
    }
    cout << endl;

    vb.flip();

    cout << "The flipped vector is:" << endl << "    ";
    for (const auto& b : vb) {
        cout << b << " ";
    }
    cout << endl;
}
```

## <a name="op_at"></a> vector\<bool>::operator[]

Returns a simulated reference to the `vector<bool>` element at a specified position.

```cpp
vector<bool>::reference operator[](size_type Pos);

vector&<bool&>::const_reference operator[](size_type Pos) const;
```

### Parameters

*Pos*\
The position of the `vector<bool>` element.

### Return Value

A [vector\<bool>::reference](#reference_class) or [vector\<bool>::const_reference](#const_reference) object that contains the value of the indexed element.

If the position specified is greater than or equal to the size of the container, the result is undefined.

### Remarks

If you compile with _ITERATOR_DEBUG_LEVEL set, a run-time error occurs if you attempt to access an element outside the bounds of the vector.  For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

This code example shows the correct use of `vector<bool>::operator[]` and two common coding mistakes, which are commented out. These mistakes cause errors because the address of the `vector<bool>::reference` object that `vector<bool>::operator[]` returns cannot be taken.

```cpp
// cl.exe /EHsc /nologo /W4 /MTd
#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    cout << boolalpha;
    vector<bool> vb;

    vb.push_back(true);
    vb.push_back(false);

    //    bool* pb = &vb[1]; // conversion error - do not use
    //    bool& refb = vb[1];   // conversion error - do not use
    bool hold = vb[1];
    cout << "The second element of vb is " << vb[1] << endl;
    cout << "The held value from the second element of vb is " << hold << endl;

    // Note this doesn't modify hold.
    vb[1] = true;
    cout << "The second element of vb is " << vb[1] << endl;
    cout << "The held value from the second element of vb is " << hold << endl;
}
```

## <a name="pointer"></a> vector\<bool>::pointer

A type that describes an object that can serve as a pointer to a Boolean element of the sequence contained by the `vector<bool>` object.

```cpp
typedef iterator pointer;
```

## <a name="reference_class"></a> vector\<bool>::reference Class

The `vector<bool>::reference` class is a proxy class provided by the [vector\<bool> Class](../standard-library/vector-bool-class.md) to simulate `bool&`.

### Remarks

A simulated reference is required because C++ does not natively allow direct references to bits. `vector<bool>` uses only one bit per element, which can be referenced by using this proxy class. However, the reference simulation is not complete because certain assignments are not valid. For example, because the address of the `vector<bool>::reference` object cannot be taken, the following code that uses [vector\<bool>::operator&#91;&#93;](#op_at) is not correct:

```cpp
vector<bool> vb;
//...
bool* pb = &vb[1]; // conversion error - do not use
bool& refb = vb[1];   // conversion error - do not use
```

### <a name="reference_flip"></a> vector\<bool>::reference::flip

Inverts the Boolean value of a referenced [vector\<bool>](../standard-library/vector-bool-class.md) element.

```cpp
void flip();
```

#### Example

```cpp
// vector_bool_ref_flip.cpp
// compile with: /EHsc /W4
#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    cout << boolalpha;

    vector<bool> vb = { true, false, false, true, true };

    cout << "The vector is: " << endl << "    ";
    for (const auto& b : vb) {
        cout << b << " ";
    }
    cout << endl;

    vector<bool>::reference vbref = vb.front();
    vbref.flip();

    cout << "The vector with first element flipped is: " << endl << "    ";
    for (const auto& b : vb) {
        cout << b << " ";
    }
    cout << endl;
}
```

```Output
The vector is:
    true false false true true
The vector with first element flipped is:
    false false false true true
```

### <a name="reference_operator_bool"></a> vector\<bool>::reference::operator bool

Provides an implicit conversion from `vector<bool>::reference` to **`bool`**.

```cpp
operator bool() const;
```

#### Return Value

The Boolean value of the element of the vector\<bool> object.

#### Remarks

The `vector<bool>` object cannot be modified by this operator.

### <a name="reference_operator_eq"></a> vector\<bool>::reference::operator=

Assigns a Boolean value to a bit, or the value held by a referenced element to a bit.

```cpp
reference& operator=(const reference& Right);
reference& operator=(bool Val);
```

### Parameters

*Right*\
The element reference whose value is to be assigned to the bit.

*Val*\
The Boolean value to be assigned to the bit.

#### Example

```cpp
// vector_bool_ref_op_assign.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>
#include <string>

using namespace std;

template <typename C> void print(const string& s, const C& c) {
    cout << s;

    for (const auto& e : c) {
        cout << e << " ";
    }

    cout << endl;
}

int main()
{
    cout << boolalpha;

    vector<bool> vb = { true, false, false, true, true };

    print("The vector is: ", vb);

    // Invoke vector<bool>::reference::operator=()
    vector<bool>::reference refelem1 = vb[0];
    vector<bool>::reference refelem2 = vb[1];
    vector<bool>::reference refelem3 = vb[2];

    bool b1 = refelem1;
    bool b2 = refelem2;
    bool b3 = refelem3;
    cout << "The original value of the 1st element stored in a bool: " << b1 << endl;
    cout << "The original value of the 2nd element stored in a bool: " << b2 << endl;
    cout << "The original value of the 3rd element stored in a bool: " << b3 << endl;
    cout << endl;

    refelem2 = refelem1;

    print("The vector after assigning refelem1 to refelem2 is now: ", vb);

    refelem3 = true;

    print("The vector after assigning false to refelem1 is now: ", vb);

    // The initial values are still stored in the bool variables and remained unchanged
    cout << "The original value of the 1st element still stored in a bool: " << b1 << endl;
    cout << "The original value of the 2nd element still stored in a bool: " << b2 << endl;
    cout << "The original value of the 3rd element still stored in a bool: " << b3 << endl;
    cout << endl;
}
```

```Output
The vector is: true false false true true
The original value of the 1st element stored in a bool: true
The original value of the 2nd element stored in a bool: false
The original value of the 3rd element stored in a bool: false

The vector after assigning refelem1 to refelem2 is now: true true false true true
The vector after assigning false to refelem1 is now: true true true true true
The original value of the 1st element still stored in a bool: true
The original value of the 2nd element still stored in a bool: false
The original value of the 3rd element still stored in a bool: false
```

## <a name="swap"></a> vector\<bool>::swap

Static member function that exchanges two elements of Boolean vectors ( `vector<bool>`) by using the proxy class [vector\<bool>::reference](#reference_class).

```cpp
static void swap(
    reference Left,
    reference Right);
```

### Parameters

*Left*\
The element to be exchanged with the *Right* element.

*Right*\
The element to be exchanged with the *Left* element.

### Remarks

This overload supports the special proxy requirements of `vector<bool>`. [vector](../standard-library/vector-class.md)::swap has the same functionality as the single-argument overload of `vector<bool>::swap()`.

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
