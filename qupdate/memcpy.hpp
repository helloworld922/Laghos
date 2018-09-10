// Copyright (c) 2017, Lawrence Livermore National Security, LLC. Produced at
// the Lawrence Livermore National Laboratory. LLNL-CODE-734707. All Rights
// reserved. See files LICENSE and NOTICE for details.
//
// This file is part of CEED, a collection of benchmarks, miniapps, software
// libraries and APIs for efficient high-order finite element and spectral
// element discretizations for exascale applications. For more information and
// source code availability see http://github.com/ceed.
//
// The CEED research is supported by the Exascale Computing Project 17-SC-20-SC,
// a collaborative effort of two U.S. Department of Energy organizations (Office
// of Science and the National Nuclear Security Administration) responsible for
// the planning and preparation of a capable exascale ecosystem, including
// software, applications, hardware, advanced system engineering and early
// testbed platforms, in support of the nation's exascale computing imperative.

#ifndef MFEM_LAGHOS_QUPDATE_MEMCPY
#define MFEM_LAGHOS_QUPDATE_MEMCPY

namespace mfem {
   
// ***************************************************************************
struct qmemcpy
{
   static void* rHtoH(void*, const void*, std::size_t, const bool =false);
   static void* rHtoD(void*, const void*, std::size_t, const bool =false);
   static void* rDtoH(void*, const void*, std::size_t, const bool =false);
   static void* rDtoD(void*, const void*, std::size_t, const bool =false);
};

} // mfem

#endif // MFEM_LAGHOS_QUPDATE_MEMCPY
