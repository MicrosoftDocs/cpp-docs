---
description: "Learn more about: CObject Class"
title: "CObject Class"
ms.date: "11/04/2016"
f1_keywords: ["CObject", "AFX/CObject", "AFX/CObject::CObject", "AFX/CObject::AssertValid", "AFX/CObject::Dump", "AFX/CObject::GetRuntimeClass", "AFX/CObject::IsKindOf", "AFX/CObject::IsSerializable", "AFX/CObject::Serialize"]
helpviewer_keywords: ["CObject [MFC], CObject", "CObject [MFC], AssertValid", "CObject [MFC], Dump", "CObject [MFC], GetRuntimeClass", "CObject [MFC], IsKindOf", "CObject [MFC], IsSerializable", "CObject [MFC], Serialize"]
ms.assetid: 95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a
---
# CObject Class

The principal base class for the Microsoft Foundation Class Library.

## Syntax

```
class AFX_NOVTABLE CObject
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[CObject::CObject](#cobject)|Default constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CObject::AssertValid](#assertvalid)|Validates this object's integrity.|
|[CObject::Dump](#dump)|Produces a diagnostic dump of this object.|
|[CObject::GetRuntimeClass](#getruntimeclass)|Returns the `CRuntimeClass` structure corresponding to this object's class.|
|[CObject::IsKindOf](#iskindof)|Tests this object's relationship to a given class.|
|[CObject::IsSerializable](#isserializable)|Tests to see whether this object can be serialized.|
|[CObject::Serialize](#serialize)|Loads or stores an object from/to an archive.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CObject::operator delete](#operator_delete)|Special **`delete`** operator.|
|[CObject::operator new](#operator_new)|Special **`new`** operator.|

## Remarks

It serves as the root not only for library classes such as `CFile` and `CObList`, but also for the classes that you write. `CObject` provides basic services, including

- Serialization support

- Run-time class information

- Object diagnostic output

- Compatibility with collection classes

Note that `CObject` does not support multiple inheritance. Your derived classes can have only one `CObject` base class, and that `CObject` must be leftmost in the hierarchy. It is permissible, however, to have structures and non- `CObject`-derived classes in right-hand multiple-inheritance branches.

You will realize major benefits from `CObject` derivation if you use some of the optional macros in your class implementation and declarations.

The first-level macros, [DECLARE_DYNAMIC](run-time-object-model-services.md#declare_dynamic) and [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic), permit run-time access to the class name and its position in the hierarchy. This, in turn, allows meaningful diagnostic dumping.

The second-level macros, [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) and [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial), include all the functionality of the first-level macros, and they enable an object to be "serialized" to and from an "archive."

For information about deriving Microsoft Foundation classes and C++ classes in general and using `CObject`, see [Using CObject](../../mfc/using-cobject.md) and [Serialization](../../mfc/serialization-in-mfc.md).

## Inheritance Hierarchy

`CObject`

## Requirements

**Header:** afx.h

## <a name="assertvalid"></a> CObject::AssertValid

Validates this object's integrity.

```
virtual void AssertValid() const;
```

### Remarks

`AssertValid` performs a validity check on this object by checking its internal state. In the Debug version of the library, `AssertValid` may assert and thus terminate the program with a message that lists the line number and filename where the assertion failed.

When you write your own class, you should override the `AssertValid` function to provide diagnostic services for yourself and other users of your class. The overridden `AssertValid` usually calls the `AssertValid` function of its base class before checking data members unique to the derived class.

Because `AssertValid` is a **`const`** function, you are not permitted to change the object state during the test. Your own derived class `AssertValid` functions should not throw exceptions but rather should assert whether they detect invalid object data.

The definition of "validity" depends on the object's class. As a rule, the function should perform a "shallow check." That is, if an object contains pointers to other objects, it should check to see whether the pointers are not null, but it should not perform validity testing on the objects referred to by the pointers.

### Example

See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) for a listing of the `CAge` class used in all `CObject` examples.

[!code-cpp[NVC_MFCCObjectSample#7](../../mfc/codesnippet/cpp/cobject-class_1.cpp)]

For another example, see [AfxDoForAllObjects](diagnostic-services.md#afxdoforallobjects).

## <a name="cobject"></a> CObject::CObject

These functions are the standard `CObject` constructors.

```
CObject();
CObject(const CObject& objectSrc);
```

### Parameters

*objectSrc*<br/>
A reference to another `CObject`

### Remarks

The default version is automatically called by the constructor of your derived class.

If your class is serializable (it incorporates the IMPLEMENT_SERIAL macro), then you must have a default constructor (a constructor with no arguments) in your class declaration. If you do not need a default constructor, declare a private or protected "empty" constructor. For more information, see [Using CObject](../../mfc/using-cobject.md).

The standard C++ default class copy constructor does a member-by-member copy. The presence of the private `CObject` copy constructor guarantees a compiler error message if the copy constructor of your class is needed but not available. You must therefore provide a copy constructor if your class requires this capability.

### Example

See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) for a listing of the `CAge` class used in the `CObject` examples.

[!code-cpp[NVC_MFCCObjectSample#8](../../mfc/codesnippet/cpp/cobject-class_2.cpp)]

## <a name="dump"></a> CObject::Dump

Dumps the contents of your object to a [CDumpContext](../../mfc/reference/cdumpcontext-class.md) object.

```
virtual void Dump(CDumpContext& dc) const;
```

### Parameters

*dc*<br/>
The diagnostic dump context for dumping, usually `afxDump`.

### Remarks

When you write your own class, you should override the `Dump` function to provide diagnostic services for yourself and other users of your class. The overridden `Dump` usually calls the `Dump` function of its base class before printing data members unique to the derived class. `CObject::Dump` prints the class name if your class uses the `IMPLEMENT_DYNAMIC` or IMPLEMENT_SERIAL macro.

> [!NOTE]
> Your `Dump` function should not print a newline character at the end of its output.

`Dump` calls make sense only in the Debug version of the Microsoft Foundation Class Library. You should bracket calls, function declarations, and function implementations with **#ifdef _DEBUG**/ `#endif` statements for conditional compilation.

Since `Dump` is a **`const`** function, you are not permitted to change the object state during the dump.

The [CDumpContext insertion (<<) operator](../../mfc/reference/cdumpcontext-class.md#operator_lt_lt) calls `Dump` when a `CObject` pointer is inserted.

`Dump` permits only "acyclic" dumping of objects. You can dump a list of objects, for example, but if one of the objects is the list itself, you will eventually overflow the stack.

### Example

See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) for a listing of the `CAge` class used in all `CObject` examples.

[!code-cpp[NVC_MFCCObjectSample#9](../../mfc/codesnippet/cpp/cobject-class_3.cpp)]

## <a name="getruntimeclass"></a> CObject::GetRuntimeClass

Returns the `CRuntimeClass` structure corresponding to this object's class.

```
virtual CRuntimeClass* GetRuntimeClass() const;
```

### Return Value

A pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) structure corresponding to this object's class; never **NULL**.

### Remarks

There is one `CRuntimeClass` structure for each `CObject`-derived class. The structure members are as follows:

- **LPCSTR m_lpszClassName** A null-terminated string containing the ASCII class name.

- **int m_nObjectSize** The size of the object, in bytes. If the object has data members that point to allocated memory, the size of that memory is not included.

- **UINT m_wSchema** The schema number ( - 1 for nonserializable classes). See the [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro for a description of schema number.

- **CObject\* ( PASCAL\* m_pfnCreateObject )( )** A function pointer to the default constructor that creates an object of your class (valid only if the class supports dynamic creation; otherwise, returns **NULL**).

- **CRuntimeClass\* ( PASCAL\* m_pfn_GetBaseClass )( )** If your application is dynamically linked to the AFXDLL version of MFC, a pointer to a function that returns the `CRuntimeClass` structure of the base class.

- **CRuntimeClass\* m_pBaseClass** If your application is statically linked to MFC, a pointer to the `CRuntimeClass` structure of the base class.

This function requires use of the [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic), [IMPLEMENT_DYNCREATE](run-time-object-model-services.md#implement_dyncreate), or [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro in the class implementation. You will get incorrect results otherwise.

### Example

See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) for a listing of the `CAge` class used in all `CObject` examples.

[!code-cpp[NVC_MFCCObjectSample#10](../../mfc/codesnippet/cpp/cobject-class_4.cpp)]

## <a name="iskindof"></a> CObject::IsKindOf

Tests this object's relationship to a given class.

```
BOOL IsKindOf(const CRuntimeClass* pClass) const;
```

### Parameters

*pClass*<br/>
A pointer to a [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) structure associated with your `CObject`-derived class.

### Return Value

Nonzero if the object corresponds to the class; otherwise 0.

### Remarks

This function tests *pClass* to see if (1) it is an object of the specified class or (2) it is an object of a class derived from the specified class. This function works only for classes declared with the [DECLARE_DYNAMIC](run-time-object-model-services.md#declare_dynamic), [DECLARE_DYNCREATE](run-time-object-model-services.md#declare_dyncreate), or [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) macro.

Do not use this function extensively because it defeats the C++ polymorphism feature. Use virtual functions instead.

### Example

See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) for a listing of the `CAge` class used in all `CObject` examples.

[!code-cpp[NVC_MFCCObjectSample#11](../../mfc/codesnippet/cpp/cobject-class_5.cpp)]

## <a name="isserializable"></a> CObject::IsSerializable

Tests whether this object is eligible for serialization.

```
BOOL IsSerializable() const;
```

### Return Value

Nonzero if this object can be serialized; otherwise 0.

### Remarks

For a class to be serializable, its declaration must contain the [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) macro, and the implementation must contain the [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro.

> [!NOTE]
> Do not override this function.

### Example

See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) for a listing of the `CAge` class used in all `CObject` examples.

[!code-cpp[NVC_MFCCObjectSample#12](../../mfc/codesnippet/cpp/cobject-class_6.cpp)]

## <a name="operator_delete"></a> CObject::operator delete

For the Release version of the library, operator **`delete`** frees the memory allocated by operator **`new`**.

```cpp
void PASCAL operator delete(void* p);

void PASCAL operator delete(
    void* p,
    void* pPlace);

void PASCAL operator delete(
    void* p,
    LPCSTR lpszFileName,
    int nLine);
```

### Remarks

In the Debug version, operator **`delete`** participates in an allocation-monitoring scheme designed to detect memory leaks.

If you use the code line

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/cobject-class_7.cpp)]

before any of your implementations in a .CPP file, then the third version of **`delete`** will be used, storing the filename and line number in the allocated block for later reporting. You do not have to worry about supplying the extra parameters; a macro takes care of that for you.

Even if you do not use DEBUG_NEW in Debug mode, you still get leak detection, but without the source-file line-number reporting described above.

If you override operators **`new`** and **`delete`**, you forfeit this diagnostic capability.

### Example

See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) for a listing of the `CAge` class used in the `CObject` examples.

[!code-cpp[NVC_MFCCObjectSample#15](../../mfc/codesnippet/cpp/cobject-class_8.cpp)]

## <a name="operator_new"></a> CObject::operator new

For the Release version of the library, operator **`new`** performs an optimal memory allocation in a manner similar to `malloc`.

```cpp
void* PASCAL operator new(size_t nSize);
void* PASCAL operator new(size_t, void* p);

void* PASCAL operator new(
    size_t nSize,
    LPCSTR lpszFileName,
    int nLine);
```

### Remarks

In the Debug version, operator **`new`** participates in an allocation-monitoring scheme designed to detect memory leaks.

If you use the code line

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/cobject-class_7.cpp)]

before any of your implementations in a .CPP file, then the second version of **`new`** will be used, storing the filename and line number in the allocated block for later reporting. You do not have to worry about supplying the extra parameters; a macro takes care of that for you.

Even if you do not use DEBUG_NEW in Debug mode, you still get leak detection, but without the source-file line-number reporting described above.

> [!NOTE]
> If you override this operator, you must also override **`delete`**. Do not use the standard library `_new_handler` function.

### Example

See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) for a listing of the `CAge` class used in the `CObject` examples.

[!code-cpp[NVC_MFCCObjectSample#16](../../mfc/codesnippet/cpp/cobject-class_9.h)]

## <a name="serialize"></a> CObject::Serialize

Reads or writes this object from or to an archive.

```
virtual void Serialize(CArchive& ar);
```

### Parameters

*ar*<br/>
A `CArchive` object to serialize to or from.

### Remarks

You must override `Serialize` for each class that you intend to serialize. The overridden `Serialize` must first call the `Serialize` function of its base class.

You must also use the [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) macro in your class declaration, and you must use the [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro in the implementation.

Use [CArchive::IsLoading](../../mfc/reference/carchive-class.md#isloading) or [CArchive::IsStoring](../../mfc/reference/carchive-class.md#isstoring) to determine whether the archive is loading or storing.

`Serialize` is called by [CArchive::ReadObject](../../mfc/reference/carchive-class.md#readobject) and [CArchive::WriteObject](../../mfc/reference/carchive-class.md#writeobject). These functions are associated with the `CArchive` insertion operator ( **<\<**) and extraction operator ( **>>**).

For serialization examples, see the article [Serialization: Serializing an Object](../../mfc/serialization-serializing-an-object.md).

### Example

See [CObList::CObList](../../mfc/reference/coblist-class.md#coblist) for a listing of the `CAge` class used in all `CObject` examples.

[!code-cpp[NVC_MFCCObjectSample#13](../../mfc/codesnippet/cpp/cobject-class_10.cpp)]

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)
