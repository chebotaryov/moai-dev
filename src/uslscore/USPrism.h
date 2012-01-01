// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#ifndef USPRISM_H
#define	USPRISM_H

#include <uslscore/USMatrix4x4.h>
#include <uslscore/USRect.h>
#include <uslscore/USVec3D.h>

class USBox;

//================================================================//
// USPrism
//================================================================//
class USPrism {
	public:

	USVec3D		mLoc;
	USVec3D		mXAxis;
	USVec3D		mYAxis;
	USVec3D		mZAxis;

	//----------------------------------------------------------------//
	void	GetAABB		( USBox& box );
	void	GetCenter	( USVec3D& center );
	void	Init		( USBox& box );
	void	Transform	( USMatrix4x4& mtx );
};

#endif