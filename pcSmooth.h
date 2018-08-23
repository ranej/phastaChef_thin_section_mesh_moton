#ifndef PC_SMOOTH_H
#define PC_SMOOTH_H

#include <SimField.h>
#include <apf.h>
#include <apfMesh2.h>
#include <apfSIM.h>
#include <apfMDS.h>
#include <chef.h>

namespace pc {

  void addSmootherInMover(apf::Mesh2* m);

}

#endif
