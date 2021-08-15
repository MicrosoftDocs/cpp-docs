---
description: "Learn more about: Constructing Input Stream Objects"
title: "Constructing Input Stream Objects"
ms.date: "11/04/2016"
helpviewer_keywords: ["input stream objects"]
ms.assetid: ab94866e-6ffe-4f15-b4db-0bd23e636075
---
# Constructing Input Stream Objects

If you use only the `cin` object, you do not need to construct an input stream. You must construct an input stream if you use:

- [Input File Stream Constructors](#vclrfinputfilestreamconstructorsanchor8)

- [Input String Stream Constructors](#vclrfinputstringstreamconstructorsanchor9)

## <a name="vclrfinputfilestreamconstructorsanchor8"></a> Input File Stream Constructors

There are two ways to create an input file stream:

- Use the **`void`** argument constructor, then call the `open` member function:

   ```cpp
   ifstream myFile; // On the stack
   myFile.open("filename");

   ifstream* pmyFile = new ifstream; // On the heap
   pmyFile->open("filename");
   ```

- Specify a filename and mode flags in the constructor invocation, thereby opening the file during the construction process:

   ```cpp
   ifstream myFile("filename");
   ```

## <a name="vclrfinputstringstreamconstructorsanchor9"></a> Input String Stream Constructors

Input string stream constructors require the address of preallocated, preinitialized storage:

```cpp
string s("123.45");

double amt;
istringstream myString(s);

//istringstream myString("123.45") also works
myString>> amt; // amt contains 123.45
```

## See also

[Input Streams](../standard-library/input-streams.md)
