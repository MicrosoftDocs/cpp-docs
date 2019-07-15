class CQueue : public CTypedPtrList< CObList, CPerson* >
{
public:
   // Go to the end of the line
   void AddToEnd(CPerson* newPerson)
   {
      AddTail(newPerson);
   }        // End of the queue

// Get first element in line
   CPerson* GetFromFront()
   {
      return IsEmpty() ? NULL : RemoveHead();
   }
};