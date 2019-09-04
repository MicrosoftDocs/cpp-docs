CYourDataExchange dx(this, FALSE);
try
{
   DoDataExchange(&dx);
}
catch (CUserException *pe)
{
   // some part of the exchange went wrong
   // but the user has already been notified
   pe->Delete();
}