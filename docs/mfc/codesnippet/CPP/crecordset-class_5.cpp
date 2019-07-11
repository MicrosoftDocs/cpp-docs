// DoFieldExchange override
//
// Only necessary to handle parameter bindings.
// Don't use CRecordset-derived class with bound
// fields unless all result sets have same schema
// OR there is conditional binding code.
void CCourses::DoFieldExchange(CFieldExchange* pFX)
{
   pFX->SetFieldType(CFieldExchange::outputParam);
   RFX_Long(pFX, _T("Param1"), m_nCountParam);
   // The "Param1" name here is a dummy name 
   // that is never used

   pFX->SetFieldType(CFieldExchange::inputParam);
   RFX_Text(pFX, _T("Param2"), m_strNameParam);
   // The "Param2" name here is a dummy name 
   // that is never used
}