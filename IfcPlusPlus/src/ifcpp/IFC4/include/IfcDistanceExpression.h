/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcGeometricRepresentationItem.h"
class IFCQUERY_EXPORT IfcLengthMeasure;
class IFCQUERY_EXPORT IfcBoolean;
//ENTITY
class IFCQUERY_EXPORT IfcDistanceExpression : public IfcGeometricRepresentationItem
{ 
public:
	IfcDistanceExpression();
	IfcDistanceExpression( int id );
	~IfcDistanceExpression();
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 5; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcDistanceExpression"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcDistanceExpression -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcLengthMeasure>							m_DistanceAlong;
	shared_ptr<IfcLengthMeasure>							m_OffsetLateral;			//optional
	shared_ptr<IfcLengthMeasure>							m_OffsetVertical;			//optional
	shared_ptr<IfcLengthMeasure>							m_OffsetLongitudinal;		//optional
	shared_ptr<IfcBoolean>									m_AlongHorizontal;			//optional
};

