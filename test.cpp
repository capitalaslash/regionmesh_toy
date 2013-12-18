#include "LifeV.hpp"
#include "RegionMesh.hpp"
#include "ElementShapes.hpp"

int main()
{
    RegionMesh<Triangle> mesh;

    mesh.faceList.resize(1);
    MeshVertex const * p0 = mesh.faceList[0].M_pointList[0];
    MeshVertex const * p1 = mesh.faceList[0].M_pointList[1];
    MeshVertex const * p2 = mesh.faceList[0].M_pointList[2];
//    MeshVertex const * p3 = mesh.faceList[0].M_pointList[3];

    return 0;
}

