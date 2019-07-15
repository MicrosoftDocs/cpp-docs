class CTray : public CObject { };

class CStack : public CTypedPtrList< CObList, CTray* >
{
public:
   // Add element to top of stack
   void Push(CTray* newTray)
   {
      AddHead(newTray);
   }

   // Peek at top element of stack
   CTray* Peek()
   {
      return IsEmpty() ? NULL : GetHead();
   }

   // Pop top element off stack
   CTray* Pop()
   {
      return RemoveHead();
   }
};