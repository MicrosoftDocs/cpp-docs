void CSections::DoFieldExchange(CFieldExchange *pFX)
{
   pFX->SetFieldType(CFieldExchange::outputColumn);
   RFX_Text(pFX, _T("[CourseID]"), m_CourseID);
   RFX_Text(pFX, _T("[InstructorID]"), m_InstructorID);
   RFX_Text(pFX, _T("[RoomNo]"), m_RoomNo);
   RFX_Text(pFX, _T("[Schedule]"), m_Schedule);

   // output parameter
   pFX->SetFieldType(CFieldExchange::outputParam);
   RFX_Long(pFX, _T("Instructor_Count"), m_nCountParam);

   // input parameter
   pFX->SetFieldType(CFieldExchange::inputParam);
   RFX_Text(pFX, _T("Department_Name"), m_strNameParam);
}