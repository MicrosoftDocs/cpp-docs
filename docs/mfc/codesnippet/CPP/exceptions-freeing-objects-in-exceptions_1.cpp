void SomeFunc()        // Problematic code
{
   CPerson* myPerson = new CPerson;

   // Do something that might throw an exception.
   myPerson->SomeFunc();

   // Now destroy the object before exiting.
   // If SomeFunc above throws an exception this code will
   // not be reached and myPerson will not be deleted.
   delete myPerson;
}