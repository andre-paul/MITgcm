C $Header: /u/gcmpack/MITgcm/model/inc/RECIP_HFACW_MACROS.h,v 1.1 1998/08/15 16:55:49 cnh Exp $
C
C     /==========================================================\
C     | RECIP_HFACW_MACROS.h                                     |
C     |==========================================================|
C     | These macros are used to reduce memory requirement and/or|
C     | memory references when variables are fixed along a given |
C     | axis or axes.                                            |
C     \==========================================================/

#ifdef RECIP_HFACW_CONST
#define  _recip_hFacW(i,j,k,bi,bj) recip_hFacW(1,1,1,1,1)
#endif

#ifdef RECIP_HFACW_FX
#define  _recip_hFacW(i,j,k,bi,bj) recip_hFacW(i,1,1,bi,1)
#endif

#ifdef RECIP_HFACW_FY
#define  _recip_hFacW(i,j,k,bi,bj) recip_hFacW(1,j,1,1,bj)
#endif

#ifdef RECIP_HFACW_FXY
#define  _recip_hFacW(i,j,k,bi,bj) recip_hFacW(i,j,1,bi,bj)
#endif

#ifndef _recip_hFacW
#define  _recip_hFacW(i,j,k,bi,bj) recip_hFacW(i,j,k,bi,bj)
#endif
