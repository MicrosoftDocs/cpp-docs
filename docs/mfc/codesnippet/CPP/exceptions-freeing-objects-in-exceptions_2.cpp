void SomeFunc()
{
   CPerson* myPerson = new CPerson;

   try
   {
      // Do something that might throw an exception.
      myPerson->SomeFunc();
   }
   catch (CException* e)
   {
      // Handle the exception locally
      e->Delete();
   }

   // Now destroy the object before exiting.
   delete myPerson;
}