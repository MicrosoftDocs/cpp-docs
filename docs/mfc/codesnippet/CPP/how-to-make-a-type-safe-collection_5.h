class CPersonList : public CObList
{
public:
   void AddHeadPerson(CPerson* person)
   {
      AddHead(person);
   }

   const CPerson* GetHeadPerson()
   {
      return (CPerson*)GetHead();
   }
};