// The following example illustrates the most common case
// of displaying the wait cursor during some lengthy
// processing.
void LengthyFunction()
{
   // perhaps you display a dialog box before displaying a
   // wait cursor

   CWaitCursor wait; // display wait cursor

   // do some lengthy processing
   Sleep(1000);

} // destructor automatically removes the wait cursor

// This example shows using a CWaitCursor object inside a block
// so the wait cursor is displayed only while the program is
// performing a lengthy operation.
void ConditionalFunction()
{
   if (SomeCondition)
   {
      CWaitCursor wait; // display wait cursor in this block only

      // do some lengthy processing
      Sleep(1000);

   } // at this point, the destructor removes the wait cursor
   else
   {
      // no wait cursor--only quick processing
   }
}