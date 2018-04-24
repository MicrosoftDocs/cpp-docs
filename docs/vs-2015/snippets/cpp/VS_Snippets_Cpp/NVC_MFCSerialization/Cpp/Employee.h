#pragma once

// CEmployee command target

class CEmployee : public CObject
{
public:
   CEmployee();
   virtual ~CEmployee();

    DECLARE_SERIAL( CEmployee )

    CString m_strName;
    WORD   m_wAge;

    void Serialize( CArchive& archive );
};


