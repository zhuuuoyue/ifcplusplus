/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcReferentTypeEnum = ENUMERATION OF	(KILOPOINT	,MILEPOINT	,STATION	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcReferentTypeEnum : virtual public BuildingObject
{
public:
	enum IfcReferentTypeEnumEnum
	{
		ENUM_KILOPOINT,
		ENUM_MILEPOINT,
		ENUM_STATION,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcReferentTypeEnum();
	IfcReferentTypeEnum( IfcReferentTypeEnumEnum e ) { m_enum = e; }
	~IfcReferentTypeEnum();
	virtual const char* className() const { return "IfcReferentTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcReferentTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcReferentTypeEnumEnum m_enum;
};

