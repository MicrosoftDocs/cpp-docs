---
description: "Learn more about: Constructing Output Stream Objects"
title: "Constructing Output Stream Objects"
ms.date: "11/04/2016"
helpviewer_keywords: ["output stream objects"]
ms.assetid: 93c8eab6-610c-4f48-b76d-1d960cac7641
---
# Constructing Output Stream Objects

If you use only the predefined `cout`, `cerr`, or `clog` objects, you do not need to construct an output stream. You must use constructors for:

- [Output File Stream Constructors](#vclrfoutputfilestreamconstructorsanchor1)

- [Output String Stream Constructors](#vclrfoutputstringstreamconstructorsanchor2)

## <a name="vclrfoutputfilestreamconstructorsanchor1"></a> Output File Stream Constructors

You can construct an output file stream in one of two ways:

- Use the default constructor, and then call the `open` member function.

   ```cpp
   ofstream myFile; // Static or on the stack
   myFile.open("filename");

   ofstream* pmyFile = new ofstream; // On the heap
   pmyFile->open("filename");
   ```

- Specify a filename and mode flags in the constructor call.

   ```cpp
   ofstream myFile("filename", ios_base::out);
   ```

## <a name="vclrfoutputstringstreamconstructorsanchor2"></a> Output String Stream Constructors

To construct an output string stream, you can use `ostringstream` in the following way:

```cpp
using namespace std;
// ...
ostringstream myString;
myString << "this is a test" << ends;

string sp = myString.str(); // Obtain string
cout << sp << endl;
```

The `ends` "manipulator" adds the necessary terminating null character to the string.

## See also

[Output Streams](../standard-library/output-streams.md)
