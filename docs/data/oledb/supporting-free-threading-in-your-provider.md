---
description: "Learn more about: Supporting Free Threading in Your Provider"
title: "Supporting Free Threading in Your Provider"
ms.date: "11/04/2016"
helpviewer_keywords: ["OLE DB providers, multithreaded", "threading [C++], providers"]
ms.assetid: a91270dc-cdf9-4855-88e7-88a54be7cbe8
---
# Supporting Free Threading in Your Provider

All the OLE DB provider classes are thread-safe, and registry entries are set accordingly. It's a good idea to support free threading to help provide a high level of performance in multiuser situations. To help keep your provider thread-safe, you must verify that your code is blocked properly. Whenever you write or store data, you must block the access with critical sections.

Each OLE DB provider template object has its own critical section. To make blocking easier, each new class you create should be a template class taking the parent class name as an argument.

The following example shows how to block your code:

```cpp
template <class T>
class CMyObject<T> : public...

HRESULT MyObject::MyMethod(void)
{
   T* pT = (T*)this;      // this gets the parent class

// You don't need to do anything if you are only reading information

// If you want to write information, do the following:
   pT->Lock();         // engages critical section in the object
   ...;                // write whatever information you wish
   pT->Unlock();       // disengages the critical section
}
```

For more information about how to protect critical sections with `Lock` and `Unlock`, see [Multithreading: How To Use the Synchronization Classes](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

Verify that any methods you override (such as `Execute`) are thread-safe.

## See also

[Working with OLE DB Provider Templates](../../data/oledb/working-with-ole-db-provider-templates.md)
