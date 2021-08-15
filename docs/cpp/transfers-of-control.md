---
description: "Learn more about: Transfers of Control"
title: "Transfers of Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["control flow, branching", "control flow, transferring control"]
ms.assetid: aa51e7f2-060f-4106-b0fe-331f04357423
---
# Transfers of Control

You can use the **`goto`** statement or a **`case`** label in a **`switch`** statement to specify a program that branches past an initializer. Such code is illegal unless the declaration that contains the initializer is in a block enclosed by the block in which the jump statement occurs.

The following example shows a loop that declares and initializes the objects `total`, `ch`, and `i`. There is also an erroneous **`goto`** statement that transfers control past an initializer.

```cpp
// transfers_of_control.cpp
// compile with: /W1
// Read input until a nonnumeric character is entered.
int main()
{
   char MyArray[5] = {'2','2','a','c'};
   int i = 0;
   while( 1 )
   {
      int total = 0;

      char ch = MyArray[i++];

      if ( ch >= '0' && ch <= '9' )
      {
         goto Label1;

         int i = ch - '0';
      Label1:
         total += i;   // C4700: transfers past initialization of i.
      } // i would be destroyed here if  goto error were not present
   else
      // Break statement transfers control out of loop,
      //  destroying total and ch.
      break;
   }
}
```

In the preceding example, the **`goto`** statement tries to transfer control past the initialization of `i`. However, if `i` were declared but not initialized, the transfer would be legal.

The objects `total` and `ch`, declared in the block that serves as the *statement* of the **`while`** statement, are destroyed when that block is exited using the **`break`** statement.
