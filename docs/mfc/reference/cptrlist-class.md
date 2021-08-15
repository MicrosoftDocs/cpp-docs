---
description: "Learn more about: CPtrList Class"
title: "CPtrList Class"
ms.date: "11/04/2016"
f1_keywords: ["CPtrList"]
helpviewer_keywords: ["lists, generic", "CPtrList class [MFC]", "generic lists"]
ms.assetid: 4139a09c-4338-4f42-9eea-51336120b43c
---
# CPtrList Class

Supports lists of void pointers.

## Syntax

```
class CPtrList : public CObject
```

## Members

The member functions of `CPtrList` are similar to the member functions of class [CObList](../../mfc/reference/coblist-class.md). Because of this similarity, you can use the `CObList` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a function parameter or return value, substitute a pointer to **`void`**.

`CObject*& CObList::GetHead() const;`

for example, translates to

`void*& CPtrList::GetHead() const;`

## Remarks

`CPtrList` incorporates the IMPLEMENT_DYNAMIC macro to support run-time type access and dumping to a `CDumpContext` object. If you need a dump of individual pointer list elements, you must set the depth of the dump context to 1 or greater.

Pointer lists cannot be serialized.

When a `CPtrList` object is deleted, or when its elements are removed, only the pointers are removed, not the entities they reference.

For more information on using `CPtrList`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CPtrList`

## Requirements

**Header:** afxcoll.h

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CObList Class](../../mfc/reference/coblist-class.md)
