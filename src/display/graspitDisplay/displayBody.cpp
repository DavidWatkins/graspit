#include "graspit/display/graspitDisplay/displayBody.h"

DisplayBody::DisplayBody(Body *b):
    mBody(b)
{
    IVGeomRoot = NULL; IVTran = NULL; IVMat = NULL; IVContactIndicators = NULL;
    IVScaleTran = NULL;
    IVOffsetTran = NULL;
    IVBVRoot = NULL;
#ifdef GEOMETRY_LIB
    IVPrimitiveRoot = NULL;
#endif

    IVRoot = new SoSeparator;
    IVTran = new SoTransform;
    IVRoot->insertChild(IVTran, 0);

    IVContactIndicators = new SoSeparator;
    IVRoot->addChild(IVContactIndicators);

    IVBVRoot = new SoSeparator;
    IVRoot->addChild(IVBVRoot);

    IVGeomRoot = new SoSeparator;
    IVRoot->addChild(IVGeomRoot);

//    initializeIV();
}

