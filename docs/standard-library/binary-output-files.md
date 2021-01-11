---
description: "Learn more about: Binary Output Files"
title: "Binary Output Files"
ms.date: "11/04/2016"
helpviewer_keywords: ["I/O [C++], binary output files", "files [C++], binary output files", "binary data, binary output files"]
ms.assetid: 180954af-8cd6-444b-9a76-2f630a3389d8
---
# Binary Output Files

Streams were originally designed for text, so the default output mode is text. In text mode, the line feed (newline) character expands to a carriage return-line feed pair. The expansion can cause problems, as shown here:

```cpp
// binary_output_files.cpp
// compile with: /EHsc
#include <fstream>
using namespace std;
int iarray[2] = { 99, 10 };
int main( )
{
    ofstream os( "test.dat" );
    os.write( (char *) iarray, sizeof( iarray ) );
}
```

You might expect this program to output the byte sequence { 99, 0, 10, 0 }; instead, it outputs { 99, 0, 13, 10, 0 }, which causes problems for a program expecting binary input. If you need true binary output, in which characters are written untranslated, you could specify binary output by using the [ofstream](../standard-library/basic-ofstream-class.md#basic_ofstream) constructor `openmode` argument:

```cpp
// binary_output_files2.cpp
// compile with: /EHsc
#include <fstream>
using namespace std;
int iarray[2] = { 99, 10 };

int main()
{
   ofstream ofs ( "test.dat", ios_base::binary );

   // Exactly 8 bytes written
   ofs.write( (char*)&iarray[0], sizeof(int)*2 );
}
```

## See also

[Output Streams](../standard-library/output-streams.md)
