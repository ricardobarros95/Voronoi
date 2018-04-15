#include "Triangle.h"

Triangle::ContainsVert(const& Vertex vert)
{
	return ((p1.x == vert.x && p1.y == vert.y) || (p2.x == vert.x && p2.y == vert.y) || (p3.x == vert.x && p3.y == vert.y));
} 

Triangle::CircumCircleContainsVert(const& Vertex vert)
{
	
}