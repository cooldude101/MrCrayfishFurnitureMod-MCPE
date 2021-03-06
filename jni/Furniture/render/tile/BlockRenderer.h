#pragma once

#include "Furniture/world/tile/FurnitureTile.h"
#include "MCPE/world/level/TileSource.h"
#include "MCPE/client/renderer/tile/TileTessellator.h"
#include "MCPE/world/level/TilePos.h"

class BlockRenderer {
public:
	static int const UP;
	static int const DOWN;
	static int const LEFT;
	static int const RIGHT;

	virtual void render(const TilePos&, FurnitureTile*, TileTessellator*) = 0;

	void setRotatedBounds(TileTessellator*, int, float, float, float, float, float, float);
	int getRelativeTileId(TileSource*, int, int, int, int, int);
	int getRelativeRotation(TileSource*, int, int, int, int, int);
	int getRelativeMetadata(TileSource*, int, int, int, int, int);
};
