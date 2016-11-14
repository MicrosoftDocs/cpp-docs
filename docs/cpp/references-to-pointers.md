---
title: "References to Pointers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "references, to pointers"
ms.assetid: 4ce48b08-1511-4d2f-a31f-95f99eac0c70
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# References to Pointers
References to pointers can be declared in much the same way as references to objects. Declaring a reference to a pointer yields a modifiable value that is used like a normal pointer.  
  
## Example  
 The following code samples illustrate the difference between using a pointer to a pointer and a reference to a pointer.  
  
 Functions `Add1` and `Add2` are functionally equivalent (although they are not called the same way). The difference is that `Add1` uses double indirection whereas `Add2` uses the convenience of a reference to a pointer.  
  
```  
// references_to_pointers.cpp  
// compile with: /EHsc  
  
#include <iostream>  
#include <string>  
  
// STL namespace  
using namespace std;  
  
enum {  
   sizeOfBuffer = 132  
};  
  
// Define a binary tree structure.  
struct BTree {  
   char  *szText;  
   BTree *Left;  
   BTree *Right;  
};  
  
// Define a pointer to the root of the tree.  
BTree *btRoot = 0;  
  
int Add1( BTree **Root, char *szToAdd );  
int Add2( BTree*& Root, char *szToAdd );  
void PrintTree( BTree* btRoot );  
  
int main( int argc, char *argv[] ) {  
   // Usage message  
   if( argc < 2 ) {  
      cerr << "Usage: Refptr [1 | 2]" << "\n";  
      cerr << "\nwhere:\n";  
      cerr << "1 uses double indirection\n";  
      cerr << "2 uses a reference to a pointer.\n";  
      cerr << "\nInput is from stdin.\n";  
      return 1;  
   }  
  
   char *szBuf = new char[sizeOfBuffer];  
   if (szBuf == NULL) {  
      cerr << "Out of memory!\n";  
      return -1;  
   }  
  
   // Read a text file from the standard input device and  
   //  build a binary tree.  
   //while( !cin.eof() )   
   {  
      cin.get( szBuf, sizeOfBuffer, '\n' );  
      cin.get();  
  
      if ( strlen( szBuf ) ) {  
         switch ( *argv[1] ) {  
            // Method 1: Use double indirection.  
            case '1':  
               Add1( &btRoot, szBuf );  
               break;  
            // Method 2: Use reference to a pointer.  
            case '2':  
               Add2( btRoot, szBuf );  
               break;  
            default:  
               cerr << "Illegal value '"  
                  << *argv[1]  
                  << "' supplied for add method.\n"  
                     << "Choose 1 or 2.\n";  
               return -1;  
         }  
      }  
   }  
   // Display the sorted list.  
   PrintTree( btRoot );  
}  
  
// PrintTree: Display the binary tree in order.  
void PrintTree( BTree* MybtRoot ) {  
   // Traverse the left branch of the tree recursively.  
   if ( btRoot->Left )  
      PrintTree( btRoot->Left );  
  
   // Print the current node.  
   cout << btRoot->szText << "\n";  
  
   // Traverse the right branch of the tree recursively.  
   if ( btRoot->Right )  
      PrintTree( btRoot->Right );  
}  
  
// Add1: Add a node to the binary tree.  
//       Uses double indirection.  
int Add1( BTree **Root, char *szToAdd ) {  
   if ( (*Root) == 0 ) {  
      (*Root) = new BTree;  
      (*Root)->Left = 0;  
      (*Root)->Right = 0;  
      (*Root)->szText = new char[strlen( szToAdd ) + 1];  
      strcpy_s((*Root)->szText, (strlen( szToAdd ) + 1), szToAdd );  
      return 1;  
   }  
   else {  
      if ( strcmp( (*Root)->szText, szToAdd ) > 0 )  
         return Add1( &((*Root)->Left), szToAdd );  
      else  
         return Add1( &((*Root)->Right), szToAdd );  
   }  
}  
  
// Add2: Add a node to the binary tree.  
//       Uses reference to pointer  
int Add2( BTree*& Root, char *szToAdd ) {  
   if ( Root == 0 ) {  
      Root = new BTree;  
      Root->Left = 0;  
      Root->Right = 0;  
      Root->szText = new char[strlen( szToAdd ) + 1];  
      strcpy_s( Root->szText, (strlen( szToAdd ) + 1), szToAdd );  
      return 1;  
   }  
   else {  
      if ( strcmp( Root->szText, szToAdd ) > 0 )  
         return Add2( Root->Left, szToAdd );  
      else  
         return Add2( Root->Right, szToAdd );  
   }  
}  
```  
  
```Output  
Usage: Refptr [1 | 2]  
  
where:  
1 uses double indirection  
2 uses a reference to a pointer.  
  
Input is from stdin.  
```  
  
## See Also  
 [References](../cpp/references-cpp.md)