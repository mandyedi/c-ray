//
//  transforms.h
//  C-ray
//
//  Created by Valtteri Koskivuori on 07/02/2017.
//  Copyright © 2015-2020 Valtteri Koskivuori. All rights reserved.
//

#pragma once

enum transformType {
	transformTypeXRotate,
	transformTypeYRotate,
	transformTypeZRotate,
	transformTypeTranslate,
	transformTypeScale,
	transformTypeMultiplication,
	transformTypeIdentity,
	transformTypeInverse,
	transformTypeTranspose
};

struct matrix4x4 {
	float mtx[4][4];
};

//Reference: http://tinyurl.com/ho6h6mr
struct transform {
	enum transformType type;
	struct matrix4x4 A;
	struct matrix4x4 Ainv;
};

struct material;
struct vector;

float toRadians(float degrees);
float fromRadians(float radians);

//Transform types
struct transform newTransformScale(float x, float y, float z);
struct transform newTransformScaleUniform(float scale);
struct transform newTransformTranslate(float x, float y, float z);
struct transform newTransformRotateX(float degrees);
struct transform newTransformRotateY(float degrees);
struct transform newTransformRotateZ(float degrees);
struct transform newTransform(void);

struct matrix4x4 inverse(struct matrix4x4 mtx);
struct matrix4x4 transpose(struct matrix4x4 tf);

void transformVector(struct vector *vec, struct matrix4x4 mtx);
