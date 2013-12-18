#pragma once

#include "LifeV.hpp"
#include "MeshElementMarked.hpp"
#include "MarkerDefinitions.hpp"
#include "MeshEntity.hpp"
#include "MeshEntityContainer.hpp"

template <typename T> using ArraySimple = std::vector<T>;

template <typename GeoShapeType, typename MCType = defaultMarkerCommon_Type>
class RegionMesh: public MeshEntity
{
public:
    static const UInt S_geoDimensions = GeoShapeType::S_nDimensions;   
   
    typedef MeshElementMarked <3, S_geoDimensions, GeoShapeType, MCType> volume_Type;
    typedef MeshElementMarked <2, S_geoDimensions, GeoShapeType, MCType>   face_Type;
    typedef MeshElementMarked <1, S_geoDimensions, GeoShapeType, MCType>   edge_Type;
    typedef MeshElementMarked <0, S_geoDimensions, GeoShapeType, MCType>  point_Type;

    typedef MeshElementMarked <S_geoDimensions,   S_geoDimensions, GeoShapeType, MCType > element_Type;
    typedef MeshElementMarked <S_geoDimensions-1, S_geoDimensions, GeoShapeType, MCType >   facet_Type;
    typedef MeshElementMarked <S_geoDimensions-2, S_geoDimensions, GeoShapeType, MCType >   ridge_Type;
    typedef MeshElementMarked <S_geoDimensions-3, S_geoDimensions, GeoShapeType, MCType >    peak_Type;

    MeshEntityContainer<volume_Type> volumeList;
    MeshEntityContainer<  face_Type>   faceList;
    MeshEntityContainer<  edge_Type>   edgeList;
    MeshEntityContainer< point_Type>  pointList;

private:
    ArraySimple<UInt> M_ElemToFacet;
    ArraySimple<UInt> M_ElemToRidge;
};

