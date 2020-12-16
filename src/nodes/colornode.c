//
//  texturenode.c
//  C-Ray
//
//  Created by Valtteri Koskivuori on 30/11/2020.
//  Copyright © 2020 Valtteri Koskivuori. All rights reserved.
//

#include "../includes.h"
#include "../datatypes/color.h"
#include "../renderer/samplers/sampler.h"
#include "../datatypes/vector.h"
#include "../datatypes/material.h"
#include "../datatypes/image/texture.h"
#include "../datatypes/vertexbuffer.h"
#include "../datatypes/poly.h"
#include "bsdf.h"

#include "colornode.h"

struct colorNode *unknownTextureNode(struct world *w) {
	return newConstantTexture(w, blackColor);
}
