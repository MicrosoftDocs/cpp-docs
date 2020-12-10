---
description: "Learn more about: Labeled Statements"
title: "Labeled Statements"
ms.date: "11/04/2016"
helpviewer_keywords: ["labeled statement", "statements, labeled"]
ms.assetid: 456a26d5-0fcc-4d1a-b71f-fa9ff3d73b91
---
# Labeled Statements

Labels are used to transfer program control directly to the specified statement.

```
identifier :  statement
case constant-expression :  statement
default :  statement
```

The scope of a label is the entire function in which it is declared.

## Remarks

There are three types of labeled statements. All use a colon to separate some type of label from the statement. The case and default labels are specific to case statements.

```cpp
#include <iostream>
using namespace std;

void test_label(int x) {

    if (x == 1){
        goto label1;
    }
    goto label2;

label1:
    cout << "in label1" << endl;
    return;

label2:
    cout << "in label2" << endl;
    return;
}

int main() {
    test_label(1);  // in label1
    test_label(2);  // in label2
}
```

**The goto statement**

The appearance of an *identifier* label in the source program declares a label. Only a [goto](../cpp/goto-statement-cpp.md) statement can transfer control to an *identifier* label. The following code fragment illustrates use of the **`goto`** statement and an *identifier* label:

A label cannot appear by itself but must always be attached to a statement. If a label is needed by itself, place a null statement after the label.

The label has function scope and cannot be redeclared within the function. However, the same name can be used as a label in different functions.

```cpp
// labels_with_goto.cpp
// compile with: /EHsc
#include <iostream>
int main() {
   using namespace std;
   goto Test2;

   cout << "testing" << endl;

   Test2:
      cerr << "At Test2 label." << endl;
}

//Output: At Test2 label.
```

**The case statement**

Labels that appear after the **`case`** keyword cannot also appear outside a **`switch`** statement. (This restriction also applies to the **`default`** keyword.) The following code fragment shows the correct use of **`case`** labels:

```cpp
// Sample Microsoft Windows message processing loop.
switch( msg )
{
   case WM_TIMER:    // Process timer event.
      SetClassWord( hWnd, GCW_HICON, ahIcon[nIcon++] );
      ShowWindow( hWnd, SW_SHOWNA );
      nIcon %= 14;
      Yield();
      break;

   case WM_PAINT:
      memset( &ps, 0x00, sizeof(PAINTSTRUCT) );
      hDC = BeginPaint( hWnd, &ps );
      EndPaint( hWnd, &ps );
      break;

   default:
      // This choice is taken for all messages not specifically
      //  covered by a case statement.

      return DefWindowProc( hWnd, Message, wParam, lParam );
      break;
}
```

## Labels in the case statement

Labels that appear after the **`case`** keyword cannot also appear outside a **`switch`** statement. (This restriction also applies to the **`default`** keyword.) The following code fragment shows the correct use of **`case`** labels:

```cpp
// Sample Microsoft Windows message processing loop.
switch( msg )
{
   case WM_TIMER:    // Process timer event.
      SetClassWord( hWnd, GCW_HICON, ahIcon[nIcon++] );
      ShowWindow( hWnd, SW_SHOWNA );
      nIcon %= 14;
      Yield();
      break;

   case WM_PAINT:
      // Obtain a handle to the device context.
      // BeginPaint will send WM_ERASEBKGND if appropriate.

      memset( &ps, 0x00, sizeof(PAINTSTRUCT) );
      hDC = BeginPaint( hWnd, &ps );

      // Inform Windows that painting is complete.

      EndPaint( hWnd, &ps );
      break;

   case WM_CLOSE:
      // Close this window and all child windows.

      KillTimer( hWnd, TIMER1 );
      DestroyWindow( hWnd );
      if ( hWnd == hWndMain )
         PostQuitMessage( 0 );  // Quit the application.
      break;

   default:
      // This choice is taken for all messages not specifically
      //  covered by a case statement.

      return DefWindowProc( hWnd, Message, wParam, lParam );
      break;
}
```

## Labels in the goto statement

The appearance of an *identifier* label in the source program declares a label. Only a [goto](../cpp/goto-statement-cpp.md) statement can transfer control to an *identifier* label. The following code fragment illustrates use of the **`goto`** statement and an *identifier* label:

A label cannot appear by itself but must always be attached to a statement. If a label is needed by itself, place a null statement after the label.

The label has function scope and cannot be redeclared within the function. However, the same name can be used as a label in different functions.

```cpp
// labels_with_goto.cpp
// compile with: /EHsc
#include <iostream>
int main() {
   using namespace std;
   goto Test2;

   cout << "testing" << endl;

   Test2:
      cerr << "At Test2 label." << endl;
// At Test2 label.
}
```

## See also

[Overview of C++ Statements](../cpp/overview-of-cpp-statements.md)<br/>
[switch Statement (C++)](../cpp/switch-statement-cpp.md)
