// Employee.cpp : implementation file
//

#include "stdafx.h"
#include "MFCSerialization.h"
#include "Employee.h"


// CEmployee

IMPLEMENT_SERIAL( CEmployee, CObject, 1 )

CEmployee::CEmployee()
{
}

CEmployee::~CEmployee()
{
}


// CEmployee member functions
// <Snippet10>
void CEmployee::Serialize( CArchive& archive )
{
    // call base class function first
    // base class is CObject in this case
    CObject::Serialize( archive );

    // now do the stuff for our specific class
    if( archive.IsStoring() )
      // <Snippet11>
        archive << m_strName << m_wAge;
      // </Snippet11>
    else
        archive >> m_strName >> m_wAge;
}
// </Snippet10>