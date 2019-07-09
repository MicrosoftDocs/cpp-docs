void CMyClass::CallSinkFunc()
{
   POSITION pos = m_xSampleConnPt.GetStartPosition();
   ISampleSink* pSampleSink;
   while (pos != NULL)
   {
      pSampleSink = (ISampleSink*)(m_xSampleConnPt.GetNextConnection(pos));
      if (pSampleSink != NULL)
         pSampleSink->SinkFunc();
   }
}