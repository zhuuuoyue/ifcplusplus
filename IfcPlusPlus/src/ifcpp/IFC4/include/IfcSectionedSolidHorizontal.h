/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSectionedSolid.h"
class IFCQUERY_EXPORT IfcDistanceExpression;
class IFCQUERY_EXPORT IfcBoolean;
//ENTITY
class IFCQUERY_EXPORT IfcSectionedSolidHorizontal : public IfcSectionedSolid
{ 
public:
	IfcSectionedSolidHorizontal();
	IfcSectionedSolidHorizontal( int id );
	~IfcSectionedSolidHorizontal();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 4; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcSectionedSolidHorizontal"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcSolidModel -----------------------------------------------------------

	// IfcSectionedSolid -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcCurve>									m_Directrix;
	//  std::vector<shared_ptr<IfcProfileDef> >					m_CrossSections;

	// IfcSectionedSolidHorizontal -----------------------------------------------------------
	// attributes:
	std::vector<shared_ptr<IfcDistanceExpression> >			m_CrossSectionPositions;
	shared_ptr<IfcBoolean>									m_FixedAxisVertical;
};

