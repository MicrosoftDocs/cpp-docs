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
      e->ReportError();
      // Destroy the object before passing exception on.
      delete myPerson;
      // Throw the exception to the next handler.
      throw;
   }

   // On normal exits, destroy the object.
   delete myPerson;
}