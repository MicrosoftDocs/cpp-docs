catch (CException* e)
{
   if (m_bThrowExceptionAgain)
      throw; // Do not delete e
   else
      e->Delete();
}